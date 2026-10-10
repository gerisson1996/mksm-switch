import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

# .text VA=0x00011000, raw=0x00001000
def get_code(va, size):
    off = 0x1000 + (va - 0x00011000)
    return xbe_data[off:off+size]

# Disassemble 0x0030E2B0 until ret or int3 / align padding
va = 0x0030E2B0
code = get_code(va, 1024)
insns = list(cs.disasm(code, va))
for i in insns:
    print(f"  0x{i.address:08X}: {i.mnemonic} {i.op_str}")
    if i.mnemonic == 'ret' and i.address > 0x0030E300:
        # Check if following instructions are padding or new function
        print(f"--- Potential end at 0x{i.address:08X} (len: {i.address + i.size - va}) ---")
        break
