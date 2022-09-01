#ifndef Z64_SAMPLE_H
#define Z64_SAMPLE_H

#include "global.h"

void Sample_HandleStateChange(SampleContext* this);

void Sample_Draw(SampleContext* this);

void Sample_Main(GameState* thisx);

void Sample_Destroy(GameState* thisx);

void Sample_SetupView(SampleContext* this);

void Sample_LoadTitleStatic(SampleContext* this);

void Sample_Init(GameState* thisx);

#endif
