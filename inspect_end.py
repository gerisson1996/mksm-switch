import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

def get_code(va, size):
    off = 0x1000 + (va - 0x00011000)
    return xbe_data[off:off+size]

code = get_code(0x003118B0, 100)
for insn in cs.disasm(code, 0x003118B0):
    print(f"  0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}")
