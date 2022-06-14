#ifndef __FAULT__
#define __FAULT__

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
extern FaultMgr* sFaultInstance;
extern u8 sFaultAwaitingInput;
extern StackEntry sFaultThreadInfo;
extern FaultMgr gFaultMgr;

typedef struct {
    /* 0x00 */ s32 (*callback)(void*, void*);
    /* 0x04 */ void* arg0;
    /* 0x08 */ void* arg1;
    /* 0x0C */ s32 ret;
    /* 0x10 */ OSMesgQueue* queue;
    /* 0x14 */ OSMesg msg;
} FaultClientTask;

void Fault_SleepImpl(u32 msec);
void Fault_ClientProcessThread(void* arg);
void Fault_ClientRunTask(FaultClientTask* task);
s32 Fault_ProcessClient(void* callback, void* arg0, void* arg1);
void Fault_AddClient(FaultClient* client, void* callback, void* arg0, void* arg1);
void Fault_RemoveClient(FaultClient* client);
void Fault_AddAddrConvClient(FaultAddrConvClient* client, void* callback, void* arg);
void Fault_RemoveAddrConvClient(FaultAddrConvClient* client);
uintptr_t Fault_ConvertAddress(uintptr_t addr);
void Fault_Sleep(u32 msec);
void Fault_PadCallback(Input* input);
void Fault_UpdatePadImpl(void);
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
OSThread* Fault_FindFaultedThread(void);
void Fault_Wait5Seconds(void);
void Fault_WaitForButtonCombo(void);
void Fault_DrawMemDumpContents(const char* title, uintptr_t addr, u32 arg2);
void Fault_DrawMemDump(uintptr_t pc, uintptr_t sp, uintptr_t cLeftJump, uintptr_t cRightJump);
void Fault_WalkStack(uintptr_t* spPtr, uintptr_t* pcPtr, uintptr_t* raPtr);
void Fault_DrawStackTrace(OSThread* thread, s32 x, s32 y, s32 height);
void Fault_LogStackTrace(OSThread* thread, s32 height);
void Fault_ResumeThread(OSThread* thread);
void Fault_DisplayFrameBuffer(void);
void Fault_ProcessClients(void);
void Fault_UpdatePad(void);

#define FAULT_MSG_CPU_BREAK ((OSMesg)1)
#define FAULT_MSG_FAULT ((OSMesg)2)
#define FAULT_MSG_UNK ((OSMesg)3)

void Fault_ThreadEntry(void* arg);
void Fault_SetFrameBuffer(void* fb, u16 w, u16 h);
void Fault_Init(void);
void Fault_HungupFaultClient(const char* exp1, const char* exp2);
void Fault_AddHungupAndCrashImpl(const char* exp1, const char* exp2);
void Fault_AddHungupAndCrash(const char* file, s32 line);

#endif // __FAULT__
