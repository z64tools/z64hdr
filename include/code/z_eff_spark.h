#ifndef Z_EFF_SPARK_H
#define Z_EFF_SPARK_H

#include "global.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

// original name: "spark"
void EffectSpark_Init(void* thisx, void* initParamsx);

void EffectSpark_Destroy(void* thisx);

// original name: "EffectSparkInfo_proc"
s32 EffectSpark_Update(void* thisx);

// original name: "EffectSparkInfo_disp"
void EffectSpark_Draw(void* thisx, GraphicsContext* gfxCtx);

#endif
