cmake_minimum_required(VERSION 3.20)
project(nv2a_vk C CXX)

# Vulkan 1.3 renderer for the pushbuffer executor (XBOXRECOMP_VULKAN=ON):
# the Switch's NVK from mesa-switch, linked statically (NVK_SDK), or any
# Vulkan driver on Linux. Shares the shader generators with nv2a_gl, in
# their Vulkan dialect, and compiles them with glslang at run time.
add_library(xbox_nv2a_vk STATIC
    nv2a_vk.c
    ../nv2a_gl/gl_vsh.c
    ../nv2a_gl/gl_psh.c
)
target_include_directories(xbox_nv2a_vk PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if(NINTENDO_SWITCH)
    set(NVK_SDK "${CMAKE_CURRENT_SOURCE_DIR}/../../../nvk_sdk" CACHE PATH "mesa-switch install prefix")
    if(NOT EXISTS "${NVK_SDK}/include/vulkan/vulkan.h")
        message(FATAL_ERROR "NVK_SDK must point at a mesa-switch install (no vulkan.h in '${NVK_SDK}')")
    endif()
    target_include_directories(xbox_nv2a_vk PUBLIC
        "${NVK_SDK}/include"
        "${NVK_SDK}/include/glslang/Public"
    )
    target_sources(xbox_nv2a_vk PRIVATE
        switch_elf_stubs.c
        switch_egl_stubs.c
        "${NVK_SDK}/lib/resource_limits_c.cpp"
        "${NVK_SDK}/lib/ResourceLimits.cpp"
    )
    target_link_libraries(xbox_nv2a_vk PUBLIC
        -Wl,--allow-multiple-definition
        -Wl,--start-group
        "${NVK_SDK}/lib/libvulkan.a"
        "${NVK_SDK}/lib/liballoc-af82aa609fb0f811.rlib"
        "${NVK_SDK}/lib/libcore-8c20f6407cb781b6.rlib"
        "${NVK_SDK}/lib/libcompiler_builtins-389209a593b9fef9.rlib"
        "${NVK_SDK}/lib/libpanic_abort-810dcfbec4f99ef7.rlib"
        "${NVK_SDK}/lib/libglslang.a"
        "${NVK_SDK}/lib/libMachineIndependent.a"
        "${NVK_SDK}/lib/libGenericCodeGen.a"
        "${NVK_SDK}/lib/libOSDependent.a"
        "${NVK_SDK}/lib/libOGLCompiler.a"
        "${NVK_SDK}/lib/libSPIRV.a"
        "${NVK_SDK}/lib/libSPIRV-Tools-opt.a"
        "${NVK_SDK}/lib/libSPIRV-Tools.a"
        zstd expat z nx stdc++ m pthread
        -Wl,--end-group
    )
else()
    find_package(glslang CONFIG REQUIRED)
    target_link_libraries(xbox_nv2a_vk PUBLIC glslang::glslang glslang::glslang-default-resource-limits)
    find_package(Vulkan REQUIRED)
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(SDL2 REQUIRED IMPORTED_TARGET sdl2)
    # The distribution glslang is built with its optimizer (static SPIRV-Tools).
    target_link_libraries(xbox_nv2a_vk PUBLIC Vulkan::Vulkan PkgConfig::SDL2
        SPIRV-Tools-opt SPIRV-Tools stdc++)
endif()
if(NOT MSVC)
    if(NINTENDO_SWITCH)
        target_compile_options(xbox_nv2a_vk PRIVATE -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -O3 -mcpu=cortex-a57+fp+simd -mtune=cortex-a57 -fomit-frame-pointer)
    else()
        target_compile_options(xbox_nv2a_vk PRIVATE -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -O2)
    endif()
endif()
