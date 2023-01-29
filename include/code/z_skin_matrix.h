#ifndef Z64_SKIN_MATRIX_H
#define Z64_SKIN_MATRIX_H

#include "global.h"
#include "vt.h"

// clang-format off
extern MtxF sMtxFClear;
// clang-format on

/**
 * Multiplies the matrix mf by a 4 components column vector [ src , 1 ] and writes the resulting 4 components to xyzDest
 * and wDest.
 *
 * \f[ \begin{bmatrix} \texttt{xyzDest} \\ \texttt{wDest} \\ \end{bmatrix}
 *      = [\texttt{mf}] \cdot
 *        \begin{bmatrix} \texttt{src} \\ 1 \\ \end{bmatrix}
 * \f]
 */
void SkinMatrix_Vec3fMtxFMultXYZW(MtxF* mf, Vec3f* src, Vec3f* xyzDest, f32* wDest);

/**
 * Multiplies the matrix mf by a 4 components column vector [ src , 1 ] and writes the resulting xyz components to dest.
 *
 * \f[ \begin{bmatrix} \texttt{dest} \\ - \\ \end{bmatrix}
 *      = [\texttt{mf}] \cdot
 *        \begin{bmatrix} \texttt{src} \\ 1 \\ \end{bmatrix}
 * \f]
 */
void SkinMatrix_Vec3fMtxFMultXYZ(MtxF* mf, Vec3f* src, Vec3f* dest);

/**
 * Matrix multiplication, dest = mfA * mfB.
 * mfB and dest should not be the same matrix.
 */
void SkinMatrix_MtxFMtxFMult(MtxF* mfA, MtxF* mfB, MtxF* dest);

/**
 * "Clear" in this file means the identity matrix.
 */
void SkinMatrix_GetClear(MtxF** mfp);

void SkinMatrix_Clear(MtxF* mf);

void SkinMatrix_MtxFCopy(MtxF* src, MtxF* dest);

/**
 * Inverts a matrix using the Gauss-Jordan method.
 * returns 0 if successfully inverted
 * returns 2 if matrix non-invertible (0 determinant)
 */
s32 SkinMatrix_Invert(MtxF* src, MtxF* dest);

/**
 * Produces a matrix which scales x,y,z components of vectors or x,y,z rows of matrices (when applied on LHS)
 */
void SkinMatrix_SetScale(MtxF* mf, f32 x, f32 y, f32 z);

/**
 * Produces a rotation matrix using ZYX Tait-Bryan angles.
 */
void SkinMatrix_SetRotateZYX(MtxF* mf, s16 x, s16 y, s16 z);

/**
 * Produces a rotation matrix using YXZ Tait-Bryan angles.
 */
void SkinMatrix_SetRotateYXZ(MtxF* mf, s16 x, s16 y, s16 z);

/**
 * Produces a matrix which translates a vector by amounts in the x, y and z directions
 */
void SkinMatrix_SetTranslate(MtxF* mf, f32 x, f32 y, f32 z);

/**
 * Produces a matrix which scales, then rotates (using ZYX Tait-Bryan angles), then translates.
 */
void SkinMatrix_SetTranslateRotateZYXScale(MtxF* dest, f32 scaleX, f32 scaleY, f32 scaleZ, s16 rotX, s16 rotY, s16 rotZ,
                                           f32 translateX, f32 translateY, f32 translateZ);

/**
 * Produces a matrix which scales, then rotates (using YXZ Tait-Bryan angles), then translates.
 */
void SkinMatrix_SetTranslateRotateYXZScale(MtxF* dest, f32 scaleX, f32 scaleY, f32 scaleZ, s16 rotX, s16 rotY, s16 rotZ,
                                           f32 translateX, f32 translateY, f32 translateZ);

/**
 * Produces a matrix which rotates (using ZYX Tait-Bryan angles), then translates.
 */
void SkinMatrix_SetTranslateRotateZYX(MtxF* dest, s16 rotX, s16 rotY, s16 rotZ, f32 translateX, f32 translateY,
                                      f32 translateZ);

void SkinMatrix_Vec3fToVec3s(Vec3f* src, Vec3s* dest);

void SkinMatrix_Vec3sToVec3f(Vec3s* src, Vec3f* dest);

void SkinMatrix_MtxFToMtx(MtxF* src, Mtx* dest);

Mtx* SkinMatrix_MtxFToNewMtx(GraphicsContext* gfxCtx, MtxF* src);

/**
 * Produces a matrix which rotates by binary angle `angle` around a unit vector (`axisX`,`axisY`,`axisZ`).
 * NB: the rotation axis is assumed to be a unit vector.
 */
void SkinMatrix_SetRotateAxis(MtxF* mf, s16 angle, f32 axisX, f32 axisY, f32 axisZ);

void func_800A8030(MtxF* mf, f32* arg1);

#endif
