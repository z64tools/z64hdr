#ifndef CODE_800F9280_H
#define CODE_800F9280_H

#include "ultra64.h"
#include "global.h"
#include "ultra64/abi.h"

typedef struct {
    u8 unk_0;
    u8 unk_1; // importance?
} Struct_8016E320;

extern Struct_8016E320 D_8016E320[4][5];
extern u8 D_8016E348[4];
extern u32 sAudioSeqCmds[0x100];
extern unk_D_8016E750 D_8016E750[4];

extern u8 sSeqCmdWrPos;
extern u8 sSeqCmdRdPos;
extern u8 D_80133408;
extern u8 D_8013340C;
extern u8 D_80133410[];
extern u8 gAudioSpecId;
extern u8 D_80133418;

// TODO: clean up these macros. They are similar to ones in code_800EC960.c but without casts.
#define Audio_StartSeq(playerIdx, fadeTimer, seqId) \
    Audio_QueueSeqCmd(0x00000000 | ((playerIdx) << 24) | ((fadeTimer) << 16) | (seqId))
#define Audio_SeqCmdA(playerIdx, a) Audio_QueueSeqCmd(0xA0000000 | ((playerIdx) << 24) | (a))
#define Audio_SeqCmdB30(playerIdx, a, b) Audio_QueueSeqCmd(0xB0003000 | ((playerIdx) << 24) | ((a) << 16) | (b))
#define Audio_SeqCmdB40(playerIdx, a, b) Audio_QueueSeqCmd(0xB0004000 | ((playerIdx) << 24) | ((a) << 16) | (b))
#define Audio_SeqCmd3(playerIdx, a) Audio_QueueSeqCmd(0x30000000 | ((playerIdx) << 24) | (a))
#define Audio_SeqCmd5(playerIdx, a, b) Audio_QueueSeqCmd(0x50000000 | ((playerIdx) << 24) | ((a) << 16) | (b))
#define Audio_SeqCmd4(playerIdx, a, b) Audio_QueueSeqCmd(0x40000000 | ((playerIdx) << 24) | ((a) << 16) | (b))
#define Audio_SetVolScaleNow(playerIdx, volFadeTimer, volScale) \
    Audio_ProcessSeqCmd(0x40000000 | ((u8)playerIdx << 24) | ((u8)volFadeTimer << 16) | ((u8)(volScale * 127.0f)));

void func_800F9280(u8 playerIdx, u8 seqId, u8 arg2, u16 fadeTimer);

void func_800F9474(u8 playerIdx, u16 arg1);

typedef enum {
    SEQ_START,
    CMD1,
    CMD2,
    CMD3,
    SEQ_VOL_UPD,
    CMD5,
    CMD6,
    CMD7,
    CMD8,
    CMD9,
    CMDA,
    CMDB,
    CMDC,
    CMDD,
    CMDE,
    CMDF
} SeqCmdType;

void Audio_ProcessSeqCmd(u32 cmd);

void Audio_QueueSeqCmd(u32 cmd);

void Audio_ProcessSeqCmds(void);

u16 func_800FA0B4(u8 playerIdx);

s32 func_800FA11C(u32 arg0, u32 arg1);

void func_800FA174(u8 playerIdx);

void func_800FA18C(u8 playerIdx, u8 arg1);

void Audio_SetVolScale(u8 playerIdx, u8 scaleIdx, u8 targetVol, u8 volFadeTimer);

void func_800FA3DC(void);

u8 func_800FAD34(void);

void func_800FADF8(void);

void func_800FAEB4(void);

#endif
