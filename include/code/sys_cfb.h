#ifndef Z64_SYS_CFB_H
#define Z64_SYS_CFB_H

#include "global.h"

extern uintptr_t sSysCfbFbPtr[2];
extern uintptr_t sSysCfbEnd;

void SysCfb_Init(s32 n64dd);

void SysCfb_Reset(void);

void* SysCfb_GetFbPtr(s32 idx);

void* SysCfb_GetFbEnd(void);

#endif
