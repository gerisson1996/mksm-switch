# Disassemble the function around 0x002FB000
import capstone

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

# ESI was 0x002FB037
# Let's disassemble from 0x002FAFE0 to 0x002FB080
start_va = 0x002FAFE0
file_off = 0x1000 + (start_va - 0x00011000)
code = xbe_data[file_off:file_off+200]

print("Disassembly around 0x002FB000:")
for insn in cs.disasm(code, start_va):
    print(f"  0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}")

# Also disassemble 0x0030E2B0
code_target = xbe_data[0x1000 + (0x0030E2B0 - 0x00011000) : 0x1000 + (0x0030E2B0 - 0x00011000) + 120]
print("\nDisassembly of 0x0030E2B0:")
for insn in cs.disasm(code_target, 0x0030E2B0):
    print(f"  0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}")
