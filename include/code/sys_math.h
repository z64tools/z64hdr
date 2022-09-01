#ifndef Z64_SYS_MATH_H
#define Z64_SYS_MATH_H

#include "global.h"

extern f32 sFactorialTbl[];

f32 Math_FactorialF(f32 n);

f32 Math_Factorial(s32 n);

f32 Math_PowF(f32 base, s32 exp);

f32 Math_SinF(f32 angle);

f32 Math_CosF(f32 angle);

#endif
