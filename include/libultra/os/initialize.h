#ifndef __INITIALIZE__
#define __INITIALIZE__

#include "global.h"

typedef struct {
    u32 ins_00; // lui     k0, 0x8000
    u32 ins_04; // addiu   k0, k0, 0x39E0
    u32 ins_08; // jr      k0 ; __osException
    u32 ins_0C; // nop
} struct_exceptionPreamble;

void __osExceptionPreamble(void);

extern u64 osClockRate;
extern u32 D_800145C0;

void __createSpeedParam(void);

#endif // __INITIALIZE__
