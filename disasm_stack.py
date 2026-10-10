import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

# Let's inspect sections to find offsets for 0x003C99FC and 0x0011B23D
# In mksm_xbe_info:
# .text VA=0x00011000, raw=0x00001000, size=3887664 (ends at 0x003C6430)
# D3D VA=0x003C6240, raw=0x003B7000, size=192526
def va_to_file_offset(va):
    if 0x00011000 <= va < 0x003C6240:
        return 0x1000 + (va - 0x00011000)
    elif 0x003C6240 <= va < 0x003C6240 + 192526:
        return 0x003B7000 + (va - 0x003C6240)
    return None

off1 = va_to_file_offset(0x003C99FC - 20)
if off1:
    print("Disassembly around 0x003C99FC (D3D):")
    code = xbe_data[off1:off1+40]
    for insn in cs.disasm(code, 0x003C99FC - 20):
        print(f"  0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}")

off2 = va_to_file_offset(0x0011B23D - 20)
if off2:
    print("\nDisassembly around 0x0011B23D (.text):")
    code = xbe_data[off2:off2+40]
    for insn in cs.disasm(code, 0x0011B23D - 20):
        print(f"  0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}")
