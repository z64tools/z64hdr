#ifndef Z64_AUDIO_SYNTHESIS_H
#define Z64_AUDIO_SYNTHESIS_H

#include "ultra64.h"
#include "global.h"

// DMEM Addresses for the RSP
#define DMEM_TEMP 0x3C0
#define DMEM_UNCOMPRESSED_NOTE 0x580
#define DMEM_HAAS_TEMP 0x5C0
#define DMEM_SCRATCH2 0x760              // = DMEM_TEMP + DMEM_2CH_SIZE + a bit more
#define DMEM_COMPRESSED_ADPCM_DATA 0x940 // = DMEM_LEFT_CH
#define DMEM_LEFT_CH 0x940
#define DMEM_RIGHT_CH 0xAE0
#define DMEM_WET_TEMP 0x3E0
#define DMEM_WET_SCRATCH 0x720 // = DMEM_WET_TEMP + DMEM_2CH_SIZE
#define DMEM_WET_LEFT_CH 0xC80
#define DMEM_WET_RIGHT_CH 0xE20 // = DMEM_WET_LEFT_CH + DMEM_1CH_SIZE

typedef enum {
    /* 0 */ HAAS_EFFECT_DELAY_NONE,
    /* 1 */ HAAS_EFFECT_DELAY_LEFT, // Delay left channel so that right channel is heard first
    /* 2 */ HAAS_EFFECT_DELAY_RIGHT // Delay right channel so that left channel is heard first
} HaasEffectDelaySide;

Acmd* AudioSynth_LoadRingBufferPart(Acmd* cmd, u16 dmem, u16 startPos, s32 size, SynthesisReverb* reverb);
Acmd* AudioSynth_SaveBufferOffset(Acmd* cmd, u16 dmem, u16 offset, s32 size, s16* buf);
Acmd* AudioSynth_SaveRingBufferPart(Acmd* cmd, u16 dmem, u16 startPos, s32 size, SynthesisReverb* reverb);
Acmd* AudioSynth_DoOneAudioUpdate(s16* aiBuf, s32 aiBufLen, Acmd* cmd, s32 updateIndex);
Acmd* AudioSynth_ProcessNote(s32 noteIndex, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s16* aiBuf,
                             s32 aiBufLen, Acmd* cmd, s32 updateIndex);
Acmd* AudioSynth_LoadWaveSamples(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 numSamplesToLoad);
Acmd* AudioSynth_ApplyHaasEffect(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 size, s32 flags,
                                 s32 haasEffectDelaySide);
Acmd* AudioSynth_ProcessEnvelope(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 aiBufLen,
                                 u16 dmemSrc, s32 haasEffectDelaySide, s32 flags);
Acmd* AudioSynth_FinalResample(Acmd* cmd, NoteSynthesisState* synthState, s32 size, u16 pitch, u16 inpDmem,
                               s32 resampleFlags);

extern u32 sEnvMixerOp;

// Store the left dry channel in a temp space to be delayed to produce the haas effect
extern u32 sEnvMixerLeftHaasDmemDests;

// Store the right dry channel in a temp space to be delayed to produce the haas effect
extern u32 sEnvMixerRightHaasDmemDests;

extern u32 sEnvMixerDefaultDmemDests;

extern u16 D_801304B0[];

extern u8 sNumSamplesPerWavePeriod[];

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
Acmd* AudioSynth_FilterReverb(Acmd* cmd, s32 size, SynthesisReverb* reverb);

Acmd* AudioSynth_MaybeMixRingBuffer1(Acmd* cmd, SynthesisReverb* reverb, s32 updateIndex);

void func_800DBB94(void);

void AudioSynth_ClearBuffer(Acmd* cmd, s32 dmem, s32 size);

void func_800DBBBC(void);

void func_800DBBC4(void);

void func_800DBBCC(void);

void AudioSynth_Mix(Acmd* cmd, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_800DBC08(void);

void func_800DBC10(void);

void func_800DBC18(void);

void AudioSynth_SetBuffer(Acmd* cmd, s32 flags, s32 dmemIn, s32 dmemOut, u32 size);

void func_800DBC54(void);

void func_800DBC5C(void);

// possible fake match?
void AudioSynth_DMemMove(Acmd* cmd, s32 dmemIn, s32 dmemOut, u32 size);

void func_800DBC90(void);

void func_800DBC98(void);

void func_800DBCA0(void);

void func_800DBCA8(void);

void AudioSynth_InterL(Acmd* cmd, s32 dmemIn, s32 dmemOut, s32 numSamples);

void AudioSynth_EnvSetup1(Acmd* cmd, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_800DBD08(void);

void AudioSynth_LoadBuffer(Acmd* cmd, s32 dmemDest, s32 size, void* addrSrc);

void AudioSynth_SaveBuffer(Acmd* cmd, s32 dmemSrc, s32 size, void* addrDest);

void AudioSynth_EnvSetup2(Acmd* cmd, s32 volLeft, s32 volRight);

void func_800DBD7C(void);

void func_800DBD84(void);

void func_800DBD8C(void);

void AudioSynth_S8Dec(Acmd* cmd, s32 flags, s16* state);

void AudioSynth_HiLoGain(Acmd* cmd, s32 gain, s32 dmemIn, s32 dmemOut, s32 size);

void AudioSynth_UnkCmd19(Acmd* cmd, s32 arg1, s32 arg2, s32 size, s32 arg4);

void func_800DBE18(void);

void func_800DBE20(void);

void func_800DBE28(void);

void func_800DBE30(void);

void AudioSynth_UnkCmd3(Acmd* cmd, s32 arg1, s32 arg2, s32 size);

void func_800DBE5C(void);

void func_800DBE64(void);

void func_800DBE6C(void);

void AudioSynth_LoadFilterBuffer(Acmd* cmd, s32 flags, s32 buf, void* addr);

void AudioSynth_LoadFilterSize(Acmd* cmd, s32 size, void* addr);

Acmd* AudioSynth_LoadRingBuffer1(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_LoadRingBuffer2(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_LoadRingBufferPart(Acmd* cmd, u16 dmem, u16 startPos, s32 size, SynthesisReverb* reverb);

Acmd* AudioSynth_SaveRingBufferPart(Acmd* cmd, u16 dmem, u16 startPos, s32 size, SynthesisReverb* reverb);

Acmd* AudioSynth_SaveBufferOffset(Acmd* cmd, u16 dmem, u16 offset, s32 size, s16* buf);

Acmd* AudioSynth_MaybeLoadRingBuffer2(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_LoadReverbSamples(Acmd* cmd, s32 aiBufLen, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_SaveReverbSamples(Acmd* cmd, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_SaveRingBuffer2(Acmd* cmd, SynthesisReverb* reverb, s16 updateIndex);

Acmd* AudioSynth_DoOneAudioUpdate(s16* aiBuf, s32 aiBufLen, Acmd* cmd, s32 updateIndex);

Acmd* AudioSynth_ProcessNote(s32 noteIndex, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s16* aiBuf,
                             s32 aiBufLen, Acmd* cmd, s32 updateIndex);

Acmd* AudioSynth_FinalResample(Acmd* cmd, NoteSynthesisState* synthState, s32 size, u16 pitch, u16 inpDmem,
                               s32 resampleFlags);

Acmd* AudioSynth_ProcessEnvelope(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 aiBufLen,
                                 u16 dmemSrc, s32 haasEffectDelaySide, s32 flags);

Acmd* AudioSynth_LoadWaveSamples(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState,
                                 s32 numSamplesToLoad);

/**
 * The Haas Effect gives directionality to sound by applying a small (< 35ms) delay to either the left or right channel.
 * The delay is small enough that the sound is still perceived as one sound, but the channel that is not delayed will
 * reach our ear first and give a sense of directionality. The sound is directed towards the opposite side of the delay.
 */
Acmd* AudioSynth_ApplyHaasEffect(Acmd* cmd, NoteSubEu* noteSubEu, NoteSynthesisState* synthState, s32 size, s32 flags,
                                 s32 haasEffectDelaySide);

#endif
