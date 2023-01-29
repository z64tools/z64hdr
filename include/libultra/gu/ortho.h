#ifndef Z64_ORTHO_H
#define Z64_ORTHO_H

#include "global.h"

void guOrthoF(f32 mf[4][4], f32 left, f32 right, f32 bottom, f32 top, f32 near, f32 far, f32 scale);

void guOrtho(Mtx* mtx, f32 left, f32 right, f32 bottom, f32 top, f32 near, f32 far, f32 scale);

#endif
