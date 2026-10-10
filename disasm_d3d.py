import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

def va_to_file_offset(va):
    if 0x003C6240 <= va < 0x003C6240 + 192526:
        return 0x003B7000 + (va - 0x003C6240)
    return None

off = va_to_file_offset(0x003C99E0)
code = xbe_data[off:off+80]
print("Disassembly of 0x003C99E0:")
for insn in cs.disasm(code, 0x003C99E0):
    print(f"  0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}")
