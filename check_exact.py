import re

with open("gen/recomp_dispatch.c", "r") as f:
    lines = f.readlines()

addrs = []
for l in lines:
    m = re.search(r"0x([0-9A-Fa-f]{8})u", l)
    if m:
        addrs.append(int(m.group(1), 16))

addrs.sort()
target = 0x0030E2B0
before = [a for a in addrs if a <= target]
after = [a for a in addrs if a > target]
print(f"Nearest before: 0x{before[-1]:08X}")
print(f"Nearest after: 0x{after[0]:08X}")

print("Surrounding 10 before:")
for a in before[-10:]:
    print(f"  0x{a:08X}")
print("Surrounding 10 after:")
for a in after[:10]:
    print(f"  0x{a:08X}")
