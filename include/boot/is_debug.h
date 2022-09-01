#ifndef IS_DEBUG_H
#define IS_DEBUG_H

#include "global.h"

extern OSPiHandle* sISVHandle; // official name : is_Handle

#define gISVDbgPrnAdrs ((ISVDbg*)0xB3FF0000)
#define ASCII_TO_U32(a, b, c, d) ((u32)((a << 24) | (b << 16) | (c << 8) | (d << 0)))

void isPrintfInit(void);

void osSyncPrintfUnused(const char* fmt, ...);

void osSyncPrintf(const char* fmt, ...);

// assumption
void rmonPrintf(const char* fmt, ...);

void* is_proutSyncPrintf(void* arg, const char* str, u32 count);

void func_80002384(const char* exp, const char* file, u32 line);

#endif
