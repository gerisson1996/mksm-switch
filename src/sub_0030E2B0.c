#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0030E2B0
 * Original: 0x0030E2B0 - 0x003118F0 (13888 bytes, 4369 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E2B0(void)
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

loc_0030E2B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 4);
    ebx = MEM32(ebp);
    edi = MEM32(ebp + 0xC);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030E2F4; /* je: equal / zero */

loc_0030E2E5: ;
    esi = MEM32(esp + 0x20);
    ecx = 0x20;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi >> LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0030E2F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E31E; /* jge: greater or equal (signed >=) */

loc_0030E2F8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM32(edx + 8) = ebx;
    MEM32(edx + 4) = 1;
    MEM32(edx) = 0;
    MEM32(edx + 0xC) = 2;
    goto loc_0030E445;

loc_0030E31E: ;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0030E3BE; /* ja: above (unsigned >) */

loc_0030E32E: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3118F0); /* switch: 174 entries, 170 targets */
    if (_jt == 0x0030E335u) goto loc_0030E335;
    if (_jt == 0x0030E344u) goto loc_0030E344;
    if (_jt == 0x0030E353u) goto loc_0030E353;
    if (_jt == 0x0030E362u) goto loc_0030E362;
    if (_jt == 0x0030E528u) goto loc_0030E528;
    if (_jt == 0x0030E5D0u) goto loc_0030E5D0;
    if (_jt == 0x0030E681u) goto loc_0030E681;
    if (_jt == 0x0030E702u) goto loc_0030E702;
    if (_jt == 0x0030E790u) goto loc_0030E790;
    if (_jt == 0x0030E81Cu) goto loc_0030E81C;
    if (_jt == 0x0030E890u) goto loc_0030E890;
    if (_jt == 0x0030E913u) goto loc_0030E913;
    if (_jt == 0x0030E985u) goto loc_0030E985;
    if (_jt == 0x0030EA08u) goto loc_0030EA08;
    if (_jt == 0x0030EA7Au) goto loc_0030EA7A;
    if (_jt == 0x0030EAD5u) goto loc_0030EAD5;
    if (_jt == 0x0030EB31u) goto loc_0030EB31;
    if (_jt == 0x0030EB91u) goto loc_0030EB91;
    if (_jt == 0x0030EBEFu) goto loc_0030EBEF;
    if (_jt == 0x0030EC4Fu) goto loc_0030EC4F;
    if (_jt == 0x0030ECADu) goto loc_0030ECAD;
    if (_jt == 0x0030ED0Bu) goto loc_0030ED0B;
    if (_jt == 0x0030ED67u) goto loc_0030ED67;
    if (_jt == 0x0030EDB6u) goto loc_0030EDB6;
    if (_jt == 0x0030EE44u) goto loc_0030EE44;
    if (_jt == 0x0030EED0u) goto loc_0030EED0;
    if (_jt == 0x0030EF2Cu) goto loc_0030EF2C;
    if (_jt == 0x0030EFB8u) goto loc_0030EFB8;
    if (_jt == 0x0030F042u) goto loc_0030F042;
    if (_jt == 0x0030F09Cu) goto loc_0030F09C;
    if (_jt == 0x0030F0FAu) goto loc_0030F0FA;
    if (_jt == 0x0030F156u) goto loc_0030F156;
    if (_jt == 0x0030F1B4u) goto loc_0030F1B4;
    if (_jt == 0x0030F210u) goto loc_0030F210;
    if (_jt == 0x0030F26Cu) goto loc_0030F26C;
    if (_jt == 0x0030F2C6u) goto loc_0030F2C6;
    if (_jt == 0x0030F324u) goto loc_0030F324;
    if (_jt == 0x0030F380u) goto loc_0030F380;
    if (_jt == 0x0030F3DEu) goto loc_0030F3DE;
    if (_jt == 0x0030F43Au) goto loc_0030F43A;
    if (_jt == 0x0030F496u) goto loc_0030F496;
    if (_jt == 0x0030F4F0u) goto loc_0030F4F0;
    if (_jt == 0x0030F532u) goto loc_0030F532;
    if (_jt == 0x0030F592u) goto loc_0030F592;
    if (_jt == 0x0030F5F0u) goto loc_0030F5F0;
    if (_jt == 0x0030F652u) goto loc_0030F652;
    if (_jt == 0x0030F6B2u) goto loc_0030F6B2;
    if (_jt == 0x0030F714u) goto loc_0030F714;
    if (_jt == 0x0030F774u) goto loc_0030F774;
    if (_jt == 0x0030F7D4u) goto loc_0030F7D4;
    if (_jt == 0x0030F832u) goto loc_0030F832;
    if (_jt == 0x0030F883u) goto loc_0030F883;
    if (_jt == 0x0030F8E1u) goto loc_0030F8E1;
    if (_jt == 0x0030F93Du) goto loc_0030F93D;
    if (_jt == 0x0030F99Du) goto loc_0030F99D;
    if (_jt == 0x0030F9FBu) goto loc_0030F9FB;
    if (_jt == 0x0030FA5Bu) goto loc_0030FA5B;
    if (_jt == 0x0030FAB9u) goto loc_0030FAB9;
    if (_jt == 0x0030FB17u) goto loc_0030FB17;
    if (_jt == 0x0030FB73u) goto loc_0030FB73;
    if (_jt == 0x0030FBB7u) goto loc_0030FBB7;
    if (_jt == 0x0030FC17u) goto loc_0030FC17;
    if (_jt == 0x0030FC75u) goto loc_0030FC75;
    if (_jt == 0x0030FCD7u) goto loc_0030FCD7;
    if (_jt == 0x0030FD37u) goto loc_0030FD37;
    if (_jt == 0x0030FD88u) goto loc_0030FD88;
    if (_jt == 0x0030FDE6u) goto loc_0030FDE6;
    if (_jt == 0x0030FE42u) goto loc_0030FE42;
    if (_jt == 0x0030FEA2u) goto loc_0030FEA2;
    if (_jt == 0x0030FF00u) goto loc_0030FF00;
    if (_jt == 0x0030FF44u) goto loc_0030FF44;
    if (_jt == 0x0030FFA2u) goto loc_0030FFA2;
    if (_jt == 0x0030FFFEu) goto loc_0030FFFE;
    if (_jt == 0x0031005Eu) goto loc_0031005E;
    if (_jt == 0x003100BCu) goto loc_003100BC;
    if (_jt == 0x003100E8u) goto loc_003100E8;
    if (_jt == 0x00310144u) goto loc_00310144;
    if (_jt == 0x0031019Eu) goto loc_0031019E;
    if (_jt == 0x003101FCu) goto loc_003101FC;
    if (_jt == 0x00310258u) goto loc_00310258;
    if (_jt == 0x00310282u) goto loc_00310282;
    if (_jt == 0x003102E2u) goto loc_003102E2;
    if (_jt == 0x00310340u) goto loc_00310340;
    if (_jt == 0x0031036Eu) goto loc_0031036E;
    if (_jt == 0x003103CCu) goto loc_003103CC;
    if (_jt == 0x00310428u) goto loc_00310428;
    if (_jt == 0x00310454u) goto loc_00310454;
    if (_jt == 0x003104B4u) goto loc_003104B4;
    if (_jt == 0x00310512u) goto loc_00310512;
    if (_jt == 0x00310540u) goto loc_00310540;
    if (_jt == 0x0031059Eu) goto loc_0031059E;
    if (_jt == 0x003105FAu) goto loc_003105FA;
    if (_jt == 0x00310626u) goto loc_00310626;
    if (_jt == 0x00310684u) goto loc_00310684;
    if (_jt == 0x003106E0u) goto loc_003106E0;
    if (_jt == 0x0031070Cu) goto loc_0031070C;
    if (_jt == 0x00310768u) goto loc_00310768;
    if (_jt == 0x003107C2u) goto loc_003107C2;
    if (_jt == 0x003107ECu) goto loc_003107EC;
    if (_jt == 0x0031081Au) goto loc_0031081A;
    if (_jt == 0x00310846u) goto loc_00310846;
    if (_jt == 0x00310872u) goto loc_00310872;
    if (_jt == 0x0031089Cu) goto loc_0031089C;
    if (_jt == 0x003108CAu) goto loc_003108CA;
    if (_jt == 0x003108F6u) goto loc_003108F6;
    if (_jt == 0x00310924u) goto loc_00310924;
    if (_jt == 0x00310950u) goto loc_00310950;
    if (_jt == 0x0031097Eu) goto loc_0031097E;
    if (_jt == 0x003109AAu) goto loc_003109AA;
    if (_jt == 0x003109D8u) goto loc_003109D8;
    if (_jt == 0x00310A04u) goto loc_00310A04;
    if (_jt == 0x00310A30u) goto loc_00310A30;
    if (_jt == 0x00310A5Au) goto loc_00310A5A;
    if (_jt == 0x00310A88u) goto loc_00310A88;
    if (_jt == 0x00310AB4u) goto loc_00310AB4;
    if (_jt == 0x00310AE2u) goto loc_00310AE2;
    if (_jt == 0x00310B0Eu) goto loc_00310B0E;
    if (_jt == 0x00310B3Cu) goto loc_00310B3C;
    if (_jt == 0x00310B68u) goto loc_00310B68;
    if (_jt == 0x00310B96u) goto loc_00310B96;
    if (_jt == 0x00310BC2u) goto loc_00310BC2;
    if (_jt == 0x00310BF0u) goto loc_00310BF0;
    if (_jt == 0x00310C1Cu) goto loc_00310C1C;
    if (_jt == 0x00310C4Au) goto loc_00310C4A;
    if (_jt == 0x00310C76u) goto loc_00310C76;
    if (_jt == 0x00310CA2u) goto loc_00310CA2;
    if (_jt == 0x00310CCCu) goto loc_00310CCC;
    if (_jt == 0x00310CFAu) goto loc_00310CFA;
    if (_jt == 0x00310D26u) goto loc_00310D26;
    if (_jt == 0x00310D54u) goto loc_00310D54;
    if (_jt == 0x00310D80u) goto loc_00310D80;
    if (_jt == 0x00310E76u) goto loc_00310E76;
    if (_jt == 0x00310EAAu) goto loc_00310EAA;
    if (_jt == 0x00310EC3u) goto loc_00310EC3;
    if (_jt == 0x00310EDCu) goto loc_00310EDC;
    if (_jt == 0x00310F86u) goto loc_00310F86;
    if (_jt == 0x00310FFCu) goto loc_00310FFC;
    if (_jt == 0x00311055u) goto loc_00311055;
    if (_jt == 0x00311098u) goto loc_00311098;
    if (_jt == 0x0031110Eu) goto loc_0031110E;
    if (_jt == 0x00311167u) goto loc_00311167;
    if (_jt == 0x003111C3u) goto loc_003111C3;
    if (_jt == 0x0031123Cu) goto loc_0031123C;
    if (_jt == 0x00311280u) goto loc_00311280;
    if (_jt == 0x003112DCu) goto loc_003112DC;
    if (_jt == 0x00311336u) goto loc_00311336;
    if (_jt == 0x0031134Au) goto loc_0031134A;
    if (_jt == 0x003113AAu) goto loc_003113AA;
    if (_jt == 0x00311408u) goto loc_00311408;
    if (_jt == 0x0031144Bu) goto loc_0031144B;
    if (_jt == 0x003114A9u) goto loc_003114A9;
    if (_jt == 0x00311521u) goto loc_00311521;
    if (_jt == 0x00311565u) goto loc_00311565;
    if (_jt == 0x003115A8u) goto loc_003115A8;
    if (_jt == 0x003115CEu) goto loc_003115CE;
    if (_jt == 0x003115F6u) goto loc_003115F6;
    if (_jt == 0x0031163Au) goto loc_0031163A;
    if (_jt == 0x00311665u) goto loc_00311665;
    if (_jt == 0x0031168Eu) goto loc_0031168E;
    if (_jt == 0x003116B6u) goto loc_003116B6;
    if (_jt == 0x003116DCu) goto loc_003116DC;
    if (_jt == 0x00311704u) goto loc_00311704;
    if (_jt == 0x0031176Eu) goto loc_0031176E;
    if (_jt == 0x00311799u) goto loc_00311799;
    if (_jt == 0x003117C2u) goto loc_003117C2;
    if (_jt == 0x003117EDu) goto loc_003117ED;
    if (_jt == 0x00311816u) goto loc_00311816;
    if (_jt == 0x0031183Eu) goto loc_0031183E;
    if (_jt == 0x00311864u) goto loc_00311864;
    if (_jt == 0x0031188Cu) goto loc_0031188C;
    g_seh_ebp = ebp; recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } }

loc_0030E335: ;
    MEM32(edx + 0xC) = 0xB;
    ebx = MEM32(ebp + 0x14);
    esi = esi >> 0x16;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0030E39D;

loc_0030E344: ;
    MEM32(edx + 0xC) = 0xD;
    ebx = MEM32(ebp + 0x18);
    esi = esi >> 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0030E39D;

loc_0030E353: ;
    MEM32(edx + 0xC) = 0xE;
    ebx = MEM32(ebp + 0x1C);
    esi = esi >> 0x13;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0030E39D;

loc_0030E362: ;
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E378; /* jge: greater or equal (signed >=) */

loc_0030E369: ;
    MEM32(edx + 0xC) = 0xF;
    ebx = MEM32(ebp + 0x20);
    esi = esi >> 0x1A;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0030E39A;

loc_0030E378: ;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E38D; /* jge: greater or equal (signed >=) */

loc_0030E37E: ;
    MEM32(edx + 0xC) = 0x10;
    ebx = MEM32(ebp + 0x24);
    esi = esi >> 0x1A;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0030E39A;

loc_0030E38D: ;
    MEM32(edx + 0xC) = 0x11;
    ebx = MEM32(ebp + 0x28);
    esi = esi >> 0x19;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0030E39A: ;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0030E39D: ;
    ecx = esi;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + ecx * 2);
    ebx = ZX8(LO8(ecx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ebx;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = esi;
    goto loc_0030E445;

loc_0030E3BE: ;
    ebx = MEM32(ebp + 0x10);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebx + ecx * 4);
    ebx = ZX8(LO8(ecx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40 (32-bit) */
    MEM32(edx) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030E3F5; /* je: equal / zero */

loc_0030E3D0: ;
    ebx = ecx;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0xC) = ebx;
    MEM32(edx + 4) = ecx;
    ebx = MEM32(edx + 0xC);
    ecx = 0x21;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi >> LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = esi;
    goto loc_0030E445;

loc_0030E3F5: ;
    ecx = esi;
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(LO16(ecx));
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    ebx = ebx >> 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = SX8(LO8(ebx));
    ecx = SX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x7F (8-bit) */
    MEM32(edx) = ebx;
    MEM32(edx + 0xC) = 0x14;
    if (TEST_NZ(_fa, _fb)) goto loc_0030E42C; /* jne: not equal / not zero */

loc_0030E419: ;
    ebx = esi;
    ebx = ebx >> 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ZX8(LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0xC) = 0x1C;

loc_0030E42C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E43B; /* jge: greater or equal (signed >=) */

loc_0030E430: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edx + 8) = 1;
    goto loc_0030E442;

loc_0030E43B: ;
    MEM32(edx + 8) = 0;

loc_0030E442: ;
    MEM32(edx + 4) = ecx;

loc_0030E445: ;
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030E47A; /* jl: less (signed <) */

loc_0030E44F: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0030E480;

loc_0030E47A: ;
    esi = MEM32(esp + 0x1C);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0030E480: ;
    ecx = MEM32(edx);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x10) = ecx;

loc_0030E491: ;
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    MEM32(esp + 0x10) = ecx;
    ecx = ZX8(MEM8(ebx + ecx));
    ebx = MEM32(edx + 4);
    ebx = ebx + ebx + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x24));
    ebx = MEM32(edx + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030E4C5; /* je: equal / zero */

loc_0030E4BF: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ecx;

loc_0030E4C5: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x1C);
    /* nop */

loc_0030E4E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030E507; /* je: equal / zero */

loc_0030E4E8: ;
    ebx = MEM32(esp + 0x20);
    ecx = 0x20;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;

loc_0030E507: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1FF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003118CB; /* ja: above (unsigned >) */

loc_0030E51A: ;
    ecx = ZX8(MEM8(ecx + 0x311BA8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x311910); /* switch: 166 entries, 166 targets */
    if (_jt == 0x0030E528u) goto loc_0030E528;
    if (_jt == 0x0030E5D0u) goto loc_0030E5D0;
    if (_jt == 0x0030E681u) goto loc_0030E681;
    if (_jt == 0x0030E702u) goto loc_0030E702;
    if (_jt == 0x0030E790u) goto loc_0030E790;
    if (_jt == 0x0030E81Cu) goto loc_0030E81C;
    if (_jt == 0x0030E890u) goto loc_0030E890;
    if (_jt == 0x0030E913u) goto loc_0030E913;
    if (_jt == 0x0030E985u) goto loc_0030E985;
    if (_jt == 0x0030EA08u) goto loc_0030EA08;
    if (_jt == 0x0030EA7Au) goto loc_0030EA7A;
    if (_jt == 0x0030EAD5u) goto loc_0030EAD5;
    if (_jt == 0x0030EB31u) goto loc_0030EB31;
    if (_jt == 0x0030EB91u) goto loc_0030EB91;
    if (_jt == 0x0030EBEFu) goto loc_0030EBEF;
    if (_jt == 0x0030EC4Fu) goto loc_0030EC4F;
    if (_jt == 0x0030ECADu) goto loc_0030ECAD;
    if (_jt == 0x0030ED0Bu) goto loc_0030ED0B;
    if (_jt == 0x0030ED67u) goto loc_0030ED67;
    if (_jt == 0x0030EDB6u) goto loc_0030EDB6;
    if (_jt == 0x0030EE44u) goto loc_0030EE44;
    if (_jt == 0x0030EED0u) goto loc_0030EED0;
    if (_jt == 0x0030EF2Cu) goto loc_0030EF2C;
    if (_jt == 0x0030EFB8u) goto loc_0030EFB8;
    if (_jt == 0x0030F042u) goto loc_0030F042;
    if (_jt == 0x0030F09Cu) goto loc_0030F09C;
    if (_jt == 0x0030F0FAu) goto loc_0030F0FA;
    if (_jt == 0x0030F156u) goto loc_0030F156;
    if (_jt == 0x0030F1B4u) goto loc_0030F1B4;
    if (_jt == 0x0030F210u) goto loc_0030F210;
    if (_jt == 0x0030F26Cu) goto loc_0030F26C;
    if (_jt == 0x0030F2C6u) goto loc_0030F2C6;
    if (_jt == 0x0030F324u) goto loc_0030F324;
    if (_jt == 0x0030F380u) goto loc_0030F380;
    if (_jt == 0x0030F3DEu) goto loc_0030F3DE;
    if (_jt == 0x0030F43Au) goto loc_0030F43A;
    if (_jt == 0x0030F496u) goto loc_0030F496;
    if (_jt == 0x0030F4F0u) goto loc_0030F4F0;
    if (_jt == 0x0030F532u) goto loc_0030F532;
    if (_jt == 0x0030F592u) goto loc_0030F592;
    if (_jt == 0x0030F5F0u) goto loc_0030F5F0;
    if (_jt == 0x0030F652u) goto loc_0030F652;
    if (_jt == 0x0030F6B2u) goto loc_0030F6B2;
    if (_jt == 0x0030F714u) goto loc_0030F714;
    if (_jt == 0x0030F774u) goto loc_0030F774;
    if (_jt == 0x0030F7D4u) goto loc_0030F7D4;
    if (_jt == 0x0030F832u) goto loc_0030F832;
    if (_jt == 0x0030F883u) goto loc_0030F883;
    if (_jt == 0x0030F8E1u) goto loc_0030F8E1;
    if (_jt == 0x0030F93Du) goto loc_0030F93D;
    if (_jt == 0x0030F99Du) goto loc_0030F99D;
    if (_jt == 0x0030F9FBu) goto loc_0030F9FB;
    if (_jt == 0x0030FA5Bu) goto loc_0030FA5B;
    if (_jt == 0x0030FAB9u) goto loc_0030FAB9;
    if (_jt == 0x0030FB17u) goto loc_0030FB17;
    if (_jt == 0x0030FB73u) goto loc_0030FB73;
    if (_jt == 0x0030FBB7u) goto loc_0030FBB7;
    if (_jt == 0x0030FC17u) goto loc_0030FC17;
    if (_jt == 0x0030FC75u) goto loc_0030FC75;
    if (_jt == 0x0030FCD7u) goto loc_0030FCD7;
    if (_jt == 0x0030FD37u) goto loc_0030FD37;
    if (_jt == 0x0030FD88u) goto loc_0030FD88;
    if (_jt == 0x0030FDE6u) goto loc_0030FDE6;
    if (_jt == 0x0030FE42u) goto loc_0030FE42;
    if (_jt == 0x0030FEA2u) goto loc_0030FEA2;
    if (_jt == 0x0030FF00u) goto loc_0030FF00;
    if (_jt == 0x0030FF44u) goto loc_0030FF44;
    if (_jt == 0x0030FFA2u) goto loc_0030FFA2;
    if (_jt == 0x0030FFFEu) goto loc_0030FFFE;
    if (_jt == 0x0031005Eu) goto loc_0031005E;
    if (_jt == 0x003100BCu) goto loc_003100BC;
    if (_jt == 0x003100E8u) goto loc_003100E8;
    if (_jt == 0x00310144u) goto loc_00310144;
    if (_jt == 0x0031019Eu) goto loc_0031019E;
    if (_jt == 0x003101FCu) goto loc_003101FC;
    if (_jt == 0x00310258u) goto loc_00310258;
    if (_jt == 0x00310282u) goto loc_00310282;
    if (_jt == 0x003102E2u) goto loc_003102E2;
    if (_jt == 0x00310340u) goto loc_00310340;
    if (_jt == 0x0031036Eu) goto loc_0031036E;
    if (_jt == 0x003103CCu) goto loc_003103CC;
    if (_jt == 0x00310428u) goto loc_00310428;
    if (_jt == 0x00310454u) goto loc_00310454;
    if (_jt == 0x003104B4u) goto loc_003104B4;
    if (_jt == 0x00310512u) goto loc_00310512;
    if (_jt == 0x00310540u) goto loc_00310540;
    if (_jt == 0x0031059Eu) goto loc_0031059E;
    if (_jt == 0x003105FAu) goto loc_003105FA;
    if (_jt == 0x00310626u) goto loc_00310626;
    if (_jt == 0x00310684u) goto loc_00310684;
    if (_jt == 0x003106E0u) goto loc_003106E0;
    if (_jt == 0x0031070Cu) goto loc_0031070C;
    if (_jt == 0x00310768u) goto loc_00310768;
    if (_jt == 0x003107C2u) goto loc_003107C2;
    if (_jt == 0x003107ECu) goto loc_003107EC;
    if (_jt == 0x0031081Au) goto loc_0031081A;
    if (_jt == 0x00310846u) goto loc_00310846;
    if (_jt == 0x00310872u) goto loc_00310872;
    if (_jt == 0x0031089Cu) goto loc_0031089C;
    if (_jt == 0x003108CAu) goto loc_003108CA;
    if (_jt == 0x003108F6u) goto loc_003108F6;
    if (_jt == 0x00310924u) goto loc_00310924;
    if (_jt == 0x00310950u) goto loc_00310950;
    if (_jt == 0x0031097Eu) goto loc_0031097E;
    if (_jt == 0x003109AAu) goto loc_003109AA;
    if (_jt == 0x003109D8u) goto loc_003109D8;
    if (_jt == 0x00310A04u) goto loc_00310A04;
    if (_jt == 0x00310A30u) goto loc_00310A30;
    if (_jt == 0x00310A5Au) goto loc_00310A5A;
    if (_jt == 0x00310A88u) goto loc_00310A88;
    if (_jt == 0x00310AB4u) goto loc_00310AB4;
    if (_jt == 0x00310AE2u) goto loc_00310AE2;
    if (_jt == 0x00310B0Eu) goto loc_00310B0E;
    if (_jt == 0x00310B3Cu) goto loc_00310B3C;
    if (_jt == 0x00310B68u) goto loc_00310B68;
    if (_jt == 0x00310B96u) goto loc_00310B96;
    if (_jt == 0x00310BC2u) goto loc_00310BC2;
    if (_jt == 0x00310BF0u) goto loc_00310BF0;
    if (_jt == 0x00310C1Cu) goto loc_00310C1C;
    if (_jt == 0x00310C4Au) goto loc_00310C4A;
    if (_jt == 0x00310C76u) goto loc_00310C76;
    if (_jt == 0x00310CA2u) goto loc_00310CA2;
    if (_jt == 0x00310CCCu) goto loc_00310CCC;
    if (_jt == 0x00310CFAu) goto loc_00310CFA;
    if (_jt == 0x00310D26u) goto loc_00310D26;
    if (_jt == 0x00310D54u) goto loc_00310D54;
    if (_jt == 0x00310D80u) goto loc_00310D80;
    if (_jt == 0x00310E76u) goto loc_00310E76;
    if (_jt == 0x00310EAAu) goto loc_00310EAA;
    if (_jt == 0x00310EC3u) goto loc_00310EC3;
    if (_jt == 0x00310EDCu) goto loc_00310EDC;
    if (_jt == 0x00310F86u) goto loc_00310F86;
    if (_jt == 0x00310FFCu) goto loc_00310FFC;
    if (_jt == 0x00311055u) goto loc_00311055;
    if (_jt == 0x00311098u) goto loc_00311098;
    if (_jt == 0x0031110Eu) goto loc_0031110E;
    if (_jt == 0x00311167u) goto loc_00311167;
    if (_jt == 0x003111C3u) goto loc_003111C3;
    if (_jt == 0x0031123Cu) goto loc_0031123C;
    if (_jt == 0x00311280u) goto loc_00311280;
    if (_jt == 0x003112DCu) goto loc_003112DC;
    if (_jt == 0x00311336u) goto loc_00311336;
    if (_jt == 0x0031134Au) goto loc_0031134A;
    if (_jt == 0x003113AAu) goto loc_003113AA;
    if (_jt == 0x00311408u) goto loc_00311408;
    if (_jt == 0x0031144Bu) goto loc_0031144B;
    if (_jt == 0x003114A9u) goto loc_003114A9;
    if (_jt == 0x00311521u) goto loc_00311521;
    if (_jt == 0x00311565u) goto loc_00311565;
    if (_jt == 0x003115A8u) goto loc_003115A8;
    if (_jt == 0x003115CEu) goto loc_003115CE;
    if (_jt == 0x003115F6u) goto loc_003115F6;
    if (_jt == 0x0031163Au) goto loc_0031163A;
    if (_jt == 0x00311665u) goto loc_00311665;
    if (_jt == 0x0031168Eu) goto loc_0031168E;
    if (_jt == 0x003116B6u) goto loc_003116B6;
    if (_jt == 0x003116DCu) goto loc_003116DC;
    if (_jt == 0x00311704u) goto loc_00311704;
    if (_jt == 0x0031176Eu) goto loc_0031176E;
    if (_jt == 0x00311799u) goto loc_00311799;
    if (_jt == 0x003117C2u) goto loc_003117C2;
    if (_jt == 0x003117EDu) goto loc_003117ED;
    if (_jt == 0x00311816u) goto loc_00311816;
    if (_jt == 0x0031183Eu) goto loc_0031183E;
    if (_jt == 0x00311864u) goto loc_00311864;
    if (_jt == 0x0031188Cu) goto loc_0031188C;
    g_seh_ebp = ebp; recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } }

loc_0030E528: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

loc_0030E5B3: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0030E671; /* jl: less (signed <) */

loc_0030E5CB: ;
    goto loc_00310E35;

loc_0030E5D0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00310E35; /* jge: greater or equal (signed >=) */

loc_0030E671: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E4E0;

loc_0030E681: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00310E35; /* jge: greater or equal (signed >=) */

loc_0030E6F2: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E4E0;

loc_0030E702: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030E790: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030E81C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

loc_0030E873: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0030E6F2; /* jl: less (signed <) */

loc_0030E88B: ;
    goto loc_00310E35;

loc_0030E890: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00310E35; /* jge: greater or equal (signed >=) */

loc_0030E903: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E4E0;

loc_0030E913: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

loc_0030E96C: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0030E903; /* jl: less (signed <) */

loc_0030E980: ;
    goto loc_00310E35;

loc_0030E985: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00310E35; /* jge: greater or equal (signed >=) */

loc_0030E9F8: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E4E0;

loc_0030EA08: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

loc_0030EA61: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0030E9F8; /* jl: less (signed <) */

loc_0030EA75: ;
    goto loc_00310E35;

loc_0030EA7A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030EAD5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030EB31: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030EB91: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030EBEF: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030EC4F: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030ECAD: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030ED0B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030ED67: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00310E35; /* jge: greater or equal (signed >=) */

loc_0030EDA6: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E4E0;

loc_0030EDB6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030EE44: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030EED0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E873;

loc_0030EF2C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030EFB8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F042: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E873;

loc_0030F09C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_0030F0FA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_0030F156: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030F1B4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030F210: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030F26C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030F2C6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F324: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F380: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F3DE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F43A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F496: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F4F0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0030EDA6; /* jl: less (signed <) */

loc_0030F52D: ;
    goto loc_00310E35;

loc_0030F532: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_0030F592: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_0030F5F0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030F652: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030F6B2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F714: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F774: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F7D4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030F832: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00310E35; /* jge: greater or equal (signed >=) */

loc_0030F873: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E4E0;

loc_0030F883: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_0030F8E1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_0030F93D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030F99D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030F9FB: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030FA5B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030FAB9: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030FB17: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030FB73: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0030F873; /* jl: less (signed <) */

loc_0030FBB2: ;
    goto loc_00310E35;

loc_0030FBB7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030FC17: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030FC75: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030FCD7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030FD37: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00310E35; /* jge: greater or equal (signed >=) */

loc_0030FD78: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E4E0;

loc_0030FD88: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030FDE6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030FE42: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030FEA2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0030FF00: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

loc_0030FF27: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0030FD78; /* jl: less (signed <) */

loc_0030FF3F: ;
    goto loc_00310E35;

loc_0030FF44: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030FFA2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0030FFFE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0031005E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003100BC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030FF27;

loc_003100E8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310144: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_0031019E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003101FC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310258: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030FF27;

loc_00310282: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003102E2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310340: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E873;

loc_0031036E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003103CC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310428: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E873;

loc_00310454: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003104B4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310512: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E873;

loc_00310540: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0031059E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003105FA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E873;

loc_00310626: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310684: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003106E0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E873;

loc_0031070C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310768: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003107C2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E873;

loc_003107EC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xB);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0031081A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xB);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310846: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xB);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310872: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xB);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0031089C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003108CA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003108F6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310924: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310950: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_0031097E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003109AA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xD);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_003109D8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xD);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310A04: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310A30: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310A5A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310A88: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E5B3;

loc_00310AB4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_00310AE2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_00310B0E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_00310B3C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_00310B68: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 7);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_00310B96: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 7);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_00310BC2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_00310BF0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030E96C;

loc_00310C1C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 9);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310C4A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 9);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310C76: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 8;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310CA2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 8;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310CCC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xA);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310CFA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xA);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310D26: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310D54: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_0030EA61;

loc_00310D80: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = ecx;
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(LO16(ecx));
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    ebx = ebx >> 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = SX8(LO8(ebx));
    ecx = SX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x7F (8-bit) */
    MEM32(edx) = ebx;
    MEM32(edx + 0xC) = 0x14;
    if (TEST_NZ(_fa, _fb)) goto loc_00310DC1; /* jne: not equal / not zero */

loc_00310DAC: ;
    ebx = MEM32(esp + 0x10);
    ebx = ebx >> 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0xC) = 0x1C;

loc_00310DC1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00310DD0; /* jge: greater or equal (signed >=) */

loc_00310DC5: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edx + 8) = 1;
    goto loc_00310DD7;

loc_00310DD0: ;
    MEM32(edx + 8) = 0;

loc_00310DD7: ;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    MEM32(esp + 0x10) = ecx;
    ecx = ZX8(MEM8(ebx + ecx));
    ebx = MEM32(edx + 4);
    ebx = ebx + ebx + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x24));
    ebx = MEM32(edx + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00310E17; /* je: equal / zero */

loc_00310E11: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ecx;

loc_00310E17: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310E67; /* jl: less (signed <) */

loc_00310E35: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0030E4E0;

loc_00310E67: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E4E0;

loc_00310E76: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0xC) = 0xB;
    ebx = MEM32(ebp + 0x14);
    ecx = ecx & 0x3FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00310F1B;

loc_00310E92: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E491;

loc_00310EAA: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0xC) = 0xD;
    ebx = MEM32(ebp + 0x18);
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00310F1B;

loc_00310EC3: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0xC) = 0xE;
    ebx = MEM32(ebp + 0x1C);
    ecx = ecx & 0x1FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00310F1B;

loc_00310EDC: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00310EF6; /* jge: greater or equal (signed >=) */

loc_00310EE7: ;
    MEM32(edx + 0xC) = 0xF;
    ebx = MEM32(ebp + 0x20);
    ecx = ecx >> 0x1A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00310F18;

loc_00310EF6: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00310F0B; /* jge: greater or equal (signed >=) */

loc_00310EFC: ;
    MEM32(edx + 0xC) = 0x10;
    ebx = MEM32(ebp + 0x24);
    ecx = ecx >> 0x1A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00310F18;

loc_00310F0B: ;
    MEM32(edx + 0xC) = 0x11;
    ebx = MEM32(ebp + 0x28);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00310F18: ;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00310F1B: ;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + ecx * 2);
    ebx = ZX8(LO8(ecx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310E92; /* jl: less (signed <) */

loc_00310F4B: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0030E491;

loc_00310F86: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

loc_00310FDF: ;
    esi = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00311230; /* jl: less (signed <) */

loc_00310FF7: ;
    goto loc_00311740;

loc_00310FFC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_00310FDF;

loc_00311055: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00311278; /* jl: less (signed <) */

loc_00311093: ;
    goto loc_00311740;

loc_00311098: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

loc_003110F1: ;
    esi = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00311518; /* jl: less (signed <) */

loc_00311109: ;
    goto loc_00311740;

loc_0031110E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_003110F1;

loc_00311167: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_00310FDF;

loc_003111C3: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00311740; /* jge: greater or equal (signed >=) */

loc_00311230: ;
    ebx = MEM32(esp + 0x1C);

loc_00311234: ;
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003118CB;

loc_0031123C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00311740; /* jge: greater or equal (signed >=) */

loc_00311278: ;
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003118CB;

loc_00311280: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_003110F1;

loc_003112DC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_003110F1;

loc_00311336: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00311740; /* jge: greater or equal (signed >=) */

loc_00311342: ;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003118CB;

loc_0031134A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_003110F1;

loc_003113AA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_003110F1;

loc_00311408: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0031155D; /* jl: less (signed <) */

loc_00311446: ;
    goto loc_00311740;

loc_0031144B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_003110F1;

loc_003114A9: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(ebx + ecx * 4); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00311740; /* jge: greater or equal (signed >=) */

loc_00311518: ;
    ebx = MEM32(esp + 0x1C);
    goto loc_003118C8;

loc_00311521: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00311740; /* jge: greater or equal (signed >=) */

loc_0031155D: ;
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003118CB;

loc_00311565: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */

loc_0031158B: ;
    esi = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00311632; /* jl: less (signed <) */

loc_003115A3: ;
    goto loc_00311740;

loc_003115A8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_0031158B;

loc_003115CE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 4;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_0031158B;

loc_003115F6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 4;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00311740; /* jge: greater or equal (signed >=) */

loc_00311632: ;
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003118CB;

loc_0031163A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_00311728;

loc_00311665: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_00311728;

loc_0031168E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_00311728;

loc_003116B6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_00311728;

loc_003116DC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_00311728;

loc_00311704: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */

loc_00311728: ;
    esi = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00311234; /* jl: less (signed <) */

loc_00311740: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003118CB;

loc_0031176E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_003118B0;

loc_00311799: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_003118B0;

loc_003117C2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 4;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_003118B0;

loc_003117ED: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 4;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_003118B0;

loc_00311816: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 7);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_003118B0;

loc_0031183E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 7);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_003118B0;

loc_00311864: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 8);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_003118B0;

loc_0031188C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 8);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(ecx + esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */

loc_003118B0: ;
    esi = MEM32(ebp + 0x34);
    fp_top() = fp_top() * MEMF(esi + ecx * 4); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00311740; /* jge: greater or equal (signed >=) */

loc_003118C8: ;
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_003118CB: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003118E9; /* je: equal / zero */

loc_003118E7: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003118E9: ;
    MEM32(edx + 0x14) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
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
