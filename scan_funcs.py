import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

def get_code(va, size):
    off = 0x1000 + (va - 0x00011000)
    return xbe_data[off:off+size]

# Scan from 0x0030A3A0 to 0x0030E2B0
code = get_code(0x0030A3A0, 0x0030E2B0 - 0x0030A3A0 + 16)
insns = list(cs.disasm(code, 0x0030A3A0))

rets = [i for i in insns if i.mnemonic in ('ret', 'retf')]
print(f"Total instructions between 0x0030A3A0 and 0x0030E2B0: {len(insns)}")
print(f"Total rets: {len(rets)}")
for r in rets:
    print(f"  ret at 0x{r.address:08X}")
