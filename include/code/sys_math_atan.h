#ifndef SYS_MATH_ATAN_H
#define SYS_MATH_ATAN_H

#include "global.h"

extern u16 sATan2Tbl[];

u16 Math_GetAtan2Tbl(f32 x, f32 y);

s16 Math_Atan2S(f32 x, f32 y);

f32 Math_Atan2F(f32 x, f32 y);

#endif
