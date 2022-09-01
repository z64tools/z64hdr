#ifndef AUDIO_SYNTHESIS_H
#define AUDIO_SYNTHESIS_H

#include "ultra64.h"
#include "global.h"

#define DEFAULT_LEN_1CH 0x1A0
#define DEFAULT_LEN_2CH 0x340

// DMEM Addresses for the RSP
#define DMEM_TEMP 0x3C0
#define DMEM_UNCOMPRESSED_NOTE 0x580
#define DMEM_NOTE_PAN_TEMP 0x5C0
#define DMEM_SCRATCH2 0x760              // = DMEM_TEMP + DEFAULT_LEN_2CH + a bit more
#define DMEM_COMPRESSED_ADPCM_DATA 0x940 // = DMEM_LEFT_CH
#define DMEM_LEFT_CH 0x940
#define DMEM_RIGHT_CH 0xAE0
#define DMEM_WET_TEMP 0x3E0
#define DMEM_WET_SCRATCH 0x720 // = DMEM_WET_TEMP + DEFAULT_LEN_2CH
#define DMEM_WET_LEFT_CH 0xC80
#define DMEM_WET_RIGHT_CH 0xE20 // = DMEM_WET_LEFT_CH + DEFAULT_LEN_1CH

Acmd* AudioSynth_LoadRingBufferPart(Acmd* cmd, u16 dmem, u16 startPos, s32 length, SynthesisReverb* reverb);
Acmd* AudioSynth_SaveBufferOffset(Acmd* cmd, u16 dmem, u16 offset, s32 length, s16* buf);
Acmd* AudioSynth_SaveRingBufferPart(Acmd* cmd, u16 dmem, u16 startPos, s32 length, SynthesisReverb* reverb);
Acmd* AudioSynth_DoOneAudioUpdate(s16* aiBuf, s32 aiBufLen, Acmd* cmd, s32 updateIndex);
Acmd* AudioSynth_ProcessNote(s32 noteIndex, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s16* aiBuf,
                             s32 aiBufLen, Acmd* cmd, s32 updateIndex);
Acmd* AudioSynth_LoadWaveSamples(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 nSamplesToLoad);
Acmd* AudioSynth_NoteApplyHeadsetPanEffects(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 bufLen,
                                            s32 flags, s32 side);
Acmd* AudioSynth_ProcessEnvelope(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 aiBufLen,
                                 u16 inBuf, s32 headsetPanSettings, s32 flags);
Acmd* AudioSynth_FinalResample(Acmd* cmd, NoteSynthesisState* synthState, s32 count, u16 pitch, u16 inpDmem,
                               s32 resampleFlags);

extern u32 D_801304A0;
extern u32 D_801304A4;
extern u32 D_801304A8;
extern u32 D_801304AC;

extern u16 D_801304B0[];

extern u8 D_801304C0[];

void AudioSynth_InitNextRingBuf(s32 chunkLen, s32 updateIndex, s32 reverbIndex);

void func_800DB03C(s32 updateIndex);

Acmd* AudioSynth_Update(Acmd* cmdStart, s32* cmdCnt, s16* aiStart, s32 aiBufLen);

void func_800DB2C0(s32 updateIndex, s32 noteIndex);

Acmd* AudioSynth_LoadRingBuffer1AtTemp(Acmd* cmd, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_SaveRingBuffer1AtTemp(Acmd* cmd, SynthesisReverb* reverb, s16 updateIndex);

/**
 * Leak some audio from the left reverb channel into the right reverb channel and vice versa (pan)
 */
Acmd* AudioSynth_LeakReverb(Acmd* cmd, SynthesisReverb* reverb);

Acmd* func_800DB4E4(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* func_800DB680(Acmd* cmd, SynthesisReverb* reverb, s16 updateIndex);

Acmd* func_800DB828(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

/**
 * Apply a filter (convolution) to each reverb channel.
 */
Acmd* AudioSynth_FilterReverb(Acmd* cmd, s32 count, SynthesisReverb* reverb);

Acmd* AudioSynth_MaybeMixRingBuffer1(Acmd* cmd, SynthesisReverb* reverb, s32 updateIndex);

void func_800DBB94(void);

void AudioSynth_ClearBuffer(Acmd* cmd, s32 arg1, s32 arg2);

void func_800DBBBC(void);

void func_800DBBC4(void);

void func_800DBBCC(void);

void AudioSynth_Mix(Acmd* cmd, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_800DBC08(void);

void func_800DBC10(void);

void func_800DBC18(void);

void AudioSynth_SetBuffer(Acmd* cmd, s32 flags, s32 dmemIn, s32 dmemOut, s32 count);

void func_800DBC54(void);

void func_800DBC5C(void);

// possible fake match?
void AudioSynth_DMemMove(Acmd* cmd, s32 dmemIn, s32 dmemOut, s32 count);

void func_800DBC90(void);

void func_800DBC98(void);

void func_800DBCA0(void);

void func_800DBCA8(void);

void AudioSynth_InterL(Acmd* cmd, s32 dmemIn, s32 dmemOut, s32 count);

void AudioSynth_EnvSetup1(Acmd* cmd, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_800DBD08(void);

void AudioSynth_LoadBuffer(Acmd* cmd, s32 arg1, s32 arg2, s32 arg3);

void AudioSynth_SaveBuffer(Acmd* cmd, s32 arg1, s32 arg2, s32 arg3);

void AudioSynth_EnvSetup2(Acmd* cmd, s32 volLeft, s32 volRight);

void func_800DBD7C(void);

void func_800DBD84(void);

void func_800DBD8C(void);

void AudioSynth_S8Dec(Acmd* cmd, s32 flags, s16* state);

void AudioSynth_HiLoGain(Acmd* cmd, s32 gain, s32 dmemIn, s32 dmemOut, s32 count);

void AudioSynth_UnkCmd19(Acmd* cmd, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_800DBE18(void);

void func_800DBE20(void);

void func_800DBE28(void);

void func_800DBE30(void);

void AudioSynth_UnkCmd3(Acmd* cmd, s32 arg1, s32 arg2, s32 arg3);

void func_800DBE5C(void);

void func_800DBE64(void);

void func_800DBE6C(void);

void AudioSynth_LoadFilter(Acmd* cmd, s32 flags, s32 countOrBuf, s32 addr);

void AudioSynth_LoadFilterCount(Acmd* cmd, s32 count, s32 addr);

Acmd* AudioSynth_LoadRingBuffer1(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_LoadRingBuffer2(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_LoadRingBufferPart(Acmd* cmd, u16 dmem, u16 startPos, s32 length, SynthesisReverb* reverb);

Acmd* AudioSynth_SaveRingBufferPart(Acmd* cmd, u16 dmem, u16 startPos, s32 length, SynthesisReverb* reverb);

Acmd* AudioSynth_SaveBufferOffset(Acmd* cmd, u16 dmem, u16 offset, s32 length, s16* buf);

Acmd* AudioSynth_MaybeLoadRingBuffer2(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_LoadReverbSamples(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_SaveReverbSamples(Acmd* cmd, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_SaveRingBuffer2(Acmd* cmd, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_DoOneAudioUpdate(s16* aiBuf, s32 aiBufLen, Acmd* cmd, s32 updateIndex);

Acmd* AudioSynth_ProcessNote(s32 noteIndex, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s16* aiBuf,
                             s32 aiBufLen, Acmd* cmd, s32 updateIndex);

Acmd* AudioSynth_FinalResample(Acmd* cmd, NoteSynthesisState* synthState, s32 count, u16 pitch, u16 inpDmem,
                               s32 resampleFlags);

Acmd* AudioSynth_ProcessEnvelope(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 aiBufLen,
                                 u16 inBuf, s32 headsetPanSettings, s32 flags);

Acmd* AudioSynth_LoadWaveSamples(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 nSamplesToLoad);

Acmd* AudioSynth_NoteApplyHeadsetPanEffects(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 bufLen,
                                            s32 flags, s32 side);

#endif
