#!/usr/bin/env bash
set -e

# Se /opt/devkitpro existir, usa ele, senão /c/devkitPro
if [ -d "/opt/devkitpro" ]; then
    export DEVKITPRO="/opt/devkitpro"
else
    export DEVKITPRO="/c/devkitPro"
fi

export DEVKITA64="$DEVKITPRO/devkitA64"
export PATH="$DEVKITA64/bin:$DEVKITPRO/tools/bin:/usr/bin:/bin:$PATH"

REPO="/c/Users/geris/.gemini/antigravity/scratch/mksm-sw"
BUILD="$REPO/build-switch"

echo "DEVKITPRO: $DEVKITPRO"
echo "DEVKITA64: $DEVKITA64"
echo "GCC: $(which aarch64-none-elf-gcc)"

echo "=== [1/2] Configurando CMake para Nintendo Switch ==="
cmake -S "$REPO" -B "$BUILD" -G "Ninja" \
    -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/Switch.cmake" \
    -DCMAKE_BUILD_TYPE=Release \
    -DMKSM_GEN_DIR="$REPO/gen" \
    -DMKSM_VULKAN=ON

echo "=== [2/2] Compilando mksm_recomp.nro ==="
ninja -C "$BUILD" -j4
