/**
 * Manual function overrides and ICALL diagnostics for Mortal Kombat: Shaolin Monks
 */

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"

extern volatile uint32_t g_icall_trace[16];
extern volatile uint32_t g_icall_trace_idx;
extern volatile uint64_t g_icall_count;

typedef void (*recomp_func_t)(void);
extern ptrdiff_t g_xbox_mem_offset;

static void crt_memmove(void)
{
    uint32_t dst = MEM32(esp + 4);
    uint32_t src = MEM32(esp + 8);
    uint32_t n   = MEM32(esp + 12);

    if (n)
        memmove((void *)XBOX_PTR(dst), (const void *)XBOX_PTR(src), n);
    eax = dst;
    esp += 4;   /* cdecl ret: caller pops the arguments */
}

void sub_000F0BB0(void)
{
    crt_memmove();
}




extern void sub_000A6720(void);
extern void sub_000CB2E0(void);
extern void sub_00090FD0(void);

recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    if (xbox_va == 0x00090FD0 || xbox_va == 0x00011244)
        return (recomp_func_t)sub_00090FD0;
    if (xbox_va == 0x000A6720 || xbox_va == 0x0001379C)
        return (recomp_func_t)sub_000A6720;
    if (xbox_va == 0x000CB2E0 || xbox_va == 0x00015213)
        return (recomp_func_t)sub_000CB2E0;
    if (xbox_va == 0x000F0BB0 || xbox_va == 0x000F0E54)
        return (recomp_func_t)crt_memmove;
    if (xbox_va == 0x000F1A07)
        return (recomp_func_t)sub_000F1A07;
    if (xbox_va == 0x00457B80)
        return (recomp_func_t)sub_00457B80;
    if (xbox_va == 0x0045AD10)
        return (recomp_func_t)sub_0045AD10;
    if (xbox_va == 0x0030E2B0)
        return (recomp_func_t)sub_0030E2B0;
    if (xbox_va == 0x003D37A0)
        return (recomp_func_t)sub_003D37A0;
    if (xbox_va == 0x0048C258)
        return (recomp_func_t)sub_0048C258;
    if (xbox_va == 0x003FCB16)
        return (recomp_func_t)sub_003FCB16;
    if (xbox_va == 0x0040075A)
        return (recomp_func_t)sub_0040075A;
    if (xbox_va == 0x0040968D)
        return (recomp_func_t)sub_0040968D;
    if (xbox_va == 0x0048CEA9)
        return (recomp_func_t)sub_0048CEA9;
    if (xbox_va == 0x0048EBB3)
        return (recomp_func_t)sub_0048EBB3;
    if (xbox_va == 0x0048EC05)
        return (recomp_func_t)sub_0048EC05;
    if (xbox_va == 0x0048EFF9)
        return (recomp_func_t)sub_0048EFF9;
    if (xbox_va == 0x0048F618)
        return (recomp_func_t)sub_0048F618;
    if (xbox_va == 0x0049394F)
        return (recomp_func_t)sub_0049394F;


    /* Handle Incremental Link Table (ILT) thunks (0x00011000 - 0x00017000) */
    if (xbox_va >= 0x00011000 && xbox_va < 0x00017000) {
        static recomp_func_t s_ilt_cache[0x6000];
        static uint8_t s_ilt_checked[0x6000];
        uint32_t off = xbox_va - 0x00011000;
        if (s_ilt_checked[off])
            return s_ilt_cache[off];

        s_ilt_checked[off] = 1;
        const uint8_t *code = (const uint8_t *)XBOX_PTR(xbox_va);
        if (code[0] == 0xE9) {
            int32_t rel = *(const int32_t *)(code + 1);
            uint32_t target = xbox_va + 5 + rel;
            recomp_func_t fn = recomp_lookup(target);
            if (!fn) fn = recomp_lookup_kernel(target);
            if (!fn && target >= 0x00011000 && target < 0x00017000)
                fn = recomp_lookup_manual(target);
            s_ilt_cache[off] = fn;
            return fn;
        }
    }

    return NULL;
}

void recomp_icall_fail_log(uint32_t xbox_va)
{
    fprintf(stderr, "[RECOMP] Unresolved ICALL target: 0x%08X (after %llu icalls)\n",
            xbox_va, (unsigned long long)g_icall_count);
}

void recomp_icall_not_code_log(uint32_t va)
{
    enum { SLOTS = 16 };
    static uint32_t seen[SLOTS];
    static uint64_t hits[SLOTS];
    static int count;
    int i;

    for (i = 0; i < count; i++)
        if (seen[i] == va)
            break;
    if (i == count) {
        if (count == SLOTS)
            return;
        seen[count] = va;
        hits[count] = 0;
        count++;
    }
    hits[i]++;
    {
        uint64_t n = hits[i];
        while (n >= 10 && n % 10 == 0)
            n /= 10;
        if (n != 1)
            return;
    }
    fprintf(stderr, "[ICALL] target 0x%08X is not code -- skipped %llu time(s)\n",
            va, (unsigned long long)hits[i]);
    fflush(stderr);
}

extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_ebx, g_esi, g_edi, g_esp;

static uint8_t s_port_80c0 = 0;
static uint32_t s_vblank_count = 0;

void recomp_unimpl(const char *text, uint32_t va)
{
    /* Emulate D3D hardware port 0x80C0 access */
    if (va == 0x003D4B04u) {
        /* out dx, al (port 0x80C0) */
        s_port_80c0 = (uint8_t)g_eax;
        return;
    }
    if (va == 0x003D38CCu || va == 0x003D3ACDu) {
        /* in al, dx (port 0x80C0) - video field toggle */
        s_vblank_count++;
        uint8_t field_bit = (s_vblank_count & 1) ? 0x20 : 0x00;
        uint8_t val = (s_port_80c0 & ~0x20) | field_bit;
        g_eax = (g_eax & ~0xFFu) | val;
        return;
    }
    if (va == 0x003CCF54u) {
        /* wbinvd: cache invalidate - safe no-op */
        return;
    }
    if (strcmp(text, "cli") == 0 || strcmp(text, "sti") == 0) {
        /* Interrupt flag manipulation: safe no-op in user space */
        return;
    }

    static int printed;
    const char *trap = getenv("RECOMP_UNIMPL_TRAP");
    int stop = trap && *trap && *trap != '0';

    if (printed < 50 || stop) {
        printed++;
        fprintf(stderr,
                "[UNIMPL] untranslated instruction REACHED: `%s` at 0x%08X\n",
                text, va);
        fflush(stderr);
    }
    if (stop) abort();
}
