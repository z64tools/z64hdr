#ifndef __Z_FCURVE_DATA__
#define __Z_FCURVE_DATA__

#include "global.h"
#include "z64curve.h"
#define FCURVE_INTERP_CUBIC 0  // Interpolate using a Hermite cubic spline
#define FCURVE_INTERP_NONE 1   // Return the value at the left endpoint instead of interpolating
#define FCURVE_INTERP_LINEAR 2 // Interpolate linearly

f32 Curve_CubicHermiteSpline(f32 t, f32 interval, f32 y0, f32 y1, f32 m0, f32 m1);
f32 Curve_Interpolate(f32 x, CurveInterpKnot* knots, s32 knotCount);

#endif // __Z_FCURVE_DATA__
