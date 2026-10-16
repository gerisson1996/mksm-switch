/**
 * Mortal Kombat Shaolin Monks - Recompiled code chunk 59
 * Functions: 250 (0x001CF380 - 0x001D4F50)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>

/**
 * sub_001CF380
 * Original: 0x001CF380 - 0x001CF4F5 (373 bytes, 99 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF380: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5CE864);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x6CE8A8) = 0x43F00000;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF3B0; /* je: equal / zero */

loc_001CF39A: ;
    MEM32(0x6CE8AC) = 0xC0000000u;
    MEM32(0x6CE898) = 0x42A00000;
    goto loc_001CF3C4;

loc_001CF3B0: ;
    MEM32(0x6CE8AC) = 0;
    MEM32(0x6CE898) = 0x42B00000;

loc_001CF3C4: ;
    esi = 0x6CE8A0;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001CF3D0;

    /* nop */

loc_001CF3D0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF4E0; /* jne: not equal / not zero */

loc_001CF3D8: ;
    PUSH32(esp, 0x001CF3DDu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B67D0u, sub_001B67D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001B67D0 */

loc_001CF3DD: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x600B2);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    PUSH32(esp, 0x001CF3F4u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B6A80u, sub_001B6A80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001B6A80 */

loc_001CF3F4: ;
    eax = MEM32(esi);
    edi = MEM32(eax + 0x1D8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001CF404u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00109670u, sub_00109670); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00109670 */

loc_001CF404: ;
    PUSH32(esp, 0x001CF409u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001CF409: ;
    MEM16(edi + 4) = LO16(eax);
    fp_push(MEMF(0x6CE898)); /* fld float */
    PUSH32(esp, 0x001CF418u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001CF418: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM16(edi + 6) = LO16(eax);
    ecx = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_001CF44A; /* jne: not equal / not zero */

loc_001CF422: ;
    MEM32(ecx + 0x78) = 0x814;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(edx + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x6CE8AC);
    goto loc_001CF470;

loc_001CF44A: ;
    MEM32(ecx + 0x78) = 0x818;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(edx + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x6CE8A8);

loc_001CF470: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC4) = ecx;
    eax = MEM32(esi);
    edx = MEM32(eax + 0xC4);
    MEM32(eax + 0x84) = edx;
    eax = MEM32(esi);
    MEM32(eax + 0xD4) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x78) = MEM32(eax + 0x78) | 0x800;
    _fa = (uint32_t)(MEM32(eax + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi);
    MEM16(ecx + 0x13C) = LO16(ebx);
    edx = MEM32(esi);
    MEM16(edx + 0x13E) = LO16(ebx);
    eax = MEM32(esi);
    MEM16(eax + 0x140) = LO16(ebx);
    ecx = MEM32(esi);
    MEM16(ecx + 0x142) = LO16(ebx);
    edx = MEM32(esi);
    MEM16(edx + 0x138) = 7;
    eax = MEM32(esi);
    MEM32(eax + 0x1FC) = 0x1CF130;
    ecx = MEM32(esi);
    MEM8(ecx + 0x71) = LO8(ebx);
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001CF4E0u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DAE0 */

loc_001CF4E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF3D0; /* jl: less (signed <) */

loc_001CF4ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 8 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CF500
 * Original: 0x001CF500 - 0x001CF53C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF500(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF500: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6CE8A0;
    edi = 2;
    /* nop */

loc_001CF510: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF536; /* je: equal / zero */

loc_001CF516: ;
    eax = MEM32(eax + 0x1D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF522u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0011C530u, sub_0011C530); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0011C530 */

loc_001CF522: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CF52Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001CF52A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF536: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF510; /* jne: not equal / not zero */

loc_001CF539: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF540
 * Original: 0x001CF540 - 0x001CF590 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF540(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF540: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6CE8A0;
    edi = 2;
    /* nop */

loc_001CF550: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM8(eax + 0x78)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x78), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CF566; /* je: equal / zero */

loc_001CF558: ;
    ecx = MEM32(0x6CE8AC);
    MEM32(eax + 0xC4) = ecx;
    goto loc_001CF572;

loc_001CF566: ;
    edx = MEM32(0x6CE8A8);
    MEM32(eax + 0xC4) = edx;

loc_001CF572: ;
    eax = MEM32(esi);
    MEM32(eax + 0xD4) = 0;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CF587u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015DAE0 */

loc_001CF587: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF550; /* jne: not equal / not zero */

loc_001CF58D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF590
 * Original: 0x001CF590 - 0x001CF5B2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF590(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF590: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6CE8A0;
    edi = 2;
    /* nop */

loc_001CF5A0: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001CF5A9u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015DAE0 */

loc_001CF5A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF5A0; /* jne: not equal / not zero */

loc_001CF5AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF5C0
 * Original: 0x001CF5C0 - 0x001CF648 (136 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF5C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CF5C0: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6CE8A0;
    fp_top() = MEMF(0x496454) / fp_top(); /* fdivr dword ptr [0x496454] */
    edi = 2;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_001CF5E0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM8(eax + 0x78)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x78), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CF60E; /* je: equal / zero */

loc_001CF5E8: ;
    fp_push(MEMF(eax + 0x84)); /* fld float */
    fp_top() = fp_top() - MEMF(0x6CE898); /* fsub dword ptr [0x6ce898] */
    MEMF(eax + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() * MEMF(0x6CE898); /* fmul dword ptr [0x6ce898] */
    MEMF(eax + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001CF634;

loc_001CF60E: ;
    fp_push(MEMF(0x6CE898)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 0x84); /* fadd dword ptr [eax + 0x84] */
    MEMF(eax + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esi);
    fp_top() = fp_top() * MEMF(0x6CE898); /* fmul dword ptr [0x6ce898] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */

loc_001CF634: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CF63Du); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DAE0 */

loc_001CF63D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF5E0; /* jne: not equal / not zero */

loc_001CF643: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CF650
 * Original: 0x001CF650 - 0x001CF6C0 (112 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF650(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CF650: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6CE8A0;
    fp_top() = MEMF(0x496454) / fp_top(); /* fdivr dword ptr [0x496454] */
    edi = 2;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_001CF670: ;
    eax = MEM32(esi);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = (uint32_t)(MEM8(eax + 0x78)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x78), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CF692; /* je: equal / zero */

loc_001CF67C: ;
    ecx = MEM32(0x6CE8AC);
    MEM32(eax + 0xC4) = ecx;
    fp_top() = fp_top() * MEMF(0x6CE898); /* fmul dword ptr [0x6ce898] */
    fp_top() = -fp_top(); /* fchs */
    goto loc_001CF6A4;

loc_001CF692: ;
    ecx = MEM32(0x6CE8A8);
    MEM32(eax + 0xC4) = ecx;
    fp_top() = fp_top() * MEMF(0x6CE898); /* fmul dword ptr [0x6ce898] */

loc_001CF6A4: ;
    edx = MEM32(esi);
    MEMF(edx + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CF6B5u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DAE0 */

loc_001CF6B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF670; /* jne: not equal / not zero */

loc_001CF6BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CF6C0
 * Original: 0x001CF6C0 - 0x001CF6D6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF6C0: ;
    ecx = MEM32(0x6CE8A0);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF6D5; /* je: equal / zero */

loc_001CF6CC: ;
    SET_LO8(edx, MEM8(ecx + 0x70));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF6D5; /* jne: not equal / not zero */

loc_001CF6D3: ;
    SET_LO8(eax, 1);

loc_001CF6D5: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF6E0
 * Original: 0x001CF6E0 - 0x001CF6E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CF6E0: ;
    eax = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF6F0
 * Original: 0x001CF6F0 - 0x001CF6F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CF6F0: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF700
 * Original: 0x001CF700 - 0x001CF70C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF700(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF700: ;
    eax = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF70B; /* jle: less or equal (signed <=) */

loc_001CF707: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x4C) = eax;

loc_001CF70B: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF710
 * Original: 0x001CF710 - 0x001CF71F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF710(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF710: ;
    eax = MEM32(ecx + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CF71E; /* jge: greater or equal (signed >=) */

loc_001CF71B: ;
    MEM32(ecx + 0x4C) = eax;

loc_001CF71E: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF720
 * Original: 0x001CF720 - 0x001CF74B (43 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF720(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF720: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF72F; /* jle: less or equal (signed <=) */

loc_001CF72B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;

loc_001CF72F: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF748; /* jne: not equal / not zero */

loc_001CF736: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(eax + 8) = ecx;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001CF745u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF742u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001CF745: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF748: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF750
 * Original: 0x001CF750 - 0x001CF7B0 (96 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF750(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF750: ;
    eax = MEM32(ecx + 0x680);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7AD; /* je: equal / zero */

loc_001CF75A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    /* nop */

loc_001CF760: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF781; /* jne: not equal / not zero */

loc_001CF767: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF772; /* jle: less or equal (signed <=) */

loc_001CF76E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;

loc_001CF772: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF7A5; /* jne: not equal / not zero */

loc_001CF779: ;
    ecx = MEM32(eax + 0xC);
    MEM32(eax + 8) = ecx;
    goto loc_001CF79D;

loc_001CF781: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF7A5; /* jne: not equal / not zero */

loc_001CF785: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF790; /* jle: less or equal (signed <=) */

loc_001CF78C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;

loc_001CF790: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF7A5; /* jne: not equal / not zero */

loc_001CF797: ;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 8) = edx;

loc_001CF79D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001CF7A2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF79Fu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001CF7A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF7A5: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF760; /* jne: not equal / not zero */

loc_001CF7AC: ;
    POP32(esp, esi);

loc_001CF7AD: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF7B0
 * Original: 0x001CF7B0 - 0x001CF807 (87 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF7B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF7B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(ecx + 0x680) = 0;
    MEM32(ecx + 0x684) = edi;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF7EE; /* jle: less or equal (signed <=) */

loc_001CF7D5: ;
    eax = edi + 0x14;

loc_001CF7D8: ;
    MEM32(eax) = edx;
    edx = eax + 0xC;
    MEM32(eax + -16) = ecx;
    MEM32(eax + 4) = edx;
    edx = eax + -20;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF7D8; /* jl: less (signed <) */

loc_001CF7EE: ;
    eax = ecx;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = 0;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF810
 * Original: 0x001CF810 - 0x001CF831 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001CF810(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF810: ;
    eax = MEM32(ecx + 0x680);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF82C; /* je: equal / zero */

loc_001CF81A: ;
    ecx = MEM32(esp + 4);
    edi = edi;

loc_001CF820: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF82E; /* je: equal / zero */

loc_001CF825: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF820; /* jne: not equal / not zero */

loc_001CF82C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CF82E: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF840
 * Original: 0x001CF840 - 0x001CF896 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF840(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF840: ;
    eax = MEM32(ecx + 0x684);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF892; /* je: equal / zero */

loc_001CF84F: ;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(ecx + 0x684) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF85F; /* je: equal / zero */

loc_001CF85C: ;
    MEM32(edx + 0x14) = esi;

loc_001CF85F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x680)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x680), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF875; /* jne: not equal / not zero */

loc_001CF867: ;
    MEM32(ecx + 0x680) = eax;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001CF875: ;
    MEM32(eax + 0x14) = esi;
    edx = MEM32(ecx + 0x680);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x680);
    MEM32(edx + 0x14) = eax;
    MEM32(ecx + 0x680) = eax;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001CF892: ;
    eax = edx;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF8A0
 * Original: 0x001CF8A0 - 0x001CF903 (99 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF8A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF8C1; /* jne: not equal / not zero */

loc_001CF8B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ecx + 0x680) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF8D3; /* je: equal / zero */

loc_001CF8BC: ;
    MEM32(eax + 0x14) = edi;
    goto loc_001CF8D3;

loc_001CF8C1: ;
    MEM32(esi + 0x18) = eax;
    esi = MEM32(edx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF8D3; /* je: equal / zero */

loc_001CF8CB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x14);
    MEM32(esi + 0x14) = ebx;
    POP32(esp, ebx);

loc_001CF8D3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x684)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x684), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF8EC; /* jne: not equal / not zero */

loc_001CF8DB: ;
    MEM32(ecx + 0x684) = edx;
    MEM32(edx + 0x18) = edi;
    MEM32(edx + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001CF8EC: ;
    MEM32(edx + 0x14) = edi;
    esi = MEM32(ecx + 0x684);
    MEM32(edx + 0x18) = esi;
    POP32(esp, edi);
    MEM32(ecx + 0x684) = edx;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF910
 * Original: 0x001CF910 - 0x001CF95F (79 bytes, 25 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF910(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF910: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + edx) = 0;
    edx = MEM32(ecx + 0x48);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    MEM8(edx + eax + 1) = LO8(ebx);
    edx = MEM32(ecx + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(edx + eax + 8) = esi;
    edx = MEM32(ecx + 0x48);
    esi = MEM32(esp + 0x18);
    MEM32(edx + eax + 0xC) = esi;
    edx = MEM32(ecx + 0x48);
    esi = MEM32(esp + 0x1C);
    MEM32(edx + eax + 0x10) = esi;
    ecx = MEM32(ecx + 0x48);
    edx = MEM32(esp + 0x20);
    POP32(esp, esi);
    MEM32(ecx + eax + 0x14) = edx;
    POP32(esp, ebx);
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF960
 * Original: 0x001CF960 - 0x001CF96D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF960(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CF960: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x654) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF970
 * Original: 0x001CF970 - 0x001CF977 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF970(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CF970: ;
    eax = MEM32(ecx + 0x654);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF980
 * Original: 0x001CF980 - 0x001CF98E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF980(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF980: ;
    eax = MEM32(ecx + 0x654);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x654) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF990
 * Original: 0x001CF990 - 0x001CF997 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF990(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CF990: ;
    eax = MEM32(ecx + 0x690);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF9A0
 * Original: 0x001CF9A0 - 0x001CF9AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF9A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CF9A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x690) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF9B0
 * Original: 0x001CF9B0 - 0x001CF9B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF9B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CF9B0: ;
    eax = MEM32(ecx + 0x694);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF9C0
 * Original: 0x001CF9C0 - 0x001CF9CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF9C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CF9C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x694) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF9D0
 * Original: 0x001CF9D0 - 0x001CF9D8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF9D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF9D0: ;
    eax = MEM32(ecx + 0x694);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CF9E0
 * Original: 0x001CF9E0 - 0x001CFA0D (45 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF9E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF9E0: ;
    {
        uint32_t _seq = MEM32(ecx + 0x690), _step = MEM32(ecx + 0x694);
        static int s_9e0_log = 0;
        if (s_9e0_log++ < 40) {
            fprintf(stderr, "[FSM-TR] sub_001CF9E0: seq=%u, step %u -> %u\n", _seq, _step, _step + 1);
        }
    }
    eax = MEM32(ecx + 0x694);
    edx = MEM32(ecx + 0x690);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + 0x694) = eax;
    edx = MEM32(ecx + edx * 4 + 0x658);
    PUSH32(esp, esi);
    eax = edx + eax * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFA09u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CFE60u, sub_001CFE60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CFE60 */

loc_001CFA09: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFA10
 * Original: 0x001CFA10 - 0x001CFA3D (45 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFA10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFA10: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFA3A; /* je: equal / zero */

loc_001CFA23: ;
    eax = ecx;

loc_001CFA25: ;
    edx = MEM32(eax + 8);
    MEM32(eax) = edx;
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001CFA25; /* jne: not equal / not zero */

loc_001CFA3A: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFA40
 * Original: 0x001CFA40 - 0x001CFA60 (32 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFA40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFA40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CFA42: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFA4E; /* je: equal / zero */

loc_001CFA48: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CFA42; /* jl: less (signed <) */

loc_001CFA4E: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 8) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 8 + 4) = edx;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFAA0
 * Original: 0x001CFAA0 - 0x001CFAAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFAA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CFAA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x48) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFAB0
 * Original: 0x001CFAB0 - 0x001CFAB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFAB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CFAB0: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFAC0
 * Original: 0x001CFAC0 - 0x001CFADD (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFAC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFAC0: ;
    eax = MEM32(ecx + 0x688);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x68C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CFADA; /* je: equal / zero */

loc_001CFAD4: ;
    MEM32(ecx + 0x688) = edx;

loc_001CFADA: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFAE0
 * Original: 0x001CFAE0 - 0x001CFAE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFAE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CFAE0: ;
    eax = MEM32(ecx + 0x688);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFAF0
 * Original: 0x001CFAF0 - 0x001CFAF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFAF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CFAF0: ;
    eax = MEM32(ecx + 0x68C);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFB00
 * Original: 0x001CFB00 - 0x001CFB18 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFB00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFB00: ;
    eax = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFB0E; /* jne: not equal / not zero */

loc_001CFB07: ;
    eax = MEM32(ecx + 0x68C);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001CFB0E: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001CFB14; /* jle: less or equal (signed <=) */

loc_001CFB10: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x4C) = eax;

loc_001CFB14: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFB20
 * Original: 0x001CFB20 - 0x001CFB3C (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFB20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFB20: ;
    eax = MEM32(ecx + 0x4C);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x50) = edx;
    eax = MEM32(ecx + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CFB39; /* jge: greater or equal (signed >=) */

loc_001CFB36: ;
    MEM32(ecx + 0x4C) = eax;

loc_001CFB39: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFB40
 * Original: 0x001CFB40 - 0x001CFB43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFB40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CFB40: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFB50
 * Original: 0x001CFB50 - 0x001CFB55 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFB50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CFB50: ;
    eax = MEM32(esp + 4);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFB60
 * Original: 0x001CFB60 - 0x001CFB63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFB60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001CFB60: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFB70
 * Original: 0x001CFB70 - 0x001CFB96 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFB70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFB70: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CFB73: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x78 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CFB73; /* jle: less or equal (signed <=) */

loc_001CFB79: ;
    ecx = 0x67C658;
    PUSH32(esp, 0x001CFB83u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015AFA0u, sub_0015AFA0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015AFA0 */

loc_001CFB83: ;
    PUSH32(esp, 4);
    ecx = 0x67C658;
    PUSH32(esp, 0x001CFB8Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015AD10u, sub_0015AD10); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015AD10 */

loc_001CFB8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFB73; /* jne: not equal / not zero */

loc_001CFB94: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFBA0
 * Original: 0x001CFBA0 - 0x001CFBFC (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFBA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFBA0: ;
    eax = ecx;
    edx = MEM32(eax + 0x688);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax + 0x68C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CFBBA; /* je: equal / zero */

loc_001CFBB4: ;
    MEM32(eax + 0x688) = ecx;

loc_001CFBBA: ;
    MEM32(eax + 0x680) = ecx;
    MEM32(eax + 0x684) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFC00
 * Original: 0x001CFC00 - 0x001CFC2D (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFC00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFC00: ;
    PUSH32(esp, 0x001CFC05u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CF840 */

loc_001CFC05: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFC27; /* je: equal / zero */

loc_001CFC0B: ;
    edx = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(eax + 4);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001CFC27: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFC30
 * Original: 0x001CFC30 - 0x001CFC63 (51 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFC30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFC30: ;
    PUSH32(esp, 0x001CFC35u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CF840 */

loc_001CFC35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFC5D; /* je: equal / zero */

loc_001CFC39: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x10) = 0;
    eax = MEM32(eax + 4);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

loc_001CFC5D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFC70
 * Original: 0x001CFC70 - 0x001CFCA1 (49 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFC70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFC70: ;
    PUSH32(esp, 0x001CFC75u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CF840 */

loc_001CFC75: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFC9B; /* je: equal / zero */

loc_001CFC7B: ;
    edx = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x10) = edx;
    eax = MEM32(eax + 4);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

loc_001CFC9B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFCB0
 * Original: 0x001CFCB0 - 0x001CFCE3 (51 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFCB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFCB0: ;
    PUSH32(esp, 0x001CFCB5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CF840 */

loc_001CFCB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFCDD; /* je: equal / zero */

loc_001CFCB9: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(eax + 4);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

loc_001CFCDD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFCF0
 * Original: 0x001CFCF0 - 0x001CFD6F (127 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFCF0: ;
    eax = MEM32(ecx + 0x680);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFD6B; /* je: equal / zero */

loc_001CFCFD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);

loc_001CFD04: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFD61; /* jne: not equal / not zero */

loc_001CFD08: ;
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    edx = MEM32(eax + 0x18);
    ebx = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001CFD23; /* jne: not equal / not zero */

loc_001CFD14: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(ecx + 0x680) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CFD33; /* je: equal / zero */

loc_001CFD1E: ;
    MEM32(edx + 0x14) = edi;
    goto loc_001CFD33;

loc_001CFD23: ;
    MEM32(esi + 0x18) = edx;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFD33; /* je: equal / zero */

loc_001CFD2D: ;
    esi = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = esi;

loc_001CFD33: ;
    _fa = (uint32_t)(MEM32(ecx + 0x684)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x684), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFD4B; /* jne: not equal / not zero */

loc_001CFD3B: ;
    MEM32(ecx + 0x684) = eax;
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0x14) = edi;
    eax = ebx;
    goto loc_001CFD64;

loc_001CFD4B: ;
    MEM32(eax + 0x14) = edi;
    edx = MEM32(ecx + 0x684);
    MEM32(eax + 0x18) = edx;
    MEM32(ecx + 0x684) = eax;
    eax = ebx;
    goto loc_001CFD64;

loc_001CFD61: ;
    eax = MEM32(eax + 0x18);

loc_001CFD64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFD04; /* jne: not equal / not zero */

loc_001CFD68: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001CFD6B: ;
    POP32(esp, edi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFD70
 * Original: 0x001CFD70 - 0x001CFD84 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFD70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFD81; /* je: equal / zero */

loc_001CFD78: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); sub_001CF8A0(); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001CF8A0 */

loc_001CFD81: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFD90
 * Original: 0x001CFD90 - 0x001CFDBA (42 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFD90: ;
    eax = MEM32(ecx + 0x680);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFDAC; /* je: equal / zero */

loc_001CFD9A: ;
    edx = MEM32(esp + 4);
    edi = edi;

loc_001CFDA0: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFDB1; /* je: equal / zero */

loc_001CFDA5: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFDA0; /* jne: not equal / not zero */

loc_001CFDAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001CFDB1: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_001CF8A0(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001CF8A0 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFDC0
 * Original: 0x001CFDC0 - 0x001CFDD8 (24 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFDC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFDC0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x658) = eax;
    MEM32(ecx + 0x654) = MEM32(ecx + 0x654) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x654)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFDE0
 * Original: 0x001CFDE0 - 0x001CFE14 (52 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFDE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFDE0: ;
    eax = MEM32(ecx + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CFE13; /* jge: greater or equal (signed >=) */

loc_001CFDED: ;
    edx = MEM32(ecx + 0x690);
    MEM32(ecx + eax * 8 + 0x254) = edx;
    eax = MEM32(ecx + 0x250);
    edx = MEM32(ecx + 0x694);
    MEM32(ecx + eax * 8 + 0x258) = edx;
    MEM32(ecx + 0x250) = MEM32(ecx + 0x250) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x250)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CFE13: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFE20
 * Original: 0x001CFE20 - 0x001CFE52 (50 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFE20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFE20: ;
    eax = MEM32(ecx + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CFE31; /* jle: less or equal (signed <=) */

loc_001CFE2A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x250) = eax;

loc_001CFE31: ;
    eax = MEM32(ecx + 0x250);
    edx = MEM32(ecx + eax * 8 + 0x254);
    MEM32(ecx + 0x690) = edx;
    eax = MEM32(ecx + eax * 8 + 0x258);
    MEM32(ecx + 0x694) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFE60
 * Original: 0x001CFE60 - 0x001CFF52 (242 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFE60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    {
        uint32_t _c = MEM32(edi), _a = MEM32(edi + 4);
        if (_c != 0) {
            static int s_tr_cfe = 0;
            if (s_tr_cfe++ < 40) {
                fprintf(stderr, "[FSM-TR] sub_001CFE60 cmd=%u arg=%u seq=%u step=%u\n",
                        _c, _a, MEM32(ecx + 0x690), MEM32(ecx + 0x694));
            }
        }
    }
    eax = MEM32(edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001CFEDC; /* ja: above (unsigned >) */

loc_001CFE70: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1CFF54); /* switch: 7 entries, 7 targets */
    if (_jt == 0x001CFE77u) goto loc_001CFE77;
    if (_jt == 0x001CFE93u) goto loc_001CFE93;
    if (_jt == 0x001CFEBEu) goto loc_001CFEBE;
    if (_jt == 0x001CFEC4u) goto loc_001CFEC4;
    if (_jt == 0x001CFED5u) goto loc_001CFED5;
    if (_jt == 0x001CFEE5u) goto loc_001CFEE5;
    if (_jt == 0x001CFF3Au) goto loc_001CFF3A;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } }

loc_001CFE77: ;
    eax = MEM32(esi + 0x690);
    ecx = MEM32(esi + 0x694);
    edx = MEM32(esi + eax * 4 + 0x658);
    eax = MEM32(edx + ecx * 8 + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001CFE93: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(esi + 0x690);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x694) = eax;
    ecx = MEM32(esi + ecx * 4 + 0x658);
    PUSH32(esp, edx);
    edx = ecx + eax * 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001CFEB9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CFE60u, sub_001CFE60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CFE60 */

loc_001CFEB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001CFEBE: ;
    MEM32(esi + 0x694) = MEM32(esi + 0x694) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x694)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CFEC4: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CFED0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CF9E0u, sub_001CF9E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CF9E0 */

loc_001CFED0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001CFED5: ;
    MEM8(esi + 0x699) = 1;

loc_001CFEDC: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001CFEE5: ;
    _fa = (uint32_t)(MEM8(esi + 0x699)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x699), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFF2A; /* je: equal / zero */

loc_001CFEEE: ;
    ecx = esi;
    PUSH32(esp, 0x001CFEF5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CFDE0u, sub_001CFDE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CFDE0 */

loc_001CFEF5: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x10);
    eax = ecx;
    MEM32(esi + 0x690) = ecx;
    MEM32(esi + 0x694) = 0;
    eax = MEM32(esi + eax * 4 + 0x658);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CFF1Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CFE60u, sub_001CFE60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CFE60 */

loc_001CFF1E: ;
    POP32(esp, edi);
    MEM8(esi + 0x699) = 0;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001CFF2A: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM8(esi + 0x699) = 0;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001CFF3A: ;
    ecx = esi;
    PUSH32(esp, 0x001CFF41u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CFE20u, sub_001CFE20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CFE20 */

loc_001CFF41: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001CFF4Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CF9E0u, sub_001CF9E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CF9E0 */

loc_001CFF4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001CFF52
 * Original: 0x001CFF52 - 0x001CFF70 (30 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_edi = recomp_leaf_ld_edi(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF52: ;
    edi = edi;

loc_001CFF54: ;
    if (_flags /* ja: above (unsigned >) */) goto loc_001CFF54;

loc_001CFF56: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint32_t _tmp = ebx;
    ebx = eax;
    eax = _tmp; }

    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_edi(g_edi); sub_001CFF70(); g_eax = recomp_leaf_ld_eax(); g_ebx = recomp_leaf_ld_ebx(); g_edi = recomp_leaf_ld_edi(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_edi(g_edi); return; } /* fallthrough 0x001CFF70 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_edi(g_edi); /* registers back at the end */
}

/**
 * sub_001CFF70
 * Original: 0x001CFF70 - 0x001D00D7 (359 bytes, 136 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68C);
    ebx = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0046; /* je: equal / zero */

loc_001CFF8E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFFA9; /* jne: not equal / not zero */

loc_001CFF93: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFF9E; /* jne: not equal / not zero */

loc_001CFF9A: ;
    edi = eax;
    goto loc_001CFFC9;

loc_001CFF9E: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001CFFA4; /* jle: less or equal (signed <=) */

loc_001CFFA0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x4C) = ecx;

loc_001CFFA4: ;
    edi = MEM32(esi + 0x4C);
    goto loc_001CFFC9;

loc_001CFFA9: ;
    ecx = eax + eax * 2;
    _fa = (uint32_t)(MEM8(ebx + ecx * 8 + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + ecx * 8 + 1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFFC9; /* jne: not equal / not zero */

loc_001CFFB3: ;
    edx = MEM32(esi + 0x4C);
    MEM32(esi + edx * 4 + 0x50) = eax;
    ecx = MEM32(esi + 0x4C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CFFC9; /* jge: greater or equal (signed >=) */

loc_001CFFC6: ;
    MEM32(esi + 0x4C) = ecx;

loc_001CFFC9: ;
    ecx = edi + edi * 2;
    edx = MEM32(ebx + ecx * 8 + 8);
    ecx = ebx + ecx * 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    edx = eax + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_001CFFE7; /* jne: not equal / not zero */

loc_001CFFDE: ;
    eax = MEM32(ebx + edx * 8 + 4);
    MEM32(ecx + 4) = eax;
    goto loc_001D0046;

loc_001CFFE7: ;
    eax = MEM32(ebx + edx * 8 + 4);
    ebp = ebx + edx * 8 + 4;
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(ebx + eax * 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    eax = ebx + eax * 8;
    if (CMP_NE(_fa, _fb)) goto loc_001D0021; /* jne: not equal / not zero */

loc_001CFFFD: ;
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0016; /* je: equal / zero */

loc_001D0004: ;
    eax = MEM32(ebp);
    ecx = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + ecx * 8 + 0x14); PUSH32(esp, 0x001D000Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D000Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D000F: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0016: ;
    ebp = MEM32(ebp);
    edx = ebp + ebp * 2;
    MEM8(ebx + edx * 8) = 0;

loc_001D0021: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D002F; /* jne: not equal / not zero */

loc_001D0026: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0043; /* je: equal / zero */

loc_001D002D: ;
    goto loc_001D0039;

loc_001D002F: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0043; /* je: equal / zero */

loc_001D0036: ;
    MEM8(ecx) = 1;

loc_001D0039: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001D003Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D003Au); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D003C: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0043: ;
    MEM32(ecx + 4) = edi;

loc_001D0046: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D00CB; /* je: equal / zero */

loc_001D004F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D0057u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CF750u, sub_001CF750); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CF750 */

loc_001D0057: ;
    ecx = esp + 0x10;
    eax = edi + edi * 2;
    {
        uint32_t _icall_target = MEM32(ebx + eax * 8 + 0x10);
        if (edi == 10) {
            static int s_st10_cb_target = 0;
            if (s_st10_cb_target++ < 10) {
                fprintf(stderr, "[FSM-TR] state 10 icall_target = 0x%08X (is_code=%d)\n",
                        _icall_target, RECOMP_ICALL_IS_CODE(_icall_target));
            }
        }
        if (RECOMP_ICALL_IS_CODE(_icall_target)) {
            uint32_t _icall_esp = g_esp;
            PUSH32(esp, ecx);
            PUSH32(esp, 0x001D0063u);
            recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp);
            RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D005Fu);
            g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp();
            esp = esp + 4; /* caller pops ecx */
        } else {
            /* Target is null / not code (e.g. State 0, 1, 3):
             * Return 0 so it does NOT trigger sequence advance! */
            static int s_state_null_cb_log = 0;
            if (s_state_null_cb_log++ < 20) {
                fprintf(stderr, "[FSM] sub_001CFF70 state=%u (table=%08X) has null callback -> eax=0 (do not advance)\n", edi, ebx);
            }
            eax = 0;
        }
    }

loc_001D0063: ;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001D00B4; /* jne: not equal / not zero */

loc_001D006E: ;
    edi = edi;

loc_001D0070: ;
    edx = MEM32(esi);
    ebx = MEM32(esi + 4);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0095; /* je: equal / zero */

loc_001D007B: ;
    eax = esi;
    ecx = esi;
    /* nop */

loc_001D0080: ;
    ebp = MEM32(eax + 8);
    MEM32(eax) = ebp;
    ebp = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ebp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D0080; /* jne: not equal / not zero */

loc_001D0095: ;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x001D00AAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CFE60u, sub_001CFE60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CFE60 */

loc_001D00AA: ;
    edi = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0070; /* jne: not equal / not zero */

loc_001D00B4: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D00C1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CFE60u, sub_001CFE60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CFE60 */

loc_001D00C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D00CB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D00E0
 * Original: 0x001D00E0 - 0x001D00ED (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D00E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D00E0: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D00F0
 * Original: 0x001D00F0 - 0x001D00FC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D00F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D00F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0100
 * Original: 0x001D0100 - 0x001D0114 (20 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0100(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0100: ;
    edx = ecx;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0113; /* je: equal / zero */

loc_001D0108: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx) = eax;
    POP32(esp, edi);

loc_001D0113: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0120
 * Original: 0x001D0120 - 0x001D0137 (23 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0120(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0120: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x68);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x324);
    eax = edx + ecx + -240;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0140
 * Original: 0x001D0140 - 0x001D0155 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0140(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0140: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1DFE);
    eax = MEM32(ecx + edx * 4 + 0xC8);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0160
 * Original: 0x001D0160 - 0x001D016A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0160(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0160: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 8;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0170
 * Original: 0x001D0170 - 0x001D0193 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0170(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0170: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = 0x696548;
    PUSH32(esp, 0x001D017Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00183390u, sub_00183390); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00183390 */

loc_001D017E: ;
    edi = esi + 0xC8;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x5B;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D01A0
 * Original: 0x001D01A0 - 0x001D020D (109 bytes, 44 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D01A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D01A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    esi = ecx + 4;
    /* nop */

loc_001D01C0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0205; /* je: equal / zero */

loc_001D01C5: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + -4), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D01F4; /* je: equal / zero */

loc_001D01CE: ;
    PUSH32(esp, edi);
    ecx = 0x510040;
    PUSH32(esp, 0x001D01D9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B2B0u, sub_0016B2B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B2B0 */

loc_001D01D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D01F4; /* je: equal / zero */

loc_001D01DD: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x001D01F1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D01EFu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D01F1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D01F4: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001D01C0; /* jl: less (signed <) */

loc_001D0205: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 28 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0210
 * Original: 0x001D0210 - 0x001D022A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0210(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0210: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 4;

loc_001D0215: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0226; /* je: equal / zero */

loc_001D021A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0215; /* jl: less (signed <) */

loc_001D0223: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D0226: ;
    eax = ecx + eax * 8;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0230
 * Original: 0x001D0230 - 0x001D026F (63 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0230(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0230: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 4;
    PUSH32(esp, esi);

loc_001D0236: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0257; /* je: equal / zero */

loc_001D023B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0236; /* jl: less (signed <) */

loc_001D0244: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001D0257: ;
    edx = MEM32(esp + 8);
    esi = MEM32(ecx + eax * 8);
    MEM32(ecx + eax * 8 + 4) = edx;
    edx = MEM32(esp + 0xC);
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + eax * 8) = esi;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0270
 * Original: 0x001D0270 - 0x001D02A2 (50 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0270(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0270: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001D0280: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0296; /* je: equal / zero */

loc_001D0286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D029C; /* je: equal / zero */

loc_001D028A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0280; /* jl: less (signed <) */

loc_001D0296: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D029C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D02B0
 * Original: 0x001D02B0 - 0x001D02D5 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D02B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D02B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 4;

loc_001D02B5: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D02C8; /* je: equal / zero */

loc_001D02BA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D02B5; /* jl: less (signed <) */

loc_001D02C5: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D02C8: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = edx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D02E0
 * Original: 0x001D02E0 - 0x001D0325 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D02E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D02E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    esi = 0x5D1B20;
    /* nop */

loc_001D02F0: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x324);
    ecx = MEM32(eax + ebx + -240);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = eax + ebx + -240;
    if (CMP_EQ(_fa, _fb)) goto loc_001D0313; /* je: equal / zero */

loc_001D030A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx) = eax;

loc_001D0313: ;
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5FDA30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5FDA30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D02F0; /* jl: less (signed <) */

loc_001D0321: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0330
 * Original: 0x001D0330 - 0x001D0358 (40 bytes, 15 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0330(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0330: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D0355u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D01A0u, sub_001D01A0); g_eax = recomp_leaf_ld_eax(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D01A0 */

loc_001D0355: ;
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0360
 * Original: 0x001D0360 - 0x001D03B0 (80 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0360(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0360: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x5D1B20;
    /* nop */

loc_001D0370: ;
    eax = MEM32(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x324);
    esi = eax + ecx + -240;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 4;

loc_001D0384: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0396; /* je: equal / zero */

loc_001D0389: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0384; /* jl: less (signed <) */

loc_001D0394: ;
    goto loc_001D039C;

loc_001D0396: ;
    MEM32(esi + eax * 4 + 4) = ebx;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D039C: ;
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3238;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5FDA30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x5FDA30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0370; /* jl: less (signed <) */

loc_001D03AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D03B0
 * Original: 0x001D03B0 - 0x001D04CB (283 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D03B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D03B0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x001D03C2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00177040u, sub_00177040); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00177040 */

loc_001D03C2: ;
    edi = 0x5D1AB8;
    goto loc_001D03D0;

    /* nop */

loc_001D03D0: ;
    PUSH32(esp, edi);
    ecx = 0x510040;
    PUSH32(esp, 0x001D03DBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B2B0u, sub_0016B2B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B2B0 */

loc_001D03DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D04AB; /* je: equal / zero */

loc_001D03E3: ;
    ecx = eax;
    PUSH32(esp, 0x001D03EAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00153680u, sub_00153680); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00153680 */

loc_001D03EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D04AB; /* je: equal / zero */

loc_001D03F2: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x1DFE);
    eax = MEM32(ebx + eax * 4 + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D04AB; /* je: equal / zero */

loc_001D040D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D0415;

loc_001D0411: ;
    eax = MEM32(esp + 0x14);

loc_001D0415: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D041Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001CD5F0u, sub_001CD5F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001CD5F0 */

loc_001D041C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D04AB; /* je: equal / zero */

loc_001D0427: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + eax);
    edx = MEM32(esi + eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(esi + eax + 2);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esi + eax + 0xC);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + eax + 4);
    eax = MEM32(edi + 0x68);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x324);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = eax + ebx + -240;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0461: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D049C; /* je: equal / zero */

loc_001D0467: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D047B; /* je: equal / zero */

loc_001D046D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0461; /* jl: less (signed <) */

loc_001D0479: ;
    goto loc_001D049C;

loc_001D047B: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D049Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D01A0u, sub_001D01A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D01A0 */

loc_001D049C: ;
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0411; /* jne: not equal / not zero */

loc_001D04AB: ;
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3238;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5FD9C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x5FD9C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D03D0; /* jl: less (signed <) */

loc_001D04BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_001D02E0(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001D02E0 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D04D0
 * Original: 0x001D04D0 - 0x001D04F3 (35 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D04D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D04D0: ;
    eax = MEM32(ecx + 0x258);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D04F0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00164650u, sub_00164650); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00164650 */

loc_001D04F0: ;
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0500
 * Original: 0x001D0500 - 0x001D0515 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0500(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0500: ;
    eax = ecx;
    MEM32(eax) = 0x4B1B48;
    MEM32(0x6D16E4) = eax;
    MEM32(eax + 4) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0520
 * Original: 0x001D0520 - 0x001D0550 (48 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0520(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edx = ecx + esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D0537u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BDF0 */

loc_001D0537: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D054C; /* jl: less (signed <) */

loc_001D0546: ;
    MEM32(esi) = 0;

loc_001D054C: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0550
 * Original: 0x001D0550 - 0x001D05A0 (80 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0550: ;
    _fa = (uint32_t)(MEM32(0x699DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x699DDC), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D0565; /* jne: not equal / not zero */

loc_001D055C: ;
    PUSH32(esp, 0x001D0561u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001504D0u, sub_001504D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001504D0 */

loc_001D0561: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D059D; /* jne: not equal / not zero */

loc_001D0565: ;
    SET_LO8(eax, MEM8(0x6CE4B1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D059D; /* jne: not equal / not zero */

loc_001D056E: ;
    eax = MEM32(0x67D13C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D059D; /* je: equal / zero */

loc_001D0578: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + 0x67CF24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D059D; /* je: equal / zero */

loc_001D0588: ;
    SET_LO8(ecx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D059D; /* je: equal / zero */

loc_001D0592: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(MEM32(eax + 4)); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* indirect tail jmp */

loc_001D059D: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D05A0
 * Original: 0x001D05A0 - 0x001D06E9 (329 bytes, 87 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D05A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D05A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x67D13C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D06E1; /* je: equal / zero */

loc_001D05BE: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    _fb = (uint32_t)(0x67CF24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x67CF24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    if ((_fa == 0)) goto loc_001D06E1; /* je: equal / zero */

loc_001D05D4: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    ecx = esp + 0x40;
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    edx = esp + 0x10;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x2C) = 0;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = 0;
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(esp + 0x14) = 0;
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0x1C);
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = 0x67CF20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0678u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00164650u, sub_00164650); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00164650 */

loc_001D0678: ;
    edx = esp + 0x40;
    esi = eax;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0688u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BDF0 */

loc_001D0688: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0xA4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_001D06DF; /* je: equal / zero */

loc_001D0699: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    MEM32(edi + 0xA8) = esi;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x54);
    MEM32(edi + 0xA4) = edx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(ebp + 0x18);
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x34);
    MEM32(edx) = ecx;

loc_001D06DF: ;
    eax = esi;

loc_001D06E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 24 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D06F0
 * Original: 0x001D06F0 - 0x001D083B (331 bytes, 87 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D06F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D06F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x67D13C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0833; /* je: equal / zero */

loc_001D070E: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    _fb = (uint32_t)(0x67CF24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x67CF24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    if ((_fa == 0)) goto loc_001D0833; /* je: equal / zero */

loc_001D0724: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    ecx = esp + 0x40;
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    edx = esp + 0x10;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x2C) = 0;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = 0;
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(esp + 0x14) = 0;
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(0x67D178);
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = 0x67CF20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D07CAu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00164650u, sub_00164650); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00164650 */

loc_001D07CA: ;
    edx = esp + 0x40;
    esi = eax;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D07DAu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BDF0 */

loc_001D07DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0xA4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_001D0831; /* je: equal / zero */

loc_001D07EB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    MEM32(edi + 0xA8) = esi;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x54);
    MEM32(edi + 0xA4) = edx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(ebp + 0x18);
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x34);
    MEM32(edx) = ecx;

loc_001D0831: ;
    eax = esi;

loc_001D0833: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 20 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D0840
 * Original: 0x001D0840 - 0x001D0859 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0840(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D0840: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D0854; /* jp: parity */

loc_001D084F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001D0854: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D0860
 * Original: 0x001D0860 - 0x001D0881 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D0860(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D0860: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D0890
 * Original: 0x001D0890 - 0x001D08C1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D0890(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D0890: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D08D0
 * Original: 0x001D08D0 - 0x001D0901 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D08D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D08D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D0910
 * Original: 0x001D0910 - 0x001D0923 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0910(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D0910: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0930
 * Original: 0x001D0930 - 0x001D093E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0930(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0930: ;
    eax = ZX16(MEM16(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(0x6D21C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6D21C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0940
 * Original: 0x001D0940 - 0x001D0A03 (195 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0940: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D0958; /* jge: greater or equal (signed >=) */

loc_001D0949: ;
    ecx = ZX16(MEM16(esp + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    MEM32(ecx + 0x6D220C) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D0958: ;
    _fb = (uint32_t)(0xFFFFFFF3u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF3u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D0A02; /* ja: above (unsigned >) */

loc_001D0964: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1D0A04); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001D096Bu) goto loc_001D096B;
    if (_jt == 0x001D097Eu) goto loc_001D097E;
    if (_jt == 0x001D0991u) goto loc_001D0991;
    if (_jt == 0x001D09A4u) goto loc_001D09A4;
    if (_jt == 0x001D09B7u) goto loc_001D09B7;
    if (_jt == 0x001D09CAu) goto loc_001D09CA;
    if (_jt == 0x001D09DDu) goto loc_001D09DD;
    if (_jt == 0x001D09F0u) goto loc_001D09F0;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } }

loc_001D096B: ;
    edx = ZX16(MEM16(esp + 4));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    MEM32(edx + 0x6D220C) = 1;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D097E: ;
    eax = ZX16(MEM16(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    MEM32(eax + 0x6D220C) = 2;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D0991: ;
    ecx = ZX16(MEM16(esp + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    MEM32(ecx + 0x6D220C) = 3;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D09A4: ;
    edx = ZX16(MEM16(esp + 4));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    MEM32(edx + 0x6D220C) = 4;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D09B7: ;
    eax = ZX16(MEM16(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    MEM32(eax + 0x6D220C) = 5;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D09CA: ;
    ecx = ZX16(MEM16(esp + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    MEM32(ecx + 0x6D220C) = 6;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D09DD: ;
    edx = ZX16(MEM16(esp + 4));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    MEM32(edx + 0x6D220C) = 7;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D09F0: ;
    eax = ZX16(MEM16(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    MEM32(eax + 0x6D220C) = 8;

loc_001D0A02: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0A50
 * Original: 0x001D0A50 - 0x001D0A51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0A50: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0A60
 * Original: 0x001D0A60 - 0x001D0A72 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0A60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D0A67u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D0A67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x330) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0A80
 * Original: 0x001D0A80 - 0x001D0A92 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0A80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D0A87u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D0A87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x330) = 1;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0AA0
 * Original: 0x001D0AA0 - 0x001D0AC8 (40 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0AA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0AA0: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(esp + 8));
    edx = ZX16(LO16(esi));
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    MEM16(eax + 0x6D21C8) = LO16(esi);
    MEM16(eax + 0x6D2238) = 1;
    MEM32(ecx + 0x1A0) = edx;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0AD0
 * Original: 0x001D0AD0 - 0x001D0AEC (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0AD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0AD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(0x6D21C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6D21C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 4 + 0x6DA9B8) = eax;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0AF0
 * Original: 0x001D0AF0 - 0x001D0B18 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0AF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0AF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0AFB; /* jne: not equal / not zero */

loc_001D0AF8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D0AFB: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0B15; /* je: equal / zero */

loc_001D0B01: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(0x5CE878);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D0AF8; /* jb: below (unsigned <) */

loc_001D0B15: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0B20
 * Original: 0x001D0B20 - 0x001D0B48 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0B20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0B20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0B45; /* je: equal / zero */

loc_001D0B28: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0B45; /* jne: not equal / not zero */

loc_001D0B2E: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(0x5CE878);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D0B45; /* jb: below (unsigned <) */

loc_001D0B42: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D0B45: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0B50
 * Original: 0x001D0B50 - 0x001D0B8B (59 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0B50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0B50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x10;

loc_001D0B60: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0B79; /* je: equal / zero */

loc_001D0B66: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0B70; /* jne: not equal / not zero */

loc_001D0B6B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0B81; /* je: equal / zero */

loc_001D0B70: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0B60; /* jl: less (signed <) */

loc_001D0B79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001D0B81: ;
    eax = MEM32(ecx + edx * 4 + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0B90
 * Original: 0x001D0B90 - 0x001D0BCD (61 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0B90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0B90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x10;

loc_001D0BA0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0BBB; /* je: equal / zero */

loc_001D0BA6: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0BB2; /* jne: not equal / not zero */

loc_001D0BAD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0BC3; /* je: equal / zero */

loc_001D0BB2: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0BA0; /* jl: less (signed <) */

loc_001D0BBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001D0BC3: ;
    eax = MEM32(ecx + edx * 4 + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0BD0
 * Original: 0x001D0BD0 - 0x001D0BD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0BD0: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0BE0
 * Original: 0x001D0BE0 - 0x001D0BF6 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0BE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D0BF0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F65E0u, sub_001F65E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F65E0 */

loc_001D0BF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0C00
 * Original: 0x001D0C00 - 0x001D0C46 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0C00: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x6DB034;

loc_001D0C07: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0C1A; /* je: equal / zero */

loc_001D0C0C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DBFD4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DBFD4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0C07; /* jl: less (signed <) */

loc_001D0C17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D0C1A: ;
    eax = edx + edx * 4;
    eax = eax * 8 + 0x6DB010;
    PUSH32(esp, esi);
    MEM8(eax + 0x24) = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x10;
    edi = edi;

loc_001D0C30: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0C40; /* je: equal / zero */

loc_001D0C35: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0C30; /* jl: less (signed <) */

loc_001D0C3E: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D0C40: ;
    POP32(esp, esi);
    MEM32(ecx + edx * 4 + 0x10) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0C50
 * Original: 0x001D0C50 - 0x001D0C72 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0C50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edx = ZX16(MEM16(eax + 0x6D21F2));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = eax + 0x6D21F2;
    if (CMP_GE(_fas, _fbs)) goto loc_001D0C6F; /* jge: greater or equal (signed >=) */

loc_001D0C6C: ;
    MEM16(eax) = LO16(ecx);

loc_001D0C6F: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0C80
 * Original: 0x001D0C80 - 0x001D0C8F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0C80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(0x6D21C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6D21C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0C90
 * Original: 0x001D0C90 - 0x001D0CC0 (48 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0C90: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x6D21D4;
    goto loc_001D0CA0;

    /* nop */

loc_001D0CA0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0CB5; /* je: equal / zero */

loc_001D0CA4: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DA9C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6DA9C4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0CA0; /* jl: less (signed <) */

loc_001D0CB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D0CB5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(0x6D21C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6D21C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0D00
 * Original: 0x001D0D00 - 0x001D0D32 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0D00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001D0D0Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001C6070u, sub_001C6070); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001C6070 */

loc_001D0D0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0D2F; /* je: equal / zero */

loc_001D0D14: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edx = ZX16(MEM16(eax + 0x6D21F2));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = eax + 0x6D21F2;
    if (CMP_GE(_fas, _fbs)) goto loc_001D0D2F; /* jge: greater or equal (signed >=) */

loc_001D0D2C: ;
    MEM16(eax) = LO16(ecx);

loc_001D0D2F: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0D40
 * Original: 0x001D0D40 - 0x001D0D72 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0D40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001D0D4Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001C60A0u, sub_001C60A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001C60A0 */

loc_001D0D4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0D6F; /* je: equal / zero */

loc_001D0D54: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edx = ZX16(MEM16(eax + 0x6D21F2));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = eax + 0x6D21F2;
    if (CMP_GE(_fas, _fbs)) goto loc_001D0D6F; /* jge: greater or equal (signed >=) */

loc_001D0D6C: ;
    MEM16(eax) = LO16(ecx);

loc_001D0D6F: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0D80
 * Original: 0x001D0D80 - 0x001D0D93 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D0D80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    MEM16(eax + 0x6D21F2) = 0;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0DA0
 * Original: 0x001D0DA0 - 0x001D0DE2 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0DA0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001D0DC2; /* je: equal / zero */

loc_001D0DA9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D0DDF; /* jne: not equal / not zero */

loc_001D0DAC: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(esp + 0xC);
    eax = ZX16(MEM16(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0DDF; /* je: equal / zero */

loc_001D0DBF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D0DC2: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001D0DBF; /* jne: not equal / not zero */

loc_001D0DD7: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x30) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D0DBF; /* ja: above (unsigned >) */

loc_001D0DDF: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0DF0
 * Original: 0x001D0DF0 - 0x001D0F59 (361 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0DF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0x6DA9B8;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;

loc_001D0E05: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F40; /* je: equal / zero */

loc_001D0E10: ;
    _fa = (uint32_t)(MEM16(esi + 0x70)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x70), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F40; /* je: equal / zero */

loc_001D0E1B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0F40; /* jne: not equal / not zero */

loc_001D0E24: ;
    ecx = MEM32(esp + 0x18);
    MEM8(esi + 0x1C) = 1;
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D0E37u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D0DA0u, sub_001D0DA0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D0DA0 */

loc_001D0E37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F40; /* je: equal / zero */

loc_001D0E42: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0E76; /* je: equal / zero */

loc_001D0E48: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001D0E52u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B210u, sub_0016B210); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B210 */

loc_001D0E52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0E5F; /* je: equal / zero */

loc_001D0E56: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D0E5Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D0E5F: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001D0E69u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B220u, sub_0016B220); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B220 */

loc_001D0E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0E76; /* je: equal / zero */

loc_001D0E6D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D0E76u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D0E76: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0EBE; /* je: equal / zero */

loc_001D0E7C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ecx = 0x510040;
    PUSH32(esp, 0x001D0E89u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B5C0u, sub_0016B5C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B5C0 */

loc_001D0E89: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0EBA; /* je: equal / zero */

loc_001D0E8F: ;
    /* nop */

loc_001D0E90: ;
    _fa = (uint32_t)(MEM16(edi + 0xD2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0EA9; /* je: equal / zero */

loc_001D0E9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D0EA3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D0EA3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0EBA; /* je: equal / zero */

loc_001D0EA9: ;
    PUSH32(esp, edi);
    ecx = 0x510040;
    PUSH32(esp, 0x001D0EB4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B5C0u, sub_0016B5C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B5C0 */

loc_001D0EB4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0E90; /* jne: not equal / not zero */

loc_001D0EBA: ;
    ebp = MEM32(esp + 0x10);

loc_001D0EBE: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0EFA; /* je: equal / zero */

loc_001D0EC4: ;
    PUSH32(esp, 0);
    ecx = 0x510040;
    PUSH32(esp, 0x001D0ED0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B5C0u, sub_0016B5C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B5C0 */

loc_001D0ED0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0EFA; /* je: equal / zero */

loc_001D0ED6: ;
    _fa = (uint32_t)(MEM16(edi + 0xD2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0EE9; /* jne: not equal / not zero */

loc_001D0EE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D0EE9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D0EE9: ;
    PUSH32(esp, edi);
    ecx = 0x510040;
    PUSH32(esp, 0x001D0EF4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B5C0u, sub_0016B5C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B5C0 */

loc_001D0EF4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0ED6; /* jne: not equal / not zero */

loc_001D0EFA: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0F2C; /* je: equal / zero */

loc_001D0F00: ;
    PUSH32(esp, 0);
    ecx = 0x710858;
    PUSH32(esp, 0x001D0F0Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001DB9A0u, sub_001DB9A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001DB9A0 */

loc_001D0F0C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F2C; /* je: equal / zero */

loc_001D0F12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D0F1Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D0F1B: ;
    PUSH32(esp, edi);
    ecx = 0x710858;
    PUSH32(esp, 0x001D0F26u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001DB9A0u, sub_001DB9A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001DB9A0 */

loc_001D0F26: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0F12; /* jne: not equal / not zero */

loc_001D0F2C: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 0xE (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D0F3C; /* jne: not equal / not zero */

loc_001D0F32: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001D0F3Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D0F3C: ;
    MEM8(esi + 0x1C) = 0;

loc_001D0F40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DAE68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x6DAE68 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001D0E05; /* jl: less (signed <) */

loc_001D0F53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0F60
 * Original: 0x001D0F60 - 0x001D0F80 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0F60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0F60: ;
    eax = 0x6D2238;
    goto loc_001D0F70;

    /* nop */
    edi = edi;

loc_001D0F70: ;
    MEM16(eax) = 0;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DAA28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DAA28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0F70; /* jl: less (signed <) */

loc_001D0F7F: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0F90
 * Original: 0x001D0F90 - 0x001D0FB8 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0F90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0F90: ;
    PUSH32(esp, esi);
    eax = ecx + 0x10;
    esi = 0x64;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D0FA0;

    /* nop */

loc_001D0FA0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0FB0; /* je: equal / zero */

loc_001D0FA6: ;
    MEM32(ecx + 0x20) = edx;
    ecx = MEM32(eax);
    MEM8(ecx + 0x24) = LO8(edx);
    MEM32(eax) = edx;

loc_001D0FB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D0FA0; /* jne: not equal / not zero */

loc_001D0FB6: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D0FC0
 * Original: 0x001D0FC0 - 0x001D1003 (67 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0FC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0FC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx + 0x10;
    MEM32(esi + 0x20) = 0;
    MEM8(esi + 0x24) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;

loc_001D0FD8: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0FEA; /* je: equal / zero */

loc_001D0FDC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0FD8; /* jl: less (signed <) */

loc_001D0FE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D0FEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    MEM32(ecx + eax * 4 + 0x10) = 0;
    PUSH32(esp, 0x001D0FFBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F65E0u, sub_001F65E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F65E0 */

loc_001D0FFB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1010
 * Original: 0x001D1010 - 0x001D105F (79 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1010(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D1020: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x6DA9B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x6DA9B8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1037; /* jne: not equal / not zero */

loc_001D1029: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(eax * 4 + 0x6DA9B8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001D1037; /* jne: not equal / not zero */

loc_001D1035: ;
    ecx = eax;

loc_001D1037: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1020; /* jl: less (signed <) */

loc_001D103F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D105A; /* je: equal / zero */

loc_001D1044: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0x6DA9B8);
    PUSH32(esp, 0x001D1054u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F65E0u, sub_001F65E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F65E0 */

loc_001D1054: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = eax;

loc_001D105A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1060
 * Original: 0x001D1060 - 0x001D1095 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1060(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1060: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x6D21C8;
    edi = edi;

loc_001D1070: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1084; /* jne: not equal / not zero */

loc_001D1075: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D107Du); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D1010u, sub_001D1010); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D1010 */

loc_001D107D: ;
    ecx = esi;
    PUSH32(esp, 0x001D1084u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F77A0u, sub_001F77A0); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F77A0 */

loc_001D1084: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x74;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DA9B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6DA9B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1070; /* jl: less (signed <) */

loc_001D108F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D10A0
 * Original: 0x001D10A0 - 0x001D11A0 (256 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D10A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D10A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D10DC; /* je: equal / zero */

loc_001D10AC: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001D10B6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B210u, sub_0016B210); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B210 */

loc_001D10B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D10C4; /* je: equal / zero */

loc_001D10BA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D10C4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D10C4: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001D10CEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B220u, sub_0016B220); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B220 */

loc_001D10CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D10DC; /* je: equal / zero */

loc_001D10D2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D10DCu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D10DC: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D1122; /* je: equal / zero */

loc_001D10E2: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = 0x510040;
    PUSH32(esp, 0x001D10F0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B5C0u, sub_0016B5C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B5C0 */

loc_001D10F0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1121; /* je: equal / zero */

loc_001D10F6: ;
    _fa = (uint32_t)(MEM16(esi + 0xD2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1110; /* je: equal / zero */

loc_001D1100: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D110Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D110A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1121; /* je: equal / zero */

loc_001D1110: ;
    PUSH32(esp, esi);
    ecx = 0x510040;
    PUSH32(esp, 0x001D111Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B5C0u, sub_0016B5C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B5C0 */

loc_001D111B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D10F6; /* jne: not equal / not zero */

loc_001D1121: ;
    POP32(esp, ebx);

loc_001D1122: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D1165; /* je: equal / zero */

loc_001D1128: ;
    PUSH32(esp, 0);
    ecx = 0x510040;
    PUSH32(esp, 0x001D1134u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B5C0u, sub_0016B5C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B5C0 */

loc_001D1134: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1165; /* je: equal / zero */

loc_001D113A: ;
    /* nop */

loc_001D1140: ;
    _fa = (uint32_t)(MEM16(esi + 0xD2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1154; /* jne: not equal / not zero */

loc_001D114A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D1154u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D1154: ;
    PUSH32(esp, esi);
    ecx = 0x510040;
    PUSH32(esp, 0x001D115Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B5C0u, sub_0016B5C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B5C0 */

loc_001D115F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1140; /* jne: not equal / not zero */

loc_001D1165: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D119B; /* je: equal / zero */

loc_001D116B: ;
    PUSH32(esp, 0);
    ecx = 0x710858;
    PUSH32(esp, 0x001D1177u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001DB9A0u, sub_001DB9A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001DB9A0 */

loc_001D1177: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D119B; /* je: equal / zero */

loc_001D117D: ;
    /* nop */

loc_001D1180: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D118Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7A30u, sub_001F7A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7A30 */

loc_001D118A: ;
    PUSH32(esp, esi);
    ecx = 0x710858;
    PUSH32(esp, 0x001D1195u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001DB9A0u, sub_001DB9A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001DB9A0 */

loc_001D1195: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1180; /* jne: not equal / not zero */

loc_001D119B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D11A0
 * Original: 0x001D11A0 - 0x001D11F3 (83 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D11A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D11A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001D11B7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001C60E0u, sub_001C60E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001C60E0 */

loc_001D11B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001D11C3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001C5E40u, sub_001C5E40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001C5E40 */

loc_001D11C3: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D11ED; /* je: equal / zero */

loc_001D11CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001D11D8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001C5E80u, sub_001C5E80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001C5E80 */

loc_001D11D8: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D11ED; /* je: equal / zero */

loc_001D11DF: ;
    /* nop */

loc_001D11E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001D11E9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F7FF0u, sub_001F7FF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F7FF0 */

loc_001D11E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D11E0; /* jne: not equal / not zero */

loc_001D11ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1200
 * Original: 0x001D1200 - 0x001D1271 (113 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1200(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1200: ;
    SET_LO8(eax, MEM8(0x514D68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1270; /* je: equal / zero */

loc_001D1209: ;
    ecx = MEM32(0x514D6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1270; /* je: equal / zero */

loc_001D1214: ;
    eax = MEM32(0x6DA9B8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1265; /* je: equal / zero */

loc_001D1220: ;
    eax = 0x6DA9B8;
    PUSH32(esp, esi);
    esi = eax;

loc_001D1228: ;
    eax = MEM32(eax);
    edx = ZX16(MEM16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1257; /* jne: not equal / not zero */

loc_001D1231: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    _fb = (uint32_t)(0x6D21C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6D21C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x510040;
    PUSH32(esp, 0x001D1245u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B210u, sub_0016B210); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B210 */

loc_001D1245: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001D1251u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D11A0u, sub_001D11A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D11A0 */

loc_001D1251: ;
    ecx = MEM32(0x514D6C);

loc_001D1257: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001D1228; /* jne: not equal / not zero */

loc_001D1264: ;
    POP32(esp, esi);

loc_001D1265: ;
    MEM32(0x514D6C) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_001D1270: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1280
 * Original: 0x001D1280 - 0x001D1297 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1280: ;
    ecx = ZX16(MEM16(esp + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    _fb = (uint32_t)(0x6D2210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6D2210;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); sub_0015BDF0(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x0015BDF0 */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D12A0
 * Original: 0x001D12A0 - 0x001D12B7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D12A0: ;
    ecx = ZX16(MEM16(esp + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    _fb = (uint32_t)(0x6D2220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6D2220;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); sub_0015BDF0(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x0015BDF0 */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D12C0
 * Original: 0x001D12C0 - 0x001D12CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D12C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D12D0
 * Original: 0x001D12D0 - 0x001D12E3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D12D0: ;
    eax = ZX16(MEM16(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    MEM32(eax + 0x6D2204) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D12F0
 * Original: 0x001D12F0 - 0x001D12F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D12F0: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1300
 * Original: 0x001D1300 - 0x001D1342 (66 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1300(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D1300: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    edx = ZX16(LO16(ecx));
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM16(esi * 2 + 0x6D16E8) = LO16(ecx);
    MEM16(eax + 0x6D21C8) = LO16(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x6D21E8) = esi;
    MEM16(eax + 0x6D2238) = 1;
    MEM32(0x6DB008) = edx;
    MEM32(eax + 0x6D21EC) = ecx;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1350
 * Original: 0x001D1350 - 0x001D13E4 (148 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1350(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1350: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    ecx = ZX16(LO16(eax));
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x74);
    MEM32(0x6DB008) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x6D21CC) = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM16(esi + 0x6D2238) = 1;
    MEM16(esi + 0x6D21C8) = LO16(eax);
    MEM32(esi + 0x6D21D0) = edx;
    PUSH32(esp, 0x001D1393u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D0940u, sub_001D0940); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D0940 */

loc_001D1393: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    eax = esi + 0x6D2210;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D13A4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BDF0 */

loc_001D13A4: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = esi + 0x6D2220;
    PUSH32(esp, eax);
    MEM32(esi + 0x6D2230) = ecx;
    PUSH32(esp, 0x001D13BFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BDF0 */

loc_001D13BF: ;
    SET_LO16(ecx, MEM16(esp + 0x3C));
    edx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x6D223A) = LO16(ecx);
    MEM32(esi + 0x6D21F8) = edx;
    MEM32(esi + 0x6D2204) = 0;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D13F0
 * Original: 0x001D13F0 - 0x001D14DE (238 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D13F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x6D21CC;
    edx = 1;
    esi = 0x20000;

loc_001D1402: ;
    _fa = (uint32_t)(MEM16(eax + 0x6C)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x6C), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D141C; /* jne: not equal / not zero */

loc_001D1408: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D141C; /* jne: not equal / not zero */

loc_001D140C: ;
    ebx = MEM32(ecx + 0xC);
    edi = eax + -4;
    MEM32(ebx * 4 + 0x6DA9B8) = edi;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D141C: ;
    _fa = (uint32_t)(MEM16(eax + 0xE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xE0), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D143A; /* jne: not equal / not zero */

loc_001D1425: ;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x74), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D143A; /* jne: not equal / not zero */

loc_001D142A: ;
    ebx = MEM32(ecx + 0xC);
    edi = eax + 0x70;
    MEM32(ebx * 4 + 0x6DA9B8) = edi;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D143A: ;
    _fa = (uint32_t)(MEM16(eax + 0x154)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x154), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D145E; /* jne: not equal / not zero */

loc_001D1443: ;
    _fa = (uint32_t)(MEM32(eax + 0xE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0xE8), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D145E; /* jne: not equal / not zero */

loc_001D144B: ;
    ebx = MEM32(ecx + 0xC);
    edi = eax + 0xE4;
    MEM32(ebx * 4 + 0x6DA9B8) = edi;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D145E: ;
    _fa = (uint32_t)(MEM16(eax + 0x1C8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1C8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1482; /* jne: not equal / not zero */

loc_001D1467: ;
    _fa = (uint32_t)(MEM32(eax + 0x15C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x15C), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D1482; /* jne: not equal / not zero */

loc_001D146F: ;
    ebx = MEM32(ecx + 0xC);
    edi = eax + 0x158;
    MEM32(ebx * 4 + 0x6DA9B8) = edi;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D1482: ;
    _fa = (uint32_t)(MEM16(eax + 0x23C)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x23C), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D14A6; /* jne: not equal / not zero */

loc_001D148B: ;
    _fa = (uint32_t)(MEM32(eax + 0x1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x1D0), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D14A6; /* jne: not equal / not zero */

loc_001D1493: ;
    ebx = MEM32(ecx + 0xC);
    edi = eax + 0x1CC;
    MEM32(ebx * 4 + 0x6DA9B8) = edi;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D14A6: ;
    _fa = (uint32_t)(MEM16(eax + 0x2B0)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x2B0), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D14CA; /* jne: not equal / not zero */

loc_001D14AF: ;
    _fa = (uint32_t)(MEM32(eax + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x244), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D14CA; /* jne: not equal / not zero */

loc_001D14B7: ;
    ebx = MEM32(ecx + 0xC);
    edi = eax + 0x240;
    MEM32(ebx * 4 + 0x6DA9B8) = edi;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D14CA: ;
    _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2B8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DA9BC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DA9BC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1402; /* jl: less (signed <) */

loc_001D14DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D14E0
 * Original: 0x001D14E0 - 0x001D1510 (48 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D14E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D14E0: ;
    edx = MEM32(esp + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    _fb = (uint32_t)(0x6D21C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x6D21C8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x6DA9B8;

loc_001D14F2: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1506; /* je: equal / zero */

loc_001D14F8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D150B; /* je: equal / zero */

loc_001D14FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DAE68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DAE68 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D14F2; /* jl: less (signed <) */

loc_001D1506: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D150B: ;
    SET_LO8(eax, 1);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1510
 * Original: 0x001D1510 - 0x001D1564 (84 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1510(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1510: ;
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x6D21D4;
    goto loc_001D1520;

    /* nop */

loc_001D1520: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1534; /* je: equal / zero */

loc_001D1524: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DA9C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DA9C4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1520; /* jl: less (signed <) */

loc_001D152F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D1534: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    _fb = (uint32_t)(0x6D21C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6D21C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D152F; /* je: equal / zero */

loc_001D1541: ;
    eax = 0x6DA9B8;

loc_001D1546: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D152F; /* je: equal / zero */

loc_001D154C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D155F; /* je: equal / zero */

loc_001D1550: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DAE68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DAE68 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1546; /* jl: less (signed <) */

loc_001D155A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D155F: ;
    SET_LO8(eax, 1);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1570
 * Original: 0x001D1570 - 0x001D1571 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1570(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D1570: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1580
 * Original: 0x001D1580 - 0x001D15CB (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1580(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1580: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1D0DF0);
    PUSH32(esp, 7);
    ebx = ecx;
    PUSH32(esp, 0x001D1591u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001DC5B0u, sub_001DC5B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001DC5B0 */

loc_001D1591: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x10;
    esi = 0x64;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001D15A0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D15B0; /* je: equal / zero */

loc_001D15A6: ;
    MEM32(ecx + 0x20) = edx;
    ecx = MEM32(eax);
    MEM8(ecx + 0x24) = LO8(edx);
    MEM32(eax) = edx;

loc_001D15B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D15A0; /* jne: not equal / not zero */

loc_001D15B6: ;
    ecx = 0x12C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x6DA9B8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xC) = edx;
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D15D0
 * Original: 0x001D15D0 - 0x001D1611 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D15D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    eax = ebx + 0x10;
    esi = 0x64;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D15E0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D15F0; /* je: equal / zero */

loc_001D15E6: ;
    MEM32(ecx + 0x20) = edx;
    ecx = MEM32(eax);
    MEM8(ecx + 0x24) = LO8(edx);
    MEM32(eax) = edx;

loc_001D15F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D15E0; /* jne: not equal / not zero */

loc_001D15F6: ;
    ecx = 0x12C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x6DA9B8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xC) = edx;
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_001D13F0(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001D13F0 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1620
 * Original: 0x001D1620 - 0x001D1661 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    eax = ebx + 0x10;
    esi = 0x64;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D1630: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1640; /* je: equal / zero */

loc_001D1636: ;
    MEM32(ecx + 0x20) = edx;
    ecx = MEM32(eax);
    MEM8(ecx + 0x24) = LO8(edx);
    MEM32(eax) = edx;

loc_001D1640: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D1630; /* jne: not equal / not zero */

loc_001D1646: ;
    ecx = 0x12C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x6DA9B8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xC) = edx;
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_001D13F0(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001D13F0 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1670
 * Original: 0x001D1670 - 0x001D16DB (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    eax = ebp + 0x10;
    edx = 0x64;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D1680: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1690; /* je: equal / zero */

loc_001D1686: ;
    MEM32(ecx + 0x20) = ebx;
    ecx = MEM32(eax);
    MEM8(ecx + 0x24) = LO8(ebx);
    MEM32(eax) = ebx;

loc_001D1690: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D1680; /* jne: not equal / not zero */

loc_001D1696: ;
    PUSH32(esp, edi);
    ecx = 0x12C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x6DA9B8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esi = 0x6D21C8;
    POP32(esp, edi);
    goto loc_001D16B0;

    /* nop */

loc_001D16B0: ;
    ecx = esi;
    PUSH32(esp, 0x001D16B7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F77A0u, sub_001F77A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F77A0 */

loc_001D16B7: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x74;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DA9B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6DA9B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D16B0; /* jl: less (signed <) */

loc_001D16C2: ;
    MEM32(0x51778C) = ebx;
    MEM32(0x517790) = ebx;
    MEM32(0x517798) = ebx;
    POP32(esp, esi);
    MEM32(ebp + 0xC) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D16E0
 * Original: 0x001D16E0 - 0x001D16EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D16E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x48) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D16F0
 * Original: 0x001D16F0 - 0x001D16FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D16F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x200) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1700
 * Original: 0x001D1700 - 0x001D170F (15 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1700(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D1700: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0xA8) = LO16(eax);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1710
 * Original: 0x001D1710 - 0x001D1784 (116 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1710(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D1710: ;
    eax = MEM32(0x5B23C4);
    MEM32(0x6FC8E0) = eax;
    MEM32(0x6FC8E4) = eax;
    MEM32(0x6FC8E8) = eax;
    MEM32(0x6FC8EC) = eax;
    MEM32(0x6FC8F0) = eax;
    MEM32(0x6FC8F4) = eax;
    MEM32(0x6FC8F8) = eax;
    MEM32(0x6FC8FC) = eax;
    MEM32(0x6FC900) = eax;
    MEM32(0x6FC904) = eax;
    MEM32(0x6FC908) = eax;
    MEM32(0x6FC90C) = eax;
    MEM32(0x6FC910) = eax;
    MEM32(0x6FC914) = eax;
    MEM32(0x6FC918) = eax;
    MEM32(0x6FC91C) = eax;
    MEM32(0x6FC920) = eax;
    eax = 0x84;
    MEM32(0x6FC8F0) = eax;
    MEM32(0x6FC8EC) = eax;
    MEM32(0x6FC8E8) = eax;
    MEM32(0x6FC8E4) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1790
 * Original: 0x001D1790 - 0x001D1795 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1790: ;
    g_seh_ebp = ebp; sub_001D1710(); return; /* tail jmp 0x001D1710 */

}

/**
 * sub_001D17A0
 * Original: 0x001D17A0 - 0x001D17A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D17A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D17A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D17B0
 * Original: 0x001D17B0 - 0x001D1818 (104 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D17B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D17B0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA6C);
    MEM8(eax + 0x6DCA1A) = 1;
    MEM32(0x6FC8C8) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x6DBFB8) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM32(eax + 0x6DBFBC) = edx;
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(eax + 0x6DBFC0) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x18));
    MEM16(eax + 0x6DBFC2) = LO16(edx);
    edx = MEM32(esp + 0x1C);
    MEM16(eax + 0x6DBFC4) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x20));
    MEM32(eax + 0x6DBFB0) = edx;
    MEM16(eax + 0x6DBFB4) = LO16(ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1820
 * Original: 0x001D1820 - 0x001D1879 (89 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1820(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1820: ;
    ecx = MEM32(0x6FC8C8);
    eax = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x17);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA6C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x6DCA18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(0x6DBFC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6DBFC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x5C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x64) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x68) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6FC924) = eax;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = edx;
    MEM8(0x6FC930) = 1;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1880
 * Original: 0x001D1880 - 0x001D1956 (214 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1880(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1880: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA6C);
    MEM16(ecx + 0x6DCA18) = MEM16(ecx + 0x6DCA18) + 1;
    _fa = (uint32_t)(MEM16(ecx + 0x6DCA18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x6DCA18;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D18A5; /* jl: less (signed <) */

loc_001D18A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D18A5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x17);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(0x6DBFC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6DBFC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0x54) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x40));
    MEM8(eax + 0x58) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0x48));
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = esi;
    esi = MEM32(esp + 0x18);
    MEM16(eax + 0x5A) = LO16(ecx);
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x60) = edx;
    MEM8(eax + 0x3C) = LO8(ebx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 0x28) = ecx;
    _fa = (uint32_t)(MEM8(0x6FC930)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6FC930), LO8(ebx) (8-bit) */
    MEM8(0x6FC930) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001D1953; /* jne: not equal / not zero */

loc_001D1938: ;
    eax = MEM32(0x6FC924);
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x68) = edx;
    MEM32(eax + 0x70) = ebx;
    MEM32(eax + 0x6C) = 0x3E8;

loc_001D1953: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1960
 * Original: 0x001D1960 - 0x001D19A8 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1960(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1960: ;
    ecx = MEM32(0x6FC8C8);
    eax = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x17);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA6C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x6DCA18);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(0x6DBFC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6DBFC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 1);
    MEM8(eax + 0x3C) = LO8(ecx);
    MEM8(0x6FC931) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x6FC924) = eax;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D19B0
 * Original: 0x001D19B0 - 0x001D19FB (75 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D19B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D19B0: ;
    eax = MEM32(0x6FC8C8);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x17);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA6C);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x6DCA18);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    eax = edx + 0x6DBF54;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(0x6FC924) = eax;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x50) = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1A00
 * Original: 0x001D1A00 - 0x001D1AD9 (217 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1A00: ;
    eax = MEM32(0x6FC8C8);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x17);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA6C);
    ecx = ecx + 0x6DCA18;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = SX16(LO16(edx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fb = (uint32_t)(0x6DBFC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6DBFC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(0x6FC931));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx) = LO16(edx);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x54) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM8(eax + 0x58) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM16(eax + 0x5A) = LO16(ecx);
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x28) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x20) = edx;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    MEM32(0x6FC924) = eax;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D1AAA; /* jne: not equal / not zero */

loc_001D1AA7: ;
    MEM8(eax + 0x3C) = LO8(ecx);

loc_001D1AAA: ;
    SET_LO8(ebx, MEM8(0x6FC930));
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    MEM8(0x6FC931) = LO8(ecx);
    POP32(esp, ebx);
    MEM8(0x6FC930) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001D1AD8; /* jne: not equal / not zero */

loc_001D1AC2: ;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x68) = edx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x6C) = 0x3E8;

loc_001D1AD8: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1AE0
 * Original: 0x001D1AE0 - 0x001D1B1D (61 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1AE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1AE0: ;
    eax = MEM32(0x6FC8C8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA6C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x6DCA18);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + 0x6DC8D8;
    ecx = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x6FC92C) = eax;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1B20
 * Original: 0x001D1B20 - 0x001D1B7C (92 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1B20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1B20: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0x10);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA6C);
    MEM8(eax + 0x6DCA1A) = 1;
    MEM32(0x6FC8C8) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x6DBFB8) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0x6DBFC0) = LO16(ecx);
    MEM16(eax + 0x6DBFC2) = LO16(ecx);
    MEM16(eax + 0x6DBFC4) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM32(eax + 0x6DBFBC) = edx;
    MEM32(eax + 0x6DBFB0) = 0;
    MEM16(eax + 0x6DBFB4) = LO16(ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1B80
 * Original: 0x001D1B80 - 0x001D1D32 (434 bytes, 144 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D1B8Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D1B8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x001D1B96u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00184AC0u, sub_00184AC0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00184AC0 */

loc_001D1B96: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1BA3; /* jne: not equal / not zero */

loc_001D1B9C: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

loc_001D1BA3: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D1BAFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D1BAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x001D1BB9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000167EEu, sub_000167EE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000167EE */

loc_001D1BB9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1BD4; /* je: equal / zero */

loc_001D1BC4: ;
    edx = MEM32(ebx + 0x10);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx + 0x14);
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x10) = edx;
    MEM32(ebx + 0x14) = ecx;

loc_001D1BD4: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1BE6; /* je: equal / zero */

loc_001D1BDA: ;
    MEM32(ebx + 0xB0) = ecx;
    MEM32(ebx + 0xB4) = esi;

loc_001D1BE6: ;
    SET_LO16(ecx, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1BF7; /* je: equal / zero */

loc_001D1BF0: ;
    MEM16(ebx + 0xB8) = LO16(ecx);

loc_001D1BF7: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1C06; /* je: equal / zero */

loc_001D1BFF: ;
    MEM16(ebx + 0xBE) = LO16(ecx);

loc_001D1C06: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1C1C; /* je: equal / zero */

loc_001D1C10: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebx + 0xBA) = LO8(edx);

loc_001D1C1C: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1C32; /* je: equal / zero */

loc_001D1C26: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebx + 0xBB) = LO8(ecx);

loc_001D1C32: ;
    SET_LO16(eax, MEM16(eax + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1C48; /* je: equal / zero */

loc_001D1C3C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(esi) (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebx + 0xBC) = LO8(edx);

loc_001D1C48: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D1CAB; /* je: equal / zero */

loc_001D1C53: ;
    _fa = (uint32_t)(MEM32(0x5142B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5142B4), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1D29; /* jle: less or equal (signed <=) */

loc_001D1C5F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1C61: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1C68u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D1C68: ;
    eax = MEM32(eax + 4);
    ecx = ZX16(MEM16(eax + edi + 0xA8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1C92; /* jne: not equal / not zero */

loc_001D1C7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1C81u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D1C81: ;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edx + edi + 0xA0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + edi + 0xA0), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D1D0A; /* jg: greater (signed >) */

loc_001D1C92: ;
    eax = MEM32(0x5142B4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1C61; /* jl: less (signed <) */

loc_001D1CA2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

loc_001D1CAB: ;
    ebp = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1D29; /* je: equal / zero */

loc_001D1CB4: ;
    _fa = (uint32_t)(MEM32(0x5142B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5142B4), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1D29; /* jle: less or equal (signed <=) */

loc_001D1CBC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001D1CC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1CC7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D1CC7: ;
    eax = MEM32(eax + 4);
    ecx = ZX16(MEM16(eax + edi + 0xA8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1CF1; /* jne: not equal / not zero */

loc_001D1CD9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1CE0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D1CE0: ;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edx + edi + 0xA0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + edi + 0xA0), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D1D0A; /* jg: greater (signed >) */

loc_001D1CF1: ;
    eax = MEM32(0x5142B4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1CC0; /* jl: less (signed <) */

loc_001D1D01: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

loc_001D1D0A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1D11u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D1D11: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_001D1D29; /* je: equal / zero */

loc_001D1D21: ;
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D1D29u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0019CF80u, sub_0019CF80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0019CF80 */

loc_001D1D29: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D1D40
 * Original: 0x001D1D40 - 0x001D2212 (1234 bytes, 382 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D40: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    SET_LO8(eax, MEM8(esi + 0x58));
    ebx = MEM32(esi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001D1D7E; /* jne: not equal / not zero */

loc_001D1D57: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1D7E; /* jne: not equal / not zero */

loc_001D1D5C: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1D7E; /* jne: not equal / not zero */

loc_001D1D61: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1D7E; /* jne: not equal / not zero */

loc_001D1D66: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xC5098000u);
    PUSH32(esp, 0xC2C80000u);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    goto loc_001D1D9F;

loc_001D1D7E: ;
    fp_push((double)SMEM32(esi + 0x20)); /* fild */
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + 0x20;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x1C)); /* fild */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x18)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);

loc_001D1D9F: ;
    PUSH32(esp, 0x001D1DA4u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BB60 */

loc_001D1DA4: ;
    SET_LO8(eax, MEM8(esi + 0x58));
    edi = MEM32(esp + 0x7C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1DE8; /* jne: not equal / not zero */

loc_001D1DB2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1DE8; /* jle: less or equal (signed <=) */

loc_001D1DB6: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x5CE880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5CE880;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1DD3u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00107EE0u, sub_00107EE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00107EE0 */

loc_001D1DD3: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1DE5u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00170900u, sub_00170900); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00170900 */

loc_001D1DE5: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D1DE8: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = 0x510040;
    PUSH32(esp, 0x001D1DFBu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016C550u, sub_0016C550); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0016C550 */

loc_001D1DFB: ;
    ebp = eax;
    eax = MEM32(0x6FC92C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1E28; /* je: equal / zero */

loc_001D1E06: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D1E1Bu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00197010u, sub_00197010); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00197010 */

loc_001D1E1B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6FC92C) = 0;

loc_001D1E28: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1E38; /* jne: not equal / not zero */

loc_001D1E2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 8 */

loc_001D1E38: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x58), 1 (8-bit) */
    eax = MEM32(ebp + 0x31C);
    MEM32(esp + 0x64) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001D1E64; /* jne: not equal / not zero */

loc_001D1E48: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1E64; /* jne: not equal / not zero */

loc_001D1E4E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1E64; /* je: equal / zero */

loc_001D1E52: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3238);
    ecx = MEM32(edi + 0x5CE914);
    MEM32(eax + 0x94) = ecx;

loc_001D1E64: ;
    edi = MEM32(ebp + 0xCC);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xEC);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0xEA);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001D1E81u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001915D0u, sub_001915D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001915D0 */

loc_001D1E81: ;
    ecx = edi;
    PUSH32(esp, 0x001D1E88u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0018F8B0u, sub_0018F8B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0018F8B0 */

loc_001D1E88: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001D1E94u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00190D00u, sub_00190D00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00190D00 */

loc_001D1E94: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1EA9; /* je: equal / zero */

loc_001D1E9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1EA9; /* je: equal / zero */

loc_001D1EA1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D1EA9u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1EA6u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001D1EA9: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1EB7; /* je: equal / zero */

loc_001D1EB1: ;
    MEM32(edi + 0x1E8) = eax;

loc_001D1EB7: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1ECA; /* je: equal / zero */

loc_001D1EBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(edi + 0x204) = LO8(eax);

loc_001D1ECA: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1EDA; /* je: equal / zero */

loc_001D1ED4: ;
    MEM32(edi + 0x1EC) = eax;

loc_001D1EDA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1EE1u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001836C0 */

loc_001D1EE1: ;
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F1D; /* je: equal / zero */

loc_001D1EEC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1EF3u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001836C0 */

loc_001D1EF3: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(eax + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D1F42; /* jge: greater or equal (signed >=) */

loc_001D1F00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1F07u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001836C0 */

loc_001D1F07: ;
    edx = MEM32(edi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0xD0);
    SET_LO16(edx, MEM16(eax + 0x28));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001D1F35;

loc_001D1F1D: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F42; /* je: equal / zero */

loc_001D1F24: ;
    eax = MEM32(edi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xD0);
    SET_LO16(edx, MEM16(esi + 0x70));

loc_001D1F35: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2120);
    MEM16(ecx + 0x69ACFC) = LO16(edx);

loc_001D1F42: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F5A; /* je: equal / zero */

loc_001D1F4A: ;
    MEM32(edi + 0xF8) = eax;
    MEM32(edi + 0xFC) = 0;

loc_001D1F5A: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F79; /* je: equal / zero */

loc_001D1F60: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001D1F67u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1F64u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001D1F67: ;
    eax = eax & 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1F79; /* jne: not equal / not zero */

loc_001D1F6E: ;
    SET_LO16(ecx, MEM16(esi + 0x10));
    MEM16(edi + 0x210) = LO16(ecx);

loc_001D1F79: ;
    ecx = MEM32(esi + 4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1FA5; /* je: equal / zero */

loc_001D1F83: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1FA5; /* je: equal / zero */

loc_001D1F8A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, LO16(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    ecx = edi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1F9Eu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001911D0u, sub_001911D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001911D0 */

loc_001D1F9E: ;
    ecx = edi;
    PUSH32(esp, 0x001D1FA5u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0018F8B0u, sub_0018F8B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0018F8B0 */

loc_001D1FA5: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = 0x6997D8;
    PUSH32(esp, 0x001D1FB4u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001962C0u, sub_001962C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001962C0 */

loc_001D1FB4: ;
    MEM32(ebp + 0x84) = eax;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x6997D8;
    PUSH32(esp, 0x001D1FCBu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00196570u, sub_00196570); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00196570 */

loc_001D1FCB: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(ebp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6997D8;
    PUSH32(esp, 0x001D1FE0u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001965B0u, sub_001965B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001965B0 */

loc_001D1FE0: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(ebp + 0x84);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6997D8;
    PUSH32(esp, 0x001D1FF9u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00196040u, sub_00196040); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00196040 */

loc_001D1FF9: ;
    PUSH32(esp, 0x001D1FFEu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00013BDEu, sub_00013BDE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00013BDE */

loc_001D1FFE: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xD0);
    edx = MEM32(eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3238);
    _fb = (uint32_t)(0x5CE880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5CE880;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001D2019u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2016u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001D2019: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2042; /* je: equal / zero */

loc_001D2020: ;
    MEM8(edi + 0x198) = 1;
    fp_push((double)SMEM32(esi + 0x30)); /* fild */
    MEMF(edi + 0x19C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x34)); /* fild */
    MEMF(edi + 0x1A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x38)); /* fild */
    MEMF(edi + 0x1A4) = (float)fp_top(); fp_pop(); /* fstp */

loc_001D2042: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D205B; /* je: equal / zero */

loc_001D204A: ;
    MEM32(ebp + 0x370) = eax;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x001D205Bu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00153CD0u, sub_00153CD0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00153CD0 */

loc_001D205B: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2069; /* je: equal / zero */

loc_001D2063: ;
    MEM32(edi + 0x1D8) = eax;

loc_001D2069: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D207D; /* je: equal / zero */

loc_001D2070: ;
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = 0;

loc_001D207D: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ebp = MEM32(esp + 0x64);
    MEM32(esp + 0x68) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D2097; /* je: equal / zero */

loc_001D208D: ;
    fp_push((double)SMEM32(esp + 0x68)); /* fild */
    MEMF(ebp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */

loc_001D2097: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x64) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D20AC; /* jle: less or equal (signed <=) */

loc_001D20A2: ;
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    MEMF(edi + 0x200) = (float)fp_top(); fp_pop(); /* fstp */

loc_001D20AC: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D218A; /* je: equal / zero */

loc_001D20B8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D218A; /* je: equal / zero */

loc_001D20C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D20E5; /* jne: not equal / not zero */

loc_001D20C6: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x370);
    eax = MEM32(ebx + 0x5B257C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D21AE; /* je: equal / zero */

loc_001D20DA: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    goto loc_001D21A6;

loc_001D20E5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2109; /* jne: not equal / not zero */

loc_001D20EA: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x370);
    eax = MEM32(ebx + 0x5B2580);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D21AE; /* je: equal / zero */

loc_001D20FE: ;
    ecx = MEM32(ebp + 0x68);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    goto loc_001D21A6;

loc_001D2109: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2125; /* jne: not equal / not zero */

loc_001D210E: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x370);
    eax = MEM32(ebx + 0x5B2650);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D21AE; /* je: equal / zero */

loc_001D2122: ;
    PUSH32(esp, eax);
    goto loc_001D21A1;

loc_001D2125: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2142; /* jne: not equal / not zero */

loc_001D212A: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x370);
    eax = MEM32(ebx + 0x5B2654);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D21AE; /* je: equal / zero */

loc_001D213A: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    goto loc_001D21A6;

loc_001D2142: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D215F; /* jne: not equal / not zero */

loc_001D2147: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x370);
    eax = MEM32(ebx + 0x5B2658);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D21AE; /* je: equal / zero */

loc_001D2157: ;
    ecx = MEM32(ebp + 0x68);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    goto loc_001D21A6;

loc_001D215F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2181; /* jne: not equal / not zero */

loc_001D2164: ;
    edx = MEM32(0x6FC900);
    eax = MEM32(ebp + 0x68);
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2175u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00176270u, sub_00176270); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00176270 */

loc_001D2175: ;
    MEM32(ebp + 0x1E04) = 4;
    goto loc_001D21AB;

loc_001D2181: ;
    ecx = MEM32(esi * 4 + 0x6FC8E0);
    goto loc_001D21A0;

loc_001D218A: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x370);
    eax = MEM32(ebx + 0x5B2578);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D213A; /* jne: not equal / not zero */

loc_001D219A: ;
    ecx = MEM32(0x6FC8F0);

loc_001D21A0: ;
    PUSH32(esp, ecx);

loc_001D21A1: ;
    edx = MEM32(ebp + 0x68);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);

loc_001D21A6: ;
    PUSH32(esp, 0x001D21ABu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00176270u, sub_00176270); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00176270 */

loc_001D21AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D21AE: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp + 0x80) = eax;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x68);
    MEM32(ebp + 0x84) = ecx;
    edx = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = 0x67CF20;
    MEM32(ebp + 0x88) = edx;
    MEM32(ebp + 0x1E04) = 6;
    MEM16(ebp + 0x27C0) = 1;
    PUSH32(esp, 0x001D21EEu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00162360u, sub_00162360); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00162360 */

loc_001D21EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D21F6u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0018AF50u, sub_0018AF50); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0018AF50 */

loc_001D21F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D21FFu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0001682Fu, sub_0001682F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0001682F */

loc_001D21FF: ;
    ecx = eax;
    PUSH32(esp, 0x001D2206u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000154D9u, sub_000154D9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000154D9 */

loc_001D2206: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 8 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2220
 * Original: 0x001D2220 - 0x001D2235 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2220(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2220: ;
    eax = MEM32(0x6FC928);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = 0x6DBFB0;
    PUSH32(esp, 0x001D2234u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D2600u, sub_001D2600); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D2600 */

loc_001D2234: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2240
 * Original: 0x001D2240 - 0x001D227B (59 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2240(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2240: ;
    eax = ZX16(MEM16(ecx + 0x20920));
    edx = ZX16(MEM16(ecx + 0x20922));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x17);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x2091C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = ZX16(MEM16(eax + ecx + 0x72));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(0x5CE878)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5CE878), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D2278; /* jae: above or equal (unsigned >=) */

loc_001D226B: ;
    _fa = (uint32_t)(MEM16(ecx + 0x2092C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x2092C), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2278; /* jne: not equal / not zero */

loc_001D2275: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D2278: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2280
 * Original: 0x001D2280 - 0x001D22A3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2280(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2280: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B1B6C);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B1B5C;
    PUSH32(esp, 0x001D2298u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001D2298: ;
    ecx = eax;
    PUSH32(esp, 0x001D229Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001D229F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D22B0
 * Original: 0x001D22B0 - 0x001D22B5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D22B0: ;
    SET_LO8(eax, 1);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D22C0
 * Original: 0x001D22C0 - 0x001D22CD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D22C0: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001D22CAu); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016C9B0u, sub_0016C9B0); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016C9B0 */

loc_001D22CA: ;
    esp += 16; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D22D0
 * Original: 0x001D22D0 - 0x001D22F3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D22D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B1B88);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B1B78;
    PUSH32(esp, 0x001D22E8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001D22E8: ;
    ecx = eax;
    PUSH32(esp, 0x001D22EFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001D22EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2300
 * Original: 0x001D2300 - 0x001D2317 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2300(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2300: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    ecx = 0x510040;
    PUSH32(esp, 0x001D2314u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016C890u, sub_0016C890); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016C890 */

loc_001D2314: ;
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2320
 * Original: 0x001D2320 - 0x001D2343 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2320(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2320: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B1BA8);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B1B98;
    PUSH32(esp, 0x001D2338u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001D2338: ;
    ecx = eax;
    PUSH32(esp, 0x001D233Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001D233F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2350
 * Original: 0x001D2350 - 0x001D2355 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2350(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2350: ;
    SET_LO8(eax, 1);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2360
 * Original: 0x001D2360 - 0x001D2383 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2360(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B1BC4);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B1BB4;
    PUSH32(esp, 0x001D2378u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001D2378: ;
    ecx = eax;
    PUSH32(esp, 0x001D237Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001D237F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2390
 * Original: 0x001D2390 - 0x001D2395 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2390(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2390: ;
    SET_LO8(eax, 1);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D23A0
 * Original: 0x001D23A0 - 0x001D23C3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D23A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D23A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B1BE0);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B1BD0;
    PUSH32(esp, 0x001D23B8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001D23B8: ;
    ecx = eax;
    PUSH32(esp, 0x001D23BFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001D23BF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D23D0
 * Original: 0x001D23D0 - 0x001D23D5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D23D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D23D0: ;
    SET_LO8(eax, 1);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D23E0
 * Original: 0x001D23E0 - 0x001D23E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D23E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D23E0: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D23F0
 * Original: 0x001D23F0 - 0x001D25F8 (520 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D23F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D23F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2092A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D25F6; /* je: equal / zero */

loc_001D2401: ;
    PUSH32(esp, edi);

loc_001D2402: ;
    eax = ZX16(MEM16(esi + 0x20920));
    ecx = ZX16(MEM16(esi + 0x20922));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x17);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x2091C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edx = ZX16(MEM16(eax + esi + 0x72));
    eax = MEM32(0x5CE878);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D243C; /* jae: above or equal (unsigned >=) */

loc_001D242E: ;
    _fa = (uint32_t)(MEM16(esi + 0x2092C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2092C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D25F5; /* je: equal / zero */

loc_001D243C: ;
    ecx = MEM32(esi + 0x20924);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2452; /* je: equal / zero */

loc_001D2446: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D244Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00195F10u, sub_00195F10); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00195F10 */

loc_001D244D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D24A4; /* jne: not equal / not zero */

loc_001D2452: ;
    eax = ZX16(MEM16(esi + 0x20920));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA6C);
    ecx = MEM32(eax + esi + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D2472u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D1B80u, sub_001D1B80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D1B80 */

loc_001D2472: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x20924) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D25F5; /* je: equal / zero */

loc_001D2480: ;
    edx = ZX16(MEM16(esi + 0x20920));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xA6C);
    ecx = MEM32(edx + esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D249Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D249A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x001D24A4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000167EEu, sub_000167EE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000167EE */

loc_001D24A4: ;
    edx = ZX16(MEM16(esi + 0x20920));
    eax = ZX16(MEM16(esi + 0x20922));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x17);
    ecx = ZX16(MEM16(esi + 0x20928));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    PUSH32(esp, ecx);
    edi = edx + esi + 0x18;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D24CEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D1D40u, sub_001D1D40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D1D40 */

loc_001D24CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D253F; /* je: equal / zero */

loc_001D24D2: ;
    ecx = MEM32(esi + 0x20924);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D24DEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0019CC10u, sub_0019CC10); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0019CC10 */

loc_001D24DE: ;
    MEM16(esi + 0x20922) = MEM16(esi + 0x20922) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x20922)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esi + 0x20924);
    SET_LO16(eax, MEM16(esi + 0x20920));
    MEM16(edx + 0xA8) = LO16(eax);
    ecx = ZX16(MEM16(esi + 0x20920));
    eax = ZX16(MEM16(esi + 0x20922));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA6C);
    edx = (uint32_t)(int32_t)SMEM16(ecx + esi + 0xA68);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2402; /* jne: not equal / not zero */

loc_001D251D: ;
    ecx = MEM32(esi + 0x20924);
    MEM8(esi + 0x2092A) = 0;
    _fa = (uint32_t)(MEM16(ecx + 0xA0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xA0), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D25E3; /* je: equal / zero */

loc_001D2538: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_0019C910(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x0019C910 */

loc_001D253F: ;
    ecx = ZX16(MEM16(esi + 0x20920));
    MEM16(esi + 0x20922) = MEM16(esi + 0x20922) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x20922)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA6C);
    SET_LO16(eax, MEM16(esi + 0x20922));
    edx = (uint32_t)(int32_t)SMEM16(ecx + esi + 0xA68);
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D25B1; /* je: equal / zero */

loc_001D2569: ;
    /* nop */

loc_001D2570: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D257Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D1D40u, sub_001D1D40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D1D40 */

loc_001D257A: ;
    MEM16(esi + 0x20922) = MEM16(esi + 0x20922) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x20922)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2591; /* je: equal / zero */

loc_001D2585: ;
    ecx = MEM32(esi + 0x20924);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2591u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0019CC10u, sub_0019CC10); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0019CC10 */

loc_001D2591: ;
    ecx = ZX16(MEM16(esi + 0x20920));
    eax = ZX16(MEM16(esi + 0x20922));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA6C);
    edx = (uint32_t)(int32_t)SMEM16(ecx + esi + 0xA68);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2570; /* jne: not equal / not zero */

loc_001D25B1: ;
    ecx = MEM32(esi + 0x20924);
    SET_LO16(edx, MEM16(esi + 0x20920));
    MEM16(ecx + 0xA8) = LO16(edx);
    ecx = MEM32(esi + 0x20924);
    MEM8(esi + 0x2092A) = 0;
    _fa = (uint32_t)(MEM16(ecx + 0xA0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xA0), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D25E3; /* je: equal / zero */

loc_001D25DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_0019C910(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x0019C910 */

loc_001D25E3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D25EBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D25EB: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D25F5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00184860u, sub_00184860); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00184860 */

loc_001D25F5: ;
    POP32(esp, edi);

loc_001D25F6: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2600
 * Original: 0x001D2600 - 0x001D2701 (257 bytes, 71 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2600: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA6C);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi;
    MEM32(0x713924) = 0xFFFFFFFFu;
    MEM32(0x6FC928) = ebp;
    _fa = (uint32_t)(MEM16(edi + 0xA68)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xA68), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D269B; /* je: equal / zero */

loc_001D262E: ;
    SET_LO8(eax, MEM8(edi + 0xA6A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D269B; /* je: equal / zero */

loc_001D2638: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D263Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0019C270u, sub_0019C270); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0019C270 */

loc_001D263E: ;
    SET_LO8(eax, MEM8(esi + 0x2092A));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D267D; /* je: equal / zero */

loc_001D264B: ;
    ecx = esi;
    MEM16(esi + 0x2092C) = 1;
    PUSH32(esp, 0x001D265Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D23F0u, sub_001D23F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D23F0 */

loc_001D265B: ;
    SET_LO8(eax, MEM8(esi + 0x2092A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM16(esi + 0x2092C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D267D; /* je: equal / zero */

loc_001D266E: ;
    ecx = MEM32(esi + 0x20924);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D267D; /* je: equal / zero */

loc_001D2678: ;
    PUSH32(esp, 0x001D267Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0019C910u, sub_0019C910); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0019C910 */

loc_001D267D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D268Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D1B80u, sub_001D1B80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D1B80 */

loc_001D268F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D26A3; /* jne: not equal / not zero */

loc_001D2695: ;
    MEM8(esi + 0x2092A) = LO8(eax);

loc_001D269B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

loc_001D26A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D26AAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001D26AA: ;
    SET_LO8(ecx, MEM8(eax + 0x32F));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D26BE; /* je: equal / zero */

loc_001D26B7: ;
    MEM32(edi + 0x48) = 0x1D2220;

loc_001D26BE: ;
    eax = MEM32(0x5CE878);
    SET_LO16(ecx, MEM16(esp + 0x18));
    MEM16(esi + 0x20928) = LO16(ecx);
    ecx = esi;
    MEM32(esi + 0x2091C) = eax;
    MEM8(esi + 0x2092A) = 1;
    MEM16(esi + 0x20920) = LO16(ebp);
    MEM16(esi + 0x20922) = 0;
    MEM32(esi + 0x20924) = edi;
    PUSH32(esp, 0x001D26F9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D23F0u, sub_001D23F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D23F0 */

loc_001D26F9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2710
 * Original: 0x001D2710 - 0x001D2737 (39 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2710: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 4) = edx;
    ecx = 0x6DBFB0;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); sub_001D2600(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001D2600 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2740
 * Original: 0x001D2740 - 0x001D2776 (54 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2740: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3238);
    edx = MEM32(ecx + 0x5D1B20);
    ecx = MEM32(eax + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 4) = edx;
    ecx = 0x6DBFB0;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); sub_001D2600(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001D2600 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2780
 * Original: 0x001D2780 - 0x001D27A6 (38 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2780: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 4) = edx;
    ecx = 0x6DBFB0;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); sub_001D2600(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001D2600 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D27B0
 * Original: 0x001D27B0 - 0x001D2804 (84 bytes, 22 insns)
 * Category: game_debug
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D27B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D27B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D27B6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102CE0 */

loc_001D27B6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D27BDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102D00 */

loc_001D27BD: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001D27F4; /* jne: not equal / not zero */

loc_001D27D6: ;
    PUSH32(esp, 0x45);
    PUSH32(esp, 0x4B1C80);
    PUSH32(esp, 0x4B1C5C);
    PUSH32(esp, 0x4B1C38);
    PUSH32(esp, 0x4B1BF0);
    PUSH32(esp, 0x001D27F1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001D27F1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D27F4: ;
    PUSH32(esp, 0x001D27F9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102CA0 */

loc_001D27F9: ;
    eax = MEM32(esi * 4 + 0x514DB0);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2810
 * Original: 0x001D2810 - 0x001D28CA (186 bytes, 57 insns)
 * Category: game_debug
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2810(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D2810: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D2817u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102CE0 */

loc_001D2817: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D281Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102D00 */

loc_001D281E: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001D2851; /* jne: not equal / not zero */

loc_001D2833: ;
    PUSH32(esp, 0x59);
    PUSH32(esp, 0x4B1D4C);
    PUSH32(esp, 0x4B1C5C);
    PUSH32(esp, 0x4B1D40);
    PUSH32(esp, 0x4B1D0C);
    PUSH32(esp, 0x001D284Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001D284E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2851: ;
    PUSH32(esp, 0x001D2856u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102CA0 */

loc_001D2856: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D2860;

    /* nop */

loc_001D2860: ;
    eax = 1;
    ecx = esi;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001D2876; /* jne: not equal / not zero */

loc_001D286D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001D2860; /* jl: less (signed <) */

loc_001D2876: ;
    PUSH32(esp, 0x001D287Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102CE0 */

loc_001D287B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D2882u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102D00 */

loc_001D2882: ;
    edx = 1;
    ecx = esi;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x50FF48) = LO8(edx);
    if ((_fa != 0)) goto loc_001D28BE; /* jne: not equal / not zero */

loc_001D28A0: ;
    PUSH32(esp, 0x6D);
    PUSH32(esp, 0x4B1D4C);
    PUSH32(esp, 0x4B1C5C);
    PUSH32(esp, 0x4B1CF0);
    PUSH32(esp, 0x4B1CA0);
    PUSH32(esp, 0x001D28BBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001D28BB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D28BE: ;
    PUSH32(esp, 0x001D28C3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00102CA0 */

loc_001D28C3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D28D0
 * Original: 0x001D28D0 - 0x001D2906 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D28D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D28D0: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A08A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a08a4] */
    fp_push(MEMF(ecx)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D28EE; /* jne: not equal / not zero */

loc_001D28E5: ;
    fp_top() = fp_top() - MEMF(0x49E43C); /* fsub dword ptr [0x49e43c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001D28EE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A08A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a08a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D2905; /* jp: parity */

loc_001D28FB: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() + MEMF(0x49E43C); /* fadd dword ptr [0x49e43c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_001D2905: ;
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2910
 * Original: 0x001D2910 - 0x001D2998 (136 bytes, 43 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D2910(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2910: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49E43C); /* fmul dword ptr [0x49e43c] */
    fp_top() = fp_top() * MEMF(0x49E438); /* fmul dword ptr [0x49e438] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A08A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a08a4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D2940; /* jne: not equal / not zero */

loc_001D2938: ;
    fp_top() = fp_top() - MEMF(0x49E43C); /* fsub dword ptr [0x49e43c] */
    goto loc_001D2957;

loc_001D2940: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A08A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a08a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D295B; /* jp: parity */

loc_001D294D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x49E43C); /* fadd dword ptr [0x49e43c] */

loc_001D2957: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_001D295B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2965u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010D0C0u, sub_0010D0C0); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010D0C0 */

loc_001D2965: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496B98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x496b98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D2992; /* je: equal / zero */

loc_001D2981: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49CE34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49ce34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D2994; /* jnp: not parity */

loc_001D298E: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001D2992: ;
    fp_pop(); /* fstp st(0) */

loc_001D2994: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D29A0
 * Original: 0x001D29A0 - 0x001D29C3 (35 bytes, 11 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D29A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D29A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x506310);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x4B1D70);
    PUSH32(esp, 0x4A22EC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D29BFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001050A0 */

loc_001D29BF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D29D0
 * Original: 0x001D29D0 - 0x001D29F1 (33 bytes, 10 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D29D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D29D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x506310);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x4B1D9C);
    PUSH32(esp, 0x4A22EC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D29EDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_001D29ED: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2A00
 * Original: 0x001D2A00 - 0x001D2A08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2A00: ;
    MEM32(ecx + 0x58) = 0;
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2A10
 * Original: 0x001D2A10 - 0x001D2A3B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D2A10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2A10: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2A40
 * Original: 0x001D2A40 - 0x001D2A61 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2A40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2A70
 * Original: 0x001D2A70 - 0x001D2A9B (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2A70: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2A8E; /* jge: greater or equal (signed >=) */

loc_001D2A7A: ;
    edx = ecx + eax * 4 + 4;
    edi = edi;

loc_001D2A80: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2A92; /* jne: not equal / not zero */

loc_001D2A85: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2A80; /* jl: less (signed <) */

loc_001D2A8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D2A92: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = esi;
    eax = MEM32(ecx + eax * 4 + 4);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2AA0
 * Original: 0x001D2AA0 - 0x001D2ACC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2AA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2AA0: ;
    MEM32(ecx) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 4;
    goto loc_001D2AB0;

    /* nop */

loc_001D2AB0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2AC1; /* jne: not equal / not zero */

loc_001D2AB5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2AB0; /* jl: less (signed <) */

loc_001D2ABE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D2AC1: ;
    MEM32(ecx) = 1;
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2AD0
 * Original: 0x001D2AD0 - 0x001D2AF1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2AD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2AD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 4;

loc_001D2AD5: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2AE6; /* je: equal / zero */

loc_001D2ADA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2AD5; /* jl: less (signed <) */

loc_001D2AE3: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D2AE6: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = edx;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2B00
 * Original: 0x001D2B00 - 0x001D2B2D (45 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 4;
    /* nop */

loc_001D2B10: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B21; /* je: equal / zero */

loc_001D2B14: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2B10; /* jl: less (signed <) */

loc_001D2B1D: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D2B21: ;
    MEM32(ecx + eax * 4 + 4) = 0;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2B30
 * Original: 0x001D2B30 - 0x001D2B57 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B30: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001D2B40: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B52; /* je: equal / zero */

loc_001D2B44: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2B40; /* jl: less (signed <) */

loc_001D2B4D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D2B52: ;
    SET_LO8(eax, 1);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2B60
 * Original: 0x001D2B60 - 0x001D2B84 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B60: ;
    ecx = MEM32(esp + 4);
    eax = 0x6FC938;
    /* nop */

loc_001D2B70: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B81; /* je: equal / zero */

loc_001D2B74: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6FC960) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6FC960 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2B70; /* jl: less (signed <) */

loc_001D2B7E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D2B81: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2B90
 * Original: 0x001D2B90 - 0x001D2BB8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2BA2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00202B20 */

loc_001D2BA2: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001D2BB7; /* jne: not equal / not zero */

loc_001D2BB1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D2BB7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2BB5u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D2BB7: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2BC0
 * Original: 0x001D2BC0 - 0x001D2C35 (117 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2BC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2BC0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2C2E; /* je: equal / zero */

loc_001D2BCD: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D2BE5u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00161BC0u, sub_00161BC0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00161BC0 */

loc_001D2BE5: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    edx = MEM32(edi + 0x54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49E578); /* fmul dword ptr [0x49e578] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x001D2C18u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2C15u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001D2C18: ;
    eax = MEM32(edi + 0x58);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    if ((_fa != 0)) goto loc_001D2C2E; /* jne: not equal / not zero */

loc_001D2C22: ;
    MEM32(edi + 0x5C) = MEM32(edi + 0x5C) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2C2E; /* jne: not equal / not zero */

loc_001D2C27: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001D2C2E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2C40
 * Original: 0x001D2C40 - 0x001D2C8D (77 bytes, 26 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2C52u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00202B20 */

loc_001D2C52: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    if ((_fa != 0)) goto loc_001D2C65; /* jne: not equal / not zero */

loc_001D2C5F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D2C65u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2C63u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D2C65: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D2C87; /* je: equal / zero */

loc_001D2C6C: ;
    eax = MEM32(0x506310);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x4B1D9C);
    PUSH32(esp, 0x4A22EC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2C84u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_001D2C84: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2C87: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2C90
 * Original: 0x001D2C90 - 0x001D2DA9 (281 bytes, 75 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2C90: ;
    MEM32(0x6FC934) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D2CA0: ;
    ecx = MEM32(eax * 4 + 0x6FC938);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2CD3; /* jne: not equal / not zero */

loc_001D2CAB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2CA0; /* jl: less (signed <) */

loc_001D2CB1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2CB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D2D69; /* je: equal / zero */

loc_001D2CBE: ;
    edi = edi;

loc_001D2CC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2CC2: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x6FC938)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x6FC938), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2CE6; /* je: equal / zero */

loc_001D2CCB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2CC2; /* jl: less (signed <) */

loc_001D2CD1: ;
    goto loc_001D2CF1;

loc_001D2CD3: ;
    MEM32(0x6FC934) = 1;
    eax = MEM32(eax * 4 + 0x6FC938);
    goto loc_001D2CB3;

loc_001D2CE6: ;
    MEM32(eax * 4 + 0x6FC938) = 0;

loc_001D2CF1: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2D00u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00202B20 */

loc_001D2D00: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2D14; /* jne: not equal / not zero */

loc_001D2D0E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D2D14u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2D12u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D2D14: ;
    eax = MEM32(0x506310);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x4B1D9C);
    PUSH32(esp, 0x4A22EC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2D2Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_001D2D2C: ;
    ecx = MEM32(0x6FC934);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    eax = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001D2D69; /* jge: greater or equal (signed >=) */

loc_001D2D3C: ;
    /* nop */

loc_001D2D40: ;
    edx = MEM32(eax * 4 + 0x6FC938);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2D53; /* jne: not equal / not zero */

loc_001D2D4B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2D40; /* jl: less (signed <) */

loc_001D2D51: ;
    goto loc_001D2D69;

loc_001D2D53: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6FC934) = ecx;
    esi = MEM32(eax * 4 + 0x6FC938);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2CC0; /* jne: not equal / not zero */

loc_001D2D69: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6FC938) = ecx;
    MEM32(0x6FC93C) = ecx;
    MEM32(0x6FC940) = ecx;
    MEM32(0x6FC944) = ecx;
    MEM32(0x6FC948) = ecx;
    MEM32(0x6FC94C) = ecx;
    MEM32(0x6FC950) = ecx;
    MEM32(0x6FC954) = ecx;
    MEM32(0x6FC958) = ecx;
    MEM32(0x6FC95C) = ecx;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2DB0
 * Original: 0x001D2DB0 - 0x001D2E19 (105 bytes, 33 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2DB7: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x6FC938)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x6FC938), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2DC8; /* je: equal / zero */

loc_001D2DC0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2DB7; /* jl: less (signed <) */

loc_001D2DC6: ;
    goto loc_001D2DD3;

loc_001D2DC8: ;
    MEM32(eax * 4 + 0x6FC938) = 0;

loc_001D2DD3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2E15; /* je: equal / zero */

loc_001D2DD7: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2DE6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00202B20 */

loc_001D2DE6: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2DFA; /* jne: not equal / not zero */

loc_001D2DF4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D2DFAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2DF8u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D2DFA: ;
    eax = MEM32(0x506310);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x4B1D9C);
    PUSH32(esp, 0x4A22EC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2E12u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_001D2E12: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2E15: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2E20
 * Original: 0x001D2E20 - 0x001D2E3E (30 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D2E20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2E40
 * Original: 0x001D2E40 - 0x001D2E65 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2E40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D2E70
 * Original: 0x001D2E70 - 0x001D3024 (436 bytes, 142 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D2E70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2E70: ;
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    fp_top() = fp_top() + MEMF(ecx + 0x28); /* fadd dword ptr [ecx + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D2ED2; /* jne: not equal / not zero */

loc_001D2E8C: ;
    fp_top() = fp_top() + MEMF(0x496454); /* fadd dword ptr [0x496454] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(0x496B98); /* fmul dword ptr [0x496b98] */
    fp_push(MEMF(0x496B98)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x18); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x18); /* fsub dword ptr [ecx + 0x18] */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x20); /* fsub dword ptr [ecx + 0x20] */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    goto loc_001D2F9F;

loc_001D2ED2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D2EE7; /* jne: not equal / not zero */

loc_001D2EE0: ;
    edx = 1;
    goto loc_001D2EE9;

loc_001D2EE7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2EE9: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    eax = edx + edx * 4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + eax * 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + eax*4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D2EFE; /* jne: not equal / not zero */

loc_001D2EF9: ;
    edx = 2;

loc_001D2EFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx * 4 + 0x514E30);
    eax = edx + edx * 4;
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() + MEMF(0x496454); /* fadd dword ptr [0x496454] */
    edi = MEM32(esi * 4 + 0x514E30);
    eax = edi + edi * 4;
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    ebx = esi + esi * 4;
    fp_top() = fp_top() + MEMF(ecx + ebx * 4); /* fadd dword ptr [ecx + ebx*4] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D2F54; /* jnp: not parity */

loc_001D2F48: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x496B98)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x24); /* fdiv dword ptr [esp + 0x24] */

loc_001D2F54: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = edx + esi * 4;
    fp_top() = fp_top() * MEMF(0x496B98); /* fmul dword ptr [0x496b98] */
    ebx = esi + edx * 4;
    MEMF(esp + edx * 4 + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    eax = edx + edi * 4;
    fp_top() = fp_top() + MEMF(ecx + ebx * 4); /* fadd dword ptr [ecx + ebx*4] */
    edx = edi + edx * 4;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + esi * 4 + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    eax = esi + edi * 4;
    fp_top() = fp_top() + MEMF(ecx + edx * 4); /* fadd dword ptr [ecx + edx*4] */
    edx = edi + esi * 4;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + edi * 4 + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    POP32(esp, esi);
    fp_top() = fp_top() - MEMF(ecx + edx * 4); /* fsub dword ptr [ecx + edx*4] */
    POP32(esp, ebx);
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_001D2F9F: ;
    fp_push(MEMF(esp)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x4AD3C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D2FEF; /* jnp: not parity */

loc_001D2FCD: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A853C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a853c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D300F; /* jp: parity */

loc_001D2FDE: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D300F; /* jne: not equal / not zero */

loc_001D2FEF: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x496454) / fp_top(); /* fdivr dword ptr [0x496454] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_stack[(g_fp_top + 4) & 7] = g_fp_stack[(g_fp_top + 4) & 7] * fp_top(); fp_pop(); /* fmulp st(4) */

loc_001D300F: ;
    eax = MEM32(esp + 0x14);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D3030
 * Original: 0x001D3030 - 0x001D312B (251 bytes, 72 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3030(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3030: ;
    _fa = (uint32_t)(MEM32(0x699DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x699DDC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D312A; /* je: equal / zero */

loc_001D303D: ;
    MEM32(0x6FC934) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D3050: ;
    ecx = MEM32(eax * 4 + 0x6FC938);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3091; /* jne: not equal / not zero */

loc_001D305B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3050; /* jl: less (signed <) */

loc_001D3061: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D3063: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D3129; /* je: equal / zero */

loc_001D306E: ;
    edi = edi;

loc_001D3070: ;
    ecx = esi;
    PUSH32(esp, 0x001D3077u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D2BC0u, sub_001D2BC0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D2BC0 */

loc_001D3077: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D30ED; /* je: equal / zero */

loc_001D307B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D3080: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x6FC938)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x6FC938), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D30A4; /* je: equal / zero */

loc_001D3089: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3080; /* jl: less (signed <) */

loc_001D308F: ;
    goto loc_001D30AF;

loc_001D3091: ;
    MEM32(0x6FC934) = 1;
    eax = MEM32(eax * 4 + 0x6FC938);
    goto loc_001D3063;

loc_001D30A4: ;
    MEM32(eax * 4 + 0x6FC938) = 0;

loc_001D30AF: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D30BEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00202B20 */

loc_001D30BE: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D30D2; /* jne: not equal / not zero */

loc_001D30CC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D30D2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D30D0u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D30D2: ;
    eax = MEM32(0x506310);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x4B1D9C);
    PUSH32(esp, 0x4A22EC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D30EAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_001D30EA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D30ED: ;
    ecx = MEM32(0x6FC934);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    eax = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001D3129; /* jge: greater or equal (signed >=) */

loc_001D30FA: ;
    /* nop */

loc_001D3100: ;
    edx = MEM32(eax * 4 + 0x6FC938);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3113; /* jne: not equal / not zero */

loc_001D310B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3100; /* jl: less (signed <) */

loc_001D3111: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D3113: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6FC934) = ecx;
    esi = MEM32(eax * 4 + 0x6FC938);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3070; /* jne: not equal / not zero */

loc_001D3129: ;
    POP32(esp, esi);

loc_001D312A: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3130
 * Original: 0x001D3130 - 0x001D31D0 (160 bytes, 50 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3130(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D3130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D313Fu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00161C20u, sub_00161C20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00161C20 */

loc_001D313F: ;
    fp_push(MEMF(edi + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(edi + 0x34)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    edx = MEM32(esp + 0x28);
    fp_push(MEMF(edi + 0x30)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    POP32(esp, edi);
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x3C) = ecx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x4C) = ecx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax);
    MEM32(esi + 0x50) = eax;
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x60) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x64) = edx;
    MEM32(esi + 0x6C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 32; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 28 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D31D0
 * Original: 0x001D31D0 - 0x001D334E (382 bytes, 119 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D31D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D31D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCA49);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D31FFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00166DC0u, sub_00166DC0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00166DC0 */

loc_001D31FF: ;
    edi = MEM32(ebp + 8);
    eax = esp + 0x40;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0xE4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3218u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D2E70u, sub_001D2E70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D2E70 */

loc_001D3218: ;
    ecx = MEM32(edi + 0x64);
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(edi + 0x68);
    MEM32(esi + 0x54) = edx;
    ecx = MEM32(edi + 0x6C);
    edx = esp + 0x18;
    MEM32(esi + 0x60) = ecx;
    ecx = MEM32(edi + 0x60);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3249u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00278120u, sub_00278120); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00278120 */

loc_001D3249: ;
    ecx = MEM32(0x62EBAC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    MEM8(esp + 0xC8) = 4;
    edx = MEM32(ecx);
    PUSH32(esp, 0xA0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D3266u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3263u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D3266: ;
    MEM16(eax + 4) = 0xA0;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0xE0) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3284u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00205C60u, sub_00205C60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00205C60 */

loc_001D3284: ;
    ebx = eax;
    ecx = ebx;
    MEM8(esp + 0xDC) = 0;
    MEM32(esi + 0xC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3298u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F9DD0 */

loc_001D3298: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D32AA; /* jne: not equal / not zero */

loc_001D329C: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D32AA; /* je: equal / zero */

loc_001D32A3: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D32AAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F9DE0 */

loc_001D32AA: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    eax = edi + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001D32B6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D32B3u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D32B6: ;
    ebx = MEM32(esi + 0xC);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D32C0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F9DD0 */

loc_001D32C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D32D2; /* jne: not equal / not zero */

loc_001D32C4: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D32D2; /* je: equal / zero */

loc_001D32CB: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D32D2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F9DE0 */

loc_001D32D2: ;
    ebx = MEM32(ebx + 0x3C);
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001D32E0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D32DDu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D32E0: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D32EBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00206580u, sub_00206580); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00206580 */

loc_001D32EB: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3304u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00201DE0u, sub_00201DE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00201DE0 */

loc_001D3304: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x58) = edi;
    MEM32(esp + 0xDC) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D3335; /* js: sign (negative) */

loc_001D331A: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D3335u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3332u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001D3335: ;
    ecx = MEM32(esp + 0xD4);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3350
 * Original: 0x001D3350 - 0x001D3492 (322 bytes, 97 insns)
 * Category: game_physics
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D3350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCA76);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(0x62EBAC);
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x30);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D33D1u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D33CEu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001D33D1: ;
    MEM16(eax + 4) = 0x30;
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49F9D0); /* fmul dword ptr [0x49f9d0] */
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    edx = esp + 0x24;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x48) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D33FFu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00219A30u, sub_00219A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00219A30 */

loc_001D33FF: ;
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x4B1D70);
    PUSH32(esp, 0x4A22EC);
    PUSH32(esp, 1);
    esi = eax;
    eax = MEM32(0x506310);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3424u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001050A0 */

loc_001D3424: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x3C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001D3445; /* je: equal / zero */

loc_001D3437: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3443u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D31D0u, sub_001D31D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D31D0 */

loc_001D3443: ;
    ebx = eax;

loc_001D3445: ;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D3450: ;
    ecx = MEM32(eax * 4 + 0x6FC938);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3463; /* je: equal / zero */

loc_001D345B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3450; /* jl: less (signed <) */

loc_001D3461: ;
    goto loc_001D346A;

loc_001D3463: ;
    MEM32(eax * 4 + 0x6FC938) = ebx;

loc_001D346A: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D347D; /* jne: not equal / not zero */

loc_001D3475: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D347Du); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D347Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001D347D: ;
    ecx = MEM32(esp + 0x34);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret 16 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D34A0
 * Original: 0x001D34A0 - 0x001D34AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D34A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D34B0
 * Original: 0x001D34B0 - 0x001D34BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D34B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D34C0
 * Original: 0x001D34C0 - 0x001D34CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D34C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D34D0
 * Original: 0x001D34D0 - 0x001D34DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D34D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D34E0
 * Original: 0x001D34E0 - 0x001D34EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D34E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D34F0
 * Original: 0x001D34F0 - 0x001D34FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D34F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3500
 * Original: 0x001D3500 - 0x001D350A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3500(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3500: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3510
 * Original: 0x001D3510 - 0x001D351A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3510(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3510: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3520
 * Original: 0x001D3520 - 0x001D352A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3520(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3520: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3530
 * Original: 0x001D3530 - 0x001D353A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3530(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3530: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3540
 * Original: 0x001D3540 - 0x001D3550 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3540(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3540: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3570
 * Original: 0x001D3570 - 0x001D3588 (24 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3570(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3570: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x4C) = eax;
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3590
 * Original: 0x001D3590 - 0x001D3594 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3590(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3590: ;
    eax = MEM32(ecx + 0x7C);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D35A0
 * Original: 0x001D35A0 - 0x001D35AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D35A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x7C) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D35B0
 * Original: 0x001D35B0 - 0x001D35B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D35B0: ;
    eax = MEM32(ecx + 0x78);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D35C0
 * Original: 0x001D35C0 - 0x001D35CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D35C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x78) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D35D0
 * Original: 0x001D35D0 - 0x001D35D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D35D0: ;
    eax = MEM32(ecx + 0x74);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D35E0
 * Original: 0x001D35E0 - 0x001D35EA (10 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D35E0: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x74) = eax;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D35F0
 * Original: 0x001D35F0 - 0x001D35F9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D35F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x68) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3600
 * Original: 0x001D3600 - 0x001D3608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3600(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3600: ;
    MEM8(ecx + 0x80) = 0;
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3610
 * Original: 0x001D3610 - 0x001D3618 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3610(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3610: ;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x74), 0x10 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3620
 * Original: 0x001D3620 - 0x001D3628 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3620(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3620: ;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x74), 0x11 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3630
 * Original: 0x001D3630 - 0x001D3638 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3630(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3630: ;
    MEM32(ecx + 0x3C) = 0;
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3640
 * Original: 0x001D3640 - 0x001D364B (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3640(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3640: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x3C) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3650
 * Original: 0x001D3650 - 0x001D3655 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3650(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3650: ;
    eax = MEM32(ecx + 0x3C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3660
 * Original: 0x001D3660 - 0x001D3669 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3660(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3660: ;
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3670
 * Original: 0x001D3670 - 0x001D3674 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3670(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3670: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3680
 * Original: 0x001D3680 - 0x001D3684 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3680(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3680: ;
    SET_LO8(eax, MEM8(ecx + 0x38));
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3690
 * Original: 0x001D3690 - 0x001D369B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3690(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3690: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x10 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D36A0
 * Original: 0x001D36A0 - 0x001D36B1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D36A0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF3C);
    eax = eax + ecx + 0x40;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D36C0
 * Original: 0x001D36C0 - 0x001D36C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D36C0: ;
    eax = 0x5CE880;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D36D0
 * Original: 0x001D36D0 - 0x001D36E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D36D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D36D8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0013E1B0u, sub_0013E1B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0013E1B0 */

loc_001D36D8: ;
    MEM32(esi) = 0x4B1DCC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D36F0
 * Original: 0x001D36F0 - 0x001D37E2 (242 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D36F0: ;
    eax = MEM32(ecx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001D376A; /* jge: greater or equal (signed >=) */

loc_001D36FB: ;
    edx = eax + eax * 2 + 0x27;
    eax = MEM32(esp + 8);
    esi = MEM32(eax);
    MEM32(ecx + edx * 4) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x58);
    edx = edx + edx * 2;
    MEM32(ecx + edx * 4 + 0xA0) = esi;
    eax = MEM32(eax + 8);
    edx = MEM32(ecx + 0x58);
    edx = edx + edx * 2;
    MEM32(ecx + edx * 4 + 0xA4) = eax;
    eax = MEM32(ecx + 0x58);
    _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax);
    MEM32(ecx + edx * 4) = esi;
    edx = MEM32(ecx + 0x58);
    esi = MEM32(eax + 4);
    edx = edx + edx * 2;
    MEM32(ecx + edx * 4 + 0x7A8) = esi;
    edx = MEM32(ecx + 0x58);
    eax = MEM32(eax + 8);
    edx = edx + edx * 2;
    MEM32(ecx + edx * 4 + 0x7AC) = eax;
    MEM32(ecx + 0x58) = MEM32(ecx + 0x58) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D375F: ;
    MEM32(ecx + 0x5C) = 0;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001D376A: ;
    eax = MEM32(ecx + 0x5C);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esp + 8);
    esi = MEM32(eax);
    MEM32(ecx + edx * 4) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x5C);
    edx = edx + edx * 2;
    MEM32(ecx + edx * 4 + 0xA0) = esi;
    eax = MEM32(eax + 8);
    edx = MEM32(ecx + 0x5C);
    edx = edx + edx * 2;
    MEM32(ecx + edx * 4 + 0xA4) = eax;
    eax = MEM32(ecx + 0x5C);
    _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax);
    MEM32(ecx + edx * 4) = esi;
    edx = MEM32(ecx + 0x5C);
    esi = MEM32(eax + 4);
    edx = edx + edx * 2;
    MEM32(ecx + edx * 4 + 0x7A8) = esi;
    edx = MEM32(ecx + 0x5C);
    eax = MEM32(eax + 8);
    edx = edx + edx * 2;
    MEM32(ecx + edx * 4 + 0x7AC) = eax;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x95 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D375F; /* jge: greater or equal (signed >=) */

loc_001D37DA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x5C) = eax;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D37F0
 * Original: 0x001D37F0 - 0x001D3803 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D37F0: ;
    SET_LO8(edx, MEM8(0x6FC9A0));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3802; /* je: equal / zero */

loc_001D37FC: ;
    SET_LO8(eax, MEM8(ecx + 0x80));

loc_001D3802: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3810
 * Original: 0x001D3810 - 0x001D3975 (357 bytes, 102 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3810: ;
    SET_LO8(eax, MEM8(0x6FC9A0));
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D382B; /* je: equal / zero */

loc_001D3822: ;
    _fa = (uint32_t)(MEM8(esi + 0x80)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x80), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D387E; /* jne: not equal / not zero */

loc_001D382B: ;
    eax = MEM32(esi + 0x84);
    ecx = MEM32(esi + 0x88);
    edx = MEM32(esi + 0x8C);
    MEM32(esp + 0x88) = eax;
    eax = MEM32(esi + 0x90);
    MEM32(esp + 0x8C) = ecx;
    ecx = MEM32(esi + 0x94);
    MEM32(esp + 0x90) = edx;
    edx = MEM32(esi + 0x98);
    MEM32(esp + 0x288) = eax;
    MEM32(esp + 0x28C) = ecx;
    MEM32(esp + 0x290) = edx;
    goto loc_001D3913;

loc_001D387E: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x14);
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x78);
    SET_LO8(edx, MEM8(ebp + 0x71));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_001D38CB; /* je: equal / zero */

loc_001D38AB: ;
    edi = MEM32(esi + 0x18);
    fp_pop(); /* fstp st(0) */
    ebx = MEM32(esi + 0x1C);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_001D38CB: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D38DAu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001D38DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D38E7u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001086C0u, sub_001086C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001086C0 */

loc_001D38E7: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D38FAu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001D38FA: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, ebx);
    edx = esp + 0x244;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D390Du); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001086C0u, sub_001086C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001086C0 */

loc_001D390D: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001D3913: ;
    ecx = MEM32(esp + 0x90);
    edx = MEM32(esp + 0x8C);
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D393Au); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BB60 */

loc_001D393A: ;
    edx = MEM32(esp + 0x2A4);
    eax = MEM32(esp + 0x2A0);
    ecx = MEM32(esp + 0x29C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x42C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D3961u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BB60 */

loc_001D3961: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x80) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 8 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D3980
 * Original: 0x001D3980 - 0x001D39A9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3980(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3980: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x50) = 1;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x7C) = 0xFFFFFFFFu;
    MEM8(ecx + 0x80) = LO8(eax);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D39B0
 * Original: 0x001D39B0 - 0x001D3A2B (123 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D39B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D39B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0xA8) = eax;
    MEM32(ecx + 0xFCC) = eax;
    MEM32(ecx + 0xFE4) = eax;
    MEM32(ecx + 0x1F08) = eax;
    MEM32(ecx + 0x1F20) = eax;
    MEM32(ecx + 0x2E44) = eax;
    MEM32(ecx + 0x2E5C) = eax;
    MEM32(ecx + 0x3D80) = eax;
    MEM32(ecx + 0x3D98) = eax;
    MEM32(ecx + 0x4CBC) = eax;
    MEM32(ecx + 0x4CD4) = eax;
    MEM32(ecx + 0x5BF8) = eax;
    MEM32(ecx + 0x5C10) = eax;
    MEM32(ecx + 0x6B34) = eax;
    MEM32(ecx + 0x6B4C) = eax;
    MEM32(ecx + 0x7A70) = eax;
    MEM32(ecx + 0x7A88) = eax;
    MEM32(ecx + 0x89AC) = eax;
    MEM32(ecx + 0x89C4) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3A30
 * Original: 0x001D3A30 - 0x001D3B5C (300 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3A30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3A30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xB8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_001D3A5B; /* jne: not equal / not zero */

loc_001D3A47: ;
    _fa = (uint32_t)(MEM32(ecx + 0xB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xB4), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3A5B; /* jge: greater or equal (signed >=) */

loc_001D3A4F: ;
    MEM32(ecx + 0x90) = edx;
    MEM32(ecx + 0xA8) = edx;

loc_001D3A5B: ;
    _fa = (uint32_t)(MEM32(ecx + 0xFF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFF4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3A77; /* jne: not equal / not zero */

loc_001D3A63: ;
    _fa = (uint32_t)(MEM32(ecx + 0xFF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFF0), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3A77; /* jge: greater or equal (signed >=) */

loc_001D3A6B: ;
    MEM32(ecx + 0xFCC) = edx;
    MEM32(ecx + 0xFE4) = edx;

loc_001D3A77: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1F30)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1F30), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3A93; /* jne: not equal / not zero */

loc_001D3A7F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1F2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1F2C), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3A93; /* jge: greater or equal (signed >=) */

loc_001D3A87: ;
    MEM32(ecx + 0x1F08) = edx;
    MEM32(ecx + 0x1F20) = edx;

loc_001D3A93: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2E6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2E6C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3AAF; /* jne: not equal / not zero */

loc_001D3A9B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2E68)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2E68), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3AAF; /* jge: greater or equal (signed >=) */

loc_001D3AA3: ;
    MEM32(ecx + 0x2E44) = edx;
    MEM32(ecx + 0x2E5C) = edx;

loc_001D3AAF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3DA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3DA8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3ACB; /* jne: not equal / not zero */

loc_001D3AB7: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3DA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3DA4), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3ACB; /* jge: greater or equal (signed >=) */

loc_001D3ABF: ;
    MEM32(ecx + 0x3D80) = edx;
    MEM32(ecx + 0x3D98) = edx;

loc_001D3ACB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x4CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4CE4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3AE7; /* jne: not equal / not zero */

loc_001D3AD3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x4CE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4CE0), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3AE7; /* jge: greater or equal (signed >=) */

loc_001D3ADB: ;
    MEM32(ecx + 0x4CBC) = edx;
    MEM32(ecx + 0x4CD4) = edx;

loc_001D3AE7: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3B03; /* jne: not equal / not zero */

loc_001D3AEF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C1C), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3B03; /* jge: greater or equal (signed >=) */

loc_001D3AF7: ;
    MEM32(ecx + 0x5BF8) = edx;
    MEM32(ecx + 0x5C10) = edx;

loc_001D3B03: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6B5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6B5C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3B1F; /* jne: not equal / not zero */

loc_001D3B0B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6B58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6B58), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3B1F; /* jge: greater or equal (signed >=) */

loc_001D3B13: ;
    MEM32(ecx + 0x6B34) = edx;
    MEM32(ecx + 0x6B4C) = edx;

loc_001D3B1F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x7A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x7A98), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3B3B; /* jne: not equal / not zero */

loc_001D3B27: ;
    _fa = (uint32_t)(MEM32(ecx + 0x7A94)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x7A94), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3B3B; /* jge: greater or equal (signed >=) */

loc_001D3B2F: ;
    MEM32(ecx + 0x7A70) = edx;
    MEM32(ecx + 0x7A88) = edx;

loc_001D3B3B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x89D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x89D4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3B57; /* jne: not equal / not zero */

loc_001D3B43: ;
    _fa = (uint32_t)(MEM32(ecx + 0x89D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x89D0), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3B57; /* jge: greater or equal (signed >=) */

loc_001D3B4B: ;
    MEM32(ecx + 0x89AC) = edx;
    MEM32(ecx + 0x89C4) = edx;

loc_001D3B57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3B60
 * Original: 0x001D3B60 - 0x001D3C27 (199 bytes, 57 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D3B60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D3B60: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    fp_push((double)SMEM32(esi + 0x20)); /* fild */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    eax = esp + 8;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esi + 0x24)); /* fild */
    ecx = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = 0x3F800000;
    fp_push((double)SMEM32(esi + 0x28)); /* fild */
    MEM32(esp + 0x30) = 0x3F800000;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x2C)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x30)); /* fild */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x34)); /* fild */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001D3BB3u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015CC00u, sub_0015CC00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015CC00 */

loc_001D3BB3: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D3BC1u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015CC00u, sub_0015CC00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015CC00 */

loc_001D3BC1: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(esp + 0x44);
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEMF(esi + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(esi + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esp + 0x2C);
    MEMF(esi + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esi + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEM8(esi + 0x80) = 1;
    MEMF(esi + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 12 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D3C30
 * Original: 0x001D3C30 - 0x001D3C39 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3C30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3C40
 * Original: 0x001D3C40 - 0x001D3C6A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3C40: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(ecx + 8) = 0x3F800000;
    if (CMP_EQ(_fa, _fb)) goto loc_001D3C5C; /* je: equal / zero */

loc_001D3C4E: ;
    MEM32(ecx) = 0x3F000000;
    MEM32(ecx + 4) = 0x3E4CCCCD;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D3C5C: ;
    MEM32(ecx) = 0x44D58000;
    MEM32(ecx + 4) = 0x44F20000;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3C70
 * Original: 0x001D3C70 - 0x001D3C7E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3C70: ;
    eax = 0x3F800000;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3C80
 * Original: 0x001D3C80 - 0x001D3C94 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D3C80: ;
    eax = ecx;
    ecx = 0x3F800000;
    MEM8(eax + 0xC) = 0;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D3CA0
 * Original: 0x001D3CA0 - 0x001D4032 (914 bytes, 338 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3CA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D3F62; /* jl: less (signed <) */

loc_001D3CBA: ;
    ecx = edi + 1;
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    esi = 2;
    fp_top() = MEMF(0x496454) / fp_top(); /* fdivr dword ptr [0x496454] */
    PUSH32(esp, ebp);
    ebx = edi + -3;
    MEM32(esp + 0x1C) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D3CE0: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ebp = esi + -1;
    MEM32(esp + 0x10) = ebp;
    fp_top() = fp_top() + MEMF(0x496454); /* fadd dword ptr [0x496454] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x24); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * MEMF(eax + 0x1C); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x28); /* fmul dword ptr [eax + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x20); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() + MEMF(0x496454); /* fadd dword ptr [0x496454] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x24); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * MEMF(eax + 0x1C); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x28); /* fmul dword ptr [eax + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x20); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() + MEMF(0x496454); /* fadd dword ptr [0x496454] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x24); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * MEMF(eax + 0x1C); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x28); /* fmul dword ptr [eax + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x20); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    ebp = esi + 1;
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    MEM32(esp + 0x1C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(esp + 0x10) = edx;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = esi;
    fp_top() = fp_top() + MEMF(0x496454); /* fadd dword ptr [0x496454] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x24); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * MEMF(eax + 0x1C); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x28); /* fmul dword ptr [eax + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -16) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x20); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3CE0; /* jl: less (signed <) */

loc_001D3F5E: ;
    POP32(esp, ebp);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);

loc_001D3F62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D402E; /* jge: greater or equal (signed >=) */

loc_001D3F6A: ;
    esi = MEM32(esp + 0x10);
    ecx = edi + 1;
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = edx + edx * 2;
    ecx = esi + ecx * 4 + 8;
    fp_top() = MEMF(0x496454) / fp_top(); /* fdivr dword ptr [0x496454] */

loc_001D3F86: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    fp_top() = fp_top() + MEMF(0x496454); /* fadd dword ptr [0x496454] */
    MEM32(esp + 8) = edx;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x24); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * MEMF(eax + 0x1C); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x28); /* fmul dword ptr [eax + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -16) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x20); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x49E748); /* fmul dword ptr [0x49e748] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3F86; /* jl: less (signed <) */

loc_001D402C: ;
    fp_pop(); /* fstp st(0) */

loc_001D402E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D4040
 * Original: 0x001D4040 - 0x001D4180 (320 bytes, 122 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4040: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x58);
    ecx = MEM32(ecx + 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x24;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x50);
    edx = ecx;
    ebx = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x4C) = eax;
    /* nop */

loc_001D4070: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    edx = MEM32(esp + 0x14);
    if (CMP_GE(_fas, _fbs)) goto loc_001D408F; /* jge: greater or equal (signed >=) */

loc_001D407F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D408F; /* jle: less or equal (signed <=) */

loc_001D4083: ;
    ebp = esi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edi + ebp * 4 + -12);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001D40B9;

loc_001D408F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D409F; /* jle: less or equal (signed <=) */

loc_001D4093: ;
    ebp = esi + edx * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edi + ebp * 4 + -12);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001D40B9;

loc_001D409F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D40B6; /* jl: less (signed <) */

loc_001D40A6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D40B6; /* jne: not equal / not zero */

loc_001D40AA: ;
    ebp = esi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edi + ebp * 4 + -12);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001D40B9;

loc_001D40B6: ;
    ebp = MEM32(ebx + ecx);

loc_001D40B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    MEM32(ecx + 0xC) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001D40D3; /* jge: greater or equal (signed >=) */

loc_001D40C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D40D3; /* jle: less or equal (signed <=) */

loc_001D40C7: ;
    ebp = esi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edi + ebp * 4 + -12);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001D40FD;

loc_001D40D3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D40E3; /* jle: less or equal (signed <=) */

loc_001D40D7: ;
    ebp = esi + edx * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edi + ebp * 4 + -12);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001D40FD;

loc_001D40E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D40FA; /* jl: less (signed <) */

loc_001D40EA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D40FA; /* jne: not equal / not zero */

loc_001D40EE: ;
    ebp = esi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edi + ebp * 4 + -12);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001D40FD;

loc_001D40FA: ;
    ebp = MEM32(ebx + ecx);

loc_001D40FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    MEM32(ecx) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001D4118; /* jge: greater or equal (signed >=) */

loc_001D4106: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D4118; /* jle: less or equal (signed <=) */

loc_001D410A: ;
    edx = esi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + edx * 4 + -12);
    MEM32(ecx + -12) = eax;
    goto loc_001D4146;

loc_001D4118: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D4127; /* jle: less or equal (signed <=) */

loc_001D411C: ;
    eax = esi + edx * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + eax * 4 + -12);
    goto loc_001D4143;

loc_001D4127: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4140; /* jl: less (signed <) */

loc_001D412E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4140; /* jne: not equal / not zero */

loc_001D4132: ;
    edx = esi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + edx * 4 + -12);
    MEM32(ecx + -12) = eax;
    goto loc_001D4146;

loc_001D4140: ;
    edx = MEM32(ebx + ecx);

loc_001D4143: ;
    MEM32(ecx + -12) = edx;

loc_001D4146: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(eax + ecx);
    MEM32(ecx + 0x18) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4070; /* jl: less (signed <) */

loc_001D415D: ;
    ecx = MEM32(esp + 0x54);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D416Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D3CA0u, sub_001D3CA0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D3CA0 */

loc_001D416E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 5;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4180
 * Original: 0x001D4180 - 0x001D41DA (90 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4180(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4180: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x68);
    edx = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x43);
    PUSH32(esp, esi);
    esi = eax + edx;
    esi = MEM32(esi * 4 + 0x6204A8);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + esi;
    edi = MEM32(edi * 4 + 0x6204A8);
    MEM32(ecx + 0x14) = edi;
    edx = MEM32(edx * 4 + 0x514C58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx * 4 + 0x6204A8);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esi * 4 + 0x514C58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x6204A8);
    POP32(esp, edi);
    MEM32(ecx + 0x1C) = eax;
    POP32(esp, esi);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D41E0
 * Original: 0x001D41E0 - 0x001D41E3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D41E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001D41E0: ;
    esp += 16; { recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D41F0
 * Original: 0x001D41F0 - 0x001D4214 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D41F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D41F0: ;
    eax = MEM32(ecx + 0x50);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D420E; /* je: equal / zero */

loc_001D41F9: ;
    eax = MEM32(ecx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4208; /* je: equal / zero */

loc_001D4200: ;
    _fa = (uint32_t)(MEM8(eax + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2737), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4211; /* je: equal / zero */

loc_001D4208: ;
    MEM32(ecx + 0x50) = edx;
    MEM32(ecx + 0x68) = edx;

loc_001D420E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D4211: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4220
 * Original: 0x001D4220 - 0x001D425B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4220(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4220: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x90;
    goto loc_001D4230;

    /* nop */

loc_001D4230: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4248; /* je: equal / zero */

loc_001D4234: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4243; /* je: equal / zero */

loc_001D423B: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4257; /* je: equal / zero */

loc_001D4243: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x18) = ebx;

loc_001D4248: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xF3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4230; /* jl: less (signed <) */

loc_001D4253: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D4257: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4260
 * Original: 0x001D4260 - 0x001D42BD (93 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x90;

loc_001D4276: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4298; /* jne: not equal / not zero */

loc_001D427B: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4298; /* jne: not equal / not zero */

loc_001D4280: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4298; /* je: equal / zero */

loc_001D4284: ;
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4293; /* je: equal / zero */

loc_001D428B: ;
    _fa = (uint32_t)(MEM8(edx + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D42AC; /* je: equal / zero */

loc_001D4293: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x18) = ebx;

loc_001D4298: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xF3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4276; /* jl: less (signed <) */

loc_001D42A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001D42AC: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF3C);
    POP32(esp, edi);
    eax = esi + ecx + 0x40;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D42C0
 * Original: 0x001D42C0 - 0x001D430C (76 bytes, 26 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D42C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D42C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF3C);
    ecx = eax + ecx + -3836;
    eax = MEM32(ecx + 0x50);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D42F2; /* je: equal / zero */

loc_001D42DD: ;
    eax = MEM32(ecx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D42EC; /* je: equal / zero */

loc_001D42E4: ;
    _fa = (uint32_t)(MEM8(eax + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2737), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D42F4; /* je: equal / zero */

loc_001D42EC: ;
    MEM32(ecx + 0x50) = edx;
    MEM32(ecx + 0x68) = edx;

loc_001D42F2: ;
    MEM32(esi) = edx;

loc_001D42F4: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D4308u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D3B60u, sub_001D3B60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D3B60 */

loc_001D4308: ;
    POP32(esp, esi);
    esp += 24; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 20 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4310
 * Original: 0x001D4310 - 0x001D4366 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4310(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4310: ;
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D434B; /* jle: less or equal (signed <=) */

loc_001D431A: ;
    eax = edx + -1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D434B; /* je: equal / zero */

loc_001D432D: ;
    ecx = MEM32(eax + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D433F; /* je: equal / zero */

loc_001D4337: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D434F; /* je: equal / zero */

loc_001D433F: ;
    MEM32(eax + 0x90) = ebx;
    MEM32(eax + 0xA8) = ebx;

loc_001D434B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001D434F: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xB4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4370
 * Original: 0x001D4370 - 0x001D43A1 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D4370(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4370: ;
    eax = MEM32(ecx + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D439E; /* jle: less or equal (signed <=) */

loc_001D4379: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF3C);
    eax = eax + ecx + 0x40;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D439E; /* je: equal / zero */

loc_001D4389: ;
    ecx = MEM32(eax + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4398; /* je: equal / zero */

loc_001D4390: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2737), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D43A0; /* je: equal / zero */

loc_001D4398: ;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x68) = edx;

loc_001D439E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D43A0: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D43B0
 * Original: 0x001D43B0 - 0x001D4483 (211 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D43B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D43B0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x90;
    edi = 0xA;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D43C3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D446F; /* je: equal / zero */

loc_001D43CB: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D43DC; /* jne: not equal / not zero */

loc_001D43D2: ;
    MEM32(esi) = ebx;
    MEM32(esi + 0x18) = ebx;
    goto loc_001D446F;

loc_001D43DC: ;
    _fa = (uint32_t)(MEM8(eax + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D43EE; /* je: equal / zero */

loc_001D43E4: ;
    MEM32(esi) = ebx;
    MEM32(esi + 0x18) = ebx;
    goto loc_001D446F;

loc_001D43EE: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D446F; /* jne: not equal / not zero */

loc_001D43F4: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001D4407u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00108320u, sub_00108320); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00108320 */

loc_001D4407: ;
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D4425u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BB60 */

loc_001D4425: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D445A; /* je: equal / zero */

loc_001D4446: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4455; /* je: equal / zero */

loc_001D444D: ;
    _fa = (uint32_t)(MEM8(eax + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D445A; /* je: equal / zero */

loc_001D4455: ;
    MEM32(esi) = ebx;
    MEM32(esi + 0x18) = ebx;

loc_001D445A: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    ecx = esi + -80;
    PUSH32(esp, 0x001D446Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D3B60u, sub_001D3B60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D3B60 */

loc_001D446F: ;
    _fb = (uint32_t)(0xF3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D43C3; /* jne: not equal / not zero */

loc_001D447C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4490
 * Original: 0x001D4490 - 0x001D4615 (389 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4490: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D44A8u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D3810u, sub_001D3810); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D3810 */

loc_001D44A8: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0xF24) = edx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esi + 0x60);
    eax = eax + eax * 2;
    MEMF(esi + eax * 4 + 0xF28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x60);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ebp = esi + 0xF24;
    edx = eax + eax * 2;
    MEMF(esi + edx * 4 + 0xF2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x60);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x144;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    MEMF(esi + eax * 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x60);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = eax + eax * 2;
    MEMF(esi + edx * 4 + 0xF34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x60);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = eax + eax * 2;
    MEMF(esi + eax * 4 + 0xF38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D452F; /* jge: greater or equal (signed >=) */

loc_001D451A: ;
    _fa = (uint32_t)(MEM32(0x6C92EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C92EC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D452F; /* jne: not equal / not zero */

loc_001D4522: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x70) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001D452F: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 3 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x70) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_001D45F5; /* jl: less (signed <) */

loc_001D4542: ;
    edi = esi + 0xEAC;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi + 0x9C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D4558u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4040u, sub_001D4040); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D4040 */

loc_001D4558: ;
    edx = esi + 0xEE8;
    ebx = eax;
    PUSH32(esp, edx);
    eax = esi + 0xF30;
    PUSH32(esp, eax);
    ecx = esi + 0x7A4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D4576u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4040u, sub_001D4040); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D4040 */

loc_001D4576: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D45F5; /* jne: not equal / not zero */

loc_001D457A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D45F5; /* je: equal / zero */

loc_001D457E: ;
    eax = MEM32(0x6C92EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D460D; /* jne: not equal / not zero */

loc_001D458B: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D4599; /* jge: greater or equal (signed >=) */

loc_001D4595: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D45B1; /* jg: greater (signed >) */

loc_001D4599: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D45A6; /* jle: less or equal (signed <=) */

loc_001D45A0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = ecx;
    goto loc_001D45B5;

loc_001D45A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D45B5; /* jl: less (signed <) */

loc_001D45AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D45B5; /* jne: not equal / not zero */

loc_001D45B1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = eax;

loc_001D45B5: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D45C3; /* jge: greater or equal (signed >=) */

loc_001D45BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D45DB; /* jg: greater (signed >) */

loc_001D45C3: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D45D0; /* jle: less or equal (signed <=) */

loc_001D45CA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = ecx;
    goto loc_001D45DF;

loc_001D45D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D45DF; /* jl: less (signed <) */

loc_001D45D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D45DF; /* jne: not equal / not zero */

loc_001D45DB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = eax;

loc_001D45DF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D45F5; /* jle: less or equal (signed <=) */

loc_001D45E3: ;
    edx = edi + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D45EFu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D36F0u, sub_001D36F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D36F0 */

loc_001D45EF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D45E3; /* jne: not equal / not zero */

loc_001D45F5: ;
    eax = MEM32(0x6C92EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D460D; /* jne: not equal / not zero */

loc_001D45FE: ;
    eax = esi + 0xF30;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001D460Du); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D36F0u, sub_001D36F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D36F0 */

loc_001D460D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D4620
 * Original: 0x001D4620 - 0x001D466F (79 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4620(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x90;

loc_001D4630: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4656; /* je: equal / zero */

loc_001D4634: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4642; /* jne: not equal / not zero */

loc_001D463B: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x18) = ebx;
    goto loc_001D4656;

loc_001D4642: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4651; /* je: equal / zero */

loc_001D464A: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x18) = ebx;
    goto loc_001D4656;

loc_001D4651: ;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4668; /* je: equal / zero */

loc_001D4656: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xF3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4630; /* jl: less (signed <) */

loc_001D4661: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001D4668: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4670
 * Original: 0x001D4670 - 0x001D46EB (123 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4670: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4681u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4260u, sub_001D4260); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4260 */

loc_001D4681: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D468C; /* jge: greater or equal (signed >=) */

loc_001D4688: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D46E6; /* jne: not equal / not zero */

loc_001D468C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0xB8;

loc_001D4696: ;
    _fa = (uint32_t)(MEM32(edx + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + -40), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D46C2; /* je: equal / zero */

loc_001D469B: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D46BC; /* je: equal / zero */

loc_001D46A1: ;
    _fa = (uint32_t)(MEM8(edi + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D46BC; /* jne: not equal / not zero */

loc_001D46A9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xF3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4696; /* jl: less (signed <) */

loc_001D46B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_001D46BC: ;
    MEM32(edx + -40) = ebx;
    MEM32(edx + -16) = ebx;

loc_001D46C2: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF3C);
    eax = edx + ecx;
    edx = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xB8) = edx;
    MEM32(eax + 0xB4) = ebp;
    POP32(esp, edi);
    MEM32(ecx + 0x3C) = esi;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001D46E6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D46F0
 * Original: 0x001D46F0 - 0x001D4714 (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D46F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D46F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D46FFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4260u, sub_001D4260); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4260 */

loc_001D46FF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4711; /* je: equal / zero */

loc_001D4705: ;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D4711; /* jge: greater or equal (signed >=) */

loc_001D470B: ;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x68) = ecx;

loc_001D4711: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4720
 * Original: 0x001D4720 - 0x001D4A70 (848 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4720: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x78);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D475B; /* je: equal / zero */

loc_001D4730: ;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x74), 0x10 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001D4763; /* jl: less (signed <) */

loc_001D4742: ;
    _fa = (uint32_t)(MEM8(0x6FC9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6FC9A0), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4763; /* je: equal / zero */

loc_001D474B: ;
    SET_LO8(eax, MEM8(esi + 0x80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4763; /* jne: not equal / not zero */

loc_001D4755: ;
    MEM32(esi + 0x50) = ebp;
    MEM32(esi + 0x68) = ebp;

loc_001D475B: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001D4763: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001D476Bu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4490u, sub_001D4490); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D4490 */

loc_001D476B: ;
    ebx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D47AD; /* jl: less (signed <) */

loc_001D4773: ;
    _fa = (uint32_t)(MEM32(0x6C92EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C92EC), ebp (32-bit) */
    ecx = MEM32(esi + 0x5C);
    if (CMP_NE(_fa, _fb)) goto loc_001D4799; /* jne: not equal / not zero */

loc_001D477E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4796; /* jne: not equal / not zero */

loc_001D4784: ;
    edx = MEM32(esi + 0x68);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x68) = edx;
    if ((_fas >= 0)) goto loc_001D4799; /* jns: not sign (positive) */

loc_001D4791: ;
    MEM32(esi + 0x68) = ebp;
    goto loc_001D4799;

loc_001D4796: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_001D4799: ;
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0x28) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_001D47B6; /* jge: greater or equal (signed >=) */

loc_001D47A7: ;
    MEM32(esi + 0x50) = ebp;
    MEM32(esi + 0x68) = ebp;

loc_001D47AD: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001D47B6: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x49D538)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x96;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    fp_top() = fp_top() * MEMF(0x49D538); /* fmul dword ptr [0x49d538] */
    PUSH32(esp, edi);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(0x4B1DD4); /* fmul dword ptr [0x4b1dd4] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x497808); /* fmul dword ptr [0x497808] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    edi = edx;
    MEM32(esp + 0x30) = edi;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D4809; /* jp: parity */

loc_001D4801: ;
    MEM32(esp + 0x10) = 0x3F800000;

loc_001D4809: ;
    fp_push(MEMF(0x496454)); /* fld float */
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4839; /* jne: not equal / not zero */

loc_001D482D: ;
    ecx = 0x514E3C;
    PUSH32(esp, 0x001D4837u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D3C40u, sub_001D3C40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D3C40 */

loc_001D4837: ;
    goto loc_001D4857;

loc_001D4839: ;
    MEM32(0x514E3C) = 0x3F800000;
    MEM32(0x514E40) = 0x3F800000;
    MEM32(0x514E44) = 0x3F800000;

loc_001D4857: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_001D4A55; /* jle: less or equal (signed <=) */

loc_001D4863: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x001D486Cu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001D486C: ;
    edi = edi + edi * 2;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x28) = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D4880: ;
    edx = MEM32(esi + 0x58);
    eax = MEM32(esp + 0x14);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D48A1; /* jge: greater or equal (signed >=) */

loc_001D488C: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D48A1; /* jne: not equal / not zero */

loc_001D4894: ;
    eax = MEM32(esp + 0x30);
    edx = eax + ebp;
    MEM32(esp + 0x14) = edx;
    goto loc_001D48C3;

loc_001D48A1: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x1C) = 1;

loc_001D48C3: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    eax = edi + esi + 0xA0;
    MEM32(esp + 0x3C) = eax;
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(edi + esi + 0x7A4); /* fmul dword ptr [edi + esi + 0x7a4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(edi + esi + 0x9C); /* fmul dword ptr [edi + esi + 0x9c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(edi + esi + 0x7A8); /* fmul dword ptr [edi + esi + 0x7a8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    eax = edi + esi + 0xA4;
    MEM32(esp + 0x40) = eax;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(edi + esi + 0x7AC); /* fmul dword ptr [edi + esi + 0x7ac] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x38))); }
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(0x496454); /* fadd dword ptr [0x496454] */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D495B; /* jne: not equal / not zero */

loc_001D4951: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */

loc_001D495B: ;
    eax = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    MEM32(ecx + 0x63BD88) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(ecx + 0x63BD90) = eax;
    MEM32(ecx + 0x63BD8C) = edx;
    eax = 0x3F800000;
    MEM32(ecx + 0x63BD94) = eax;
    fp_push((double)SMEM32(esi + 0x44)); /* fild */
    edx = 0x43000000;
    ebx = MEM32(esp + 0x2C);
    MEMF(ecx + 0x63E310) = (float)fp_top(); fp_pop(); /* fstp */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esi + 0x48)); /* fild */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ebp;
    MEMF(ecx + 0x63E2F4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x4C)); /* fild */
    MEM32(ecx + 0x63E2FC) = edx;
    MEM32(ecx + 0x63D030) = 0;
    MEM32(ecx + 0x63D038) = eax;
    MEMF(ecx + 0x63E2F8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x63D03C) = eax;
    fp_top() = fp_top() * MEMF(0x514E40); /* fmul dword ptr [0x514e40] */
    MEMF(ecx + 0x63D034) = (float)fp_top(); /* fst */
    edi = MEM32(edi + esi + 0x9C);
    MEM32(ecx + 0x63BD78) = edi;
    edi = MEM32(esp + 0x3C);
    edi = MEM32(edi);
    MEM32(ecx + 0x63BD7C) = edi;
    edi = MEM32(esp + 0x40);
    edi = MEM32(edi);
    MEM32(ecx + 0x63BD80) = edi;
    edi = MEM32(esp + 0x28);
    MEM32(ecx + 0x63BD84) = eax;
    fp_push((double)SMEM32(esi + 0x38)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEMF(ecx + 0x63E300) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = edi;
    fp_push((double)SMEM32(esi + 0x3C)); /* fild */
    MEMF(ecx + 0x63E304) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x40)); /* fild */
    MEM32(ecx + 0x63E30C) = edx;
    edx = MEM32(0x514E3C);
    MEM32(ecx + 0x63D040) = edx;
    MEMF(ecx + 0x63E308) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x63D048) = eax;
    MEM32(ecx + 0x63D04C) = eax;
    MEMF(ecx + 0x63D044) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_001D4880; /* jl: less (signed <) */

loc_001D4A55: ;
    eax = ebx + ebx;
    POP32(esp, edi);
    MEM32(0x6FC96C) = eax;
    ecx = MEM32(esi + 8);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(0x6FC970) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D4A70
 * Original: 0x001D4A70 - 0x001D4E85 (1045 bytes, 351 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4A70: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7E; /* je: equal / zero */

loc_001D4A82: ;
    ecx = MEM32(0x6FC960);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4E7E; /* jne: not equal / not zero */

loc_001D4A90: ;
    _fb = (uint32_t)(0xFFFFFEAFu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEAFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D4E7E; /* ja: above (unsigned >) */

loc_001D4A9E: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x1D4E88); /* switch: 15 entries, 15 targets */
    if (_jt == 0x001D4AA6u) goto loc_001D4AA6;
    if (_jt == 0x001D4B23u) goto loc_001D4B23;
    if (_jt == 0x001D4B79u) goto loc_001D4B79;
    if (_jt == 0x001D4BB5u) goto loc_001D4BB5;
    if (_jt == 0x001D4BF1u) goto loc_001D4BF1;
    if (_jt == 0x001D4C2Du) goto loc_001D4C2D;
    if (_jt == 0x001D4C69u) goto loc_001D4C69;
    if (_jt == 0x001D4CA5u) goto loc_001D4CA5;
    if (_jt == 0x001D4CE1u) goto loc_001D4CE1;
    if (_jt == 0x001D4D28u) goto loc_001D4D28;
    if (_jt == 0x001D4D64u) goto loc_001D4D64;
    if (_jt == 0x001D4DB8u) goto loc_001D4DB8;
    if (_jt == 0x001D4E0Cu) goto loc_001D4E0C;
    if (_jt == 0x001D4E44u) goto loc_001D4E44;
    if (_jt == 0x001D4E7Du) goto loc_001D4E7D;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } }

loc_001D4AA6: ;
    edx = MEM32(esp + 0x30);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4AC4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4AC4: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx | MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_001D4AEE; /* jne: not equal / not zero */

loc_001D4ACE: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D4ADFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D46F0u, sub_001D46F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D46F0 */

loc_001D4ADF: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4AEE: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001D4AFFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4670u, sub_001D4670); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4670 */

loc_001D4AFF: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4B09: ;
    PUSH32(esp, 0x001D4B0Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D41F0u, sub_001D41F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D41F0 */

loc_001D4B0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4E7D; /* jne: not equal / not zero */

loc_001D4B16: ;
    PUSH32(esp, 0x001D4B1Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D3980u, sub_001D3980); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D3980 */

loc_001D4B1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4B23: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4B46u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017BEB0u, sub_0017BEB0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017BEB0 */

loc_001D4B46: ;
    edx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D4B57u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4260u, sub_001D4260); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4260 */

loc_001D4B57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4B5F: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x001D4B71u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4180u, sub_001D4180); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4180 */

loc_001D4B71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4B79: ;
    edx = MEM32(esp + 0x30);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4B97u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4B97: ;
    ecx = esi;
    PUSH32(esp, 0x001D4B9Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4B9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4BA6: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(eax + 0x20) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4BB5: ;
    ecx = MEM32(esp + 0x30);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4BD3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4BD3: ;
    ecx = esi;
    PUSH32(esp, 0x001D4BDAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4BDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4BE2: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(eax + 0x24) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4BF1: ;
    ecx = MEM32(esp + 0x30);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4C0Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4C0F: ;
    ecx = esi;
    PUSH32(esp, 0x001D4C16u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4C16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4C1E: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(eax + 0x28) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4C2D: ;
    ecx = MEM32(esp + 0x30);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4C4Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4C4B: ;
    ecx = esi;
    PUSH32(esp, 0x001D4C52u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4C52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4C5A: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(eax + 0x2C) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4C69: ;
    ecx = MEM32(esp + 0x30);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4C87u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4C87: ;
    ecx = esi;
    PUSH32(esp, 0x001D4C8Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4C8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4C96: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(eax + 0x30) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4CA5: ;
    ecx = MEM32(esp + 0x30);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4CC3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4CC3: ;
    ecx = esi;
    PUSH32(esp, 0x001D4CCAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4CCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4CD2: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(eax + 0x34) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4CE1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4D04u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017BEB0u, sub_0017BEB0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017BEB0 */

loc_001D4D04: ;
    ecx = esi;
    PUSH32(esp, 0x001D4D0Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4D0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4D13: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4D28: ;
    edx = MEM32(esp + 0x30);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4D46u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4D46: ;
    ecx = esi;
    PUSH32(esp, 0x001D4D4Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4D55: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4D64: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4D8Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00011825u, sub_00011825); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00011825 */

loc_001D4D8C: ;
    ecx = esi;
    PUSH32(esp, 0x001D4D93u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4D93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4D9B: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4DB8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4DE0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00011825u, sub_00011825); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00011825 */

loc_001D4DE0: ;
    ecx = esi;
    PUSH32(esp, 0x001D4DE7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4DE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4DEF: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x44) = ecx;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4E0C: ;
    ecx = MEM32(esp + 0x30);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x001D4E2Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000118F2u, sub_000118F2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000118F2 */

loc_001D4E2A: ;
    ecx = esi;
    PUSH32(esp, 0x001D4E31u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4E31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4E35: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4E44: ;
    ecx = esi;
    PUSH32(esp, 0x001D4E4Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4370u, sub_001D4370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4370 */

loc_001D4E4B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4E7D; /* je: equal / zero */

loc_001D4E51: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001D4E5Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4620u, sub_001D4620); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4620 */

loc_001D4E5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4E79; /* jne: not equal / not zero */

loc_001D4E62: ;
    POP32(esp, ebx);
    MEM32(edi + 0x50) = 0;
    MEM32(edi + 0x68) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_001D4E79: ;
    MEM32(edi + 0x7C) = ebx;
    POP32(esp, ebx);

loc_001D4E7D: ;
    POP32(esp, edi);

loc_001D4E7E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4ED0
 * Original: 0x001D4ED0 - 0x001D4F50 (128 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4ED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001D4EDBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D43B0u, sub_001D43B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D43B0 */

loc_001D4EDB: ;
    esi = edi + 0x90;
    ebp = 0xA;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D4EE8: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4F2D; /* je: equal / zero */

loc_001D4EEC: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4EFA; /* jne: not equal / not zero */

loc_001D4EF3: ;
    MEM32(esi) = ebx;
    MEM32(esi + 0x18) = ebx;
    goto loc_001D4F2D;

loc_001D4EFA: ;
    _fa = (uint32_t)(MEM8(eax + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4F09; /* je: equal / zero */

loc_001D4F02: ;
    MEM32(esi) = ebx;
    MEM32(esi + 0x18) = ebx;
    goto loc_001D4F2D;

loc_001D4F09: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(MEM8(eax + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4F2D; /* jne: not equal / not zero */

loc_001D4F14: ;
    ecx = esi + -80;
    PUSH32(esp, 0x001D4F1Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4720u, sub_001D4720); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4720 */

loc_001D4F1C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4F2D; /* je: equal / zero */

loc_001D4F20: ;
    ecx = edi;
    PUSH32(esp, 0x001D4F27u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0013E2D0u, sub_0013E2D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0013E2D0 */

loc_001D4F27: ;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;

loc_001D4F2D: ;
    _fb = (uint32_t)(0xF3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D4EE8; /* jne: not equal / not zero */

loc_001D4F36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = 0x713D38;
    POP32(esp, ebx);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_001E3F80(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001E3F80 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001D4F50
 * Original: 0x001D4F50 - 0x001D4FB6 (102 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4F50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x90;
    ebp = 0xA;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D4F63: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4FA8; /* je: equal / zero */

loc_001D4F67: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4F75; /* jne: not equal / not zero */

loc_001D4F6E: ;
    MEM32(esi) = ebx;
    MEM32(esi + 0x18) = ebx;
    goto loc_001D4FA8;

loc_001D4F75: ;
    _fa = (uint32_t)(MEM8(eax + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4F84; /* je: equal / zero */

loc_001D4F7D: ;
    MEM32(esi) = ebx;
    MEM32(esi + 0x18) = ebx;
    goto loc_001D4FA8;

loc_001D4F84: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(MEM8(eax + 0x2737)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2737), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4FA8; /* jne: not equal / not zero */

loc_001D4F8F: ;
    ecx = esi + -80;
    PUSH32(esp, 0x001D4F97u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D4720u, sub_001D4720); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001D4720 */

loc_001D4F97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4FA8; /* je: equal / zero */

loc_001D4F9B: ;
    ecx = edi;
    PUSH32(esp, 0x001D4FA2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0013E2D0u, sub_0013E2D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0013E2D0 */

loc_001D4FA2: ;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;

loc_001D4FA8: ;
    _fb = (uint32_t)(0xF3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D4F63; /* jne: not equal / not zero */

loc_001D4FB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}
