#ifndef AUDIO_EFFECTS_H
#define AUDIO_EFFECTS_H

#include "ultra64.h"
#include "global.h"

void Audio_SequenceChannelProcessSound(SequenceChannel* channel, s32 recalculateVolume, s32 applyBend);

void Audio_SequencePlayerProcessSound(SequencePlayer* seqPlayer);

f32 Audio_GetPortamentoFreqScale(Portamento* portamento);

s16 Audio_GetVibratoPitchChange(VibratoState* vib);

f32 Audio_GetVibratoFreqScale(VibratoState* vib);

void Audio_NoteVibratoUpdate(Note* note);

void Audio_NoteVibratoInit(Note* note);

void Audio_NotePortamentoInit(Note* note);

void Audio_AdsrInit(AdsrState* adsr, AdsrEnvelope* envelope, s16* volOut);

f32 Audio_AdsrUpdate(AdsrState* adsr);

#endif
