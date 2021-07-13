#ifndef _FUNCTIONS_H_
#error "This file must be included from functions.h"
#endif

#if defined(_Z64HDR_10_) || defined(_Z64HDR_USE_INTRINSICS_)
#define fabsf __builtin_fabsf
#define sqrtf __builtin_sqrtf
#define sqrt __builtin_sqrt
#else
f32 fabsf(f32 f);
f32 sqrtf(f32 f);
f64 sqrt(f64 d);
#endif

/*
//These are Microsoft intrinsics, possibly also IDO, but not GCC compatible
#ifndef __GNUC__
#pragma intrinsic(fabsf)
#pragma intrinsic(sqrtf)
#pragma intrinsic(sqrt)
#endif
*/
