#ifndef Z64_CREATETHREAD_H
#define Z64_CREATETHREAD_H

#include "global.h"
#include "ultra64/asm.h"

extern __OSThreadTail __osThreadTail;
extern OSThread* __osRunQueue;
extern OSThread* __osActiveQueue;
extern OSThread* __osRunningThread;
extern OSThread* __osFaultedThread;

void osCreateThread(OSThread* thread, OSId id, void (*entry)(void*), void* arg, void* sp, OSPri pri);

#endif
