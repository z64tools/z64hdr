#ifndef __Z_EFF_BLURE__
#define __Z_EFF_BLURE__

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

void EffectBlure_InitElements(EffectBlure* this);
void EffectBlure_UpdateFlags(EffectBlureElement* elem);
void EffectBlure_GetComputedValues(EffectBlure* this, s32 index, f32 ratio, Vec3s* vec1, Vec3s* vec2, Color_RGBA8* color1, Color_RGBA8* color2);
void EffectBlure_SetupSmooth(EffectBlure* this, GraphicsContext* gfxCtx);
void EffectBlure_DrawElemNoInterpolation(EffectBlure* this, EffectBlureElement* elem, s32 index, GraphicsContext* gfxCtx);
void EffectBlure_DrawElemHermiteInterpolation(EffectBlure* this, EffectBlureElement* elem, s32 index, GraphicsContext* gfxCtx);
void EffectBlure_DrawSmooth(EffectBlure* this2, GraphicsContext* gfxCtx);
void EffectBlure_SetupSimple(GraphicsContext* gfxCtx, EffectBlure* this, Vtx* vtx);
void EffectBlure_SetupSimpleAlt(GraphicsContext* gfxCtx, EffectBlure* this, Vtx* vtx);
void (*sSetupHandlers[2]);

extern s32 D_80115788;

void EffectBlure_DrawSimpleVertices(GraphicsContext* gfxCtx, EffectBlure* this, Vtx* vtx);
void EffectBlure_DrawSimple(EffectBlure* this2, GraphicsContext* gfxCtx);

#endif // __Z_EFF_BLURE__
