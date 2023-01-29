#ifndef Z64_SAMPLE_H
#define Z64_SAMPLE_H

#include "global.h"

void Sample_HandleStateChange(SampleState* this);

void Sample_Draw(SampleState* this);

void Sample_Main(GameState* thisx);

void Sample_Destroy(GameState* thisx);

void Sample_SetupView(SampleState* this);

void Sample_LoadTitleStatic(SampleState* this);

void Sample_Init(GameState* thisx);

#endif
