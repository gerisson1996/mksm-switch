#include <stdint.h>
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"

extern void sub_00079330(void);
extern void sub_0008EDF0(void);
extern void sub_0015DAE0(void);

void sub_00090FD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax();
    uint32_t g_ecx = recomp_leaf_ld_ecx();
    uint32_t g_esp = recomp_leaf_ld_esp();

    /* 0x00090fd0: call 0x1187a (sub_00079330) */
    PUSH32(esp, 0x00090FD5u);
    recomp_leaf_st_eax(g_eax);
    recomp_leaf_st_ecx(g_ecx);
    recomp_leaf_st_esp(g_esp);
    RECOMP_ABI_CALL(0x00079330u, sub_00079330);
    g_eax = recomp_leaf_ld_eax();
    g_ecx = recomp_leaf_ld_ecx();
    g_esp = recomp_leaf_ld_esp();

    /* 0x00090fd5: test eax, eax */
    if (g_eax == 0) {
        /* 0x00090fd9: jmp 0x119dd (sub_0008EDF0) - tail call */
        recomp_leaf_st_eax(g_eax);
        recomp_leaf_st_ecx(g_ecx);
        recomp_leaf_st_esp(g_esp);
        sub_0008EDF0();
        return;
    }

    /* 0x00090fde: mov ecx, dword ptr [esp + 4] */
    g_ecx = MEM32(g_esp + 4);

    /* 0x00090fe2: push 1 */
    PUSH32(esp, 1);

    /* 0x00090fe4: call 0x15dae0 (sub_0015DAE0) */
    PUSH32(esp, 0x00090FE9u);
    recomp_leaf_st_eax(g_eax);
    recomp_leaf_st_ecx(g_ecx);
    recomp_leaf_st_esp(g_esp);
    RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0);
    g_eax = recomp_leaf_ld_eax();
    g_ecx = recomp_leaf_ld_ecx();
    g_esp = recomp_leaf_ld_esp();

    /* 0x00090fe9: ret */
    g_esp += 4;
    recomp_leaf_st_eax(g_eax);
    recomp_leaf_st_ecx(g_ecx);
    recomp_leaf_st_esp(g_esp);
}
