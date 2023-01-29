#ifndef Z64_EFFECT_H
#define Z64_EFFECT_H

#include "global.h"

extern EffectContext sEffectContext;

extern EffectInfo sEffectInfoTable[];

PlayState* Effect_GetPlayState(void);

void* Effect_GetByIndex(s32 index);

void Effect_InitStatus(EffectStatus* status);

void Effect_InitContext(PlayState* play);

void Effect_Add(PlayState* play, s32* pIndex, s32 type, u8 arg3, u8 arg4, void* initParams);

void Effect_DrawAll(GraphicsContext* gfxCtx);

void Effect_UpdateAll(PlayState* play);

void Effect_Delete(PlayState* play, s32 index);

void Effect_DeleteAll(PlayState* play);

#endif
