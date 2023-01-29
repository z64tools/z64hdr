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
} SfxRequest; // size = 0x18

typedef struct {
    /* 0x00 */ f32 value;
    /* 0x04 */ f32 target;
    /* 0x08 */ f32 step;
    /* 0x0C */ u16 remainingFrames;
} UnusedBankLerp; // size = 0x10

extern SfxBankEntry D_8016BAD0[9];
extern SfxBankEntry D_8016BC80[12];
extern SfxBankEntry D_8016BEC0[22];
extern SfxBankEntry D_8016C2E0[20];
extern SfxBankEntry D_8016C6A0[8];
extern SfxBankEntry D_8016C820[3];
extern SfxBankEntry D_8016C8B0[5];
extern SfxRequest sSfxRequests[0x100];
extern u8 sSfxBankListEnd[7];
extern u8 sSfxBankFreeListStart[7];
extern u8 sSfxBankUnused[7];
extern ActiveSfx gActiveSfx[7][3];
extern u8 sCurSfxPlayerChannelIdx;
extern u8 gSfxBankMuted[7];
extern UnusedBankLerp sUnusedBankLerp[7];
extern u16 gAudioSfxSwapSource[10];
extern u16 gAudioSfxSwapTarget[10];
extern u8 gAudioSfxSwapMode[10];

void Audio_SetSfxBanksMute(u16 muteMask);

void Audio_QueueSeqCmdMute(u8 channelIdx);

void Audio_ClearBGMMute(u8 channelIdx);

void Audio_PlaySfxGeneral(u16 sfxId, Vec3f* pos, u8 token, f32* freqScale, f32* vol, s8* reverbAdd);

void Audio_RemoveMatchingSfxRequests(u8 aspect, SfxBankEntry* cmp);

void Audio_ProcessSfxRequest(void);

void Audio_RemoveSfxBankEntry(u8 bankId, u8 entryIndex);

void Audio_ChooseActiveSfx(u8 bankId);

void Audio_PlayActiveSfx(u8 bankId);

void Audio_StopSfxByBank(u8 bankId);

void func_800F8884(u8 bankId, Vec3f* pos);

void Audio_StopSfxByPosAndBank(u8 bankId, Vec3f* pos);

void Audio_StopSfxByPos(Vec3f* pos);

void Audio_StopSfxByPosAndId(Vec3f* pos, u16 sfxId);

void Audio_StopSfxByTokenAndId(u8 token, u16 sfxId);

void Audio_StopSfxById(u32 sfxId);

void Audio_ProcessSfxRequests(void);

void Audio_SetUnusedBankLerp(u8 bankId, u8 target, u16 delay);

void Audio_StepUnusedBankLerp(u8 bankId);

void func_800F8F88(void);

u8 Audio_IsSfxPlaying(u32 sfxId);

void Audio_ResetSfx(void);

#endif
