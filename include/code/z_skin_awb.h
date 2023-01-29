#ifndef Z64_SKIN_AWB_H
#define Z64_SKIN_AWB_H

#include "global.h"
#include "overlays/actors/ovl_En_fHG/z_en_fhg.h"

/**
 * Initialises the Vtx buffers used for limb at index `limbIndex`
 */
void Skin_InitAnimatedLimb(PlayState* play, Skin* skin, s32 limbIndex);

/**
 * Initializes a skin skeleton to looping animation, dynamically allocating the frame tables,
 * and dynamically allocating and initializing the Vtx and SkinLimbVtx buffers for its animated limbs
 */
void Skin_Init(PlayState* play, Skin* skin, SkeletonHeader* skeletonHeader, AnimationHeader* animationHeader);

/**
 * Frees the dynamically allocated Vtx and SkinLimbVtx buffers and tables
 */
void Skin_Free(PlayState* play, Skin* skin);

s32 func_800A698C(Skin* skin, SkinLimb** skeleton, MtxF* limbMatrices, u8 parentIndex, u8 limbIndex);

/**
 * Recursively applies matrix transformations to each limb
 */
s32 Skin_ApplyAnimTransformations(Skin* skin, MtxF* limbMatrices, Actor* actor, s32 setTranslation);

#endif
