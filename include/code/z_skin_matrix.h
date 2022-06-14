#ifndef __Z_SKIN_MATRIX__
#define __Z_SKIN_MATRIX__

#include "global.h"
#include "vt.h"

extern MtxF sMtxFClear;

void SkinMatrix_Clear(MtxF* mf);
void SkinMatrix_SetRotateYXZ(MtxF* mf, s16 x, s16 y, s16 z);
void SkinMatrix_SetTranslateRotateZYXScale(MtxF* dest, f32 scaleX, f32 scaleY, f32 scaleZ, s16 rotX, s16 rotY, s16 rotZ, f32 translateX, f32 translateY, f32 translateZ);
void SkinMatrix_Vec3fToVec3s(Vec3f* src, Vec3s* dest);
void SkinMatrix_Vec3sToVec3f(Vec3s* src, Vec3f* dest);
void SkinMatrix_MtxFToMtx(MtxF* src, Mtx* dest);
void func_800A8030(MtxF* mf, f32* arg1);

#endif // __Z_SKIN_MATRIX__
