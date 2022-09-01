#ifndef Z64_EFF_BLURE_H
#define Z64_EFF_BLURE_H

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

void EffectBlure_AddVertex(EffectBlure* this, Vec3f* p1, Vec3f* p2);

void EffectBlure_AddSpace(EffectBlure* this);

void EffectBlure_InitElements(EffectBlure* this);

void EffectBlure_Init1(void* thisx, void* initParamsx);

void EffectBlure_Init2(void* thisx, void* initParamsx);

void EffectBlure_Destroy(void* thisx);

s32 EffectBlure_Update(void* thisx);

void EffectBlure_UpdateFlags(EffectBlureElement* elem);

void EffectBlure_GetComputedValues(EffectBlure* this, s32 index, f32 ratio, Vec3s* vec1, Vec3s* vec2,
                                   Color_RGBA8* color1, Color_RGBA8* color2);

void EffectBlure_SetupSmooth(EffectBlure* this, GraphicsContext* gfxCtx);

// original name: "SQ_NoInterpolate_disp"
void EffectBlure_DrawElemNoInterpolation(EffectBlure* this, EffectBlureElement* elem, s32 index,
                                         GraphicsContext* gfxCtx);

void EffectBlure_DrawElemHermiteInterpolation(EffectBlure* this, EffectBlureElement* elem, s32 index,
                                              GraphicsContext* gfxCtx);

void EffectBlure_DrawSmooth(EffectBlure* this2, GraphicsContext* gfxCtx);

void EffectBlure_SetupSimple(GraphicsContext* gfxCtx, EffectBlure* this, Vtx* vtx);

void EffectBlure_SetupSimpleAlt(GraphicsContext* gfxCtx, EffectBlure* this, Vtx* vtx);

extern void (*sSetupHandlers[])(GraphicsContext* gfxCtx, EffectBlure* this, Vtx* vtx);

extern s32 D_80115788; // unused

// original name: "EffectBlureInfo2_disp_makeDisplayList"
void EffectBlure_DrawSimpleVertices(GraphicsContext* gfxCtx, EffectBlure* this, Vtx* vtx);

extern Vtx_t D_8011578C[];

extern Vtx_t D_801157CC[];

void EffectBlure_DrawSimple(EffectBlure* this2, GraphicsContext* gfxCtx);

void EffectBlure_Draw(void* thisx, GraphicsContext* gfxCtx);

#endif
