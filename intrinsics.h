#ifndef _FUNCTIONS_H_
#error "This file must be included from functions.h"
#endif

#ifdef _Z64HDR_USE_INTRINSICS_
#define fabsf __builtin_fabsf
#define sqrtf __builtin_sqrtf
#define sqrt __builtin_sqrt
#else
f32 fabsf(f32 f);
f32 sqrtf(f32 f);
f64 sqrt(f64 d);

#if defined(_Z64HDR_10_) && !defined(_Z64HDR_DISABLE_FABSF_ASM_)
//1.0 has implementations for sqrtf and sqrt (double), but no abs / fabsf / etc.
//You can either use intrinsics or this inline asm. However, unless this is
//disabled, it'll get emitted into every file you compile. (It's only two
//instructions though.)
asm(".set noat\n .set noreorder\n"
    "fabsf:\n"
    "jr    $ra \n"
    "abs.s $f0, $f12\n"
    ".set at\n .set reorder");
#endif

#endif


/*
//These are Microsoft intrinsics, possibly also IDO, but not GCC compatible
#ifndef __GNUC__
#pragma intrinsic(fabsf)
#pragma intrinsic(sqrtf)
#pragma intrinsic(sqrt)
#endif
*/
