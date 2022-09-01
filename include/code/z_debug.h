#ifndef Z_DEBUG_H
#define Z_DEBUG_H

#include "global.h"

typedef struct {
    u8 x;
    u8 y;
    u8 colorId;
    char text[0x15];
} PrintTextBuffer;

typedef struct {
    u16 push;
    u16 held;
} InputCombo;

extern GameInfo* gGameInfo;
extern s32 D_8015FA94; // no known symbols
extern PrintTextBuffer D_8015FA98[0x16];

extern s16 D_8011E0B0; // PrintTextBuffer index
extern Color_RGBA8 printTextColors[];

extern InputCombo inputCombos[REG_GROUPS];

extern char regChar[];

// initialize GameInfo
void func_800636C0(void);

// Called when free movement is active.
// 8011D394 to enable camera debugger
void func_8006375C(s32 arg0, s32 arg1, const char* text);

// Copy Camera Debugger Text
void func_8006376C(u8 x, u8 y, u8 colorId, const char* text);

// Draw Text
void func_80063828(GfxPrint* printer);

// Edit REG
void func_8006390C(Input* input);

// Draw Memory Viewer
void func_80063C04(GfxPrint* printer);

void func_80063D7C(GraphicsContext* gfxCtx);

#endif
