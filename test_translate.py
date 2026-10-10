import sys
import os

# Add xboxrecomp to path
sys.path.insert(0, os.path.abspath("xboxrecomp"))

from tools.recomp import config
from tools.recomp.translator import BatchTranslator, Lifter

config.configure_from_xbe("game/default.xbe")

# Let's inspect BatchTranslator initialization
xbe_path = "game/default.xbe"
func_json = "xboxrecomp/tools/disasm/output/functions.json"
labels_json = "xboxrecomp/tools/disasm/output/labels.json"
identified_json = "xboxrecomp/tools/func_id/output/identified_functions.json"
abi_json = "xboxrecomp/tools/abi_analysis/output/abi_functions.json"

bt = BatchTranslator(
    xbe_path,
    func_json,
    labels_json_path=labels_json,
    identified_json_path=identified_json,
    abi_json_path=abi_json,
    output_dir="gen"
)

func_info = {
    "start": "0x0045AD10",
    "end": 0x0045AE30,
    "size": 0x0045AE30 - 0x0045AD10
}

c_code = bt.translator.translate_function(0x0045AD10, func_info)
if c_code:
    print(f"Success! Generated {len(c_code)} chars of C code.")
    with open("src/sub_0045AD10.c", "w") as f:
        f.write("#define RECOMP_GENERATED_CODE\n")
        f.write("#include \"recomp_funcs.h\"\n")
        f.write("#include <math.h>\n\n")
        f.write(c_code)
    print("Written to src/sub_0045AD10.c")
else:
    print("translate_function returned None or failed!")
