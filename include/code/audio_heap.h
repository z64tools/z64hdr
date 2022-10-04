#ifndef Z64_AUDIO_HEAP_H
#define Z64_AUDIO_HEAP_H

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

/**
 * Effectively scales `updatesPerFrameInv` by the reciprocal of `scaleInv`
 * `updatesPerFrameInvScaled` is just `updatesPerFrameInv` scaled down by a factor of 256.0f
 * i.e. (256.0f * `updatesPerFrameInvScaled`) is just `updatesPerFrameInv`
 */
f32 AudioHeap_CalculateAdsrDecay(f32 scaleInv);

/**
 * Initialize the decay rate table used for decaying notes as part of adsr
 */
void AudioHeap_InitAdsrDecayTable(void);

void AudioHeap_ResetLoadStatus(void);

void AudioHeap_DiscardFont(s32 fontId);

void AudioHeap_ReleaseNotesForFont(s32 fontId);

void AudioHeap_DiscardSequence(s32 seqId);

/**
 * Perform a writeback from the data cache to the ram.
 */
void AudioHeap_WritebackDCache(void* ramAddr, u32 size);

/**
 * Attempt to allocate space externally to the audio heap. If no external pool is available,
 * then allocate space on the pool provided in the argument.
 * The newly allocated space is zero'ed
 */
void* AudioHeap_AllocZeroedAttemptExternal(AudioAllocPool* pool, u32 size);

void* AudioHeap_AllocAttemptExternal(AudioAllocPool* pool, u32 size);

void* AudioHeap_AllocDmaMemory(AudioAllocPool* pool, u32 size);

void* AudioHeap_AllocDmaMemoryZeroed(AudioAllocPool* pool, u32 size);

/**
 * Allocates space on a pool contained within the heap and sets all the allocated space to 0
 */
void* AudioHeap_AllocZeroed(AudioAllocPool* pool, u32 size);

void* AudioHeap_Alloc(AudioAllocPool* pool, u32 size);

/**
 * Initialize a pool to allocate memory from the specified address, up to the specified size.
 * Store the metadata of this pool in AudioAllocPool* pool
 */
void AudioHeap_AllocPoolInit(AudioAllocPool* pool, void* ramAddr, u32 size);

void AudioHeap_PersistentCacheClear(AudioPersistentCache* persistent);

void AudioHeap_TemporaryCacheClear(AudioTemporaryCache* temporary);

void AudioHeap_ResetPool(AudioAllocPool* pool);

void AudioHeap_PopCache(s32 tableType);

void AudioHeap_InitMainPools(s32 initPoolSize);

void AudioHeap_SessionPoolsInit(AudioSessionPoolSplit* split);

void AudioHeap_CachePoolInit(AudioCachePoolSplit* split);

void AudioHeap_PersistentCachesInit(AudioCommonPoolSplit* split);

void AudioHeap_TemporaryCachesInit(AudioCommonPoolSplit* split);

void* AudioHeap_AllocCached(s32 tableType, s32 size, s32 cache, s32 id);

void* AudioHeap_SearchCaches(s32 tableType, s32 cache, s32 id);

void* AudioHeap_SearchRegularCaches(s32 tableType, s32 cache, s32 id);

void func_800DF1D8(f32 p, f32 q, u16* out);

void AudioHeap_ClearFilter(s16* filter);

void AudioHeap_LoadLowPassFilter(s16* filter, s32 cutoff);

void AudioHeap_LoadHighPassFilter(s16* filter, s32 cutoff);

void AudioHeap_LoadFilter(s16* filter, s32 lowPassCutoff, s32 highPassCutoff);

void AudioHeap_UpdateReverb(SynthesisReverb* reverb);

void AudioHeap_UpdateReverbs(void);

/**
 * Clear the current Audio Interface Buffer
 */
void AudioHeap_ClearCurrentAiBuffer(void);

s32 AudioHeap_ResetStep(void);

void AudioHeap_Init(void);

void* AudioHeap_SearchPermanentCache(s32 tableType, s32 id);

void* AudioHeap_AllocPermanent(s32 tableType, s32 id, u32 size);

void* AudioHeap_AllocSampleCache(u32 size, s32 fontId, void* sampleAddr, s8 medium, s32 cache);

/**
 * Initializes the persistent and temporary caches used for individual samples. Will attempt to use heap space available
 * on the external pool. If no external pool is provided, then default to using space on the misc pool.
 */
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

void AudioHeap_ApplySampleBankCache(s32 sampleBankId);

void AudioHeap_ApplySampleBankCacheInternal(s32 apply, s32 sampleBankId);

void AudioHeap_DiscardSampleBanks(void);

#endif
