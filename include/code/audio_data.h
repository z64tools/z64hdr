#ifndef Z64_AUDIO_DATA_H
#define Z64_AUDIO_DATA_H

#include "global.h"

// clang-format off
extern s16 gSawtoothWaveSample[];

extern s16 gTriangleWaveSample[];

extern s16 gSineWaveSample[];

extern s16 gSquareWaveSample[];

extern s16 gWhiteNoiseSample[];

// Sine White Noise?
extern s16 D_8012EA90[];

// Pulse Wave (duty cycle = 12.5%)
extern s16 gEighthPulseWaveSample[];

// Pulse Wave (duty cycle = 25%)
extern s16 gQuarterPulseWaveSample[];
// clang-format on

extern s16* gWaveSamples[];

extern f32 gBendPitchOneOctaveFrequencies[];

extern f32 gBendPitchTwoSemitonesFrequencies[];

extern f32 gPitchFrequencies[];

extern u8 gDefaultShortNoteVelocityTable[];

extern u8 gDefaultShortNoteGateTimeTable[];

extern EnvelopePoint gDefaultEnvelope[];

extern NoteSubEu gZeroNoteSub;

extern NoteSubEu gDefaultNoteSub;

extern u16 gHaasEffectDelaySizes[64];

extern s32 D_8012FBA4;

// clang-format off
extern s16 D_8012FBA8[];
// clang-format on

extern f32 gHeadsetPanVolume[];

extern f32 gStereoPanVolume[];

extern f32 gDefaultPanVolume[];

extern s16 gLowPassFilterData[16 * 8];

extern s16 gHighPassFilterData[15 * 8];

extern s16 D_80130418[8 * 8];

#endif
