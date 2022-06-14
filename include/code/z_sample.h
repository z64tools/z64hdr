#ifndef __Z_SAMPLE__
#define __Z_SAMPLE__

#include "global.h"

void Sample_HandleStateChange(SampleContext* this);
void Sample_Draw(SampleContext* this);
void Sample_Main(GameState* thisx);
void Sample_SetupView(SampleContext* this);
void Sample_LoadTitleStatic(SampleContext* this);

#endif // __Z_SAMPLE__
