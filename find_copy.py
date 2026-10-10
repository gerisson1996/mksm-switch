import sys
sys.path.insert(0, '.')
from tools.disasm.loader import load_image
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

img = load_image("../game/default.xbe")
va = 0x000F0C80

data = img.read_bytes_at_va(va, 256)
md = Cs(CS_ARCH_X86, Cs_mode := CS_MODE_32)
for ins in md.disasm(data, va):
    if ins.mnemonic in ('ret', 'push ebp'):
        print(f"--- 0x{ins.address:08X}: {ins.mnemonic} {ins.op_str}")
    else:
        print(f"0x{ins.address:08X}: {ins.mnemonic} {ins.op_str}")
