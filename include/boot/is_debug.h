#ifndef __IS_DEBUG__
#define __IS_DEBUG__

#include "global.h"

extern OSPiHandle* sISVHandle;

#define gISVDbgPrnAdrs ((ISVDbg*)0xB3FF0000)
#define ASCII_TO_U32(a, b, c, d) ((u32)((a << 24) | (b << 16) | (c << 8) | (d << 0)))

#endif // __IS_DEBUG__
