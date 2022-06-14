#ifndef __Z_PRENMI__
#define __Z_PRENMI__

#include "global.h"
#include "vt.h"

void func_80092320(PreNMIContext* this);
void PreNMI_Update(PreNMIContext* this);
void PreNMI_Draw(PreNMIContext* this);
void PreNMI_Main(GameState* thisx);
void PreNMI_Destroy(GameState* thisx);

#endif // __Z_PRENMI__
