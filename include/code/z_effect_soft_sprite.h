#ifndef Z64_EFFECT_SOFT_SPRITE_H
#define Z64_EFFECT_SOFT_SPRITE_H

#include "global.h"
#include "vt.h"

extern EffectSsInfo sEffectSsInfo; // "EffectSS2Info"

void EffectSs_InitInfo(PlayState* play, s32 tableSize);

void EffectSs_ClearAll(PlayState* play);

void EffectSs_Delete(EffectSs* effectSs);

void EffectSs_Reset(EffectSs* effectSs);

s32 EffectSs_FindSlot(s32 priority, s32* pIndex);

void EffectSs_Insert(PlayState* play, EffectSs* effectSs);

// original name: "EffectSoftSprite2_makeEffect"
void EffectSs_Spawn(PlayState* play, s32 type, s32 priority, void* initParams);

void EffectSs_Update(PlayState* play, s32 index);

void EffectSs_UpdateAll(PlayState* play);

void EffectSs_Draw(PlayState* play, s32 index);

// original name: "EffectSoftSprite2_disp"
void EffectSs_DrawAll(PlayState* play);

s16 func_80027DD4(s16 arg0, s16 arg1, s32 arg2);

s16 func_80027E34(s16 arg0, s16 arg1, f32 arg2);

u8 func_80027E84(u8 arg0, u8 arg1, f32 arg2);

#endif
