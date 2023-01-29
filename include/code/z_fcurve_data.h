#ifndef Z64_FCURVE_DATA_H
#define Z64_FCURVE_DATA_H

/**
 * File: z_fcurve_data.c
 * Description: Interpolation functions for use with Curve SkelAnime
 */
#include "global.h"
#include "z64curve.h"

#define FCURVE_INTERP_CUBIC 0  // Interpolate using a Hermite cubic spline
#define FCURVE_INTERP_NONE 1   // Return the value at the left endpoint instead of interpolating
#define FCURVE_INTERP_LINEAR 2 // Interpolate linearly

/**
 * Hermite cubic spline interpolation between two endpoints, a,b. More information available at
 * https://en.wikipedia.org/wiki/Cubic_Hermite_spline
 *
 * @param t interpolation parameter rescaled to lie in [0,1], (x-a)/(b-a)
 * @param interval distance (b-a) between the endpoints
 * @param y0 p(a)
 * @param y1 p(b)
 * @param m0 p'(a)
 * @param m1 p'(b)
 * @return f32 p(t), value of the cubic interpolating polynomial
 */
f32 Curve_CubicHermiteSpline(f32 t, f32 interval, f32 y0, f32 y1, f32 m0, f32 m1);

/**
 * Interpolates based on an array of CurveInterpKnot.
 *
 * @param x point at which to interpolate.
 * @param knots Beginning of CurveInterpKnot array to use.
 * @param knotCount number of knots to read from the array.
 * @return f32 interpolated value
 */
f32 Curve_Interpolate(f32 x, CurveInterpKnot* knots, s32 knotCount);

#endif
