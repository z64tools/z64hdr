#ifndef AUDIO_INIT_PARAMS_H
#define AUDIO_INIT_PARAMS_H

#include "global.h"

extern u8 D_8016F0E0[0xA0]; // unused
extern AudioContext gAudioContext;
extern void (*D_801755D0)(void);
extern s32 D_801755D8[3]; // unused

extern const s16 D_8014A6C0[];

extern const AudioContextInitSizes D_8014A6C4;

extern ReverbSettings D_80133420[][3];

extern AudioSpec gAudioSpecs[18];

#endif
