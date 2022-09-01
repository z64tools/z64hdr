#ifndef Z_OLIB_H
#define Z_OLIB_H

#include "global.h"

/**
 * Calculates the distances between `a` and `b`
 */
f32 OLib_Vec3fDist(Vec3f* a, Vec3f* b);

/**
 * Calculates the distances between `a` and `b`, and outputs the vector
 * created by the difference into `dest`
 */

f32 OLib_Vec3fDistOutDiff(Vec3f* a, Vec3f* b, Vec3f* dest);

/**
 * Calculates the distances on the xz plane between `a` and `b`
 */
f32 OLib_Vec3fDistXZ(Vec3f* a, Vec3f* b);

/**
 * Clamps `val` to a maximum of -`min` as `val` approaches zero, and a minimum of
 * `min` as `val` approaches zero
 */
f32 OLib_ClampMinDist(f32 val, f32 min);

/**
 * Clamps `val` to a minimum of -`max` as `val` approaches -`max`, and a maximum of `max`
 * as `val` approaches `max`
 */
f32 OLib_ClampMaxDist(f32 val, f32 max);

/**
 * Takes the difference of points b and a, and creates a normal vector
 */
Vec3f* OLib_Vec3fDistNormalize(Vec3f* dest, Vec3f* a, Vec3f* b);

/**
 * Takes the spherical coordinate `sph`, and converts it into a x,y,z position
 */
Vec3f* OLib_VecSphToVec3f(Vec3f* dest, VecSph* sph);

/**
 * Takes the geographic point `sph` and converts it into a x,y,z position
 */
Vec3f* OLib_VecSphGeoToVec3f(Vec3f* dest, VecSph* sph);

/**
 * Takes the point `vec`, and converts it into a spherical coordinate
 */
VecSph* OLib_Vec3fToVecSph(VecSph* dest, Vec3f* vec);

/**
 * Takes the point `vec`, and converts it to a geographic coordinate
 */
VecSph* OLib_Vec3fToVecSphGeo(VecSph* dest, Vec3f* vec);

/**
 * Takes the differences of positions `a` and `b`, and converts them to spherical coordinates
 */
VecSph* OLib_Vec3fDiffToVecSph(VecSph* dest, Vec3f* a, Vec3f* b);

/**
 * Takes the difference of positions `a` and `b`, and converts them to geographic coordinates
 */
VecSph* OLib_Vec3fDiffToVecSphGeo(VecSph* dest, Vec3f* a, Vec3f* b);

/**
 * Gets the pitch/yaw of the vector formed from `b`-`a`, result is in radians
 */
Vec3f* OLib_Vec3fDiffRad(Vec3f* dest, Vec3f* a, Vec3f* b);

/**
 * Gets the pitch/yaw of the vector formed from `b`-`a`, result is in degrees
 */
Vec3f* OLib_Vec3fDiffDegF(Vec3f* dest, Vec3f* a, Vec3f* b);

/**
 * Gets the pitch/yaw of the vector formed from `b`-`a`, result is in binary degrees
 */
Vec3s* OLib_Vec3fDiffBinAng(Vec3s* dest, Vec3f* a, Vec3f* b);

#endif
