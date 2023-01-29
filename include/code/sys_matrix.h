#ifndef Z64_SYS_MATRIX_H
#define Z64_SYS_MATRIX_H

#include "global.h"

// clang-format off
extern Mtx gMtxClear;

extern MtxF gMtxFClear;
// clang-format on

extern MtxF* sMatrixStack;   // "Matrix_stack"
extern MtxF* sCurrentMatrix; // "Matrix_now"

void Matrix_Init(GameState* gameState);

void Matrix_Push(void);

void Matrix_Pop(void);

void Matrix_Get(MtxF* dest);

void Matrix_Put(MtxF* src);

MtxF* Matrix_GetCurrent(void);

void Matrix_Mult(MtxF* mf, u8 mode);

void Matrix_Translate(f32 x, f32 y, f32 z, u8 mode);

void Matrix_Scale(f32 x, f32 y, f32 z, u8 mode);

void Matrix_RotateX(f32 x, u8 mode);

void Matrix_RotateY(f32 y, u8 mode);

void Matrix_RotateZ(f32 z, u8 mode);

/**
 * Rotate using ZYX Tait-Bryan angles.
 * This means a (column) vector is first rotated around X, then around Y, then around Z, then (if `mode` is
 * `MTXMODE_APPLY`) gets transformed according to whatever the matrix was before adding the ZYX rotation.
 * Original Name: Matrix_RotateXYZ, changed to reflect rotation order.
 */
void Matrix_RotateZYX(s16 x, s16 y, s16 z, u8 mode);

/**
 * Translate and rotate using ZYX Tait-Bryan angles.
 * This means a (column) vector is first rotated around X, then around Y, then around Z, then translated, then gets
 * transformed according to whatever the matrix was previously.
 */
void Matrix_TranslateRotateZYX(Vec3f* translation, Vec3s* rotation);

/**
 * Set the current matrix to translate and rotate using YXZ Tait-Bryan angles.
 * This means a (column) vector is first rotated around Z, then around X, then around Y, then translated.
 */
void Matrix_SetTranslateRotateYXZ(f32 translateX, f32 translateY, f32 translateZ, Vec3s* rot);

Mtx* Matrix_MtxFToMtx(MtxF* src, Mtx* dest);

Mtx* Matrix_ToMtx(Mtx* dest, char* file, s32 line);

Mtx* Matrix_NewMtx(GraphicsContext* gfxCtx, char* file, s32 line);

Mtx* Matrix_MtxFToNewMtx(MtxF* src, GraphicsContext* gfxCtx);

void Matrix_MultVec3f(Vec3f* src, Vec3f* dest);

void Matrix_MtxFCopy(MtxF* dest, MtxF* src);

void Matrix_MtxToMtxF(Mtx* src, MtxF* dest);

void Matrix_MultVec3fExt(Vec3f* src, Vec3f* dest, MtxF* mf);

void Matrix_Transpose(MtxF* mf);

/**
 * Changes the 3x3 part of the current matrix to `mf` * S, where S is the scale in the current matrix.
 *
 * In details, S is a diagonal where each coefficient is the norm of the column in the 3x3 current matrix.
 * The 3x3 part can then be written as R * S where R has its columns normalized.
 * Since R is typically a rotation matrix, and the 3x3 part is changed from R * S to `mf` * S, this operation can be
 * seen as replacing the R rotation with `mf`, hence the function name.
 */
void Matrix_ReplaceRotation(MtxF* mf);

/**
 * Gets the rotation the specified matrix represents, using Tait-Bryan YXZ angles.
 * The flag value doesn't matter for a rotation matrix. Not 0 does extra calculation.
 */
void Matrix_MtxFToYXZRotS(MtxF* mf, Vec3s* rotDest, s32 flag);

/**
 * Gets the rotation the specified matrix represents, using Tait-Bryan ZYX angles.
 * The flag value doesn't matter for a rotation matrix. Not 0 does extra calculation.
 */
void Matrix_MtxFToZYXRotS(MtxF* mf, Vec3s* rotDest, s32 flag);

/*
 * Rotate the matrix by `angle` radians around a unit vector `axis`.
 * NB: `axis` is assumed to be a unit vector.
 */
void Matrix_RotateAxis(f32 angle, Vec3f* axis, u8 mode);

MtxF* Matrix_CheckFloats(MtxF* mf, char* file, s32 line);

void Matrix_SetTranslateUniformScaleMtxF(MtxF* mf, f32 scale, f32 translateX, f32 translateY, f32 translateZ);

void Matrix_SetTranslateUniformScaleMtx(Mtx* mtx, f32 scale, f32 translateX, f32 translateY, f32 translateZ);

void Matrix_SetTranslateUniformScaleMtx2(Mtx* mtx, f32 scale, f32 translateX, f32 translateY, f32 translateZ);

void Matrix_SetTranslateScaleMtx1(Mtx* mtx, f32 scaleX, f32 scaleY, f32 scaleZ, f32 translateX, f32 translateY,
                                  f32 translateZ);

void Matrix_SetTranslateScaleMtx2(Mtx* mtx, f32 scaleX, f32 scaleY, f32 scaleZ, f32 translateX, f32 translateY,
                                  f32 translateZ);

#endif
