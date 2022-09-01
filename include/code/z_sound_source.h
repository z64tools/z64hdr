#ifndef Z_SOUND_SOURCE_H
#define Z_SOUND_SOURCE_H

#include "global.h"

void SoundSource_InitAll(PlayState* play);

void SoundSource_UpdateAll(PlayState* play);

void SoundSource_PlaySfxAtFixedWorldPos(PlayState* play, Vec3f* worldPos, s32 duration, u16 sfxId);

#endif
