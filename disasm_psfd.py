import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

# PSFD00 VA=0x00457B80, raw=0x0043D000
def va_to_file_offset(va):
    if 0x00457B80 <= va < 0x00457B80 + 21896:
        return 0x0043D000 + (va - 0x00457B80)
    return None

off = va_to_file_offset(0x0045AD10)
print(f"File offset of 0x0045AD10: 0x{off:08X}")
code = xbe_data[off:off+120]
for insn in cs.disasm(code, 0x0045AD10):
    print(f"  0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}")
