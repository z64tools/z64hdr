#ifndef FAULT_H
#define FAULT_H

/**
 * @file fault.c
 *
 * This file implements the screen that may be viewed when the game crashes.
 * This is the second version of the crash screen, originally used in Majora's Mask.
 *
 * When the game crashes, a red bar will be drawn to the top-left of the screen, indicating that the
 * crash screen is available for use. Once this bar appears, it is possible to open the crash screen
 * with the following button combination:
 *
 * (L & R & Z) + DPad-Up + C-Down + C-Up + DPad-Down + DPad-Left + C-Left + C-Right + DPad-Right + (B & A & START)
 *
 * When entering this button combination, buttons that are &'d together must all be pressed together.
 * The L & R presses and B & A presses may be interchanged in the order they are pressed.
 *
 * "Clients" may be registered with the crash screen to extend its functionality. There are
 * two kinds of client, "Client" and "AddressConverterClient". Clients contribute one or
 * more pages to the crash debugger, while Address Converter Clients allow the crash screen to look up
 * the virtual addresses of dynamically allocated overlays.
 *
 * The crash screen has multiple pages:
 *  - Thread Context
 *      This page shows information about the thread on which the program crashed. It displays
 *      the cause of the crash, state of general-purpose registers, state of floating-point registers
 *      and the floating-point status register. If a floating-point exception caused the crash, it will
 *      be displayed next to the floating-point status register.
 *  - Stack Trace
 *      This page displays a full backtrace from the crashing function back to the start of the thread. It
 *      displays the Program Counter for each function and, if applicable, the Virtual Program Counter
 *      for relocated functions in overlays.
 *  - Client Pages
 *      After the stack trace page, currently registered clients are processed and their pages are displayed.
 *  - Memory Dump
 *      This page implements a scrollable memory dump.
 *  - End Screen
 *      This page informs you that there are no more pages to display.
 *
 * To navigate the pages, START and A may be used to advance to the next page, and L toggles whether to
 * automatically scroll to the next page after some time has passed.
 * DPad-Up may be pressed to enable sending fault pages over osSyncPrintf as well as displaying them on-screen.
 * DPad-Down disables sending fault pages over osSyncPrintf.
 */
#include "global.h"
#include "vt.h"
#include "alloca.h"

void FaultDrawer_Init(void);
void FaultDrawer_SetOsSyncPrintfEnabled(u32 enabled);
void FaultDrawer_DrawRecImpl(s32 xStart, s32 yStart, s32 xEnd, s32 yEnd, u16 color);
void FaultDrawer_FillScreen(void);
void FaultDrawer_SetInputCallback(void (*callback)(void));
void FaultDrawer_SetDrawerFB(void* fb, u16 w, u16 h);

extern const char* sExceptionNames[];

extern const char* sFpExceptionNames[];

// TODO: import .bss (has reordering issues)
extern FaultMgr* sFaultInstance;
extern u8 sFaultAwaitingInput;
extern STACK(sFaultStack, 0x600);
extern StackEntry sFaultThreadInfo;
extern FaultMgr gFaultMgr;

typedef struct {
    /* 0x00 */ s32 (*callback)(void*, void*);
    /* 0x04 */ void* arg0;
    /* 0x08 */ void* arg1;
    /* 0x0C */ s32 ret;
    /* 0x10 */ OSMesgQueue* queue;
    /* 0x14 */ OSMesg msg;
} FaultClientTask; // size = 0x18

void Fault_SleepImpl(u32 msec);

void Fault_ClientProcessThread(void* arg);

void Fault_ClientRunTask(FaultClientTask* task);

s32 Fault_ProcessClient(void* callback, void* arg0, void* arg1);

/**
 * Registers a fault client.
 *
 * Clients contribute at least one page to the crash screen, drawn by `callback`.
 * Arguments are passed on to the callback through `arg0` and `arg1`.
 *
 * The callback is intended to be
 * `void (*callback)(void* arg0, void* arg1)`
 */
void Fault_AddClient(FaultClient* client, void* callback, void* arg0, void* arg1);

/**
 * Removes a fault client so that the page is no longer displayed if a crash occurs.
 */
void Fault_RemoveClient(FaultClient* client);

/**
 * Registers an address converter client. This enables the crash screen to look up virtual
 * addresses of overlays relocated during runtime. Address conversion is carried out by
 * `callback`, which either returns a virtual address or NULL if the address could not
 * be converted.
 *
 * The callback is intended to be
 * `uintptr_t (*callback)(uintptr_t addr, void* arg)`
 * The callback may return 0 if it could not convert the address
 * The callback may return -1 to be unregistered
 */
void Fault_AddAddrConvClient(FaultAddrConvClient* client, void* callback, void* arg);

void Fault_RemoveAddrConvClient(FaultAddrConvClient* client);

/**
 * Converts `addr` to a virtual address via the registered
 * address converter clients
 */
uintptr_t Fault_ConvertAddress(uintptr_t addr);

void Fault_Sleep(u32 msec);

void PadMgr_RequestPadData(Input* input, s32 mode);

void Fault_PadCallback(Input* input);

void Fault_UpdatePadImpl(void);

/**
 * Awaits user input
 *
 * L toggles auto-scroll
 * DPad-Up enables osSyncPrintf output
 * DPad-Down disables osSyncPrintf output
 * A and DPad-Right continues and returns true
 * DPad-Left continues and returns false
 */
u32 Fault_WaitForInputImpl(void);

void Fault_WaitForInput(void);

void Fault_DrawRec(s32 x, s32 y, s32 w, s32 h, u16 color);

void Fault_FillScreenBlack(void);

void Fault_FillScreenRed(void);

void Fault_DrawCornerRec(u16 color);

void Fault_PrintFReg(s32 idx, f32* value);

void Fault_LogFReg(s32 idx, f32* value);

void Fault_PrintFPCSR(u32 value);

void Fault_LogFPCSR(u32 value);

void Fault_PrintThreadContext(OSThread* thread);

void Fault_LogThreadContext(OSThread* thread);

/**
 * Iterates through the active thread queue for a user thread with either
 * the CPU break or Fault flag set.
 */
OSThread* Fault_FindFaultedThread(void);

void Fault_Wait5Seconds(void);

/**
 * Waits for the following button combination to be entered before returning:
 *
 * (L & R & Z) + DPad-Up + C-Down + C-Up + DPad-Down + DPad-Left + C-Left + C-Right + DPad-Right + (B & A & START)
 */
void Fault_WaitForButtonCombo(void);

void Fault_DrawMemDumpContents(const char* title, uintptr_t addr, u32 arg2);

/**
 * Draws the memory dump page.
 *
 * DPad-Up scrolls up.
 * DPad-Down scrolls down.
 * Holding Z while scrolling speeds up scrolling by a factor of 0x10.
 * Holding B while scrolling speeds up scrolling by a factor of 0x100.
 *
 * L toggles auto-scrolling pages.
 * START and A move on to the next page.
 *
 * @param pc Program counter, pressing C-Up jumps to this address
 * @param sp Stack pointer, pressing C-Down jumps to this address
 * @param cLeftJump Unused parameter, pressing C-Left jumps to this address
 * @param cRightJump Unused parameter, pressing C-Right jumps to this address
 */
void Fault_DrawMemDump(uintptr_t pc, uintptr_t sp, uintptr_t cLeftJump, uintptr_t cRightJump);

/**
 * Searches a single function's stack frame for the function it was called from.
 * There are two cases that must be covered: Leaf and non-leaf functions.
 *
 * A leaf function is one that does not call any other function, in this case the
 * return address need not be saved to the stack. Since a leaf function does not
 * call other functions, only the function the stack trace begins in could possibly
 * be a leaf function, in which case the return address is in the thread context's
 * $ra already, as it never left.
 *
 * The procedure is therefore
 *  - Iterate instructions
 *  - Once jr $ra is found, set pc to $ra
 *  - Done after delay slot
 *
 * A non-leaf function calls other functions, it is necessary for the return address
 * to be saved to the stack. In these functions, it is important to keep track of the
 * stack frame size of each function.
 *
 * The procedure is therefore
 *  - Iterate instructions
 *  - If lw $ra <imm>($sp) is found, fetch the saved $ra from stack memory
 *  - If addiu $sp, $sp, <imm> is found, modify $sp by the immediate value
 *  - If jr $ra is found, set pc to $ra
 *  - Done after delay slot
 *
 * Note that searching for one jr $ra is sufficient, as only leaf functions can have
 * multiple jr $ra in the same function.
 *
 * There is also additional handling for eret and j. Neither of these instructions
 * appear in IDO compiled C, however do show up in the exception handler. It is not
 * possible to backtrace through an eret as an interrupt can occur at any time, so
 * there is no choice but to give up here. For j instructions, they can be followed
 * and the backtrace may continue as normal.
 */
void Fault_WalkStack(uintptr_t* spPtr, uintptr_t* pcPtr, uintptr_t* raPtr);

/**
 * Draws the stack trace page contents for the specified thread
 */
void Fault_DrawStackTrace(OSThread* thread, s32 x, s32 y, s32 height);

void Fault_LogStackTrace(OSThread* thread, s32 height);

void Fault_ResumeThread(OSThread* thread);

void Fault_DisplayFrameBuffer(void);

/**
 * Runs all registered fault clients. Each fault client displays a page
 * on the crash screen.
 */
void Fault_ProcessClients(void);

void Fault_UpdatePad(void);

#define FAULT_MSG_CPU_BREAK ((OSMesg)1)
#define FAULT_MSG_FAULT ((OSMesg)2)
#define FAULT_MSG_UNK ((OSMesg)3)

void Fault_ThreadEntry(void* arg);

void Fault_SetFrameBuffer(void* fb, u16 w, u16 h);

void Fault_Init(void);

/**
 * Fault page for Hungup crashes. Displays the thread id and two messages
 * specified in arguments to `Fault_AddHungupAndCrashImpl`.
 */
void Fault_HungupFaultClient(const char* exp1, const char* exp2);

/**
 * Immediately crashes the current thread, for cases where an irrecoverable
 * error occurs. The parameters specify two messages detailing the error, one
 * or both may be NULL.
 */
void Fault_AddHungupAndCrashImpl(const char* exp1, const char* exp2);

/**
 * Like `Fault_AddHungupAndCrashImpl`, however provides a fixed message containing
 * filename and line number
 */
void Fault_AddHungupAndCrash(const char* file, s32 line);

#endif
