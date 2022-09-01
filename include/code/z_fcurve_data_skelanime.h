#ifndef Z64_FCURVE_DATA_SKELANIME_H
#define Z64_FCURVE_DATA_SKELANIME_H

/**
 * @file z_fcurve_data_skelanime.c
 * @brief Curve skeleton animation system
 *
 * A curve skeleton has a fixed number of limbs, each of which has 9 properties that may be changed by the animation:
 * - 3 scales,
 * - 3 rotations,
 * - 3 positions
 * (note the position is stored in the animations instead of being stored in the limbs like SkelAnime would). Otherwise
 * the structure is similar to an ordinary SkelAnime-compatible skeleton.
 *
 * The animations are significantly more complex than SkelAnime. A curve animation consists of 4 parts:
 * - a header (CurveAnimationHeader)
 * - a list of counts, one for each of the 9 properties of each limb (u8)
 * - a list of interpolation data (CurveInterpKnot). The length is the sum of the counts.
 * - a list of constant data (s16[9]). The length is the number of 0s in counts.
 *
 * If the interpolation count for a property is 0, the value of the property is copied from the next number in the
 * constant data; there are no gaps for nonzero interpolation count.
 * If the interpolation count N for a property is larger than 0, the next N elements of the interpolation data array
 * are used to interpolate the value of the property, using Curve_Interpolate.
 *
 * Curve limbs may use LOD:
 * - lower detail draws only the first displaylist
 * - higher detail draws both.
 */

#include "global.h"
#include "z64curve.h"

void SkelCurve_Clear(SkelCurve* skelCurve);

/**
 * Initialises the SkelCurve struct and mallocs the joint table.
 *
 * @return bool always true
 */
s32 SkelCurve_Init(PlayState* play, SkelCurve* skelCurve, CurveSkeletonHeader* skeletonHeaderSeg,
                   CurveAnimationHeader* animation);

/**
 * Frees the joint table.
 */
void SkelCurve_Destroy(PlayState* play, SkelCurve* skelCurve);

void SkelCurve_SetAnim(SkelCurve* skelCurve, CurveAnimationHeader* animation, f32 arg2, f32 endFrame, f32 curFrame,
                       f32 playSpeed);

typedef enum {
    /* 0 */ SKELCURVE_VEC_TYPE_SCALE,
    /* 1 */ SKELCURVE_VEC_TYPE_ROTATION,
    /* 2 */ SKELCURVE_VEC_TYPE_POSIITON,
    /* 3 */ SKELCURVE_VEC_TYPE_MAX
} SkelCurveVecType;

#define SKELCURVE_SCALE_SCALE 1024.0f
#define SKELCURVE_SCALE_POSITION 100

/**
 * The only animation updating function.
 *
 * @return bool true when the animation has finished.
 */
s32 SkelCurve_Update(PlayState* play, SkelCurve* skelCurve);

/**
 * Recursively draws limbs with appropriate properties.
 */
void SkelCurve_DrawLimb(PlayState* play, s32 limbIndex, SkelCurve* skelCurve, OverrideCurveLimbDraw overrideLimbDraw,
                        PostCurveLimbDraw postLimbDraw, s32 lod, void* data);

void SkelCurve_Draw(Actor* actor, PlayState* play, SkelCurve* skelCurve, OverrideCurveLimbDraw overrideLimbDraw,
                    PostCurveLimbDraw postLimbDraw, s32 lod, void* data);

#endif
