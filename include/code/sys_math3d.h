#ifndef Z64_SYS_MATH3D_H
#define Z64_SYS_MATH3D_H

#include "global.h"
#include "vt.h"

s32 Math3D_LineVsLineClosestTwoPoints(Vec3f* lineAPointA, Vec3f* lineAPointB, Vec3f* lineBPointA, Vec3f* lineBPointB,
                                      Vec3f* lineAClosestToB, Vec3f* lineBClosestToA);
s32 Math3D_TriLineIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* linePointA,
                            Vec3f* linePointB, Vec3f* intersect, s32 fromFront);
s32 Math3D_PlaneVsPlaneNewLine(f32 planeAA, f32 planeAB, f32 planeAC, f32 planeADist, f32 planeBA, f32 planeBB,
                               f32 planeBC, f32 planeBDist, InfiniteLine* intersect);
s32 Math3D_CirSquareVsTriSquare(f32 x0, f32 y0, f32 x1, f32 y1, f32 x2, f32 y2, f32 centerX, f32 centerY, f32 radius);
s32 Math3D_SphCubeVsTriCube(Vec3f* v0, Vec3f* v1, Vec3f* v2, Vec3f* center, f32 radius);

/**
 * Creates an infinite line along the intersection of the plane defined from `planeAA`x + `planeAB`y + `planeAB`z +
 * `planeADist` = 0 and `planeBA`x + `planeBB`y + `planeBC`z + `planeBDist` = 0, and finds the closest point on that
 * intersection to the line segment `linePointA and linePointB`, outputs the intersection to `closestPoint`
 */
s32 Math3D_PlaneVsLineSegClosestPoint(f32 planeAA, f32 planeAB, f32 planeAC, f32 planeADist, f32 planeBA, f32 planeBB,
                                      f32 planeBC, f32 planeBDist, Vec3f* linePointA, Vec3f* linePointB,
                                      Vec3f* closestPoint);

/**
 * Finds the two points on lines A and B where the lines are closest together.
 */
s32 Math3D_LineVsLineClosestTwoPoints(Vec3f* lineAPointA, Vec3f* lineAPointB, Vec3f* lineBPointA, Vec3f* lineBPointB,
                                      Vec3f* lineAClosestToB, Vec3f* lineBClosestToA);

/**
 * Determines the closest point on the line `line` to `pos`, by forming a line perpendicular from
 * `point` to `line` closest point is placed in `closestPoint`
 */
void Math3D_LineClosestToPoint(InfiniteLine* line, Vec3f* pos, Vec3f* closestPoint);

void Math3D_FindPointOnPlaneIntersect(f32 planeAAxis1Norm, f32 planeAAxis2Norm, f32 planeBAxis1Norm,
                                      f32 planeBAxis2Norm, f32 axis3Direction, f32 planeADist, f32 planeBDist,
                                      f32* axis1Point, f32* axis2Point);

/**
 * Creates a line between the intersections of two planes defined from `planeAA`x + `planeAB`y + `planeAC`z +
 * `planeADist` = 0 and `planeBA`x + `planeBB`y + `planeBC`z + `planeBDist` = 0, and outputs the line to `intersect`.
 * Returns false if the planes are parallel.
 */
s32 Math3D_PlaneVsPlaneNewLine(f32 planeAA, f32 planeAB, f32 planeAC, f32 planeADist, f32 planeBA, f32 planeBB,
                               f32 planeBC, f32 planeBDist, InfiniteLine* intersect);

/**
 * Gets the closest point on the line formed from the intersection of of the planes defined from
 * `planeAA`x + `planeAB`y + `planeAC`z + `planeADist` = 0 and
 * `planeBA`x + `planeBB`y + `planeBC`z + `planeBDist` = 0
 * the point on the intersection line closest to `point` is placed in `closestPoint`
 * returns false if the planes are parallel.
 */
s32 Math3D_PlaneVsPlaneVsLineClosestPoint(f32 planeAA, f32 planeAB, f32 planeAC, f32 planeADist, f32 planeBA,
                                          f32 planeBB, f32 planeBC, f32 planeBDist, Vec3f* point, Vec3f* closestPoint);

/**
 * Finds a point on the line from starting point `v0`, and directional vector `dir`
 * which is `dist` length from the starting point.  Result is placed in `ret`
 */
void Math3D_PointOnInfiniteLine(Vec3f* v0, Vec3f* dir, f32 dist, Vec3f* ret);

/**
 * Splits the line segment from end points `v0` and `v1`, and splits that segment
 * by `ratio` of `v0`:`v1`, places the resulting point on the line in `ret`
 */
void Math3D_LineSplitRatio(Vec3f* v0, Vec3f* v1, f32 ratio, Vec3f* ret);

/**
 * Calculates the cosine between vectors `a` and `b`
 */
f32 Math3D_Cos(Vec3f* a, Vec3f* b);

/**
 * Calculates the cosine between vectors `a` and `b` and places the result in `ret`
 * returns true if the cosine cannot be calculated because the product of the magnitudes is zero
 */
s32 Math3D_CosOut(Vec3f* a, Vec3f* b, f32* dst);

/**
 * Reflects vector `vec` across the normal vector `normal`, reflection vector is placed in
 * `reflVec`
 */
void Math3D_Vec3fReflect(Vec3f* vec, Vec3f* normal, Vec3f* reflVec);

/**
 * Checks if the point (`x`,`y`) is contained within the square formed from (`upperLeftX`,`upperLeftY`) to
 * (`lowerRightX`,`lowerRightY`)
 */
s32 Math3D_PointInSquare2D(f32 upperLeftX, f32 lowerRightX, f32 upperLeftY, f32 lowerRightY, f32 x, f32 y);

/**
 * Checks if the square formed around the circle with center (`centerX`,`centerY`) with radius `radius`
 * touches any portion of the square formed around the triangle with vertices (`x0`,`y0`), (`x1`,`y1`),
 * and (`x2`,`y2`)
 */
s32 Math3D_CirSquareVsTriSquare(f32 x0, f32 y0, f32 x1, f32 y1, f32 x2, f32 y2, f32 centerX, f32 centerY, f32 radius);

/**
 * Checks if the cube formed around the triangle formed from `v0`, `v1`, and `v2`
 * has any portion touching the cube formed around the sphere with center `center`
 * and radius of `radius`
 */
s32 Math3D_SphCubeVsTriCube(Vec3f* v0, Vec3f* v1, Vec3f* v2, Vec3f* center, f32 radius);

/**
 * Returns the distance squared between `a` and `b` on a single axis
 */
f32 Math3D_Dist1DSq(f32 a, f32 b);

/**
 * Returns the distance between `a` and `b` on a single axis
 */
f32 Math3D_Dist1D(f32 a, f32 b);

/**
 * Returns the distance squared between (`x0`,`y0`) and (`x1`,`x2`)
 */
f32 Math3D_Dist2DSq(f32 x0, f32 y0, f32 x1, f32 y1);

/**
 * Returns the distance between points (`x0`,`y0`) and (`x1`,`y1`)
 */
f32 Math3D_Dist2D(f32 x0, f32 y0, f32 x1, f32 y1);

/**
 * Returns the magnitude (length) squared of `vec`
 */
f32 Math3D_Vec3fMagnitudeSq(Vec3f* vec);

/**
 * Returns the magnitude (length) of `vec`
 */
f32 Math3D_Vec3fMagnitude(Vec3f* vec);

/**
 * Returns the distance between `a` and `b` squared.
 */
f32 Math3D_Vec3fDistSq(Vec3f* a, Vec3f* b);

/*
 * Calculates the distance between points `a` and `b`
 */
f32 Math3D_Vec3f_DistXYZ(Vec3f* a, Vec3f* b);

/*
 * Calculates the distance between `a` and `b`.
 */
f32 Math3D_DistXYZ16toF(Vec3s* a, Vec3f* b);

/**
 * Gets the Z portion of the cross product of vectors `a - (`dx`,`dy`,z) and `b` - (`dx`,`dy`,z)
 */
f32 Math3D_Vec3fDiff_CrossZ(Vec3f* a, Vec3f* b, f32 dx, f32 dy);

/**
 * Gets the X portion of the cross product of vectors `a - (x,`dy`,`dz`) and `b` - (x,`dy`,`dz`)
 */
f32 Math3D_Vec3fDiff_CrossX(Vec3f* a, Vec3f* b, f32 dy, f32 dz);

/**
 * Gets the Y portion of the cross product of vectors `a - (`dx`,y,`dz`) and `b` - (`dx`,y,`dz`)
 */
f32 Math3D_Vec3fDiff_CrossY(Vec3f* a, Vec3f* b, f32 dz, f32 dx);

/**
 * Gets the Cross Product of vectors `a` and `b` and places the result in `ret`
 */
void Math3D_Vec3f_Cross(Vec3f* a, Vec3f* b, Vec3f* ret);

/*
 * Calculates the normal vector to a surface with sides `vb` - `va` and `vc` - `va`
 * outputs the normal to `normal`
 */
void Math3D_SurfaceNorm(Vec3f* va, Vec3f* vb, Vec3f* vc, Vec3f* normal);

/**
 * Creates flags relative to the faces of a cube.
 */
s32 Math3D_PointRelativeToCubeFaces(Vec3f* point, Vec3f* min, Vec3f* max);

/**
 * Creates flags of `point` relative to the edges of a cube
 */
s32 Math3D_PointRelativeToCubeEdges(Vec3f* point, Vec3f* min, Vec3f* max);

/**
 * Creates flags for `point` relative to the vertices of a cube
 */
s32 Math3D_PointRelativeToCubeVertices(Vec3f* point, Vec3f* min, Vec3f* max);

/**
 * Checks if a line segment with endpoints `a` and `b` intersect a cube
 */
s32 Math3D_LineVsCube(Vec3f* min, Vec3f* max, Vec3f* a, Vec3f* b);

/**
 * Checks if a line segment with endpoints `a` and `b` intersect a cube
 */
s32 Math3D_LineVsCubeShort(Vec3s* min, Vec3s* max, Vec3s* a, Vec3s* b);

/**
 * Rotates the xz plane around the y axis `angle` degrees.
 * outputs the plane equation `a``pointOnPlane->x` + 0y + `c``pointOnPlane->z`+`d` = 0
 */
void Math3D_RotateXZPlane(Vec3f* pointOnPlane, s16 angle, f32* a, f32* c, f32* d);

/*
 * Defines a plane from vertices `va`, `vb`, and `vc`.  Normal components are output to
 * `nx`, `ny`, and `nz`.  Distance from the origin is output to `originDist`
 * Satisfies the plane equation NxVx + NyVy + NzVz + D = 0
 */
void Math3D_DefPlane(Vec3f* va, Vec3f* vb, Vec3f* vc, f32* nx, f32* ny, f32* nz, f32* originDist);

/*
 * Returns the answer to the plane equation with elements specified by arguments.
 */
f32 Math3D_Planef(f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* pointOnPlane);

/*
 * Returns the answer to the plane equation
 */
f32 Math3D_Plane(Plane* plane, Vec3f* pointOnPlane);

/*
 * Calculates the absolute distance from a point `p` to the plane defined as
 * `nx`, `ny`, `nz`, and `originDist`
 */
f32 Math3D_UDistPlaneToPos(f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* p);

/*
 * Calculates the signed distance from a point `p` to a plane defined as
 * `nx`, `ny`, `nz`, and `originDist`
 */
f32 Math3D_DistPlaneToPos(f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* p);

/**
 * Checks if the point defined by (`z`,`x`) is within distance of the triangle defined from `v0`,`v1`, and `v2`
 */
s32 Math3D_TriChkPointParaYImpl(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 z, f32 x, f32 detMax, f32 chkDist, f32 ny);

s32 Math3D_TriChkPointParaYDeterminate(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 z, f32 x, f32 detMax, f32 ny);

s32 Math3D_TriChkPointParaYSlopedY(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 z, f32 x);

/**
 * Performs the triangle and point check parallel to the Y axis, outputs the y coordinate of the point to `yIntersect`
 */
s32 Math3D_TriChkPointParaYIntersectDist(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, f32 z,
                                         f32 x, f32* yIntersect, f32 chkDist);

s32 Math3D_TriChkPointParaYIntersectInsideTri(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist,
                                              f32 z, f32 x, f32* yIntersect, f32 chkDist);

s32 Math3D_TriChkPointParaY(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 ny, f32 z, f32 x);

s32 Math3D_TriChkLineSegParaYIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, f32 z,
                                       f32 x, f32* yIntersect, f32 y0, f32 y1);

s32 Math3D_TriChkPointParaYDist(Vec3f* v0, Vec3f* v1, Vec3f* v2, Plane* plane, f32 z, f32 x, f32 chkDist);

s32 Math3D_TriChkPointParaXImpl(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 y, f32 z, f32 detMax, f32 chkDist, f32 nx);

s32 Math3D_TriChkPointParaXDeterminate(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 y, f32 z, f32 detMax, f32 nx);

s32 Math3D_TriChkPointParaXIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, f32 y,
                                     f32 z, f32* xIntersect);

s32 Math3D_TriChkPointParaX(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 y, f32 z);

s32 Math3D_TriChkLineSegParaXIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, f32 y,
                                       f32 z, f32* xIntersect, f32 x0, f32 x1);

s32 Math3D_TriChkPointParaXDist(Vec3f* v0, Vec3f* v1, Vec3f* v2, Plane* plane, f32 y, f32 z, f32 chkDist);

s32 Math3D_TriChkPointParaZImpl(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 x, f32 y, f32 detMax, f32 chkDist, f32 nz);

s32 Math3D_TriChkPointParaZDeterminate(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 x, f32 y, f32 detMax, f32 nz);

s32 Math3D_TriChkPointParaZIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, f32 x,
                                     f32 y, f32* zIntersect);

s32 Math3D_TriChkPointParaZ(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nz, f32 x, f32 y);

s32 Math3D_TriChkLineSegParaZIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, f32 x,
                                       f32 y, f32* zIntersect, f32 z0, f32 z1);

s32 Math3D_TriChkLineSegParaZDist(Vec3f* v0, Vec3f* v1, Vec3f* v2, Plane* plane, f32 x, f32 y, f32 chkDist);

s32 Math3D_LineSegFindPlaneIntersect(f32 pointADist, f32 pointBDist, Vec3f* pointA, Vec3f* pointB, Vec3f* intersect);

/**
 * Determines if the line segment from `linePointA` to `linePointB` crosses the plane
 * from `nx` + `ny` + `nz` + `originDist` = 0.  If fromFront is set, then detection will only
 * be true if point A crosses from the front of the plane
 */
s32 Math3D_LineSegVsPlane(f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* linePointA, Vec3f* linePointB,
                          Vec3f* intersect, s32 fromFront);

/*
 * Determines if the line formed by `linePointA` and `linePointB` intersect with Triangle formed from
 * vertices `v0`, `v1`, and `v2` with normal vector `nx`, `ny`, and `nz` with plane distance from origin
 * `originDist` Outputs the intersection point at to `intersect`
 * Returns 1 if the line intersects with the triangle, 0 otherwise
 */
s32 Math3D_TriLineIntersect(Vec3f* v0, Vec3f* v1, Vec3f* v2, f32 nx, f32 ny, f32 nz, f32 originDist, Vec3f* linePointA,
                            Vec3f* linePointB, Vec3f* intersect, s32 fromFront);

/*
 * Creates a TriNorm output to `tri`, and calculates the normal vector and plane from vertices
 * `va`, `vb`, and `vc`
 */
void Math3D_TriNorm(TriNorm* tri, Vec3f* va, Vec3f* vb, Vec3f* vc);

/*
 * Determines if point `point` lies within `sphere`
 */
s32 Math3D_PointInSph(Sphere16* sphere, Vec3f* point);

/**
 * Determines the distance from point (`x0`,`y0`) to the line formed from (`x1`,`y1`) and (`x2`,`y2`)
 * Distance squared is output to `lineLenSq`, returns true if the point perpendicular from (`x0`,`y0`)
 * is contained within the segment between (`x1`,`y1`) and (`x2`,`y2`)
 */
s32 Math3D_PointDistSqToLine2D(f32 x0, f32 y0, f32 x1, f32 y1, f32 x2, f32 y2, f32* lineLenSq);

/**
 * Determines if the line `line` is touching the sphere `sphere` at any point in the line.
 */
s32 Math3D_LineVsSph(Sphere16* sphere, Linef* line);

/**
 * Gets the surface point of `sphere` intersecting with `tri` generated from the line formed from the
 * sphere's surface to the midpoint of the line formed from the first two vertices of the tri
 */
void Math3D_GetSphVsTriIntersectPoint(Sphere16* sphere, TriNorm* tri, Vec3f* intersectPoint);

/**
 * Determines if `sphere` and `tri` and touching, and outputs the intersection point to `intersectPoint`
 */
s32 Math3D_TriVsSphIntersect(Sphere16* sphere, TriNorm* tri, Vec3f* intersectPoint);

/*
 * Checks if point `point` is within cylinder `cyl`
 * Returns 1 if the point is inside the cylinder, 0 otherwise.
 */
s32 Math3D_PointInCyl(Cylinder16* cyl, Vec3f* point);

s32 Math3D_CylVsLineSeg(Cylinder16* cyl, Vec3f* linePointA, Vec3f* linePointB, Vec3f* intersectA, Vec3f* intersectB);

/*
 * Determines if `cyl` and `tri` are touching.  The point of intersection
 * is placed in `intersect` Returns 1 if they are touching, 0 otherwise.
 */
s32 Math3D_CylTriVsIntersect(Cylinder16* cyl, TriNorm* tri, Vec3f* intersect);

/*
 * Determines if `cyl` and `tri` are touching.
 */
s32 Math3D_CylVsTri(Cylinder16* cyl, TriNorm* tri);

/*
 * Determines if two spheres are touching.
 */
s32 Math3D_SphVsSph(Sphere16* sphereA, Sphere16* sphereB);

/*
 * Determines if two spheres are touching.  The amount that they're overlapping is placed in `overlapSize`
 */
s32 Math3D_SphVsSphOverlap(Sphere16* sphereA, Sphere16* sphereB, f32* overlapSize);

/*
 * Determines if two spheres are touching  The distance from the centers is placed in `centerDist`,
 * and the amount that they're overlapping is placed in `overlapSize`
 */
s32 Math3D_SphVsSphOverlapCenter(Sphere16* sphereA, Sphere16* sphereB, f32* overlapSize, f32* centerDist);

/**
 * Checks if `sph` and `cyl` are touching, output the amount of overlap to `overlapSize`
 */
s32 Math3D_SphVsCylOverlapDist(Sphere16* sph, Cylinder16* cyl, f32* overlapSize);

/**
 * Checks if `sph` and `cyl` are touching, output the xz distance of the centers to `centerDist`, and the amount of
 * overlap to `overlapSize`
 */
s32 Math3D_SphVsCylOverlapCenterDist(Sphere16* sph, Cylinder16* cyl, f32* overlapSize, f32* centerDist);

/*
 * returns 1 if cylinder `ca` is outside cylinder `cb`.
 * Sets `deadSpace` to the mininum space between the cylinders not occupied by the other.
 */
s32 Math3D_CylOutsideCyl(Cylinder16* ca, Cylinder16* cb, f32* deadSpace);

/*
 * returns 1 if cylinder `ca` is outside cylinder `cb`.
 * Sets `xzDist` to the xz distance between the centers of the cylinders.
 * Sets `deadSpace` to the minimum space between the cylinders not occupied by the other.
 */
s32 Math3D_CylOutsideCylDist(Cylinder16* ca, Cylinder16* cb, f32* deadSpace, f32* xzDist);

/*
 * Determines if triangle `ta` intersects with triangle `tb` the point of
 * intersection is output to `intersect.
 * Returns 1 is the triangles intersect, 0 otherwise
 */
s32 Math3D_TriVsTriIntersect(TriNorm* ta, TriNorm* tb, Vec3f* intersect);

s32 Math3D_XZInSphere(Sphere16* sphere, f32 x, f32 z);

s32 Math3D_XYInSphere(Sphere16* sphere, f32 x, f32 y);

s32 Math3D_YZInSphere(Sphere16* sphere, f32 y, f32 z);

void Math3D_DrawSphere(PlayState* play, Sphere16* sph);

void Math3D_DrawCylinder(PlayState* play, Cylinder16* cyl);

#endif
