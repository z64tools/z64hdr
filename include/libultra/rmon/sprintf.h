#ifndef SPRINTF_H
#define SPRINTF_H

#include "global.h"

void* proutSprintf(void* dst, const char* fmt, u32 size);

s32 vsprintf(char* dst, const char* fmt, va_list args);

s32 sprintf(char* dst, const char* fmt, ...);

#endif
