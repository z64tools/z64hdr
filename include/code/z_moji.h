#ifndef Z_MOJI_H
#define Z_MOJI_H

/**
 * Unused. A very simple utility for drawing text on screen.
 */

#include "global.h"

// how big to draw the characters on screen
#define DISP_CHAR_WIDTH 8
#define DISP_CHAR_HEIGHT 8

// gMojiFontTex is a TEX_CHAR_COLS x TEX_CHAR_ROWS grid of characters,
// each character being TEX_CHAR_WIDTH x TEX_CHAR_HEIGHT in size.
// Each spot on the grid contains 4 characters, which are revealed by using different TLUTs.

#define TEX_CHAR_WIDTH 8
#define TEX_CHAR_HEIGHT 8

#define TEX_CHAR_COLS 2
#define TEX_CHAR_ROWS 16

// A character `c = 0bRRRRRCTT` maps to row 0bRRRRR, column 0bC and TLUT 0bTT.
#define GET_CHAR_TLUT_INDEX(c) (c & 3)
// `/ 4` matches the `& 4` (`(c & 4) / 4` is the column the character is in)
#define GET_TEX_CHAR_S(c) ((u16)(c & 4) * ((1 << 5) * TEX_CHAR_WIDTH / 4))
#define GET_TEX_CHAR_T(c) ((u16)(c >> 3) * ((1 << 5) * TEX_CHAR_HEIGHT))

extern u32 sFontColorRed;
extern u32 sFontColorGreen;
extern u32 sFontColorBlue;
extern u32 sFontColorAlpha;

extern s32 sScreenPosX;
extern s32 sScreenPosY;

extern s32 sCurTLUTIndex;

void Moji_SetColor(u32 red, u32 green, u32 blue, u32 alpha);

void Moji_SetPosition(s32 gridX, s32 gridY);

void Moji_DrawChar(GraphicsContext* gfxCtx, char c);

/**
 * Does not work as is in most cases.
 * Can work if the render mode, combiner and possibly other settings are set correctly.
 * For example this works with the render mode used in `GfxPrint_Setup`,
 * and `G_CC_MODULATEI_PRIM` for both combiner cycles.
 */
void Moji_DrawString(GraphicsContext* gfxCtx, const char* str);

#endif
