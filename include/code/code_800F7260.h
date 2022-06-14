typedef struct {
    /* 0x00 */ u16 sfxId;
    /* 0x04 */ Vec3f* pos;
    /* 0x08 */ u8 token;
    /* 0x0C */ f32* freqScale;
    /* 0x10 */ f32* vol;
    /* 0x14 */ s8* reverbAdd;
} SoundRequest;

typedef struct {
    /* 0x00 */ f32 value;
    /* 0x04 */ f32 target;
    /* 0x08 */ f32 step;
    /* 0x0C */ u16 remainingFrames;
} UnusedBankLerp;

extern char D_80133340[];
extern char D_80133344[];
extern s32 D_8013338C;
extern SoundBankEntry D_8016BAD0[9];
extern SoundBankEntry D_8016BC80[12];
extern SoundBankEntry D_8016BEC0[22];
extern SoundBankEntry D_8016C2E0[20];
extern SoundBankEntry D_8016C6A0[8];
extern SoundBankEntry D_8016C820[3];
extern SoundBankEntry D_8016C8B0[5];
extern u8 sSoundBankListEnd[7];
extern u8 sSoundBankFreeListStart[7];
extern u8 sSoundBankUnused[7];
extern u8 sCurSfxPlayerChannelIdx;
extern UnusedBankLerp sUnusedBankLerp[7];
extern u8 sSoundRequestWriteIndex;
extern u8 sSoundRequestReadIndex;
extern u8 sBankSizes[7];
extern u16 D_801333D0;
extern s32 D_801333E4;
extern s32 D_801333EC;
extern u8 D_801333F8;

void Audio_RemoveMatchingSoundRequests(u8 aspect, SoundBankEntry* cmp);
void Audio_RemoveSoundBankEntry(u8 bankId, u8 entryIndex);
void Audio_SetUnusedBankLerp(u8 bankId, u8 target, u16 delay);
void Audio_StepUnusedBankLerp(u8 bankId);