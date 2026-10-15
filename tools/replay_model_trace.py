"""Replay VKT model samples through the production CPU vertex interpreter.

Usage: python tools/replay_model_trace.py path/to/mksm_log.txt
Requires GCC on PATH. The log and game data are not copied into the repository.
This validates the sampled shader inputs; it does not reproduce GPU pixels.
"""
import argparse
import pathlib
import re
import subprocess
import tempfile

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("log", type=pathlib.Path)
args = parser.parse_args()
root = pathlib.Path(__file__).resolve().parents[1]
core = (root / "xboxrecomp/src/kernel/nv2a_pb_exec.c").read_text(encoding="utf-8")
log = args.log.read_text(encoding="utf-8", errors="replace")
source = ['#include <stdint.h>\n#include <math.h>\n#include <stdio.h>\n'
          '#include <string.h>\n#include "nv2a/nv2a_regs.h"\n',
          core[core.index("#define VP_SLOTS "):core.index("static int batch_is_vp(void)")],
          core[core.index("static uint32_t vpf("):core.index("static const VpOut *vp_vertex(")],
          "\nint main(void) { float v[16][4]; VpOut o;\n"]


def assign_vector(target, values):
    # Parse numbers before emitting C: the attached log is untrusted input.
    parsed = [float(value) for value in values.split()]
    if len(parsed) != 4:
        raise ValueError("Expected a float4")
    for component, value in enumerate(parsed):
        literal = ("NAN" if value != value else "INFINITY" if value == float("inf")
                   else "-INFINITY" if value == -float("inf") else repr(value))
        source.append(f"{target}[{component}] = {literal};\n")


samples = 0
for block in re.split(r"\[VKT\] model sample ", log)[1:]:
    block = block.split("state alpha")[0]
    match = re.match(r"(\d+) frame (\d+)", block)
    if not match:
        continue
    sample, frame = map(int, match.groups())
    samples += 1
    source.append("memset(v, 0, sizeof v); memset(&s_vp, 0, sizeof s_vp);\n")
    instructions = re.findall(r"vp\[(\d+)\]=([0-9A-F ]+)", block)
    if not instructions:
        raise ValueError("Sample has no vertex program")
    source.append(f"s_vp.prog_start = {int(instructions[0][0])};\n")
    for index, words in instructions:
        index = int(index)
        words = words.split()
        if not 0 <= index < 136 or len(words) != 4:
            raise ValueError("Invalid program slot")
        for component, word in enumerate(words):
            value = int(word, 16)
            if not 0 <= value <= 0xFFFFFFFF:
                raise ValueError("Invalid instruction word")
            source.append(f"s_vp.prog[{index}][{component}] = {value}u;\n")
    for index, values in re.findall(r"c\[(\d+)\]=\(([^)]+)\)", block):
        index = int(index)
        if not 0 <= index < 192:
            raise ValueError("Invalid constant index")
        assign_vector(f"s_vp.c[{index}]", values)
    for index, values in re.findall(r"constant v(\d+)=\(([^)]+)\)", block):
        index = int(index)
        if not 0 <= index < 16:
            raise ValueError("Invalid attribute index")
        assign_vector(f"v[{index}]", values)
    for vertex in range(3):
        attributes = re.findall(rf"vertex {vertex} v(\d+)=\(([^)]+)\)", block)
        if not attributes:
            continue
        for index, values in attributes:
            index = int(index)
            if not 0 <= index < 16:
                raise ValueError("Invalid attribute index")
            assign_vector(f"v[{index}]", values)
        source.append(f'vp_run(v, &o); printf("sample {sample} frame {frame} vertex {vertex}: '
                      'screen=(%g %g) z=%g w=%g\\n", '
                      'o.pos[0], o.pos[1], o.pos[2], o.pos[3]);\n')
if not samples:
    raise SystemExit("No model samples found")
source.append("return 0; }\n")
with tempfile.TemporaryDirectory(prefix="mksm-replay-") as directory:
    exe = str(pathlib.Path(directory) / "replay.exe")
    subprocess.run(["gcc", "-Ixboxrecomp/src", "-x", "c", "-", "-o", exe, "-lm"],
                   cwd=root, input="".join(source), text=True, check=True)
    subprocess.run([exe], check=True, timeout=20)
