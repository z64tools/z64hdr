#ifndef Z64_SYS_UCODE_H
#define Z64_SYS_UCODE_H

#include "global.h"

extern u64* sDefaultGSPUCodeText;
extern u64* sDefaultGSPUCodeData;

u64* SysUcode_GetUCodeBoot(void);

size_t SysUcode_GetUCodeBootSize(void);

u64* SysUcode_GetUCode(void);

u64* SysUcode_GetUCodeData(void);

#endif
