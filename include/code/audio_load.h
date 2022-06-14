#ifndef __AUDIO_LOAD__
#define __AUDIO_LOAD__

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
} RelocInfo;

typedef void SoundFontData;

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
u32 AudioLoad_GetRealTableIndex(s32 tableType, u32 tableId);
void* AudioLoad_SearchCaches(s32 tableType, s32 id);
AudioTable* AudioLoad_GetLoadTable(s32 tableType);
void AudioLoad_SyncDma(u32 devAddr, u8* addr, u32 size, s32 medium);
void AudioLoad_SyncDmaUnkMedium(u32 devAddr, u8* addr, u32 size, s32 unkMediumParam);
void* AudioLoad_AsyncLoadInner(s32 tableType, s32 id, s32 nChunks, s32 retData, OSMesgQueue* retQueue);
AudioAsyncLoad* AudioLoad_StartAsyncLoadUnkMedium(s32 unkMediumParam, u32 devAddr, void* ramAddr, s32 size, s32 medium, s32 nChunks, OSMesgQueue* retQueue, s32 retMsg);
AudioAsyncLoad* AudioLoad_StartAsyncLoad(u32 devAddr, void* ramAddr, u32 size, s32 medium, s32 nChunks, OSMesgQueue* retQueue, s32 retMsg);
void AudioLoad_AsyncDma(AudioAsyncLoad* asyncLoad, u32 size);
void AudioLoad_AsyncDmaUnkMedium(u32 devAddr, void* ramAddr, u32 size, s16 arg3);
s32 AudioLoad_ProcessSamplePreloads(s32 resetStatus);
void AudioLoad_DmaSlowCopy(AudioSlowLoad* slowLoad, s32 size);
void AudioLoad_ProcessSlowLoads(s32 resetStatus);
void AudioLoad_DmaSlowCopyUnkMedium(s32 devAddr, u8* ramAddr, s32 size, s32 arg3);

extern OSMesgQueue sScriptLoadQueue;
extern OSMesg sScriptLoadMsgBuf[16];
extern s8* sScriptLoadDonePointers[0x10];
extern s32 sAudioLoadPad1[2];
extern s32 D_8016B780;
extern s32 sAudioLoadPad2[4];
extern DmaHandler sDmaHandler;
extern void* sUnusedHandler;

s32 AudioLoad_IsSampleLoadComplete(s32 sampleBankId);
void AudioLoad_SetSampleFontLoadStatusAndApplyCaches(s32 sampleBankId, s32 loadStatus);
void AudioLoad_SetSampleFontLoadStatus(s32 sampleBankId, s32 loadStatus);
void AudioLoad_InitTable(AudioTable* table, u32 romAddr, u16 unkMediumParam);
SoundFontData* AudioLoad_SyncLoadSeqFonts(s32 seqId, u32* outDefaultFontId);
s32 AudioLoad_SyncLoadSample(SoundFontSample* sample, s32 fontId);
void AudioLoad_DiscardFont(s32 fontId);
s32 AudioLoad_SyncInitSeqPlayerInternal(s32 playerIdx, s32 seqId, s32 arg2);
u32 AudioLoad_GetSampleBank(u32 sampleBankId, u32* outMedium);
u32 AudioLoad_TrySyncLoadSampleBank(u32 sampleBankId, u32* outMedium, s32 noLoad);
SoundFontData* AudioLoad_SyncLoadFont(u32 fontId);
u32 AudioLoad_GetRealTableIndex(s32 tableType, u32 id);
void* AudioLoad_SearchCaches(s32 tableType, s32 id);
AudioTable* AudioLoad_GetLoadTable(s32 tableType);
void AudioLoad_RelocateFont(s32 fontId, SoundFontData* mem, RelocInfo* relocInfo);

#define BASE_OFFSET(x) (void*)((u32)(x) + (u32)(mem))

void AudioLoad_SyncDma(u32 devAddr, u8* ramAddr, u32 size, s32 medium);
void AudioLoad_SyncDmaUnkMedium(u32 devAddr, u8* addr, u32 size, s32 unkMediumParam);
void AudioLoad_Unused1(void);
void AudioLoad_SyncLoadSimple(u32 tableType, u32 fontId);
void* AudioLoad_AsyncLoadInner(s32 tableType, s32 id, s32 nChunks, s32 retData, OSMesgQueue* retQueue);
void AudioLoad_SetUnusedHandler(void* callback);
void AudioLoad_InitSoundFontMeta(s32 fontId);
SoundFontSample* AudioLoad_GetFontSample(s32 fontId, s32 instId);
void AudioLoad_Unused2(void);
void AudioLoad_FinishSlowLoad(AudioSlowLoad* slowLoad);
void AudioLoad_ProcessSlowLoads(s32 resetStatus);
void AudioLoad_DmaSlowCopy(AudioSlowLoad* slowLoad, s32 size);
void AudioLoad_DmaSlowCopyUnkMedium(s32 devAddr, u8* ramAddr, s32 size, s32 arg3);
AudioAsyncLoad* AudioLoad_StartAsyncLoadUnkMedium(s32 unkMediumParam, u32 devAddr, void* ramAddr, s32 size, s32 medium, s32 nChunks, OSMesgQueue* retQueue, s32 retMsg);
AudioAsyncLoad* AudioLoad_StartAsyncLoad(u32 devAddr, void* ramAddr, u32 size, s32 medium, s32 nChunks, OSMesgQueue* retQueue, s32 retMsg);
void AudioLoad_ProcessAsyncLoads(s32 resetStatus);
void AudioLoad_ProcessAsyncLoadUnkMedium(AudioAsyncLoad* asyncLoad, s32 resetStatus);
void AudioLoad_FinishAsyncLoad(AudioAsyncLoad* asyncLoad);
void AudioLoad_ProcessAsyncLoad(AudioAsyncLoad* asyncLoad, s32 resetStatus);
void AudioLoad_AsyncDma(AudioAsyncLoad* asyncLoad, u32 size);
void AudioLoad_AsyncDmaUnkMedium(u32 devAddr, void* ramAddr, u32 size, s16 arg3);

#define RELOC(v, base) (reloc = (void*)((u32)(v) + (u32)(base)))

void AudioLoad_RelocateSample(SoundFontSound* sound, SoundFontData* mem, RelocInfo* relocInfo);
void AudioLoad_RelocateFontAndPreloadSamples(s32 fontId, SoundFontData* mem, RelocInfo* relocInfo, s32 async);
s32 AudioLoad_ProcessSamplePreloads(s32 resetStatus);
s32 AudioLoad_AddToSampleSet(SoundFontSample* sample, s32 numSamples, SoundFontSample** sampleSet);
s32 AudioLoad_GetSamplesForFont(s32 fontId, SoundFontSample** sampleSet);
void AudioLoad_AddUsedSample(SoundFontSound* sound);
void AudioLoad_PreloadSamplesForFont(s32 fontId, s32 async, RelocInfo* relocInfo);
void AudioLoad_Unused3(void);
void AudioLoad_Unused4(void);
void AudioLoad_Unused5(void);

#endif // __AUDIO_LOAD__
