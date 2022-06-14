#ifndef __CODE_800EC960__
#define __CODE_800EC960__

#include "ultra64.h"
#include "global.h"
#define Audio_DisableSeq(playerIdx, fadeOut) Audio_QueueCmdS32(0x83000000 | ((u8)playerIdx << 16), fadeOut)
#define Audio_StartSeq(playerIdx, fadeTimer, seqId) \
	Audio_QueueSeqCmd(0x00000000 | ((u8)playerIdx << 24) | ((u8)(fadeTimer) << 0x10) | (u16)seqId)
#define Audio_SeqCmd7(playerIdx, a, b) \
	Audio_QueueSeqCmd(0x70000000 | ((u8)playerIdx << 0x18) | ((u8)a << 0x10) | (u8)(b))
#define Audio_SeqCmdC(playerIdx, a, b, c) \
	Audio_QueueSeqCmd(0xC0000000 | ((u8)playerIdx << 24) | ((u8)a << 16) | ((u8)b << 8) | ((u8)(c)))
#define Audio_SeqCmdA(playerIdx, a) Audio_QueueSeqCmd(0xA0000000 | ((u8)playerIdx << 24) | ((u16)(a)))
#define Audio_SeqCmd1(playerIdx, a) Audio_QueueSeqCmd(0x100000FF | ((u8)playerIdx << 24) | ((u8)(a) << 16))
#define Audio_SeqCmdB(playerIdx, a, b, c) \
	Audio_QueueSeqCmd(0xB0000000 | ((u8)playerIdx << 24) | ((u8)a << 16) | ((u8)b << 8) | ((u8)c))
#define Audio_SeqCmdB40(playerIdx, a, b) Audio_QueueSeqCmd(0xB0004000 | ((u8)playerIdx << 24) | ((u8)a << 16) | ((u8)b))
#define Audio_SeqCmd6(playerIdx, a, b, c) \
	Audio_QueueSeqCmd(0x60000000 | ((u8)playerIdx << 24) | ((u8)(a) << 16) | ((u8)b << 8) | ((u8)c))
#define Audio_SeqCmdE0(playerIdx, a)  Audio_QueueSeqCmd(0xE0000000 | ((u8)playerIdx << 24) | ((u8)a))
#define Audio_SeqCmdE01(playerIdx, a) Audio_QueueSeqCmd(0xE0000100 | ((u8)playerIdx << 24) | ((u16)a))
#define Audio_SeqCmd8(playerIdx, a, b, c) \
	Audio_QueueSeqCmd(0x80000000 | ((u8)playerIdx << 24) | ((u8)a << 16) | ((u8)b << 8) | ((u8)c))
#define Audio_SeqCmdF(playerIdx, a) Audio_QueueSeqCmd(0xF0000000 | ((u8)playerIdx << 24) | ((u8)a))
#define ABS_ALT(x)                  ((x) < 0 ? -(x) : (x))

typedef struct {
	/* 0x0 */ f32 vol;
	/* 0x4 */ f32 freqScale;
	/* 0x8 */ s8  reverb;
	/* 0x9 */ s8  panSigned;
	/* 0xA */ s8  stereoBits;
	/* 0xB */ u8  filter;
	/* 0xC */ u8  unk_0C;
} SfxPlayerState;

typedef enum {
	/* 0x0 */ SFX_CHANNEL_PLAYER0, // SfxPlayerBank
	/* 0x1 */ SFX_CHANNEL_PLAYER1,
	/* 0x2 */ SFX_CHANNEL_PLAYER2,
	/* 0x3 */ SFX_CHANNEL_ITEM0, // SfxItemBank
	/* 0x4 */ SFX_CHANNEL_ITEM1,
	/* 0x5 */ SFX_CHANNEL_ENV0, // SfxEnvironmentBank
	/* 0x6 */ SFX_CHANNEL_ENV1,
	/* 0x7 */ SFX_CHANNEL_ENV2,
	/* 0x8 */ SFX_CHANNEL_ENEMY0, // SfxEnemyBank
	/* 0x9 */ SFX_CHANNEL_ENEMY1,
	/* 0xA */ SFX_CHANNEL_ENEMY2,
	/* 0xB */ SFX_CHANNEL_SYSTEM0, // SfxSystemBank
	/* 0xC */ SFX_CHANNEL_SYSTEM1,
	/* 0xD */ SFX_CHANNEL_OCARINA, // SfxOcarinaBank
	/* 0xE */ SFX_CHANNEL_VOICE0, // SfxVoiceBank
	/* 0xF */ SFX_CHANNEL_VOICE1
} SfxChannelIndex;

typedef struct {
	/* 0x0 */ f32 value;
	/* 0x4 */ f32 target;
	/* 0x8 */ f32 step;
	/* 0xC */ s32 remainingFrames;
} FreqLerp;

typedef struct {
	/* 0x0 */ u16 playerIO;
	/* 0x2 */ u16 channelMask;
	/* 0x4 */ u8  channelIO[3 * 33 + 1];
} NatureAmbienceDataIO;

typedef enum {
	/* 0x0 */ PAGE_NON,
	/* 0x1 */ PAGE_SOUND_CONTROL,
	/* 0x2 */ PAGE_SPEC_INFO, // unused
	/* 0x3 */ PAGE_HEAP_INFO,
	/* 0x4 */ PAGE_GROUP_TRACK_INFO, // unused
	/* 0x5 */ PAGE_SUB_TRACK_INFO,
	/* 0x6 */ PAGE_CHANNEL_INFO, // unused
	/* 0x7 */ PAGE_INTERFACE_INFO,
	/* 0x8 */ PAGE_SFX_SWAP,
	/* 0x9 */ PAGE_BLOCK_CHANGE_BGM,
	/* 0xA */ PAGE_NATURAL_SOUND_CONTROL, // unused
	/* 0xB */ PAGE_OCARINA_TEST,
	/* 0xC */ PAGE_SFX_PARAMETER_CHANGE,
	/* 0xD */ PAGE_SCROLL_PRINT,
	/* 0xE */ PAGE_FREE_AREA,
	/* 0xF */ PAGE_MAX
} AudioDebugPage;

#define SCROLL_PRINT_BUF_SIZE 25

typedef struct {
	s8 x;
	s8 y;
} OcarinaStick;

extern f32 D_801305B0;
extern s8 D_801305B4;
extern s8 D_801305B8;
extern s8 D_801305BC;
extern s8 D_801305C0;
extern f32 sBehindScreenZ[2];
extern u8 sAudioIncreasingTranspose;
extern u8 sPrevChargeLevel;
extern f32 D_801305E4[4];
extern f32 D_801305F4;
extern u8 sGanonsTowerLevelsVol[8];
extern u8 sEnterGanonsTowerTimer;
extern s8 D_80130604;
extern s8 D_80130608;
extern s8 sAudioCutsceneFlag;
extern s8 sSpecReverb;
extern s8 sAudioEnvReverb;
extern s8 sAudioCodeReverb;
extern u8 sPrevSeqMode;
extern f32 sAudioEnemyDist;
extern s8 sAudioEnemyVol;
extern u16 sPrevMainBgmSeqId;
extern u8 D_8013062C;
extern u8 D_80130630;
extern u32 sNumFramesStill;
extern u32 sNumFramesMoving;
extern u8 sAudioBaseFilter;
extern u8 sAudioExtraFilter;
extern u8 sAudioBaseFilter2;
extern u8 sAudioExtraFilter2;
extern Vec3f* sSariaBgmPtr;
extern f32 D_80130650;
extern u8 sSeqModeInput;

#define SEQ_FLAG_ENEMY         (1 << 0) // Allows enemy bgm
#define SEQ_FLAG_FANFARE       (1 << 1)
#define SEQ_FLAG_FANFARE_GANON (1 << 2)
#define SEQ_FLAG_RESTORE       (1 << 3) // required for func_800F5B58 to restore a sequence after func_800F5ACC
#define SEQ_FLAG_4             (1 << 4)
#define SEQ_FLAG_5             (1 << 5)
#define SEQ_FLAG_6             (1 << 6)
#define SEQ_FLAG_NO_AMBIENCE   (1 << 7)

extern u8 sSeqFlags[0];
extern s8 sSpecReverbs[20];
extern NatureAmbienceDataIO sNatureAmbienceDataIO[20];
extern u32 sOcarinaAllowedButtonMask;
extern s32 sOcarinaAButtonMap;
extern s32 sOcarinaCUpButtonMap;
extern s32 sOcarinaCDownButtonMap;
extern u8 sIsOcarinaInputEnabled;
extern s8 sOcarinaInstrumentId;
extern u8 sCurOcarinaPitch;
extern u8 sPrevOcarinaPitch;
extern u8 sCurOcarinaButtonIndex;
extern u8 sMusicStaffPrevPitch;
extern f32 sCurOcarinaBendFreq;
extern f32 sRelativeOcarinaVolume;
extern s8 sCurOcarinaBendIndex;
extern s8 sCurOcarinaVolume;
extern s8 sCurOcarinaVibrato;
extern u8 sPlaybackState;
extern u32 sOcarinaFlags;
extern u32 sPlaybackNoteTimer;
extern u16 sPlaybackNotePos;
extern u16 sPlaybackStaffPos;
extern u16 sPrevOcarinaWithMusicStaffFlags;
extern u8 sPlaybackPitch;
extern u8 sNotePlaybackVolume;
extern u8 sNotePlaybackVibrato;
extern s8 sNotePlaybackBend;
extern f32 sRelativeNotePlaybackBend;
extern f32 sRelativeNotePlaybackVolume;
extern s32 sOcarinaPlaybackTaskStart;
extern u8 sButtonToPitchMap[5];
extern u8 sOcaMemoryGameAppendPos;
extern u8 sOcaMemoryGameEndPos;
extern u8 sOcaMemoryGameNumNotes[3];
extern OcarinaNote sOcarinaSongNotes[14][20];
extern OcarinaNote* sPlaybackSong;
extern u8 sFrogsSongNotes[14];
extern u8 sRecordingState;
extern u8 sRecordSongPos;
extern u32 sOcarinaRecordTaskStart;
extern u8 sRecordOcarinaPitch;
extern u8 sRecordOcarinaVolume;
extern u8 sRecordOcarinaVibrato;
extern s8 sRecordOcarinaBendIndex;
extern u8 sRecordOcarinaButtonIndex;
extern u8 sPlayedOcarinaSongIndexPlusOne;
extern u8 sMusicStaffNumNotesPerTest;
extern u8 sOcarinaDropInputTimer;
extern OcarinaNote sScarecrowsLongSongNotes[108];
extern u8* gScarecrowSpawnSongPtr;
extern OcarinaNote* sMemoryGameSongPtr;
extern u8 sPitchToButtonMap[16];
extern u32 sAudioUpdateStartTime;
extern u32 sAudioUpdateEndTime;
extern f32 D_8016B7A8;
extern f32 D_8016B7AC;
extern f32 D_8016B7B0;
extern f32 D_8016B7B4;
extern FreqLerp sRiverFreqScaleLerp;
extern FreqLerp sWaterfallFreqScaleLerp;
extern f32 D_8016B7D8;
extern s8 D_8016B7DC;
extern f32 D_8016B7E0;
extern u16 D_8016B7E4;
extern u8 sRiverSoundMainBgmVol;
extern u8 sRiverSoundMainBgmCurrentVol;
extern u8 sRiverSoundMainBgmLower;
extern u8 sRiverSoundMainBgmRestore;
extern u8 sGanonsTowerVol;
extern SfxPlayerState sSfxChannelState[0x10];
extern char sBinToStrBuf[0x20];
extern u8 D_8016B9D8;
extern u8 sAudioSpecPeakNumNotes[0x12];
extern u8 D_8016B9F2;
extern u8 D_8016B9F3;
extern u8 D_8016B9F4;
extern u16 D_8016B9F6;
extern OcarinaStaff sPlayingStaff;
extern OcarinaStaff sPlaybackStaff;
extern OcarinaStaff sRecordingStaff;
extern u32 sOcarinaUpdateTaskStart;
extern OcarinaStick sOcarinaInputStickRel;
extern u32 sOcarinaInputButtonCur;
extern u32 sOcarinaInputButtonStart;
extern u32 sOcarinaInputButtonPrev;
extern s32 sOcarinaInputButtonPress;
extern s32 sOcarinaUnused;
extern u8 sCurOcarinaSongWithoutMusicStaff[8];
extern u8 sOcarinaWithoutMusicStaffPos;
extern u8 sOcarinaHasStartedSong;
extern u8 sFirstOcarinaSongIndex;
extern u8 sLastOcarinaSongIndex;
extern u16 sAvailOcarinaSongFlags;
extern u8 sStaffOcarinaPlayingPos;
extern u16 sMusicStaffPos[OCARINA_SONG_MAX];
extern u16 sMusicStaffCurHeldLength[OCARINA_SONG_MAX];
extern u16 sMusicStaffExpectedLength[OCARINA_SONG_MAX];
extern u8 sMusicStaffExpectedPitch[OCARINA_SONG_MAX];
extern OcarinaNote sScarecrowsLongSongSecondNote;
extern u8 sAudioHasMalonBgm;
extern f32 sAudioMalonBgmDist;

void Audio_StepFreqLerp(FreqLerp* lerp);
void func_800F56A8(void);
void AudioOcarina_SetCustomButtonMapping(u8 useCustom);
void AudioOcarina_ReadControllerInput(void);
f32 AudioOcarina_BendPitchTwoSemitones(s8 bendIndex);
u8 AudioOcarina_GetPlayingState(void);
u8 AudioOcarina_MapNoteToButton(u8 pitchAndBFlatFlag);
void AudioOcarina_MapNotesToScarecrowButtons(u8 noteSongIndex);
void AudioOcarina_CheckIfStartedSong(void);
void AudioOcarina_CheckSongsWithMusicStaff(void);
void AudioOcarina_CheckSongsWithoutMusicStaff(void);
void AudioOcarina_PlayControllerInput(u8 unused);
void AudioOcarina_EnableInput(u8 inputEnabled);
void AudioOcarina_PlaybackSong(void);
void AudioOcarina_SetRecordingSong(u8 isRecordingComplete);
void AudioOcarina_UpdateRecordingStaff(void);
void AudioOcarina_UpdatePlayingStaff(void);
void AudioOcarina_UpdatePlaybackStaff(void);
void AudioOcarina_RecordSong(void);
void AudioOcarina_Update(void);
void AudioOcarina_ResetStaffs(void);

extern f32 D_80131C8C;
extern u32 sDebugPadHold;
extern u32 sDebugPadBtnLast;
extern u32 sDebugPadPress;
extern s32 sAudioUpdateTaskStart;
extern s32 sAudioUpdateTaskEnd;
extern f32 sAudioUpdateDuration;
extern f32 sAudioUpdateDurationMax;
extern u8 sAudioDebugEverOpened;
extern u8 sAudioSfxMuted;
extern u8 sAudioDebugPage;
extern u8 sAudioSndContSel;
extern u8 sAudioDebugTextColor;
extern char sAudioDebugPageNames[15][23];
extern u16 sAudioSndContWork[11];
extern u16 sAudioSndContWorkLims[11];
extern char sSoundBankNames[7][11];
extern char sSoundModeNames[5][10];
extern s8 sAudioIntInfoX;
extern s8 sAudioIntInfoY;
extern s8 sAudioIntInfoSel;
extern s8 sAudioIntInfoBankPage[7];
extern u8 sAudioScrPrtSel;
extern u8 sAudioScrPrtInd;
extern u8 sAudioScrPrtOverflow;
extern s8 sAudioScrPrtX;
extern s8 sAudioScrPrtY;
extern u8 sAudioScrPrtWork[11];
extern u8 sAudioScrPrtWorkLims[11];
extern u8 sAudioSubTrackInfoSpec;
extern u8 sAudioSfxSwapIsEditing;
extern u8 sAudioSfxSwapSel;
extern u8 sAudioSfxSwapNibbleSel;
extern char sAudioSfxSwapModeNames[2][5];
extern u8 sAudioSfxParamChgSel;
extern u8 sAudioSfxParamChgBitSel;
extern u16 sAudioSfxParamChgWork[4];
extern u8 sAudioSubTrackInfoPlayerSel;
extern u8 sAudioSubTrackInfoChannelSel;
extern u8 sSeqPlayerPeakNumLayers[20];
extern char sAudioSceneNames[3][2];
extern u8 sAudioBlkChgBgmWork[2];
extern u8 sAudioBlkChgBgmSel;
extern char sBoolStrs[3][5];
extern u8 sAudioNatureFailed;
extern u8 sPeakNumNotes;

void AudioDebug_SetInput(void);
char* AudioDebug_ToStringBinary(u32 num, u8 bits);

#define SETCOL_COMMON(v, r, g, b) \
	GfxPrint_SetColor(printer, ((v & 4) >> 2) * (r), ((v & 2) >> 1) * (g), (v & 1) * (b), 255)
#define SETCOL(r, g, b)             SETCOL_COMMON(sAudioDebugTextColor, r, g, b)
#define SETCOL_SCROLLPRINT(r, g, b) SETCOL_COMMON(sAudioScrPrtWork[2], r, g, b)

void AudioDebug_ProcessInput_SndCont(void);
void AudioDebug_ProcessInput_IntInfo(void);
void AudioDebug_ProcessInput_ScrPrt(void);
void AudioDebug_ProcessInput_SfxSwap(void);
void AudioDebug_ProcessInput_SubTrackInfo(void);
void AudioDebug_ProcessInput_HeapInfo(void);
void AudioDebug_ProcessInput_BlkChgBgm(void);
void AudioDebug_ProcessInput_OcaTest(void);
void AudioDebug_ProcessInput_SfxParamChg(void);
void AudioDebug_ProcessInput(void);
void Audio_UpdateRiverSoundVolumes(void);
void func_800F5CF8(void);
void func_800F3138(UNK_TYPE arg0);
void func_800F3140(UNK_TYPE arg0, UNK_TYPE arg1);
void func_800F314C(s8 arg0);
f32 Audio_ComputeSoundVolume(u8 bankId, u8 entryIdx);
s8 Audio_ComputeSoundReverb(u8 bankId, u8 entryIdx, u8 channelIdx);
s8 Audio_ComputeSoundPanSigned(f32 x, f32 z, u8 token);
f32 Audio_ComputeSoundFreqScale(u8 bankId, u8 entryIdx);
u8 func_800F37B8(f32 behindScreenZ, SoundBankEntry* arg1, s8 arg2);
s8 func_800F3990(f32 arg0, u16 sfxParams);
void Audio_ResetSfxChannelState(void);
f32 func_800F3F84(f32 arg0);
void func_800F4578(Vec3f* pos, u16 sfxId, f32 arg2);
void func_800F45D0(f32 arg0);
void Audio_StepFreqLerp(FreqLerp* lerp);
void Audio_UpdateRiverSoundVolumes(void);
void Audio_SplitBgmChannels(s8 volSplit);
void func_800F56A8(void);
void func_800F5CF8(void);
void Audio_PlaySoundGeneralIfNotInCutscene(u16 sfxId, Vec3f* pos, u8 arg2, f32* freqScale, f32* arg4, s8* reverbAdd);
void func_800F6B3C(void);
void func_800F6BDC(void);
void Audio_StartNatureAmbienceSequence(u16 playerIO, u16 channelMask);
void func_800F7208(void);

#endif // __CODE_800EC960__
