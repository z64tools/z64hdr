#ifndef Z_PRENMI_H
#define Z_PRENMI_H

#include "global.h"
#include "vt.h"

void func_80092320(PreNMIContext* this);

void PreNMI_Update(PreNMIContext* this);

void PreNMI_Draw(PreNMIContext* this);

void PreNMI_Main(GameState* thisx);

void PreNMI_Destroy(GameState* thisx);

void PreNMI_Init(GameState* thisx);

#endif
