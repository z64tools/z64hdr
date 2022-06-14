#ifndef __SETHWINTRROUTINE__
#define __SETHWINTRROUTINE__

#include "global.h"
#include "ultra64/internal.h"

void __osSetHWIntrRoutine(OSHWIntr intr, s32 (*callback)(void), void* sp);

#endif // __SETHWINTRROUTINE__
