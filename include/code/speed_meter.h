#ifndef Z64_SPEED_METER_H
#define Z64_SPEED_METER_H

#include "global.h"
#include "vt.h"

volatile OSTime D_8016A520;
volatile OSTime D_8016A528;
volatile OSTime D_8016A530;
volatile OSTime D_8016A538;
volatile OSTime D_8016A540;
volatile OSTime D_8016A548;
volatile OSTime D_8016A550;
volatile OSTime D_8016A558;
volatile OSTime gRSPAudioTotalTime;
volatile OSTime gRSPGFXTotalTime;
volatile OSTime gRSPOtherTotalTime;
volatile OSTime D_8016A578;
volatile OSTime gRDPTotalTime;
extern SpeedMeterTimeEntry* sSpeedMeterTimeEntryPtr;

extern SpeedMeterTimeEntry sSpeedMeterTimeEntryArray[];

#define DrawRec(gfx, color, ulx, uly, lrx, lry)        \
    gDPPipeSync(gfx);                                  \
    gDPSetFillColor(gfx, ((color) << 16) | (color));   \
    gDPFillRectangle(gfx, (ulx), (uly), (lrx), (lry)); \
    gDPPipeSync(gfx);

void SpeedMeter_InitImpl(SpeedMeter* this, u32 arg1, u32 y);

void SpeedMeter_Init(SpeedMeter* this);

void SpeedMeter_Destroy(SpeedMeter* this);

void SpeedMeter_DrawTimeEntries(SpeedMeter* this, GraphicsContext* gfxCtx);

void SpeedMeter_InitAllocEntry(SpeedMeterAllocEntry* this, u32 maxval, u32 val, u16 backColor, u16 foreColor, u32 ulx,
                               u32 lrx, u32 uly, u32 lry);

void SpeedMeter_DrawAllocEntry(SpeedMeterAllocEntry* this, GraphicsContext* gfxCtx);

void SpeedMeter_DrawAllocEntries(SpeedMeter* meter, GraphicsContext* gfxCtx, GameState* state);

#endif
