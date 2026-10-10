/**
 * Mortal Kombat: Shaolin Monks (Xbox) - recompiled game entry point
 *
 * Boot order:
 *   crash reporter -> load default.xbe -> xbox_MemoryLayoutInit ->
 *   xbox_kernel_init -> xbox_path_init -> xbox_kernel_bridge_init ->
 *   g_esp = XBOX_STACK_TOP -> recomp_dispatch_init -> xbe_entry_point()
 *
 * Game data is the extracted disc (default.xbe, GAMEDATA.WAD..., etc.)
 * Path:
 *   Windows/Linux: $MKSM_GAME_DIR, else ./game
 *   Switch:        sdmc:/switch/mksm/game
 */

#ifdef _WIN32
#  include <windows.h>
#  include <dbghelp.h>
#else
#  include <signal.h>
#  include <unistd.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <xbox/xboxrecomp.h>

#ifdef __SWITCH__
void switch_boot(void);
void switch_shutdown(void);
void switch_error_dialog(const char *msg, const char *details);
#elif !defined(_WIN32)
int SDL_ShowSimpleMessageBox(uint32_t flags, const char *title, const char *message,
                             void *window);
#endif

extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp;
extern RECOMP_TLS uint32_t g_ebx, g_esi, g_edi;
extern ptrdiff_t g_xbox_mem_offset;
extern volatile uint32_t g_icall_trace[16];
extern volatile uint32_t g_icall_trace_idx;

typedef struct MCPXAPUState MCPXAPUState;
extern MCPXAPUState *mcpx_apu_init_standalone(uint8_t *ram_ptr);
extern MCPXAPUState *g_apu_state;
extern uint64_t mcpx_apu_mmio_read(MCPXAPUState *d, uint64_t addr, unsigned int size);
extern void mcpx_apu_mmio_write(MCPXAPUState *d, uint64_t addr, uint64_t val,
                                unsigned int size);

#define MKSM_APU_BASE 0xFE800000u
#define MKSM_APU_END  0xFE880000u

static uint32_t apu_mmio_rd(void *opaque, uint32_t off, unsigned size)
{
    return (uint32_t)mcpx_apu_mmio_read((MCPXAPUState *)opaque, off, size);
}

static void apu_mmio_wr(void *opaque, uint32_t off, uint32_t val, unsigned size)
{
    mcpx_apu_mmio_write((MCPXAPUState *)opaque, off, val, size);
}

extern void xbe_entry_point(void);
extern int recomp_dispatch_init(void);
extern void xbox_path_init(const char *game_dir, const char *save_dir);

#define MKSM_ENTRY_POINT 0x000F40CAu

#if defined(__SWITCH__)
#  define MKSM_DEFAULT_GAME_DIR "sdmc:/switch/mksm/game"
#  define MKSM_DEFAULT_SAVE_DIR "sdmc:/switch/mksm/save"
#else
#  define MKSM_DEFAULT_GAME_DIR "game"
#  define MKSM_DEFAULT_SAVE_DIR NULL
#endif

/* ------------------------------------------------------------------ */
/* Crash reporting                                                     */
/* ------------------------------------------------------------------ */

void print_guest_state(void)
{
    fprintf(stderr, "  guest: eax=%08X ecx=%08X edx=%08X ebx=%08X\n",
            g_eax, g_ecx, g_edx, g_ebx);
    fprintf(stderr, "         esi=%08X edi=%08X esp=%08X\n",
            g_esi, g_edi, g_esp);

    if (g_xbox_mem_offset && g_esp >= XBOX_STACK_BASE
            && g_esp < XBOX_STACK_BASE + XBOX_STACK_SIZE) {
        const uint32_t *sp =
            (const uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp);
        int shown = 0, i;
        fprintf(stderr, "  guest stack (return addresses, innermost first):\n");
        for (i = 0; i < 512 && shown < 24; i++) {
            uint32_t v = sp[i];
            if (g_esp + (uint32_t)i * 4u >= XBOX_STACK_BASE + XBOX_STACK_SIZE)
                break;
            if (v > g_xbox_code_lo && v < g_xbox_code_hi) {
                fprintf(stderr, "    [esp+%-4d] 0x%08X\n", i * 4, v);
                shown++;
            }
        }
    }
    {
        unsigned k;
        fprintf(stderr, "  recent ICALL targets:");
        for (k = 0; k < 16; k++)
            fprintf(stderr, " %08X", g_icall_trace[(g_icall_trace_idx + k) & 15]);
        fprintf(stderr, "\n");
    }
    fflush(stderr);
}

#ifdef _WIN32
static LONG CALLBACK veh_handler(PEXCEPTION_POINTERS ep)
{
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) {
        uintptr_t fault = ep->ExceptionRecord->ExceptionInformation[1];
        char buf[sizeof(SYMBOL_INFO) + 256];
        SYMBOL_INFO *sym = (SYMBOL_INFO *)buf;
        DWORD64 disp = 0;

        if (fault >= 0xFD000000 && fault < 0xFE000000)
            return EXCEPTION_CONTINUE_SEARCH;

        fprintf(stderr, "[CRASH] access violation at RIP=0x%llX, %s 0x%llX "
                        "(guest VA 0x%08X)\n",
                (unsigned long long)ep->ContextRecord->Rip,
                ep->ExceptionRecord->ExceptionInformation[0] ? "write" : "read",
                (unsigned long long)fault,
                (uint32_t)(fault - (uintptr_t)g_xbox_mem_offset));
        memset(buf, 0, sizeof(buf));
        sym->SizeOfStruct = sizeof(SYMBOL_INFO);
        sym->MaxNameLen = 255;
        if (SymFromAddr(GetCurrentProcess(), ep->ContextRecord->Rip, &disp, sym))
            fprintf(stderr, "  in %s+0x%llX\n", sym->Name,
                    (unsigned long long)disp);
        print_guest_state();
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

static void install_crash_reporter(void)
{
    SymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_UNDNAME);
    SymInitialize(GetCurrentProcess(), NULL, TRUE);
    AddVectoredExceptionHandler(1, veh_handler);
}
#elif defined(__SWITCH__)
static void install_crash_reporter(void) {}
#else
#include <execinfo.h>

static void crash_signal(int sig, siginfo_t *si, void *uc)
{
    (void)uc;
    fprintf(stderr, "[CRASH] signal %d, fault addr %p (guest VA 0x%08X)\n",
            sig, si->si_addr,
            (uint32_t)((uintptr_t)si->si_addr - (uintptr_t)g_xbox_mem_offset));
    print_guest_state();
    {
        void *frames[32];
        int n = backtrace(frames, 32);
        fprintf(stderr, "  host backtrace:\n");
        fflush(stderr);
        backtrace_symbols_fd(frames, n, 2);
    }
    signal(sig, SIG_DFL);
    raise(sig);
}

static void install_crash_reporter(void)
{
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = crash_signal;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
    {
        static char altstack[64 * 1024];
        stack_t ss;
        ss.ss_sp = altstack;
        ss.ss_size = sizeof(altstack);
        ss.ss_flags = 0;
        sigaltstack(&ss, NULL);
    }
    sigaction(SIGSEGV, &sa, NULL);
    sigaction(SIGBUS, &sa, NULL);
    sigaction(SIGILL, &sa, NULL);
    sigaction(SIGFPE, &sa, NULL);
}
#endif

static void *load_file(const char *path, size_t *out_size)
{
    FILE *f = fopen(path, "rb");
    long size;
    void *data;

    if (!f)
        return NULL;
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (size <= 0) {
        fclose(f);
        return NULL;
    }
    data = malloc((size_t)size);
    if (data && fread(data, 1, (size_t)size, f) != (size_t)size) {
        free(data);
        data = NULL;
    }
    fclose(f);
    if (data)
        *out_size = (size_t)size;
    return data;
}

static void fatal(const char *msg)
{
    fprintf(stderr, "[FATAL] %s\n", msg);
#if defined(_WIN32)
    MessageBoxA(NULL, msg, "MK Shaolin Monks recomp", MB_ICONERROR);
#elif defined(__SWITCH__)
    switch_error_dialog(msg, NULL);
#else
    SDL_ShowSimpleMessageBox(0x10, "MK Shaolin Monks recomp", msg, NULL);
#endif
}

static int game_main(void);
void xbox_guest_pin(int interrupt);
void xbox_gil_enter(void);
void xbox_gil_leave(void);
void xbox_gil_mark_main(void);

#ifdef __SWITCH__
#include <pthread.h>
void xbox_nx_spread_thread(void);
void xbox_nx_track_thread(void *entry);

static void *game_thread(void *arg)
{
    xbox_nx_spread_thread();
    xbox_nx_track_thread(NULL);
    *(int *)arg = game_main();
    return NULL;
}

int main(int argc, char **argv)
{
    pthread_attr_t attr;
    pthread_t th;
    int rc = 1;

    (void)argc;
    (void)argv;
    switch_boot();
    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, 16u * 1024 * 1024);
    if (pthread_create(&th, &attr, game_thread, &rc) == 0)
        pthread_join(th, NULL);
    else
        fprintf(stderr, "[FATAL] cannot start the game thread\n");
    switch_shutdown();
    return rc;
}
#else
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    return game_main();
}
#endif

static int game_main(void)
{
    xbox_guest_pin(0);
    char xbe_path[512];
    const char *game_dir;
    void *xbe_data;
    size_t xbe_size = 0;

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    printf("=== Mortal Kombat: Shaolin Monks (Xbox) - static recompilation ===\n");
    install_crash_reporter();
    if (getenv("MKSM_EXIT_TRACE"))
        atexit(print_guest_state);

#ifdef _WIN32
    if (!getenv("RECOMP_VBLANK"))     _putenv("RECOMP_VBLANK=1");
    if (!getenv("RECOMP_AC97_READY")) _putenv("RECOMP_AC97_READY=plain");
    if (!getenv("RECOMP_USB"))        _putenv("RECOMP_USB=1");
#else
    setenv("RECOMP_VBLANK", "1", 0);
    setenv("RECOMP_AC97_READY", "plain", 0);
    setenv("RECOMP_USB", "1", 0);
    setenv("RECOMP_PB_EXEC", "1", 0);
#endif
#if defined(__SWITCH__)
    setenv("RECOMP_QUIET", "1", 0);
#endif

    game_dir = getenv("MKSM_GAME_DIR");
    if (!game_dir || !game_dir[0])
        game_dir = MKSM_DEFAULT_GAME_DIR;
    snprintf(xbe_path, sizeof(xbe_path), "%s/default.xbe", game_dir);

    xbe_data = load_file(xbe_path, &xbe_size);
    if (!xbe_data) {
        fprintf(stderr, "cannot read %s\n", xbe_path);
        fatal("Failed to load default.xbe. Put the extracted game files in the game directory.");
        return 1;
    }
    printf("XBE %s: %zu bytes\n", xbe_path, xbe_size);

    if (!xbox_MemoryLayoutInit(xbe_data, xbe_size)) {
        fatal("Failed to initialise Xbox memory layout.");
        free(xbe_data);
        return 1;
    }
    g_xbox_mem_offset = xbox_GetMemoryOffset();
    printf("Xbox memory mapped at host offset 0x%llX\n",
           (unsigned long long)g_xbox_mem_offset);

    /* Emulated APU */
    if (getenv("RECOMP_AC97_READY")) {
        const char *apu = getenv("MKSM_APU");
        int plain = strcmp(getenv("RECOMP_AC97_READY"), "plain") == 0;

        if (!plain || !apu || strcmp(apu, "0") != 0) {
            g_apu_state = mcpx_apu_init_standalone((uint8_t *)xbox_GetMemoryBase());
            fprintf(stderr, "[BOOT] emulated APU %s\n",
                    g_apu_state ? "up" : "FAILED to initialise");
            if (g_apu_state && plain)
                xbox_MmioRegister(MKSM_APU_BASE, MKSM_APU_END,
                                  apu_mmio_rd, apu_mmio_wr, g_apu_state);
        }
    }

    /* USB gamepad controllers */
    {
        extern void xbox_OhciInit(void);
        xbox_OhciInit();
    }

#ifndef _WIN32
    /* GPU renderer */
    {
        const char *gl = getenv("MKSM_GL");
        if (!gl || strcmp(gl, "0") != 0) {
#if defined(MKSM_VULKAN)
            extern void nv2a_vk_install(void);
            nv2a_vk_install();
#else
            extern void nv2a_gl_install(void);
            nv2a_gl_install();
#endif
        }
    }
#endif

    xbox_kernel_init();
    xbox_path_init(game_dir, MKSM_DEFAULT_SAVE_DIR);
    xbox_kernel_bridge_init();

    g_esp = XBOX_STACK_TOP;

    if (!recomp_dispatch_init())
        fprintf(stderr, "[BOOT] flat dispatch unavailable; indirect calls will use binary search\n");

    /* Mirror pushbuffer fence from device PUT (+0x2C) into GPU semaphore *(+0x30) */
    xbox_Nv2aMirrorFence(0x003F0C08u, 0x2C, 0x30);

    xbox_WatchdogStart();

    printf("Starting MK:SM guest at 0x%08X (esp=0x%08X)\n", MKSM_ENTRY_POINT, g_esp);
    xbox_gil_mark_main();
    xbox_gil_enter();
    xbe_entry_point();
    xbox_gil_leave();

    printf("Guest returned. Cleaning up.\n");
    xbox_kernel_shutdown();
    xbox_MemoryLayoutShutdown();
    free(xbe_data);
    return 0;
}
