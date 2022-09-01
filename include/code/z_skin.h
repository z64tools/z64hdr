#ifndef Z_SKIN_H
#define Z_SKIN_H

#include "global.h"

extern MtxF gSkinLimbMatrices[60]; // holds matrices for each limb of the skeleton currently being drawn

extern s32 sUnused;

void Skin_UpdateVertices(MtxF* mtx, SkinVertex* skinVertices, SkinLimbModif* modifEntry, Vtx* vtxBuf, Vec3f* pos);

void Skin_ApplyLimbModifications(GraphicsContext* gfxCtx, Skin* skin, s32 limbIndex, s32 arg3);

/**
 * Draw a limb of type SKIN_LIMB_TYPE_ANIMATED, of the skeleton `skin` at index `limbIndex`
 * The vertices of this limb are modified dynamically
 */
void Skin_DrawAnimatedLimb(GraphicsContext* gfxCtx, Skin* skin, s32 limbIndex, s32 arg3, s32 drawFlags);

/**
 * Draw a limb of type SKIN_LIMB_TYPE_NORMAL, of the skeleton `skin` at index `limbIndex`
 */
void Skin_DrawLimb(GraphicsContext* gfxCtx, Skin* skin, s32 limbIndex, Gfx* dlistOverride, s32 drawFlags);

void Skin_DrawImpl(Actor* actor, PlayState* play, Skin* skin, SkinPostDraw postDraw,
                   SkinOverrideLimbDraw overrideLimbDraw, s32 setTranslation, s32 arg6, s32 drawFlags);

// allows specifying PostLimbDraw and setTranslation
void func_800A6330(Actor* actor, PlayState* play, Skin* skin, SkinPostDraw postDraw, s32 setTranslation);

// allows specifying OverrideLimbDraw, PostLimbDraw and setTranslation
void func_800A6360(Actor* actor, PlayState* play, Skin* skin, SkinPostDraw postDraw,
                   SkinOverrideLimbDraw overrideLimbDraw, s32 setTranslation);

// allows specifying OverrideLimbDraw, PostLimbDraw, setTranslation, and arg6
void func_800A6394(Actor* actor, PlayState* play, Skin* skin, SkinPostDraw postDraw,
                   SkinOverrideLimbDraw overrideLimbDraw, s32 setTranslation, s32 arg6);

// allows specifying all variables
void func_800A63CC(Actor* actor, PlayState* play, Skin* skin, SkinPostDraw postDraw,
                   SkinOverrideLimbDraw overrideLimbDraw, s32 setTranslation, s32 arg6, s32 drawFlags);

void Skin_GetLimbPos(Skin* skin, s32 limbIndex, Vec3f* offset, Vec3f* dst);

#endif
