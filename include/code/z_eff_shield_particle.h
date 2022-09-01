#ifndef Z_EFF_SHIELD_PARTICLE_H
#define Z_EFF_SHIELD_PARTICLE_H

#include "global.h"
#include "vt.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

extern Vtx sVertices[5];

// original name: "EffectShieldParticle_ct"
void EffectShieldParticle_Init(void* thisx, void* initParamsx);

void EffectShieldParticle_Destroy(void* thisx);

s32 EffectShieldParticle_Update(void* thisx);

void EffectShieldParticle_GetColors(EffectShieldParticle* this, Color_RGBA8* primColor, Color_RGBA8* envColor);

void EffectShieldParticle_Draw(void* thisx, GraphicsContext* gfxCtx);

#endif
