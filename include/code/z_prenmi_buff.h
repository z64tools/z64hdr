#ifndef Z64_PRENMI_BUFF_H
#define Z64_PRENMI_BUFF_H

#include "global.h"

#define COLD_RESET 0
#define NMI 1

void PreNmiBuff_Init(PreNmiBuff* this);

void PreNmiBuff_SetReset(PreNmiBuff* this);

u32 PreNmiBuff_IsResetting(PreNmiBuff* this);

#endif
