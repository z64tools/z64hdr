#ifndef Z64_ELF_MESSAGE_H
#define Z64_ELF_MESSAGE_H

#include "global.h"
#include "z64elf_message.h"

extern ElfMessage sChildSariaMsgs[];

extern ElfMessage sAdultSariaMsgs[];

u32 ElfMessage_CheckCondition(ElfMessage* msg);

u32 func_8006BE88(ElfMessage** msgp);

u32 func_8006BF1C(ElfMessage** msgp);

u16 ElfMessage_GetTextFromMsgs(ElfMessage* msg);

u16 ElfMessage_GetSariaText(PlayState* play);

u16 ElfMessage_GetCUpText(PlayState* play);

#endif
