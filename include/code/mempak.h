#ifndef MEMPAK_H
#define MEMPAK_H

#include "global.h"

extern OSPfs sMempakPfsHandle;
extern s32 sMempakFreeBytes;
extern s32 sMempakFiles[10];

extern u16 sMempakCompanyCode;
extern u32 sMempakGameCode;

// "ZELDA DEMO TOOL "
extern u8 sMempakGameName[0x10];
extern u8 sMempakExtName[8];

s32 Mempak_Init(s32 controllerNb);

s32 Mempak_GetFreeBytes(s32 controllerNb);

s32 Mempak_FindFile(s32 controllerNb, char start, char end);

s32 Mempak_Write(s32 controllerNb, char idx, void* buffer, s32 offset, s32 size);

s32 Mempak_Read(s32 controllerNb, char idx, void* buffer, s32 offset, s32 size);

s32 Mempak_Alloc(s32 controllerNb, char* idx, s32 size);

s32 Mempak_DeleteFile(s32 controllerNb, char idx);

s32 Mempak_GetFileSize(s32 controllerNb, char idx);

#endif
