import glob
import re

counts = {}
for p in glob.glob('gen/*.c'):
    with open(p, 'r', encoding='utf-8') as f:
        content = f.read()
        for m in re.finditer(r'RECOMP_UNIMPL\("([^"]+)",\s*(0x[0-9A-Fa-f]+u)\)', content):
            insn = m.group(1)
            addr = m.group(2)
            counts.setdefault(insn, []).append((addr, p))

for k, v in counts.items():
    print(f'{k}: {len(v)} occurrences -> {[x[0] for x in v[:5]]}')
