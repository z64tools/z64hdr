#ifndef XPRINTF_H
#define XPRINTF_H

#include "global.h"

#define ATOI(i, a)                           \
    for (i = 0; *a >= '0' && *a <= '9'; a++) \
        if (i < 999)                         \
            i = *a + i * 10 - '0';

#define _PROUT(fmt, _size)                 \
    if (_size > 0) {                       \
        arg = (void*)pfn(arg, fmt, _size); \
        if (arg != 0)                      \
            x.nchar += _size;              \
        else                               \
            return x.nchar;                \
    }
#define _PAD(m, src, extracond)      \
    if (extracond && m > 0) {        \
        s32 i;                       \
        s32 j;                       \
        for (j = m; j > 0; j -= i) { \
            if ((u32)j > 32)         \
                i = 32;              \
            else                     \
                i = j;               \
            _PROUT(src, i);          \
        }                            \
    }

extern char spaces[];
extern char zeroes[];

void _Putfld(_Pft*, va_list*, u8, u8*);

s32 _Printf(PrintCallback pfn, void* arg, const char* fmt, va_list ap);

void _Putfld(_Pft* px, va_list* pap, u8 code, u8* ac);

#endif
