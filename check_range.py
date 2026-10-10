import re

with open("gen/recomp_dispatch.c", "r") as f:
    lines = f.readlines()

addrs = []
for l in lines:
    m = re.search(r"0x([0-9A-Fa-f]{8})u", l)
    if m:
        addrs.append(int(m.group(1), 16))

print(f"Total entries: {len(addrs)}")
print(f"Min: 0x{min(addrs):08X}, Max: 0x{max(addrs):08X}")

# Check functions in range 0x00200000 - 0x00320000
in_range = [a for a in addrs if 0x002F0000 <= a <= 0x00320000]
print(f"Functions in 0x002F0000 - 0x00320000: {len(in_range)}")
for a in in_range[:20]:
    print(f"  0x{a:08X}")
