#ifndef Z64_STD_DMA_H
#define Z64_STD_DMA_H

#include "global.h"
#include "vt.h"

extern StackEntry sDmaMgrStackInfo;
extern OSMesgQueue sDmaMgrMsgQueue;
extern OSMesg sDmaMgrMsgBuf[32];
extern OSThread sDmaMgrThread;
STACK(sDmaMgrStack, 0x500);
extern const char* sDmaMgrCurFileName;
extern s32 sDmaMgrCurFileLine;

extern u32 gDmaMgrVerbose;
extern u32 gDmaMgrDmaBuffSize;
extern u32 sDmaMgrIsRomCompressed;

// dmadata filenames
#define DEFINE_DMA_ENTRY(_0, nameString) nameString,

extern const char* sDmaMgrFileNames[];

#undef DEFINE_DMA_ENTRY

s32 DmaMgr_CompareName(const char* name1, const char* name2);

s32 DmaMgr_DmaRomToRam(u32 rom, u32 ram, u32 size);

s32 DmaMgr_DmaHandler(OSPiHandle* pihandle, OSIoMesg* mb, s32 direction);

void DmaMgr_DmaFromDriveRom(u32 ram, u32 rom, u32 size);

void DmaMgr_Error(DmaRequest* req, const char* file, const char* errorName, const char* errorDesc);

extern const char* DmaMgr_GetFileNameImpl(u32 vrom);

extern const char* DmaMgr_GetFileName(u32 vrom);

void DmaMgr_ProcessMsg(DmaRequest* req);

void DmaMgr_ThreadEntry(void* arg);

s32 DmaMgr_SendRequestImpl(DmaRequest* req, u32 ram, u32 vrom, u32 size, u32 unk, OSMesgQueue* queue, OSMesg msg);

s32 DmaMgr_SendRequest0(u32 ram, u32 vrom, u32 size);

void DmaMgr_Init(void);

s32 DmaMgr_SendRequest2(DmaRequest* req, u32 ram, u32 vrom, u32 size, u32 unk5, OSMesgQueue* queue, OSMesg msg
#ifdef OOT_MQ_DEBUG_PAL
  , const char* file, s32 line
#endif
);

s32 DmaMgr_SendRequest1(void* ram0, u32 vrom, u32 size
#ifdef OOT_MQ_DEBUG_PAL
  , const char* file, s32 line
#endif
);

#endif
