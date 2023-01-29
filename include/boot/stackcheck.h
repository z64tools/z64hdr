#ifndef Z64_STACKCHECK_H
#define Z64_STACKCHECK_H

#include "global.h"
#include "vt.h"

extern StackEntry* sStackInfoListStart;
extern StackEntry* sStackInfoListEnd;

void StackCheck_Init(StackEntry* entry, void* stackBottom, void* stackTop, u32 initValue, s32 minSpace,
                     const char* name);

void StackCheck_Cleanup(StackEntry* entry);

u32 StackCheck_GetState(StackEntry* entry);

u32 StackCheck_CheckAll(void);

u32 StackCheck_Check(StackEntry* entry);

#endif
