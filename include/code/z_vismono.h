#ifndef Z_VISMONO_H
#define Z_VISMONO_H

/**
 * Color frame buffer effect to desaturate the colors.
 */

#include "global.h"

// Height of the fragments the color frame buffer (CFB) is split into.
// It is the maximum amount of lines such that all rgba16 SCREEN_WIDTH-long lines fit into
// the half of tmem (0x800 bytes) dedicated to color-indexed data.
#define VISMONO_CFBFRAG_HEIGHT (0x800 / (SCREEN_WIDTH * G_IM_SIZ_16b_BYTES))

// Maximum size of the dlist written by `VisMono_DesaturateDList`.
// `VisMono_DesaturateDList` consistently uses `VISMONO_DLSIZE - 2` double words, so this can be 2 less.
#define VISMONO_DLSIZE (3 + SCREEN_HEIGHT / VISMONO_CFBFRAG_HEIGHT * (7 + 2 + 2 + 3) + 2 + 2)

// How much each color component contributes to the desaturated result.
// These coefficients are close to what the YUV color space defines Y (luminance) as:
// https://en.wikipedia.org/wiki/YUV#Conversion_to/from_RGB
#define VISMONO_FAC_RED 2
#define VISMONO_FAC_GREEN 4
#define VISMONO_FAC_BLUE 1
#define VISMONO_FAC_NORM (0x1F * VISMONO_FAC_RED + 0x1F * VISMONO_FAC_GREEN + 0x1F * VISMONO_FAC_BLUE)

// color framebuffer
extern u16 D_0F000000[];

void VisMono_Init(VisMono* this);

void VisMono_Destroy(VisMono* this);

void VisMono_DesaturateTLUT(VisMono* this, u16* tlut);

Gfx* VisMono_DesaturateDList(VisMono* this, Gfx* gfx);

void VisMono_Draw(VisMono* this, Gfx** gfxp);

void VisMono_DrawOld(VisMono* this);

#endif
