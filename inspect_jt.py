import capstone
import struct

cs = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

def get_code(va, size):
    off = 0x1000 + (va - 0x00011000)
    return xbe_data[off:off+size]

# Let's inspect jump table at 0x00311910
jt_off = 0x1000 + (0x00311910 - 0x00011000)
jt_entries = struct.unpack("<64I", xbe_data[jt_off:jt_off+256])
print("Jump table 0x00311910 first 16 entries:")
for i, e in enumerate(jt_entries[:16]):
    print(f"  [{i}] = 0x{e:08X}")

print(f"Min target: 0x{min(jt_entries):08X}, Max target: 0x{max(jt_entries):08X}")
