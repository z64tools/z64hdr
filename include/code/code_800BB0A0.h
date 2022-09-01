#ifndef Z64_CODE_800BB0A0_H
#define Z64_CODE_800BB0A0_H

#include "global.h"

// The code in this file is very similar to a spline system used in Super Mario 64 for cutscene camera movement

void func_800BB0A0(f32 u, Vec3f* pos, f32* roll, f32* viewAngle, f32* point0, f32* point1, f32* point2, f32* point3);

s32 func_800BB2B4(Vec3f* pos, f32* roll, f32* fov, CutsceneCameraPoint* point, s16* keyFrame, f32* curFrame);

#endif
