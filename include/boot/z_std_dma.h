extern StackEntry sDmaMgrStackInfo;
extern OSMesgQueue sDmaMgrMsgQueue;
extern OSMesg sDmaMgrMsgBuf[32];
extern OSThread sDmaMgrThread;
extern u64 sDmaMgrStack[(((0x500) + 7) & ~7) / sizeof(u64)];
extern const char* sDmaMgrCurFileName;
extern s32 sDmaMgrCurFileLine;
extern u32 sDmaMgrIsRomCompressed;

extern const char* sDmaMgrFileNames[];

void DmaMgr_DmaFromDriveRom(void* ram, u32 rom, u32 size);