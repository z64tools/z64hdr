#ifndef SYS_CFB_H
#define SYS_CFB_H

#include "global.h"

extern u32 sSysCfbFbPtr[2];
extern u32 sSysCfbEnd;

void SysCfb_Init(s32 n64dd);

void SysCfb_Reset();

u32 SysCfb_GetFbPtr(s32 idx);

u32 SysCfb_GetFbEnd(void);

#endif
