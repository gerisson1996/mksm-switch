import json

with open("tools/disasm/output/functions.json") as f:
    funcs = json.load(f)

target = 0x000F0E54
found = False
for fn in funcs:
    start = int(fn["start"], 16)
    end = int(fn["end"], 16)
    if start <= target < end:
        print(f"Target 0x{target:X} is inside function 0x{start:X}-0x{end:X} (start == target: {start == target})")
        found = True
        break

if not found:
    print(f"Target 0x{target:X} is NOT in any function range.")
