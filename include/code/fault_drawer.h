#ifndef Z64_FAULT_DRAWER_H
#define Z64_FAULT_DRAWER_H

/**
 * @file fault_drawer.c
 *
 * Implements routines for drawing text with a fixed font directly to a framebuffer, used in displaying
 * the crash screen implemented by fault.c
 */
#include "global.h"
#include "vt.h"

typedef struct {
    /* 0x00 */ u16* fb;
    /* 0x04 */ u16 w;
    /* 0x06 */ u16 h;
    /* 0x08 */ u16 yStart;
    /* 0x0A */ u16 yEnd;
    /* 0x0C */ u16 xStart;
    /* 0x0E */ u16 xEnd;
    /* 0x10 */ u16 foreColor;
    /* 0x12 */ u16 backColor;
    /* 0x14 */ u16 cursorX;
    /* 0x16 */ u16 cursorY;
    /* 0x18 */ const u32* fontData;
    /* 0x1C */ u8 charW;
    /* 0x1D */ u8 charH;
    /* 0x1E */ s8 charWPad;
    /* 0x1F */ s8 charHPad;
    /* 0x20 */ u16 printColors[10];
    /* 0x34 */ u8 escCode; // bool
    /* 0x35 */ u8 osSyncPrintfEnabled;
    /* 0x38 */ void (*inputCallback)(void);
} FaultDrawer; // size = 0x3C

extern const u32 sFaultDrawerFont[];

#define FAULT_DRAWER_CURSOR_X 22
#define FAULT_DRAWER_CURSOR_Y 16

extern FaultDrawer sFaultDrawerDefault;

extern FaultDrawer sFaultDrawer;

void FaultDrawer_SetOsSyncPrintfEnabled(u32 enabled);

void FaultDrawer_DrawRecImpl(s32 xStart, s32 yStart, s32 xEnd, s32 yEnd, u16 color);

void FaultDrawer_DrawChar(char c);

s32 FaultDrawer_ColorToPrintColor(u16 color);

void FaultDrawer_UpdatePrintColor(void);

void FaultDrawer_SetForeColor(u16 color);

void FaultDrawer_SetBackColor(u16 color);

void FaultDrawer_SetFontColor(u16 color);

void FaultDrawer_SetCharPad(s8 padW, s8 padH);

void FaultDrawer_SetCursor(s32 x, s32 y);

void FaultDrawer_FillScreen(void);

void* FaultDrawer_PrintCallback(void* arg, const char* str, u32 count);

s32 FaultDrawer_VPrintf(const char* fmt, va_list args);

s32 FaultDrawer_Printf(const char* fmt, ...);

void FaultDrawer_DrawText(s32 x, s32 y, const char* fmt, ...);

void FaultDrawer_SetDrawerFB(void* fb, u16 w, u16 h);

void FaultDrawer_SetInputCallback(void (*callback)(void));

void FaultDrawer_WritebackFBDCache(void);

void FaultDrawer_Init(void);

#endif
