with open("game/default.xbe", "rb") as f:
    xbe_data = f.read()

def get_code(va, size):
    off = 0x1000 + (va - 0x00011000)
    return xbe_data[off:off+size]

data = get_code(0x0030A3A0, 0x0030E2B0 - 0x0030A3A0)
print(f"Total bytes: {len(data)}")
# Check non-zero bytes or strings or tables
non_zero = sum(1 for b in data if b != 0)
print(f"Non-zero bytes: {non_zero}")
print("First 64 bytes:", data[:64].hex(" "))
# What is right before 0x0030E2B0?
print("Last 64 bytes:", data[-64:].hex(" "))
