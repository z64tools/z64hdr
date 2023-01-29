#ifndef Z64_PRENMI_H
#define Z64_PRENMI_H

#include "global.h"
#include "vt.h"

void func_80092320(PreNMIState* this);

void PreNMI_Update(PreNMIState* this);

void PreNMI_Draw(PreNMIState* this);

void PreNMI_Main(GameState* thisx);

void PreNMI_Destroy(GameState* thisx);

void PreNMI_Init(GameState* thisx);

#endif
