#ifndef Z64_SFX_SOURCE_H
#define Z64_SFX_SOURCE_H

#include "global.h"

void SfxSource_InitAll(PlayState* play);

void SfxSource_UpdateAll(PlayState* play);

void SfxSource_PlaySfxAtFixedWorldPos(PlayState* play, Vec3f* worldPos, s32 duration, u16 sfxId);

#endif
