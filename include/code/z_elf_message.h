extern ElfMessage sChildSariaMsgs[46];
extern ElfMessage sAdultSariaMsgs[21];

u32 ElfMessage_CheckCondition(ElfMessage* msg);
u32 func_8006BE88(ElfMessage** msgp);
u32 func_8006BF1C(ElfMessage** msgp);
u16 ElfMessage_GetTextFromMsgs(ElfMessage* msg);