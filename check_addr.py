import re

with open("gen/recomp_dispatch.c", "r") as f:
    lines = f.readlines()

addrs = []
for l in lines:
    m = re.search(r"0x([0-9A-Fa-f]{8})u", l)
    if m:
        addrs.append(int(m.group(1), 16))

target = 0x0030E2B0
before = [a for a in addrs if a <= target]
after = [a for a in addrs if a > target]
if before:
    print(f"Before: 0x{before[-1]:08X}")
if after:
    print(f"After: 0x{after[0]:08X}")
