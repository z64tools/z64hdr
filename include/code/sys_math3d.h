#ifndef __SYS_MATH3D__
#define __SYS_MATH3D__

#include "global.h"
#include "vt.h"

s32 Math3D_LineVsLineClosestTwoPoints(Vec3f* lineAPointA, Vec3f* lineAPointB, Vec3f* lineBPointA, Vec3f* lineBPointB, Vec3f* lineAClosestToB, Vec3f* lineBClosestToA);
s32 Math3D_TriLineIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* linePointA, Vec3f* linePointB, Vec3f* intersect, s32 fromFront);
s32 Math3D_PlaneVsPlaneNewLine(f32 planeAA, f32 planeAB, f32 planeAC, f32 planeADist, f32 planeBA, f32 planeBB, f32 planeBC, f32 planeBDist, InfiniteLine* intersect);
s32 Math3D_CirSquareVsTriSquare(f32 x0, f32 y0, f32 x1, f32 y1, f32 x2, f32 y2, f32 centerX, f32 centerY, f32 radius);
s32 Math3D_SphCubeVsTriCube(Vec3f* v0, Vec3f* v1, Vec3f* v2, Vec3f* center, f32 radius);
s32 Math3D_LineVsLineClosestTwoPoints(Vec3f* lineAPointA, Vec3f* lineAPointB, Vec3f* lineBPointA, Vec3f* lineBPointB, Vec3f* lineAClosestToB, Vec3f* lineBClosestToA);
void Math3D_FindPointOnPlaneIntersect(f32 planeAAxis1Norm, f32 planeAAxis2Norm, f32 planeBAxis1Norm, f32 planeBAxis2Norm, f32 axis3Direction, f32 planeADist, f32 planeBDist, f32* axis1Point, f32* axis2Point);
s32 Math3D_PlaneVsPlaneNewLine(f32 planeAA, f32 planeAB, f32 planeAC, f32 planeADist, f32 planeBA, f32 planeBB, f32 planeBC, f32 planeBDist, InfiniteLine* intersect);
void Math3D_PointOnInfiniteLine(Vec3f* v0, Vec3f* dir, f32 dist, Vec3f* ret);
s32 Math3D_CirSquareVsTriSquare(f32 x0, f32 y0, f32 x1, f32 y1, f32 x2, f32 y2, f32 centerX, f32 centerY, f32 radius);
s32 Math3D_SphCubeVsTriCube(Vec3f* v0, Vec3f* v1, Vec3f* v2, Vec3f* center, f32 radius);
f32 Math3D_DistXYZ16toF(Vec3s* a, Vec3f* b);
f32 Math3D_Vec3fDiff_CrossZ(Vec3f* a, Vec3f* b, f32 dx, f32 dy);
f32 Math3D_Vec3fDiff_CrossX(Vec3f* a, Vec3f* b, f32 dy, f32 dz);
f32 Math3D_Vec3fDiff_CrossY(Vec3f* a, Vec3f* b, f32 dz, f32 dx);
s32 Math3D_LineVsCubeShort(Vec3s* min, Vec3s* max, Vec3s* a, Vec3s* b);
f32 Math3D_Planef(f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* pointOnPlane);
s32 Math3D_TriChkPointParaYImpl(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 z, f32 x, f32 detMax, f32 chkDist, f32 ny);
s32 Math3D_TriChkPointParaYDeterminate(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 z, f32 x, f32 detMax, f32 ny);
s32 Math3D_TriChkPointParaXImpl(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 y, f32 z, f32 detMax, f32 chkDist, f32 nx);
s32 Math3D_TriChkPointParaXDeterminate(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 y, f32 z, f32 detMax, f32 nx);
s32 Math3D_TriChkPointParaZImpl(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 x, f32 y, f32 detMax, f32 chkDist, f32 nz);
s32 Math3D_TriChkPointParaZDeterminate(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 x, f32 y, f32 detMax, f32 nz);
s32 Math3D_LineSegFindPlaneIntersect(f32 pointADist, f32 pointBDist, Vec3f* pointA, Vec3f* pointB, Vec3f* intersect);
s32 Math3D_TriLineIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* linePointA, Vec3f* linePointB, Vec3f* intersect, s32 fromFront);
s32 Math3D_PointInSph(Sphere16* sphere, Vec3f* point);
void Math3D_GetSphVsTriIntersectPoint(Sphere16* sphere, TriNorm* tri, Vec3f* intersectPoint);
s32 Math3D_PointInCyl(Cylinder16* cyl, Vec3f* point);

#endif // __SYS_MATH3D__
