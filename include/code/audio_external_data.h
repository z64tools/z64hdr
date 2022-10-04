#ifndef Z64_AUDIO_EXTERNAL_DATA_H
#define Z64_AUDIO_EXTERNAL_DATA_H

#include "ultra64.h"
#include "global.h"

// sSfxRequests ring buffer endpoints. read index <= write index, wrapping around mod 256.
extern u8 gSfxRequestWriteIndex;
extern u8 gSfxRequestReadIndex;

/**
 * Array of pointers to arrays of SfxBankEntry of sizes: 9, 12, 22, 20, 8, 3, 5
 *
 * 0 : Player Bank          size 9
 * 1 : Item Bank            size 12
 * 2 : Environment Bank     size 22
 * 3 : Enemy Bank           size 20
 * 4 : System Bank          size 8
 * 5 : Ocarina Bank         size 3
 * 6 : Voice Bank           size 5
 */
extern SfxBankEntry* gSfxBanks[7];

extern u8 gSfxBankSizes[ARRAY_COUNT(gSfxBanks)];

extern u8 gSfxChannelLayout;

extern u16 D_801333D0;

// The center of the screen in projected coordinates.
// Gives the impression that the sfx has no specific location
extern Vec3f gSfxDefaultPos;

// Reused as either frequency or volume multiplicative scaling factor
// Does not alter or change frequency or volume
extern f32 gSfxDefaultFreqAndVolScale;

extern s32 D_801333E4; // unused

// Adds no reverb to the existing reverb
extern s8 gSfxDefaultReverb;

extern s32 D_801333EC; // unused

extern u8 D_801333F0;

extern u8 gAudioSfxSwapOff;

extern u8 D_801333F8;

extern s32 D_801333FC; // unused

extern u8 gSeqCmdWrPos;
extern u8 gSeqCmdRdPos;
extern u8 D_80133408;
extern u8 D_8013340C;

extern u8 gSoundModeList[];

extern u8 gAudioSpecId;

extern u8 D_80133418;

#endif
