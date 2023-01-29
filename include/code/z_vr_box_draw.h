#ifndef Z64_VR_BOX_DRAW_H
#define Z64_VR_BOX_DRAW_H

#include "global.h"

extern Mtx* sSkyboxDrawMatrix;

Mtx* SkyboxDraw_UpdateMatrix(SkyboxContext* skyboxCtx, f32 x, f32 y, f32 z);

void SkyboxDraw_Draw(SkyboxContext* skyboxCtx, GraphicsContext* gfxCtx, s16 skyboxId, s16 blend, f32 x, f32 y, f32 z);

void SkyboxDraw_Update(SkyboxContext* skyboxCtx);

#endif
