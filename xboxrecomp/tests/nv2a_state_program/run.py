"""Exercise the executor's actual state-program methods without a GPU.

The interpreter is extracted verbatim, like the audio_mixer harness, so this
checks production code rather than a second implementation of the instruction
set. Requires GCC on PATH.
"""
import pathlib
import subprocess
import tempfile

root = pathlib.Path(__file__).resolve().parents[2]
core = (root / "src/kernel/nv2a_pb_exec.c").read_text(encoding="utf-8")
declarations = core[core.index("#define VP_SLOTS "):core.index("static int batch_is_vp(void)")]
interpreter = core[core.index("static uint32_t vpf("):core.index("static const VpOut *vp_vertex(")]
source = r'''
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "nv2a/nv2a_regs.h"
''' + declarations + interpreter + r'''
static void input(unsigned component, float value) {
    uint32_t bits;
    memcpy(&bits, &value, 4);
    assert(vp_method(NV097_SET_TRANSFORM_DATA + 4 * component, bits));
}
static void upload(unsigned slot, const uint32_t instruction[4]) {
    assert(vp_method(NV097_SET_TRANSFORM_PROGRAM_LOAD, slot));
    for (unsigned i = 0; i < 4; i++)
        assert(vp_method(NV097_SET_TRANSFORM_PROGRAM + i * 4, instruction[i]));
}
int main(void) {
    /* MOV c[166].xy, v0; ADD c[167], c[166], v0 (FINAL).
     * Exercise persistence, masks, read-after-write, nonzero launch slot,
     * and the separate launch input register. */
    const uint32_t move[] = {0, (1u<<21)|0x1b, 2u<<26,
                            (12u<<12)|(166u<<3)};
    const uint32_t add[] = {0, (3u<<21)|(166u<<13)|0x1b,
                           (3u<<26)|(0x1bu<<2),
                           (2u<<28)|(15u<<12)|(167u<<3)|1u};
    const uint32_t draw[] = {0, (1u<<21)|(167u<<13)|0x1b,
                            3u<<26, (15u<<12)|(1u<<11)|1u};
    upload(100, move); upload(101, add); upload(7, draw);
    vp_method(NV097_SET_TRANSFORM_PROGRAM_START, 7);
    s_vp.c[166][2] = 30; s_vp.c[166][3] = 40;
    input(0, 2); input(1, 3); input(2, 4); input(3, 5);
    uint32_t generation = s_vp.gen, constants = s_vp.const_gen;
    vp_method(NV097_LAUNCH_TRANSFORM_PROGRAM, 100);
    assert(s_vp.prog_start == 7);
    assert(s_vp.gen != generation && s_vp.const_gen == constants + 2);
    assert(s_vp.c[166][0] == 2 && s_vp.c[166][1] == 3);
    assert(s_vp.c[166][2] == 30 && s_vp.c[166][3] == 40);
    float vertices[16][4] = {{0}};
    VpOut out;
    vp_run(vertices, &out);
    assert(out.pos[0] == 4 && out.pos[1] == 6);
    assert(out.pos[2] == 34 && out.pos[3] == 45);
    /* A second launch keeps the other three input components. */
    input(0, -8);
    vp_method(NV097_LAUNCH_TRANSFORM_PROGRAM, 100);
    vp_run(vertices, &out);
    assert(out.pos[0] == -16 && out.pos[1] == 6 && out.pos[3] == 45);
    constants = s_vp.const_gen; generation = s_vp.gen;
    vp_method(NV097_LAUNCH_TRANSFORM_PROGRAM, VP_SLOTS);
    vp_method(NV097_LAUNCH_TRANSFORM_PROGRAM, UINT32_MAX);
    assert(s_vp.const_gen == constants && s_vp.gen == generation);
    puts("PASS: state launch, input persistence, masked writes, dependent draw, invalid slots");
    return 0;
}
'''
with tempfile.TemporaryDirectory(prefix="nv2a-state-") as directory:
    exe = str(pathlib.Path(directory) / "test.exe")
    subprocess.run(["gcc", "-std=c11", "-Isrc", "-x", "c", "-", "-o", exe, "-lm"],
                   cwd=root, input=source, text=True, check=True)
    subprocess.run([exe], check=True, timeout=10)
