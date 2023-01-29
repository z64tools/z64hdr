#ifndef Z64_DEBUG_H
#define Z64_DEBUG_H

#include "global.h"

typedef struct {
    u8 x;
    u8 y;
    u8 colorIndex;
    char text[21];
} PrintTextBufferEntry; // size = 0x18

typedef struct {
    u16 hold;
    u16 press;
} InputCombo; // size = 0x4

extern GameInfo* gGameInfo;

extern PrintTextBufferEntry sDebugPrintTextBuffer[22];
extern s16 sDebugPrintTextBufferNumUsed;
extern Color_RGBA8 sDebugPrintTextColors[];

extern InputCombo sRegGroupInputCombos[REG_GROUPS];

extern char sRegGroupChars[REG_GROUPS];

// Initialize GameInfo
void func_800636C0(void);

// Called when free movement is active.
void func_8006375C(s32 arg0, s32 arg1, const char* text);

// Store text during Update, to be drawn later during Draw
void func_8006376C(u8 x, u8 y, u8 colorIndex, const char* text);

// Draw text previously stored by calls to `func_8006376C`
void func_80063828(GfxPrint* printer);

// Process inputs to control the reg editor
void func_8006390C(Input* input);

// Draw the reg editor
void func_80063C04(GfxPrint* printer);

void func_80063D7C(GraphicsContext* gfxCtx);

#endif
