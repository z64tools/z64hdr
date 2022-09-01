#ifndef Z64_STRING_H
#define Z64_STRING_H

#include "global.h"

extern const char* strchr(const char* str, s32 ch);

u32 strlen(const char* str);

void* memcpy(void* dst, const void* src, size_t size);

#endif
