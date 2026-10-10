import sys, os, json
sys.path.insert(0, os.path.abspath('xboxrecomp'))
from tools.recomp import config
config.configure_from_xbe('game/default.xbe')

from tools.recomp.translator import FunctionTranslator

with open('game/default.xbe', 'rb') as f:
    xbe_data = f.read()

with open('xboxrecomp/tools/disasm/output/functions.json') as f:
    func_list = json.load(f)
with open('xboxrecomp/tools/disasm/output/labels.json') as f:
    labels = json.load(f)
with open('xboxrecomp/tools/func_id/output/identified_functions.json') as f:
    identified = json.load(f)
with open('xboxrecomp/tools/abi_analysis/output/abi_functions.json') as f:
    abi_list = json.load(f)

func_db = {}
for fn in func_list:
    addr = int(fn['start'], 16)
    fn['_addr'] = addr
    if 'end' in fn:
        fn['end'] = int(fn['end'], 16)
    func_db[addr] = fn

label_db = {int(l['address'], 16): l['name'] for l in labels}
class_db = {int(e['start'], 16): e for e in identified}
abi_db = {int(a['address'], 16): a for a in abi_list}

a6_func = {
    'start': 0x000A6720,
    '_addr': 0x000A6720,
    'end': 0x000A68CC,
    'size': 0xA68CC - 0xA6720,
    'name': 'sub_000A6720',
    'section': '.text',
    'confidence': 0.95,
    'detection_method': 'manual',
    'num_instructions': 100,
    'has_prologue': False,
    'calls_to': [],
    'called_by': []
}
func_db[0x000A6720] = a6_func
class_db[0x000A6720] = {
    'start': 0x000A6720,
    'end': 0x000A68CC,
    'size': 0xA68CC - 0xA6720,
    'name': 'sub_000A6720',
    'section': '.text',
    'category': 'game_engine',
    'confidence': 0.95,
    'method': 'manual'
}
abi_db[0x000A6720] = {
    'address': '0x000A6720',
    'calling_convention': 'cdecl',
    'estimated_params': 0,
    'return_hint': 'int_or_void',
    'frame_type': 'fpo_leaf',
    'stack_frame_size': 0,
    'heuristic_confidence': 0.95,
    'heuristic_notes': 'manual'
}

ft = FunctionTranslator(
    xbe_data=xbe_data,
    func_db=func_db,
    label_db=label_db,
    classification_db=class_db,
    abi_db=abi_db,
    seh_prolog=0x000EE018,
    seh_epilog=0x000EE053,
    setjmp_fn=0x002AA578,
    longjmp_fn=0x002AA4FC
)

c_code = ft.translate_function(0x000A6720, a6_func)
print('Translation result len:', len(c_code) if c_code else 'None')
if c_code:
    hdr = '#define RECOMP_GENERATED_CODE\n#include "recomp_funcs.h"\n#include <math.h>\n\n'
    with open('src/sub_000A6720.c', 'w', encoding='utf-8') as out:
        out.write(hdr + c_code)
    print('Successfully wrote src/sub_000A6720.c!')
