import struct
import json

with open("mksm_xbe_info.json") as f:
    xbe_info = json.load(f)

# Find which section contains 0x0030E2B0
with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

# Let's find section header for .text
# In mksm_xbe_info:
# .text VA=0x00011000 vsize=3887664 raw=0x00001000 rsize=3887664
# 0x0030E2B0 is inside .text
# offset in file = raw + (va - text_va) = 0x1000 + (0x0030E2B0 - 0x00011000)
target_va = 0x0030E2B0
file_off = 0x1000 + (target_va - 0x00011000)
print(f"Target VA: 0x{target_va:08X}, file offset: 0x{file_off:08X}")

data = xbe_data[file_off:file_off+64]
print("Hex dump:", data.hex(" "))

# Also inspect around 0x002FB037 (esi in crash)
file_off_esi = 0x1000 + (0x002FB037 - 0x00011000)
print(f"ESI VA: 0x002FB037, file offset: 0x{file_off_esi:08X}")
data_esi = xbe_data[file_off_esi:file_off_esi+64]
print("ESI Hex dump:", data_esi.hex(" "))
