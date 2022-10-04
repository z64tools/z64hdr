#ifndef Z64_AUDIO_SFX_PARAMS_H
#define Z64_AUDIO_SFX_PARAMS_H

#include "ultra64.h"
#include "global.h"

#define DEFINE_SFX(_0, importance, distParam, randParam, flags)                \
    { importance, ((((distParam) << SFX_PARAM_01_SHIFT) & SFX_PARAM_01_MASK) | \
                   (((randParam) << SFX_PARAM_67_SHIFT) & SFX_PARAM_67_MASK) | (flags)) },

extern SfxParams sEnemyBankParams[];

extern SfxParams sPlayerBankParams[];

extern SfxParams sItemBankParams[];

extern SfxParams sEnvBankParams[];

extern SfxParams sSystemBankParams[];

extern SfxParams sOcarinaBankParams[];

extern SfxParams sVoiceBankParams[];

#undef DEFINE_SFX

extern SfxParams* gSfxParams[7];

#endif
