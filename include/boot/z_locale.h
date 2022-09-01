#ifndef Z64_LOCALE_H
#define Z64_LOCALE_H

#include "global.h"
#include "vt.h"

extern u32 gCurrentRegion;
extern LocaleCartInfo sCartInfo;

void Locale_Init(void);

void Locale_ResetRegion(void);

u32 func_80001F48(void);

u32 func_80001F8C(void);

// This function appears to be unused?
u32 Locale_IsRegionNative(void);

#endif
