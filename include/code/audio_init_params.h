#ifndef Z64_AUDIO_INIT_PARAMS_H
#define Z64_AUDIO_INIT_PARAMS_H

#include "global.h"

extern u8 D_8016F0E0[0xA0]; // unused
extern AudioContext gAudioContext;
extern void (*D_801755D0)(void);
extern s32 D_801755D8[3]; // unused

extern const s16 D_8014A6C0[];

// TODO: Extract from table?
#define NUM_SOUNDFONTS 38
#define SFX_SEQ_SIZE 0x6A90
#define SFX_SOUNDFONT_1_SIZE 0x3AA0
#define SFX_SOUNDFONT_2_SIZE 0x17B0

// Sizes of everything on the init pool
#define AI_BUFFERS_SIZE (AIBUF_SIZE * ARRAY_COUNT(gAudioContext.aiBuffers))
#define SOUNDFONT_LIST_SIZE (NUM_SOUNDFONTS * sizeof(SoundFont))
#define PERMANENT_POOL_SIZE (SFX_SEQ_SIZE + SFX_SOUNDFONT_1_SIZE + SFX_SOUNDFONT_2_SIZE)

extern const AudioHeapInitSizes gAudioHeapInitSizes;

#define DEFAULT_REVERB_SETTINGS \
   ;

extern ReverbSettings sReverbSettings[][3];

extern AudioSpec gAudioSpecs[18];

#endif
