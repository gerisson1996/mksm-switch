cmake_minimum_required(VERSION 3.20)

# ============================================================================
# Mortal Kombat: Shaolin Monks (Xbox) - Static Recompilation
# Hosts: Windows (MSVC, D3D11), Linux (GCC, SDL2 + OpenGL/Vulkan)
# and Nintendo Switch homebrew (devkitA64 + libnx).
# ============================================================================

project(mksm_recomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_definitions(
    WIN32_LEAN_AND_MEAN
    NOMINMAX
)

if(NINTENDO_SWITCH)
    add_compile_options(-O3 -mcpu=cortex-a57+fp+simd -mtune=cortex-a57 -fomit-frame-pointer -fno-math-errno)
endif()

set(XBOXRECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/xboxrecomp" CACHE PATH
    "Path to the xboxrecomp toolkit root directory")

set(MKSM_GEN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/gen" CACHE PATH
    "Directory holding the tools.recomp output (recomp_*.c, recomp_funcs.h)")

if(NOT EXISTS "${MKSM_GEN_DIR}/recomp_funcs.h")
    message(FATAL_ERROR "No generated code in ${MKSM_GEN_DIR}. Run tools.recomp "
                        "with --gen-dir, or pass -DMKSM_GEN_DIR=<dir>.")
endif()

option(MKSM_VULKAN "Render with Vulkan instead of OpenGL" OFF)
set(XBOXRECOMP_VULKAN ${MKSM_VULKAN} CACHE BOOL "" FORCE)

add_subdirectory(${XBOXRECOMP_DIR} ${CMAKE_BINARY_DIR}/xboxrecomp)

file(GLOB RECOMP_GEN_SOURCES CONFIGURE_DEPENDS "${MKSM_GEN_DIR}/*.c")

set(GAME_SOURCES
    src/main.c
    src/recomp_manual.c
    src/sub_00090FD0.c
    src/sub_000F1A07.c
    src/sub_000A6720.c
    src/sub_000CB2E0.c
    src/sub_0030E2B0.c
    src/sub_00457B80.c
    src/sub_0045AD10.c
    src/switch_nx.c
)

if(WIN32)
    add_executable(${PROJECT_NAME} WIN32 ${GAME_SOURCES} ${RECOMP_GEN_SOURCES})
else()
    add_executable(${PROJECT_NAME} ${GAME_SOURCES} ${RECOMP_GEN_SOURCES})
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE xboxrecomp)

if(MKSM_VULKAN)
    target_compile_definitions(${PROJECT_NAME} PRIVATE MKSM_VULKAN=1)
endif()

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${MKSM_GEN_DIR}
    ${XBOXRECOMP_DIR}/include
)

if(WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE
        d3d11 dxgi dxguid xinput winmm dbghelp)
    if(MSVC)
        target_link_options(${PROJECT_NAME} PRIVATE /LARGEADDRESSAWARE)
        target_compile_options(${PROJECT_NAME} PRIVATE /bigobj)
    endif()
else()
    if(NINTENDO_SWITCH)
        set(MKSM_GEN_OPT "-O2 -mcpu=cortex-a57+fp+simd -mtune=cortex-a57 -fomit-frame-pointer -fno-math-errno" CACHE STRING "Optimisation for the lifted code")
        target_compile_options(${PROJECT_NAME} PRIVATE
            -O3 -mcpu=cortex-a57+fp+simd -mtune=cortex-a57 -fomit-frame-pointer -fno-math-errno
        )
    else()
        set(MKSM_GEN_OPT "-O1" CACHE STRING "Optimisation for the lifted code")
    endif()

    set_source_files_properties(${RECOMP_GEN_SOURCES} PROPERTIES
        COMPILE_FLAGS "${MKSM_GEN_OPT} -w -fno-strict-aliasing -fwrapv")

    target_link_libraries(${PROJECT_NAME} PRIVATE m)
endif()

# ── Nintendo Switch homebrew (devkitA64 + libnx) ────────────────
if(NINTENDO_SWITCH)
    set(MKSM_SWITCH_APP_NAME "MK Shaolin Monks" CACHE STRING "Title shown in the homebrew menu")
    set(MKSM_SWITCH_AUTHOR "MKSM Team" CACHE STRING "Author shown in the homebrew menu")
    set(MKSM_SWITCH_VERSION "1.0.0" CACHE STRING "Version shown in the homebrew menu")
    set(MKSM_SWITCH_ICON "${CMAKE_CURRENT_SOURCE_DIR}/assets/icon.jpg" CACHE FILEPATH "Icon")

    if(MKSM_VULKAN)
        target_link_libraries(${PROJECT_NAME} PRIVATE nx m)
    else()
        target_link_libraries(${PROJECT_NAME} PRIVATE EGL glapi drm_nouveau nx m)
    endif()

    target_link_options(${PROJECT_NAME} PRIVATE
        "LINKER:--wrap=SDL_SYS_SetThreadPriority"
        "LINKER:--wrap=audrvVoiceAddWaveBuf")

    set_property(SOURCE src/switch_nx.c APPEND PROPERTY
        INCLUDE_DIRECTORIES "${XBOXRECOMP_DIR}/src/apu")

    target_include_directories(${PROJECT_NAME} PRIVATE "$ENV{DEVKITPRO}/portlibs/switch/include")

    set(MKSM_NACP "${CMAKE_CURRENT_BINARY_DIR}/mksm.nacp")
    nx_generate_nacp(OUTPUT "${MKSM_NACP}"
        NAME "${MKSM_SWITCH_APP_NAME}"
        AUTHOR "${MKSM_SWITCH_AUTHOR}"
        VERSION "${MKSM_SWITCH_VERSION}")

    if(EXISTS "${MKSM_SWITCH_ICON}")
        nx_create_nro(${PROJECT_NAME} NACP "${MKSM_NACP}" ICON "${MKSM_SWITCH_ICON}")
    else()
        nx_create_nro(${PROJECT_NAME} NACP "${MKSM_NACP}")
    endif()
endif()
