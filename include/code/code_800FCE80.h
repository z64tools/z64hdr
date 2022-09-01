#ifndef CODE_800FCE80_H
#define CODE_800FCE80_H

#include "global.h"
#include "fp.h"

extern s32 gUseAtanContFrac;

f32 Math_FTanF(f32 x);

f32 Math_FFloorF(f32 x);

f32 Math_FCeilF(f32 x);

f32 Math_FRoundF(f32 x);

f32 Math_FTruncF(f32 x);

f32 Math_FNearbyIntF(f32 x);

/* Arctangent approximation using a Taylor series (one quadrant) */
f32 Math_FAtanTaylorQF(f32 x);

/* Ditto for two quadrants */
f32 Math_FAtanTaylorF(f32 x);

/* Arctangent approximation using a continued fraction */
f32 Math_FAtanContFracF(f32 x);

f32 Math_FAtanF(f32 x);

f32 Math_FAtan2F(f32 y, f32 x);

f32 Math_FAsinF(f32 x);

f32 Math_FAcosF(f32 x);

#endif
