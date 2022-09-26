#ifndef Z64_CODE_800EC960_H
#define Z64_CODE_800EC960_H

#include "ultra64.h"
#include "global.h"

// TODO: can these macros be shared between files? code_800F9280 seems to use
// versions without any casts...
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
#define Audio_SeqCmdE0(playerIdx, a) Audio_QueueSeqCmd(0xE0000000 | ((u8)playerIdx << 24) | ((u8)a))
#define Audio_SeqCmdE01(playerIdx, a) Audio_QueueSeqCmd(0xE0000100 | ((u8)playerIdx << 24) | ((u16)a))
#define Audio_SeqCmd8(playerIdx, a, b, c) \
    Audio_QueueSeqCmd(0x80000000 | ((u8)playerIdx << 24) | ((u8)a << 16) | ((u8)b << 8) | ((u8)c))
#define Audio_SeqCmdF(playerIdx, a) Audio_QueueSeqCmd(0xF0000000 | ((u8)playerIdx << 24) | ((u8)a))

#define ABS_ALT(x) ((x) < 0 ? -(x) : (x))

typedef struct {
    /* 0x0 */ f32 vol;
    /* 0x4 */ f32 freqScale;
    /* 0x8 */ s8 reverb;
    /* 0x9 */ s8 panSigned;
    /* 0xA */ s8 stereoBits;
    /* 0xB */ u8 filter;
    /* 0xC */ u8 unk_0C;
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
    /* 0xE */ SFX_CHANNEL_VOICE0,  // SfxVoiceBank
    /* 0xF */ SFX_CHANNEL_VOICE1
} SfxChannelIndex; // playerIdx = 2

typedef struct {
    /* 0x0 */ f32 value;
    /* 0x4 */ f32 target;
    /* 0x8 */ f32 step;
    /* 0xC */ s32 remainingFrames;
} FreqLerp;

typedef struct {
    /* 0x0 */ u16 playerIO;
    /* 0x2 */ u16 channelMask;
    /* 0x4 */ u8 channelIO[3 * 33 + 1];
} NatureAmbienceDataIO; // size = 0x68

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

extern u8 gIsLargeSoundBank[7];

// Only the first row of these is supported by sequence 0. (gSfxChannelLayout is always 0.)
extern u8 gChannelsPerBank[4][7];
extern u8 gUsedChannelsPerBank[4][7];

extern f32 D_801305B0;
extern s8 D_801305B4;
extern s8 D_801305B8;
extern s8 D_801305BC;
extern s8 D_801305C0;
extern f32 sBehindScreenZ[2];
extern u8 sAudioIncreasingTranspose;
extern u8 gMorphaTransposeTable[16];
extern u8 sPrevChargeLevel;
extern f32 D_801305E4[4]; // 2**({0, 2, 5, 5}/12)
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

#define SEQ_FLAG_ENEMY (1 << 0) // Allows enemy bgm
#define SEQ_FLAG_FANFARE (1 << 1)
#define SEQ_FLAG_FANFARE_GANON (1 << 2)
#define SEQ_FLAG_RESTORE (1 << 3) // required for func_800F5B58 to restore a sequence after func_800F5ACC
#define SEQ_FLAG_4 (1 << 4)
#define SEQ_FLAG_5 (1 << 5)
#define SEQ_FLAG_6 (1 << 6)
#define SEQ_FLAG_NO_AMBIENCE (1 << 7)

extern u8 sSeqFlags[0x6E];

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
extern u8 sPlaybackPitch; // Pitch + PitchFlags
extern u8 sNotePlaybackVolume;
extern u8 sNotePlaybackVibrato;
extern s8 sNotePlaybackBend;
extern f32 sRelativeNotePlaybackBend;
extern f32 sRelativeNotePlaybackVolume;
extern s32 sOcarinaPlaybackTaskStart;

extern u8 sButtonToPitchMap[5];

extern u8 sOcaMemoryGameAppendPos;
extern u8 sOcaMemoryGameEndPos;
extern u8 sOcaMemoryGameNumNotes[];

extern OcarinaNote sOcarinaSongNotes[OCARINA_SONG_MAX][20];

extern OcarinaNote* sPlaybackSong;
extern u8 sFrogsSongNotes[14];
extern u8* gFrogsSongPtr;
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
extern OcarinaNote* gScarecrowLongSongPtr;

extern u8* gScarecrowSpawnSongPtr;
extern OcarinaNote* sMemoryGameSongPtr;

extern u8 sPitchToButtonMap[16];

extern OcarinaSongButtons gOcarinaSongButtons[OCARINA_SONG_MAX];

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
extern struct{
    s8 str[5];
    u16 num;
} sAudioScrPrtBuf[SCROLL_PRINT_BUF_SIZE];
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

void PadMgr_RequestPadData(PadMgr* padmgr, Input* inputs, s32 mode);
void Audio_StepFreqLerp(FreqLerp* lerp);
void func_800F56A8(void);
void Audio_PlayNatureAmbienceSequence(u8 natureAmbienceId);
s32 Audio_SetGanonsTowerBgmVolume(u8 targetVol);

// =========== Audio Ocarina ===========

void AudioOcarina_SetCustomButtonMapping(u8 useCustom);

void AudioOcarina_ReadControllerInput(void);

/**
 * Looks up the frequency to bend the pitch by.
 * The pitch will bend up to a maximum of 2 semitones
 * in each direction giving a total range of 4 semitones
 */
f32 AudioOcarina_BendPitchTwoSemitones(s8 bendIndex);

/**
 * If an available song has been played, then return that song index
 * If the ocarina is on, but no song has been played then return 0xFE
 * If the ocarina is off, return 0xFF
 */
u8 AudioOcarina_GetPlayingState(void);

u8 AudioOcarina_MapNoteToButton(u8 pitchAndBFlatFlag);

void AudioOcarina_MapNotesToScarecrowButtons(u8 noteSongIndex);

/**
 * Ocarina flags:
 * bitmask 0x3FFF:
 *      - Ocarina song id
 * bitmask 0xC000:
 *      - 0x0000: Limits the notes to 8 notes at a time. Not playing a correct song after 8 notes will cause an ocarina
 * error
 *      - 0x4000: (Identical to 0xC000)
 *      - 0x8000: Limits the notes to 1 note at a time. A single incorrect note will cause an ocarina error
 *      - 0xC000: Free-play, no limitations to the number of notes to play
 * bitmask 0x7FFF0000:
 *      - ocarina action (only used to make flags != 0)
 * bitmask 0x80000000:
 *      - unused (only used to make flags != 0)
 */
void AudioOcarina_Start(u16 ocarinaFlags);

void AudioOcarina_CheckIfStartedSong(void);

/**
 * Checks for ocarina songs from user input with a music staff prompt
 * Type 1) Playback: tests note-by-note (ocarinaFlag & 0xC000 == 0x8000) eg:
 *      - learning a new song
 *      - playing the ocarina memory game
 * Type 2) Check: tests in 8-note chunks (ocarinaFlag & 0xC000 == 0x0000) eg:
 *      - validating scarecrow spawn song as adult
 *      - ocarina prompt for zelda's lullaby, saria's song, Storms, Song of Time, etc...
 */
void AudioOcarina_CheckSongsWithMusicStaff(void);

/**
 * Checks for ocarina songs from user input with no music staff prompt.
 * Includes ocarina actions such as free play, no warp
 */
void AudioOcarina_CheckSongsWithoutMusicStaff(void);

// This unused argument is used in Majora's Mask as a u8
void AudioOcarina_PlayControllerInput(u8 unused);

/**
 * Directly enable the ocarina to receive input without
 * properly resetting it based on an ocarina instrument id
 * Unused.
 */
void AudioOcarina_EnableInput(u8 inputEnabled);

/**
 * Resets ocarina properties based on the ocarina instrument id
 * If ocarina instrument id is "OCARINA_INSTRUMENT_OFF", turn off the ocarina
 * For all ocarina instrument ids, turn the ocarina on with the instrument id
 */
void AudioOcarina_SetInstrument(u8 ocarinaInstrumentId);

void AudioOcarina_SetPlaybackSong(s8 songIndexPlusOne, s8 playbackState);

/**
 * Play a song with the ocarina to the user that is
 * based on OcarinaNote data and not user input
 */
void AudioOcarina_PlaybackSong(void);

void AudioOcarina_SetRecordingSong(u8 isRecordingComplete);

/**
 * recordingState = OCARINA_RECORD_OFF, end
 * recordingState = OCARINA_RECORD_SCARECROW_LONG, start long scarecrows song
 * recordingState = OCARINA_RECORD_SCARECROW_SPAWN, start spawn scarecrows song
 */
void AudioOcarina_SetRecordingState(u8 recordingState);

void AudioOcarina_UpdateRecordingStaff(void);

void AudioOcarina_UpdatePlayingStaff(void);

void AudioOcarina_UpdatePlaybackStaff(void);

OcarinaStaff* AudioOcarina_GetRecordingStaff(void);

OcarinaStaff* AudioOcarina_GetPlayingStaff(void);

OcarinaStaff* AudioOcarina_GetPlaybackStaff(void);

void AudioOcarina_RecordSong(void);

void AudioOcarina_MemoryGameInit(u8 minigameRound);

s32 AudioOcarina_MemoryGameNextNote(void);

void AudioOcarina_Update(void);

void AudioOcarina_PlayLongScarecrowAfterCredits(void);

void AudioOcarina_ResetStaffs(void);

extern f32 D_80131C8C;

// =========== Audio Debugging ===========

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

void AudioDebug_Draw(GfxPrint* printer);

void AudioDebug_ProcessInput_SndCont(void);

void AudioDebug_ProcessInput_IntInfo(void);

void AudioDebug_ProcessInput_ScrPrt(void);

void AudioDebug_ProcessInput_SfxSwap(void);

void AudioDebug_ProcessInput_SubTrackInfo(void);

void AudioDebug_ProcessInput_HeapInfo(void);

void AudioDebug_ProcessInput_BlkChgBgm(void);

void AudioDebug_ProcessInput_OcaTest(void);

void AudioDebug_ProcessInput_SfxParamChg(void);

void AudioDebug_ScrPrt(const s8* str, u16 num);

void AudioDebug_ProcessInput(void);

void Audio_UpdateRiverSoundVolumes(void);
void func_800F5CF8(void);

/**
 * This is Audio_Update for the graph thread
 */
void func_800F3054(void);

void func_800F3138(UNK_TYPE arg0);

void func_800F3140(UNK_TYPE arg0, UNK_TYPE arg1);

void func_800F314C(s8 arg0);

f32 Audio_ComputeSoundVolume(u8 bankId, u8 entryIdx);

s8 Audio_ComputeSoundReverb(u8 bankId, u8 entryIdx, u8 channelIdx);

s8 Audio_ComputeSoundPanSigned(f32 x, f32 z, u8 token);

f32 Audio_ComputeSoundFreqScale(u8 bankId, u8 entryIdx);

u8 func_800F37B8(f32 behindScreenZ, SoundBankEntry* arg1, s8 arg2);

s8 func_800F3990(f32 arg0, u16 sfxParams);

void Audio_SetSoundProperties(u8 bankId, u8 entryIdx, u8 channelIdx);

void Audio_ResetSfxChannelState(void);

void Audio_PlayCutsceneEffectsSequence(u8 csEffectType);

f32 func_800F3F84(f32 arg0);

void func_800F4010(Vec3f* pos, u16 sfxId, f32 arg2);

void func_800F4138(Vec3f* pos, u16 sfxId, f32 arg2);

void func_800F4190(Vec3f* pos, u16 sfxId);
void Audio_PlaySoundRandom(Vec3f* pos, u16 baseSfxId, u8 randLim);

void func_800F4254(Vec3f* pos, u8 level);

void func_800F436C(Vec3f* pos, u16 sfxId, f32 arg2);

void func_800F4414(Vec3f* pos, u16 sfxId, f32 arg2);

void func_800F44EC(s8 arg0, s8 arg1);

void func_800F4524(Vec3f* pos, u16 sfxId, s8 arg2);

void func_800F4578(Vec3f* pos, u16 sfxId, f32 arg2);

void func_800F45D0(f32 arg0);

void Audio_PlaySoundRiver(Vec3f* pos, f32 freqScale);

void Audio_PlaySoundWaterfall(Vec3f* pos, f32 freqScale);

void Audio_StepFreqLerp(FreqLerp* lerp);

void func_800F47BC(void);

void func_800F47FC(void);

void func_800F483C(u8 targetVol, u8 volFadeTimer);

/**
 * Incrementally increase volume of NA_BGM_GANON_TOWER for each new room during the climb of Ganon's Tower
 */
void Audio_SetGanonsTowerBgmVolumeLevel(u8 ganonsTowerLevel);

/**
 * If a new volume is requested for ganon's tower, update the volume and
 * calculate a new low-pass filter cutoff and reverb based on the new volume
 */
s32 Audio_SetGanonsTowerBgmVolume(u8 targetVol);

/**
 * Responsible for lowering market bgm in Child Market Entrance and Child Market Back Alley
 * Only lowers volume for 1 frame, so must be called every frame to maintain lower volume
 */
void Audio_LowerMainBgmVolume(u8 volume);

void Audio_UpdateRiverSoundVolumes(void);

void Audio_PlaySoundIncreasinglyTransposed(Vec3f* pos, s16 sfxId, u8* semitones);

void Audio_ResetIncreasingTranspose(void);

void Audio_PlaySoundTransposed(Vec3f* pos, u16 sfxId, s8 semitone);

void func_800F4C58(Vec3f* pos, u16 sfxId, u8 arg2);

void func_800F4E30(Vec3f* pos, f32 arg1);

void Audio_ClearSariaBgm(void);

void Audio_ClearSariaBgmAtPos(Vec3f* pos);

/**
 * Turns on and off channels from both bgm players in a way that splits
 * equally between the two bgm channels. Split based on note priority
 */
void Audio_SplitBgmChannels(s8 volSplit);

void Audio_PlaySariaBgm(Vec3f* pos, u16 seqId, u16 distMax);

void Audio_ClearSariaBgm2(void);

void func_800F5510(u16 seqId);

void func_800F5550(u16 seqId);

void func_800F56A8(void);

void func_800F5718(void);

void func_800F574C(f32 arg0, u8 arg2);

void func_800F5918(void);

void func_800F595C(u16 arg0);

void func_800F59E8(u16 arg0);

s32 func_800F5A58(u8 arg0);

/**
 * Plays a sequence on the main bgm player, but stores the previous sequence to return to later
 * Designed for the mini-boss sequence, but also used by mini-game 2 sequence
 */
void func_800F5ACC(u16 seqId);

/**
 * Restores the previous sequence to the main bgm player before func_800F5ACC was called
 */
void func_800F5B58(void);

/**
 * Plays the nature ambience sequence on the main bgm player, but stores the previous sequence to return to later
 */
void func_800F5BF0(u8 natureAmbienceId);

/**
 * Restores the previous sequence to the main bgm player before func_800F5BF0 was called
 */
void func_800F5C2C(void);

void Audio_PlayFanfare(u16 seqId);

void func_800F5CF8(void);

void func_800F5E18(u8 playerIdx, u16 seqId, u8 fadeTimer, s8 arg3, s8 arg4);

void Audio_SetSequenceMode(u8 seqMode);

void Audio_SetBgmEnemyVolume(f32 dist);

void func_800F6268(f32 dist, u16 arg1);

void func_800F64E0(u8 arg0);

void func_800F6584(u8 arg0);

void Audio_SetEnvReverb(s8 reverb);

void Audio_SetCodeReverb(s8 reverb);

void func_800F6700(s8 arg0);

void Audio_SetBaseFilter(u8 filter);

void Audio_SetExtraFilter(u8 filter);

void Audio_SetCutsceneFlag(s8 flag);

void Audio_PlaySoundGeneralIfNotInCutscene(u16 sfxId, Vec3f* pos, u8 arg2, f32* freqScale, f32* arg4, s8* reverbAdd);

void Audio_PlaySoundIfNotInCutscene(u16 sfxId);

void func_800F6964(u16 arg0);

void func_800F6AB0(u16 arg0);

void func_800F6B3C(void);

void Audio_DisableAllSeq(void);

s8 func_800F6BB8(void);

void func_800F6BDC(void);

void Audio_PreNMI(void);

void func_800F6C34(void);

void Audio_SetNatureAmbienceChannelIO(u8 channelIdxRange, u8 port, u8 val);

void Audio_StartNatureAmbienceSequence(u16 playerIO, u16 channelMask);

void Audio_PlayNatureAmbienceSequence(u8 natureAmbienceId);

void Audio_Init(void);

void Audio_InitSound(void);

void func_800F7170(void);

void func_800F71BC(s32 arg0);

void func_800F7208(void);

#endif
