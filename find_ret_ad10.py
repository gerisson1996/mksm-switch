import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

def va_to_file_offset(va):
    if 0x00457B80 <= va < 0x00457B80 + 21896:
        return 0x0043D000 + (va - 0x00457B80)
    return None

off = va_to_file_offset(0x0045AD10)
code = xbe_data[off:off+1024]
for insn in cs.disasm(code, 0x0045AD10):
    if insn.mnemonic in ('ret', 'retf'):
        print(f"Ret at: 0x{insn.address:08X} (len: {insn.address + insn.size - 0x0045AD10})")
        break
