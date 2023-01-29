#ifndef Z64_POSITION_H
#define Z64_POSITION_H

#include "global.h"

/**
 * guPositionF
 * Creates a rotation/parallel translation modeling matrix (floating point)
 */
void guPositionF(f32 mf[4][4], f32 rot, f32 pitch, f32 yaw, f32 scale, f32 x, f32 y, f32 z);

/**
 * guPosition
 * Creates a rotational/parallel translation modeling matrix (fixed point)
 */
void guPosition(Mtx* m, f32 rot, f32 pitch, f32 yaw, f32 scale, f32 x, f32 y, f32 z);

#endif
