#ifndef Z_VIMODE_H
#define Z_VIMODE_H

#include "global.h"

void ViMode_LogPrint(OSViMode* osViMode);

// This function configures the custom VI mode (`viMode.customViMode`) based on the other flags in `viMode`.
void ViMode_Configure(ViMode* viMode, s32 mode, s32 type, s32 unk_70, s32 unk_74, s32 unk_78, s32 unk_7C, s32 width,
                      s32 height, s32 unk_left, s32 unk_right, s32 unk_top, s32 unk_bottom);

void ViMode_Save(ViMode* viMode);

void ViMode_Load(ViMode* viMode);

void ViMode_Init(ViMode* viMode);

void ViMode_Destroy(ViMode* viMode);

void ViMode_ConfigureFeatures(ViMode* viMode, s32 viFeatures);

// This function uses controller input (C buttons + D pad) to reconfigure the custom VI mode
void ViMode_Update(ViMode* viMode, Input* input);

#endif
