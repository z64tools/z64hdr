#ifndef Z64_CODE_800F7260_H
#define Z64_CODE_800F7260_H

#include "ultra64.h"
#include "global.h"
#include "vt.h"

typedef struct {
    /* 0x00 */ u16 sfxId;
    /* 0x04 */ Vec3f* pos;
    /* 0x08 */ u8 token;
    /* 0x0C */ f32* freqScale;
    /* 0x10 */ f32* vol;
    /* 0x14 */ s8* reverbAdd;
} SoundRequest; // size = 0x18

typedef struct {
    /* 0x00 */ f32 value;
    /* 0x04 */ f32 target;
    /* 0x08 */ f32 step;
    /* 0x0C */ u16 remainingFrames;
} UnusedBankLerp; // size = 0x10

// rodata for Audio_ProcessSoundRequest (this file)
// (probably moved to .data due to -use_readwrite_const)
extern char D_80133340[];

// rodata for Audio_ChooseActiveSounds (this file)
extern char D_80133344[];

// file padding
extern s32 D_8013338C;

// rodata for Audio_ProcessSeqCmd (code_800F9280.c)
extern char D_80133390[];
extern char D_80133398[];

extern SoundBankEntry D_8016BAD0[9];
extern SoundBankEntry D_8016BC80[12];
extern SoundBankEntry D_8016BEC0[22];
extern SoundBankEntry D_8016C2E0[20];
extern SoundBankEntry D_8016C6A0[8];
extern SoundBankEntry D_8016C820[3];
extern SoundBankEntry D_8016C8B0[5];
extern SoundRequest sSoundRequests[0x100];
extern u8 sSoundBankListEnd[7];
extern u8 sSoundBankFreeListStart[7];
extern u8 sSoundBankUnused[7];
extern ActiveSound gActiveSounds[7][3];
extern u8 sCurSfxPlayerChannelIdx;
extern u8 gSoundBankMuted[7];
extern UnusedBankLerp sUnusedBankLerp[7];
extern u16 gAudioSfxSwapSource[10];
extern u16 gAudioSfxSwapTarget[10];
extern u8 gAudioSfxSwapMode[10];

// sSoundRequests ring buffer endpoints. read index <= write index, wrapping around mod 256.
extern u8 sSoundRequestWriteIndex;
extern u8 sSoundRequestReadIndex;

/**
 * Array of pointers to arrays of SoundBankEntry of sizes: 9, 12, 22, 20, 8, 3, 5
 *
 * 0 : Player Bank          size 9
 * 1 : Item Bank            size 12
 * 2 : Environment Bank     size 22
 * 3 : Enemy Bank           size 20
 * 4 : System Bank          size 8
 * 5 : Ocarina Bank         size 3
 * 6 : Voice Bank           size 5
 */
extern SoundBankEntry* gSoundBanks[7];

extern u8 sBankSizes[ARRAY_COUNT(gSoundBanks)];

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

void Audio_SetSoundBanksMute(u16 muteMask);

void Audio_QueueSeqCmdMute(u8 channelIdx);

void Audio_ClearBGMMute(u8 channelIdx);

void Audio_PlaySoundGeneral(u16 sfxId, Vec3f* pos, u8 token, f32* freqScale, f32* vol, s8* reverbAdd);

void Audio_RemoveMatchingSoundRequests(u8 aspect, SoundBankEntry* cmp);

void Audio_ProcessSoundRequest(void);

void Audio_RemoveSoundBankEntry(u8 bankId, u8 entryIndex);

void Audio_ChooseActiveSounds(u8 bankId);

void Audio_PlayActiveSounds(u8 bankId);

void Audio_StopSfxByBank(u8 bankId);

void func_800F8884(u8 bankId, Vec3f* pos);

void Audio_StopSfxByPosAndBank(u8 bankId, Vec3f* pos);

void Audio_StopSfxByPos(Vec3f* pos);

void Audio_StopSfxByPosAndId(Vec3f* pos, u16 sfxId);

void Audio_StopSfxByTokenAndId(u8 token, u16 sfxId);

void Audio_StopSfxById(u32 sfxId);

void Audio_ProcessSoundRequests(void);

void Audio_SetUnusedBankLerp(u8 bankId, u8 target, u16 delay);

void Audio_StepUnusedBankLerp(u8 bankId);

void func_800F8F88(void);

u8 Audio_IsSfxPlaying(u32 sfxId);

void Audio_ResetSounds(void);

#endif
