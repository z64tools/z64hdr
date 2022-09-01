#ifndef Z64_SETHWINTRROUTINE_H
#define Z64_SETHWINTRROUTINE_H

#include "global.h"
#include "ultra64/internal.h"

void __osSetHWIntrRoutine(OSHWIntr intr, s32 (*callback)(void), void* sp);

#endif
