#ifndef __AUDIO_HEAP__
#define __AUDIO_HEAP__

#include "ultra64.h"
#include "global.h"

void AudioHeap_InitSampleCaches(u32 persistentSampleCacheSize, u32 temporarySampleCacheSize);
SampleCacheEntry* AudioHeap_AllocTemporarySampleCacheEntry(u32 size);
SampleCacheEntry* AudioHeap_AllocPersistentSampleCacheEntry(u32 size);
void AudioHeap_DiscardSampleCacheEntry(SampleCacheEntry* entry);
void AudioHeap_UnapplySampleCache(SampleCacheEntry* entry, SoundFontSample* sample);
void AudioHeap_DiscardSampleCaches(void);
void AudioHeap_DiscardSampleBank(s32 sampleBankId);
void AudioHeap_DiscardSampleBanks(void);
f32 AudioHeap_CalculateAdsrDecay(f32 scaleInv);
void AudioHeap_InitAdsrDecayTable(void);
void AudioHeap_ResetLoadStatus(void);
void AudioHeap_ReleaseNotesForFont(s32 fontId);
void AudioHeap_ResetPool(AudioAllocPool* pool);
void AudioHeap_SessionPoolsInit(AudioSessionPoolSplit* split);
void AudioHeap_CachePoolInit(AudioCachePoolSplit* split);
void AudioHeap_PersistentCachesInit(AudioCommonPoolSplit* split);
void AudioHeap_TemporaryCachesInit(AudioCommonPoolSplit* split);
void func_800DF1D8(f32 p, f32 q, u16* out);
void AudioHeap_ClearFilter(s16* filter);
void AudioHeap_LoadLowPassFilter(s16* filter, s32 cutoff);
void AudioHeap_LoadHighPassFilter(s16* filter, s32 cutoff);
void AudioHeap_UpdateReverb(SynthesisReverb* reverb);
void AudioHeap_UpdateReverbs(void);
void AudioHeap_ClearCurrentAiBuffer(void);

#ifdef AVOID_UB
#endif

void AudioHeap_InitSampleCaches(u32 persistentSampleCacheSize, u32 temporarySampleCacheSize);
SampleCacheEntry* AudioHeap_AllocTemporarySampleCacheEntry(u32 size);
void AudioHeap_UnapplySampleCacheForFont(SampleCacheEntry* entry, s32 fontId);
void AudioHeap_DiscardSampleCacheEntry(SampleCacheEntry* entry);
void AudioHeap_UnapplySampleCache(SampleCacheEntry* entry, SoundFontSample* sample);
SampleCacheEntry* AudioHeap_AllocPersistentSampleCacheEntry(u32 size);
void AudioHeap_DiscardSampleCacheForFont(SampleCacheEntry* entry, s32 sampleBankId1, s32 sampleBankId2, s32 fontId);
void AudioHeap_DiscardSampleCaches(void);

typedef struct {
    u32 oldAddr;
    u32 newAddr;
    u32 size;
    u8 newMedium;
} StorageChange;

void AudioHeap_ChangeStorage(StorageChange* change, SoundFontSample* sample);
void AudioHeap_ApplySampleBankCacheInternal(s32 apply, s32 id);
void AudioHeap_DiscardSampleBank(s32 sampleBankId);
void AudioHeap_ApplySampleBankCacheInternal(s32 apply, s32 sampleBankId);
void AudioHeap_DiscardSampleBanks(void);

#endif // __AUDIO_HEAP__
