#ifndef __Z_ELF_MESSAGE__
#define __Z_ELF_MESSAGE__

#include "global.h"
#include "z64elf_message.h"

extern ElfMessage sChildSariaMsgs[46];
extern ElfMessage sAdultSariaMsgs[21];

u32 ElfMessage_CheckCondition(ElfMessage* msg);
u32 func_8006BE88(ElfMessage** msgp);
u32 func_8006BF1C(ElfMessage** msgp);
u16 ElfMessage_GetTextFromMsgs(ElfMessage* msg);

#endif // __Z_ELF_MESSAGE__
