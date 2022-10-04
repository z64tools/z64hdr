#ifndef Z64_AUDIO_LOAD_H
#define Z64_AUDIO_LOAD_H

#include "ultra64.h"
#include "global.h"

#define MK_ASYNC_MSG(retData, tableType, id, loadStatus) \
    (((retData) << 24) | ((tableType) << 16) | ((id) << 8) | (loadStatus))
#define ASYNC_TBLTYPE(v) ((u8)(v >> 16))
#define ASYNC_ID(v) ((u8)(v >> 8))
#define ASYNC_LOAD_STATUS(v) ((u8)(v >> 0))

typedef enum {
    /* 0 */ SLOW_LOAD_STATE_WAITING,
    /* 1 */ SLOW_LOAD_STATE_START,
    /* 2 */ SLOW_LOAD_STATE_LOADING,
    /* 3 */ SLOW_LOAD_STATE_DONE
} SlowLoadState;

typedef struct {
    /* 0x00 */ s32 sampleBankId1;
    /* 0x04 */ s32 sampleBankId2;
    /* 0x08 */ s32 baseAddr1;
    /* 0x0C */ s32 baseAddr2;
    /* 0x10 */ u32 medium1;
    /* 0x14 */ u32 medium2;
} RelocInfo; // size = 0x18

// opaque type for unpatched sound font data (should maybe get rid of this?)
typedef void SoundFontData;

/* forward declarations */
s32 AudioLoad_SyncInitSeqPlayerInternal(s32 playerIdx, s32 seqId, s32 skipTicks);
SoundFontData* AudioLoad_SyncLoadFont(u32 fontId);
SoundFontSample* AudioLoad_GetFontSample(s32 fontId, s32 instId);
void AudioLoad_ProcessAsyncLoads(s32 resetStatus);
void AudioLoad_ProcessAsyncLoadUnkMedium(AudioAsyncLoad* asyncLoad, s32 resetStatus);
void AudioLoad_ProcessAsyncLoad(AudioAsyncLoad* asyncLoad, s32 resetStatus);
void AudioLoad_RelocateFontAndPreloadSamples(s32 fontId, SoundFontData* mem, RelocInfo* relocInfo, s32 async);
void AudioLoad_RelocateSample(SoundFontSound* sound, SoundFontData* mem, RelocInfo* relocInfo);
void AudioLoad_DiscardFont(s32 fontId);
u32 AudioLoad_TrySyncLoadSampleBank(u32 sampleBankId, u32* outMedium, s32 noLoad);
void* AudioLoad_SyncLoad(u32 tableType, u32 tableId, s32* didAllocate);
u32 AudioLoad_GetRealTableIndex(s32 tableType, u32 tableId);
void* AudioLoad_SearchCaches(s32 tableType, s32 id);
AudioTable* AudioLoad_GetLoadTable(s32 tableType);
void AudioLoad_SyncDma(u32 devAddr, u8* addr, u32 size, s32 medium);
void AudioLoad_SyncDmaUnkMedium(u32 devAddr, u8* addr, u32 size, s32 unkMediumParam);
s32 AudioLoad_Dma(OSIoMesg* mesg, u32 priority, s32 direction, u32 devAddr, void* ramAddr, u32 size,
                  OSMesgQueue* reqQueue, s32 medium, const char* dmaFuncType);
void* AudioLoad_AsyncLoadInner(s32 tableType, s32 id, s32 nChunks, s32 retData, OSMesgQueue* retQueue);
AudioAsyncLoad* AudioLoad_StartAsyncLoadUnkMedium(s32 unkMediumParam, u32 devAddr, void* ramAddr, s32 size, s32 medium,
                                                  s32 nChunks, OSMesgQueue* retQueue, s32 retMsg);
AudioAsyncLoad* AudioLoad_StartAsyncLoad(u32 devAddr, void* ramAddr, u32 size, s32 medium, s32 nChunks,
                                         OSMesgQueue* retQueue, s32 retMsg);
void AudioLoad_AsyncDma(AudioAsyncLoad* asyncLoad, u32 size);
void AudioLoad_AsyncDmaUnkMedium(u32 devAddr, void* ramAddr, u32 size, s16 arg3);
u8* AudioLoad_SyncLoadSeq(s32 seqId);
s32 AudioLoad_ProcessSamplePreloads(s32 resetStatus);
void AudioLoad_DmaSlowCopy(AudioSlowLoad* slowLoad, s32 size);
void AudioLoad_ProcessSlowLoads(s32 resetStatus);
void AudioLoad_DmaSlowCopyUnkMedium(s32 devAddr, u8* ramAddr, s32 size, s32 arg3);

extern OSMesgQueue sScriptLoadQueue;
extern OSMesg sScriptLoadMsgBuf[16];
extern s8* sScriptLoadDonePointers[0x10];
extern s32 sAudioLoadPad1[2]; // file padding

extern s32 D_8016B780;
extern s32 sAudioLoadPad2[4]; // double file padding?

extern DmaHandler sDmaHandler;
extern void* sUnusedHandler;

extern s32 gAudioContextInitalized;

void AudioLoad_DecreaseSampleDmaTtls(void);

void* AudioLoad_DmaSampleData(u32 devAddr, u32 size, s32 arg2, u8* dmaIndexRef, s32 medium);

void AudioLoad_InitSampleDmaBuffers(s32 numNotes);

s32 AudioLoad_IsFontLoadComplete(s32 fontId);

s32 AudioLoad_IsSeqLoadComplete(s32 seqId);

s32 AudioLoad_IsSampleLoadComplete(s32 sampleBankId);

void AudioLoad_SetFontLoadStatus(s32 fontId, s32 loadStatus);

void AudioLoad_SetSeqLoadStatus(s32 seqId, s32 loadStatus);

void AudioLoad_SetSampleFontLoadStatusAndApplyCaches(s32 sampleBankId, s32 loadStatus);

void AudioLoad_SetSampleFontLoadStatus(s32 sampleBankId, s32 loadStatus);

void AudioLoad_InitTable(AudioTable* table, u32 romAddr, u16 unkMediumParam);

SoundFontData* AudioLoad_SyncLoadSeqFonts(s32 seqId, u32* outDefaultFontId);

void AudioLoad_SyncLoadSeqParts(s32 seqId, s32 arg1);

s32 AudioLoad_SyncLoadSample(SoundFontSample* sample, s32 fontId);

s32 AudioLoad_SyncLoadInstrument(s32 fontId, s32 instId, s32 drumId);

void AudioLoad_AsyncLoad(s32 tableType, s32 id, s32 nChunks, s32 retData, OSMesgQueue* retQueue);

void AudioLoad_AsyncLoadSeq(s32 seqId, s32 arg1, s32 retData, OSMesgQueue* retQueue);

void AudioLoad_AsyncLoadSampleBank(s32 sampleBankId, s32 arg1, s32 retData, OSMesgQueue* retQueue);

void AudioLoad_AsyncLoadFont(s32 fontId, s32 arg1, s32 retData, OSMesgQueue* retQueue);

u8* AudioLoad_GetFontsForSequence(s32 seqId, u32* outNumFonts);

void AudioLoad_DiscardSeqFonts(s32 seqId);

void AudioLoad_DiscardFont(s32 fontId);

s32 AudioLoad_SyncInitSeqPlayer(s32 playerIdx, s32 seqId, s32 arg2);

s32 AudioLoad_SyncInitSeqPlayerSkipTicks(s32 playerIdx, s32 seqId, s32 skipTicks);

s32 AudioLoad_SyncInitSeqPlayerInternal(s32 playerIdx, s32 seqId, s32 arg2);

u8* AudioLoad_SyncLoadSeq(s32 seqId);

u32 AudioLoad_GetSampleBank(u32 sampleBankId, u32* outMedium);

u32 AudioLoad_TrySyncLoadSampleBank(u32 sampleBankId, u32* outMedium, s32 noLoad);

SoundFontData* AudioLoad_SyncLoadFont(u32 fontId);

void* AudioLoad_SyncLoad(u32 tableType, u32 id, s32* didAllocate);

u32 AudioLoad_GetRealTableIndex(s32 tableType, u32 id);

void* AudioLoad_SearchCaches(s32 tableType, s32 id);

AudioTable* AudioLoad_GetLoadTable(s32 tableType);

void AudioLoad_RelocateFont(s32 fontId, SoundFontData* mem, RelocInfo* relocInfo);

void AudioLoad_SyncDma(u32 devAddr, u8* ramAddr, u32 size, s32 medium);

void AudioLoad_SyncDmaUnkMedium(u32 devAddr, u8* addr, u32 size, s32 unkMediumParam);

s32 AudioLoad_Dma(OSIoMesg* mesg, u32 priority, s32 direction, u32 devAddr, void* ramAddr, u32 size,
                  OSMesgQueue* reqQueue, s32 medium, const char* dmaFuncType);

void AudioLoad_Unused1(void);

void AudioLoad_SyncLoadSimple(u32 tableType, u32 fontId);

void* AudioLoad_AsyncLoadInner(s32 tableType, s32 id, s32 nChunks, s32 retData, OSMesgQueue* retQueue);

void AudioLoad_ProcessLoads(s32 resetStatus);

void AudioLoad_SetDmaHandler(DmaHandler callback);

void AudioLoad_SetUnusedHandler(void* callback);

void AudioLoad_InitSoundFontMeta(s32 fontId);

void AudioLoad_Init(void* heap, u32 heapSize);

void AudioLoad_InitSlowLoads(void);

s32 AudioLoad_SlowLoadSample(s32 fontId, s32 instId, s8* status);

SoundFontSample* AudioLoad_GetFontSample(s32 fontId, s32 instId);

void AudioLoad_Unused2(void);

void AudioLoad_FinishSlowLoad(AudioSlowLoad* slowLoad);

void AudioLoad_ProcessSlowLoads(s32 resetStatus);

void AudioLoad_DmaSlowCopy(AudioSlowLoad* slowLoad, s32 size);

void AudioLoad_DmaSlowCopyUnkMedium(s32 devAddr, u8* ramAddr, s32 size, s32 arg3);

s32 AudioLoad_SlowLoadSeq(s32 seqId, u8* ramAddr, s8* status);

void AudioLoad_InitAsyncLoads(void);

AudioAsyncLoad* AudioLoad_StartAsyncLoadUnkMedium(s32 unkMediumParam, u32 devAddr, void* ramAddr, s32 size, s32 medium,
                                                  s32 nChunks, OSMesgQueue* retQueue, s32 retMsg);

AudioAsyncLoad* AudioLoad_StartAsyncLoad(u32 devAddr, void* ramAddr, u32 size, s32 medium, s32 nChunks,
                                         OSMesgQueue* retQueue, s32 retMsg);

void AudioLoad_ProcessAsyncLoads(s32 resetStatus);

void AudioLoad_ProcessAsyncLoadUnkMedium(AudioAsyncLoad* asyncLoad, s32 resetStatus);

void AudioLoad_FinishAsyncLoad(AudioAsyncLoad* asyncLoad);

void AudioLoad_ProcessAsyncLoad(AudioAsyncLoad* asyncLoad, s32 resetStatus);

void AudioLoad_AsyncDma(AudioAsyncLoad* asyncLoad, u32 size);

void AudioLoad_AsyncDmaUnkMedium(u32 devAddr, void* ramAddr, u32 size, s16 arg3);

#define RELOC(v, base) (reloc = (void*)((u32)(v) + (u32)(base)))

void AudioLoad_RelocateSample(SoundFontSound* sound, SoundFontData* mem, RelocInfo* relocInfo);

#undef RELOC

void AudioLoad_RelocateFontAndPreloadSamples(s32 fontId, SoundFontData* mem, RelocInfo* relocInfo, s32 async);

s32 AudioLoad_ProcessSamplePreloads(s32 resetStatus);

s32 AudioLoad_AddToSampleSet(SoundFontSample* sample, s32 numSamples, SoundFontSample** sampleSet);

s32 AudioLoad_GetSamplesForFont(s32 fontId, SoundFontSample** sampleSet);

void AudioLoad_AddUsedSample(SoundFontSound* sound);

void AudioLoad_PreloadSamplesForFont(s32 fontId, s32 async, RelocInfo* relocInfo);

void AudioLoad_LoadPermanentSamples(void);

void AudioLoad_Unused3(void);

void AudioLoad_Unused4(void);

void AudioLoad_Unused5(void);

void AudioLoad_ScriptLoad(s32 tableType, s32 id, s8* status);

void AudioLoad_ProcessScriptLoads(void);

void AudioLoad_InitScriptLoads(void);

#endif
