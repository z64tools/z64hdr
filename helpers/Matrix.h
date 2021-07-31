#ifndef _HELPERS_MATRIX_H_
#define _HELPERS_MATRIX_H_

#ifndef _Z64HDR_HELPER_PREFIX_
#define _Z64HDR_HELPER_PREFIX_
#endif

#include "include/z64.h"
#include "symbols.h"

#define Matrix_RotateY_s(binang, A) Matrix_RotateY(BINANG_TO_RAD(binang), A)
#define Matrix_RotateX_s(binang, A) Matrix_RotateX(BINANG_TO_RAD(binang), A)
#define Matrix_RotateZ_s(binang, A) Matrix_RotateZ(BINANG_TO_RAD(binang), A)

#define Matrix_RotateY_f(degf, A)   Matrix_RotateY(DEGF_TO_RADF(degf), A)
#define Matrix_RotateX_f(degf, A)   Matrix_RotateX(DEGF_TO_RADF(degf), A)
#define Matrix_RotateZ_f(degf, A)   Matrix_RotateZ(DEGF_TO_RADF(degf), A)

_Z64HDR_HELPER_PREFIX_
void Matrix_MultX(f32 scale, Vec3f* dst) {
	MtxF* cmf = sCurrentMatrix;
	
	dst->x = cmf->wx + cmf->xx * scale;
	dst->y = cmf->wy + cmf->xy * scale;
	dst->z = cmf->wz + cmf->xz * scale;
}

_Z64HDR_HELPER_PREFIX_
void Matrix_MultY(f32 scale, Vec3f* dst) {
	MtxF* cmf = sCurrentMatrix;
	
	dst->x = cmf->wx + cmf->yx * scale;
	dst->y = cmf->wy + cmf->yy * scale;
	dst->z = cmf->wz + cmf->yz * scale;
}

_Z64HDR_HELPER_PREFIX_
void Matrix_MultZ(f32 scale, Vec3f* dst) {
	MtxF* cmf = sCurrentMatrix;
	
	dst->x = cmf->wx + cmf->zx * scale;
	dst->y = cmf->wy + cmf->zy * scale;
	dst->z = cmf->wz + cmf->zz * scale;
}

#endif
