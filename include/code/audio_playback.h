#ifndef Z64_AUDIO_PLAYBACK_H
#define Z64_AUDIO_PLAYBACK_H

#include "global.h"

void Audio_InitNoteSub(Note* note, NoteSubEu* sub, NoteSubAttributes* attrs);

void Audio_NoteSetResamplingRate(NoteSubEu* noteSubEu, f32 resamplingRateInput);

void Audio_NoteInit(Note* note);

void Audio_NoteDisable(Note* note);

void Audio_ProcessNotes(void);

TunedSample* Audio_GetInstrumentTunedSample(Instrument* instrument, s32 semitone);

Instrument* Audio_GetInstrumentInner(s32 fontId, s32 instId);

Drum* Audio_GetDrum(s32 fontId, s32 drumId);

SoundEffect* Audio_GetSoundEffect(s32 fontId, s32 sfxId);

s32 Audio_SetFontInstrument(s32 instrumentType, s32 fontId, s32 index, void* value);

void Audio_SeqLayerDecayRelease(SequenceLayer* layer, s32 target);

void Audio_SeqLayerNoteDecay(SequenceLayer* layer);

void Audio_SeqLayerNoteRelease(SequenceLayer* layer);

/**
 * Extract the synthetic wave to use from gWaveSamples and update corresponding frequencies
 *
 * @param note
 * @param layer
 * @param waveId the index of the type of synthetic wave to use, offset by 128
 * @return harmonicIndex, the index of the harmonic for the synthetic wave contained in gWaveSamples
 */
s32 Audio_BuildSyntheticWave(Note* note, SequenceLayer* layer, s32 waveId);

void Audio_InitSyntheticWave(Note* note, SequenceLayer* layer);

void Audio_InitNoteList(AudioListItem* list);

void Audio_InitNoteLists(NotePool* pool);

void Audio_InitNoteFreeList(void);

void Audio_NotePoolClear(NotePool* pool);

void Audio_NotePoolFill(NotePool* pool, s32 count);

void Audio_AudioListPushFront(AudioListItem* list, AudioListItem* item);

void Audio_AudioListRemove(AudioListItem* item);

Note* Audio_FindNodeWithPrioLessThan(AudioListItem* list, s32 limit);

void Audio_NoteInitForLayer(Note* note, SequenceLayer* layer);

void func_800E82C0(Note* note, SequenceLayer* layer);

void Audio_NoteReleaseAndTakeOwnership(Note* note, SequenceLayer* layer);

Note* Audio_AllocNoteFromDisabled(NotePool* pool, SequenceLayer* layer);

Note* Audio_AllocNoteFromDecaying(NotePool* pool, SequenceLayer* layer);

Note* Audio_AllocNoteFromActive(NotePool* pool, SequenceLayer* layer);

Note* Audio_AllocNote(SequenceLayer* layer);

void Audio_NoteInitAll(void);

#endif
