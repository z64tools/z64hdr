#ifndef _HELPERS_MATRIX_H_
#define _HELPERS_MATRIX_H_

#ifndef Z64HDR_HELPER_QUALIFIERS
#define Z64HDR_HELPER_QUALIFIERS
#endif

#include "z64.h"
#include "../symbols.h"

#define Matrix_RotateY_s(binang, mtxMode) Matrix_RotateY(BINANG_TO_RAD(binang), mtxMode)
#define Matrix_RotateX_s(binang, mtxMode) Matrix_RotateX(BINANG_TO_RAD(binang), mtxMode)
#define Matrix_RotateZ_s(binang, mtxMode) Matrix_RotateZ(BINANG_TO_RAD(binang), mtxMode)

#define Matrix_RotateY_f(degf, mtxMode)   Matrix_RotateY(DEGF_TO_RADF(degf), mtxMode)
#define Matrix_RotateX_f(degf, mtxMode)   Matrix_RotateX(DEGF_TO_RADF(degf), mtxMode)
#define Matrix_RotateZ_f(degf, mtxMode)   Matrix_RotateZ(DEGF_TO_RADF(degf), mtxMode)

Z64HDR_HELPER_QUALIFIERS
void Matrix_MultX(f32 x, Vec3f* dst) {
	MtxF* cmf = sCurrentMatrix;
	
	dst->x = cmf->wx + cmf->xx * x;
	dst->y = cmf->wy + cmf->xy * x;
	dst->z = cmf->wz + cmf->xz * x;
}

Z64HDR_HELPER_QUALIFIERS
void Matrix_MultY(f32 y, Vec3f* dst) {
	MtxF* cmf = sCurrentMatrix;
	
	dst->x = cmf->wx + cmf->yx * y;
	dst->y = cmf->wy + cmf->yy * y;
	dst->z = cmf->wz + cmf->yz * y;
}

Z64HDR_HELPER_QUALIFIERS
void Matrix_MultZ(f32 z, Vec3f* dst) {
	MtxF* cmf = sCurrentMatrix;
	
	dst->x = cmf->wx + cmf->zx * z;
	dst->y = cmf->wy + cmf->zy * z;
	dst->z = cmf->wz + cmf->zz * z;
}

#endif
