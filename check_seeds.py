import json

with open("mksm_xbe_info.json") as f:
    xbe_info = json.load(f)

# Let's inspect config/seed_functions.json to see what seeds we have
with open("config/seed_functions.json") as f:
    seeds = json.load(f)

print(f"Total seeds: {len(seeds)}")
seeds_sorted = sorted([int(s, 16) if isinstance(s, str) else s for s in seeds])
in_range = [s for s in seeds_sorted if 0x00306E00 <= s <= 0x00315000]
print(f"Seeds in 0x00306E00 - 0x00315000: {[hex(s) for s in in_range]}")
