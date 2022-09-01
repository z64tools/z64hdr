#ifndef PRINTUTILS_H
#define PRINTUTILS_H

#include "global.h"

s32 PrintUtils_VPrintf(PrintCallback* pfn, const char* fmt, va_list args);

s32 PrintUtils_Printf(PrintCallback* pfn, const char* fmt, ...);

#endif
