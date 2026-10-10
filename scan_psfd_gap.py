import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

def va_to_file_offset(va):
    if 0x00457B80 <= va < 0x00457B80 + 21896:
        return 0x0043D000 + (va - 0x00457B80)
    return None

off = va_to_file_offset(0x0045AAC0)
size = 0x0045AE30 - 0x0045AAC0
code = xbe_data[off:off+size]
insns = list(cs.disasm(code, 0x0045AAC0))

rets = [i for i in insns if i.mnemonic in ('ret', 'retf')]
for r in rets:
    print(f"Ret at 0x{r.address:08X}")
