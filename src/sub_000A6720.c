#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000A6720
 * Original: 0x000A6720 - 0x000A68CC (428 bytes, 149 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6720: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x68);
    ecx = eax * 4 + 0x58463C;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFE61u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFE61u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_A(_fa, _fb)) goto loc_000A68C4; /* ja: above (unsigned >) */

loc_000A6746: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA68CC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000A674Du) goto loc_000A674D;
    if (_jt == 0x000A67B2u) goto loc_000A67B2;
    if (_jt == 0x000A6817u) goto loc_000A6817;
    if (_jt == 0x000A6828u) goto loc_000A6828;
    if (_jt == 0x000A6837u) goto loc_000A6837;
    if (_jt == 0x000A6880u) goto loc_000A6880;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } }

loc_000A674D: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x6CE738;
    PUSH32(esp, 0x000A6775u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00011825u, sub_00011825); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00011825 */

loc_000A6775: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A6783u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3960u, sub_001A3960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3960 */

loc_000A6783: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000A6791u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3960u, sub_001A3960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3960 */

loc_000A6791: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000A679Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3960u, sub_001A3960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3960 */

loc_000A679F: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000A67ADu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3960u, sub_001A3960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3960 */

loc_000A67AD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_000A67B2: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x000A67DAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00011825u, sub_00011825); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00011825 */

loc_000A67DA: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x000A67E8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3960u, sub_001A3960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3960 */

loc_000A67E8: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x000A67F6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3960u, sub_001A3960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3960 */

loc_000A67F6: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x000A6804u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3960u, sub_001A3960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3960 */

loc_000A6804: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x000A6812u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3960u, sub_001A3960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3960 */

loc_000A6812: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_000A6817: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6823u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A3A80u, sub_001A3A80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A3A80 */

loc_000A6823: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_000A6828: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A6832u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0001573Bu, sub_0001573B); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0001573B */

loc_000A6832: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_000A6837: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6CE738;
    PUSH32(esp, 0x000A685Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00011825u, sub_00011825); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00011825 */

loc_000A685F: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esp + 4);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = edx;
    MEM32(esi + 0x38) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_000A6880: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x6CE738;
    PUSH32(esp, 0x000A68A8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00011825u, sub_00011825); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00011825 */

loc_000A68A8: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(esi + 0x40) = edx;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = ecx;

loc_000A68C4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}
