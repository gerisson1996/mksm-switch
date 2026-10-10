import sys
sys.path.insert(0, '.')
from tools.disasm.loader import load_image
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

img = load_image("../game/default.xbe")
va = 0x000F0E54

sec = img.get_section_at_va(va)
if sec:
    print(f"Section: {sec.name}, VA: 0x{sec.virtual_addr:08X}-0x{sec.virtual_addr+sec.virtual_size:08X}")
    data = img.read_bytes_at_va(va, 64)
    if data:
        print("Bytes:", data.hex(" "))
        md = Cs(CS_ARCH_X86, CS_MODE_32)
        for ins in md.disasm(data, va):
            print(f"0x{ins.address:08X}: {ins.mnemonic} {ins.op_str}")
    else:
        print("read_bytes_at_va returned None!")
else:
    print("get_section_at_va returned None!")
