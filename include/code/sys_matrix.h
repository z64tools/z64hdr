#ifndef __SYS_MATRIX__
#define __SYS_MATRIX__

#include "global.h"

extern MtxF* sMatrixStack;
extern MtxF* sCurrentMatrix;

MtxF* Matrix_GetCurrent(void);
void Matrix_SetTranslateUniformScaleMtxF(MtxF* mf, f32 scale, f32 translateX, f32 translateY, f32 translateZ);
void Matrix_SetTranslateUniformScaleMtx(Mtx* mtx, f32 scale, f32 translateX, f32 translateY, f32 translateZ);
void Matrix_SetTranslateUniformScaleMtx2(Mtx* mtx, f32 scale, f32 translateX, f32 translateY, f32 translateZ);
void Matrix_SetTranslateScaleMtx1(Mtx* mtx, f32 scaleX, f32 scaleY, f32 scaleZ, f32 translateX, f32 translateY, f32 translateZ);

#endif // __SYS_MATRIX__
