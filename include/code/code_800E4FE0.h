#define SAMPLES_TO_OVERPRODUCE 0x10
#define EXTRA_BUFFERED_AI_SAMPLES_TARGET 0x80

typedef enum {
    CHAN_UPD_UNK_0,           // 0
    CHAN_UPD_VOL_SCALE,       // 1
    CHAN_UPD_VOL,             // 2
    CHAN_UPD_PAN_SIGNED,      // 3
    CHAN_UPD_FREQ_SCALE,      // 4
    CHAN_UPD_REVERB,          // 5
    CHAN_UPD_SCRIPT_IO,       // 6
    CHAN_UPD_PAN_UNSIGNED,    // 7
    CHAN_UPD_STOP_SOMETHING2, // 8
    CHAN_UPD_MUTE_BEHAVE,     // 9
    CHAN_UPD_VIBE_X8,         // 10
    CHAN_UPD_VIBE_X32,        // 11
    CHAN_UPD_UNK_0F,          // 12
    CHAN_UPD_UNK_20,          // 13
    CHAN_UPD_STEREO           // 14
} ChannelUpdateType;

void func_800E6300(SequenceChannel* channel, AudioCmd* cmd);
void func_800E59AC(s32 playerIdx, s32 fadeTimer);
AudioTask* func_800E5000(void);
void Audio_ProcessCmds(u32);
void func_800E6128(SequencePlayer* seqPlayer, AudioCmd* cmd);
void func_800E5958(s32 playerIdx, s32 fadeTimer);
s32 func_800E66C0(s32 arg0);
AudioTask* func_800E5000(void);

#define ACMD_SND_MDE ((u32)0xF0000000)
#define ACMD_MUTE ((u32)0xF1000000)

void func_800E5584(AudioCmd* cmd);
void func_800E5958(s32 playerIdx, s32 fadeTimer);
void func_800E59AC(s32 playerIdx, s32 fadeTimer);
void Audio_InitMesgQueuesInternal(void);
void Audio_ResetCmdQueue(void);
void Audio_ProcessCmd(AudioCmd* cmd);
void Audio_ProcessCmds(u32 msg);
void func_800E5EA4(s32 arg0, u32* arg1, u32* arg2);
void func_800E5F34(void);
s8 func_800E6070(s32 playerIdx, s32 channelIdx, s32 scriptIdx);
s8 func_800E60C4(s32 playerIdx, s32 port);
void Audio_InitExternalPool(void* ramAddr, u32 size);
void Audio_DestroyExternalPool(void);
void func_800E6128(SequencePlayer* seqPlayer, AudioCmd* cmd);
void func_800E6300(SequenceChannel* channel, AudioCmd* cmd);
void func_800E64B0(s32 arg0, s32 arg1, s32 arg2);
void func_800E64F8(void);
void func_800E651C(u32 arg0, s32 arg1);
void Audio_WaitForAudioTask(void);
s32 func_800E6590(s32 playerIdx, s32 arg1, s32 arg2);
void func_800E66A0(void);
s32 func_800E66C0(s32 arg0);