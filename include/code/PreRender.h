#ifndef Z64_PRERENDER_H
#define Z64_PRERENDER_H

/**
 * @file PreRender.c
 *
 * This file implements various routines important to framebuffer effects, such as RDP accelerated color and depth
 * buffer copies and coverage drawing. Also contains software implementations of the Video Interface anti-aliasing and
 * divot filters.
 */
#include "global.h"
#include "alloca.h"

void PreRender_SetValuesSave(PreRender* this, u32 width, u32 height, void* fbuf, void* zbuf, void* cvg);

void PreRender_Init(PreRender* this);

void PreRender_SetValues(PreRender* this, u32 width, u32 height, void* fbuf, void* zbuf);

void PreRender_Destroy(PreRender* this);

/**
 * Copies RGBA16 image `img` to `imgDst`
 *
 * @param gfxp      Display list pointer
 * @param img       Image to copy from
 * @param imgDst    Buffer to copy to
 */
void PreRender_CopyImage(PreRender* this, Gfx** gfxp, void* img, void* imgDst);

/**
 * Copies part of `this->fbufSave` in the region (this->ulx, this->uly), (this->lrx, this->lry) to the same location in
 * `this->fbuf`.
 */
void PreRender_CopyImageRegionImpl(PreRender* this, Gfx** gfxp);

/**
 * Copies `buf` to `bufSave`, discarding the alpha channel and modulating the RGB channel by
 * the color ('r', 'g', 'b', 'a')
 */
void func_800C170C(PreRender* this, Gfx** gfxp, void* buf, void* bufSave, u32 r, u32 g, u32 b, u32 a);

/**
 * Copies `fbuf` to `fbufSave`, discarding the alpha channel and leaving the rgb channel unchanged
 */
void func_800C1AE8(PreRender* this, Gfx** gfxp, void* fbuf, void* fbufSave);

/**
 * Reads the coverage values stored in the RGBA16 format `img` with dimensions `this->width`, `this->height` and
 * converts it to an 8-bpp intensity image.
 *
 * @param gfxp      Display list pointer
 * @param img       Image to read coverage from
 * @param cvgDst    Buffer to store coverage into
 */
void PreRender_CoverageRgba16ToI8(PreRender* this, Gfx** gfxp, void* img, void* cvgDst);

/**
 * Saves zbuf to zbufSave
 */
void PreRender_SaveZBuffer(PreRender* this, Gfx** gfxp);

/**
 * Saves fbuf to fbufSave
 */
void PreRender_SaveFramebuffer(PreRender* this, Gfx** gfxp);

/**
 * Fetches the coverage of the current framebuffer into an image of the same format as the current color image, storing
 * it over the framebuffer in memory.
 */
void PreRender_FetchFbufCoverage(PreRender* this, Gfx** gfxp);

/**
 * Draws the coverage of the current framebuffer `this->fbuf` to an I8 image at `this->cvgSave`. Overwrites
 * `this->fbuf` in the process.
 */
void PreRender_DrawCoverage(PreRender* this, Gfx** gfxp);

/**
 * Restores zbufSave to zbuf
 */
void PreRender_RestoreZBuffer(PreRender* this, Gfx** gfxp);

/**
 * Draws a full-screen image to the current framebuffer, that sources the rgb channel from `this->fbufSave` and
 * the alpha channel from `this->cvgSave` modulated by environment color.
 */
void func_800C213C(PreRender* this, Gfx** gfxp);

/**
 * Copies fbufSave to fbuf
 */
void PreRender_RestoreFramebuffer(PreRender* this, Gfx** gfxp);

/**
 * Copies part of `this->fbufSave` in the region (this->ulx, this->uly), (this->lrx, this->lry) to the same location in
 * `this->fbuf`.
 */
void PreRender_CopyImageRegion(PreRender* this, Gfx** gfxp);

/**
 * Applies the Video Interface anti-aliasing of silhouette edges to an image.
 *
 * This filter performs a linear interpolation on partially covered pixels between the current pixel color (called
 * foreground color) and a "background" pixel color obtained by sampling fully covered pixels at the six highlighted
 * points in the following 5x3 neighborhood:
 *    _ _ _ _ _
 *  |   o   o   |
 *  | o   X   o |
 *  |   o   o   |
 *    ‾ ‾ ‾ ‾ ‾
 * Whether a pixel is partially covered is determined by reading the coverage values associated with the image.
 * Coverage is a measure of how many subpixels the last drawn primitive covered. A fully covered pixel is one with a
 * full coverage value, the entire pixel was covered by the primitive.
 * The background color is calculated as the average of the "penultimate" minimum and maximum colors in the 5x3
 * neighborhood.
 *
 * The final color is calculated by interpolating the foreground and background color weighted by the coverage:
 *      OutputColor = cvg * ForeGround + (1.0 - cvg) * BackGround
 *
 * This is a software implementation of the same algorithm used in the Video Interface hardware when Anti-Aliasing is
 * enabled in the VI Control Register.
 *
 * Patent describing the algorithm:
 *
 * Gossett, C. P., & van Hook, T. J. (Filed 1995, Published 1998)
 * Antialiasing of silhouette edges (USOO5742277A)
 * U.S. Patent and Trademark Office
 * Expired 2015-10-06
 * https://patents.google.com/patent/US5742277A/en
 *
 * @param this  PreRender instance
 * @param x     Center pixel x
 * @param y     Center pixel y
 */
void PreRender_AntiAliasFilter(PreRender* this, s32 x, s32 y);

// Selects the median value from a1, a2, a3
#define MEDIAN3(a1, a2, a3)                                                    \
    (((a2) >= (a1)) ? (((a3) >= (a2)) ? (a2) : (((a1) >= (a3)) ? (a1) : (a3))) \
                    : (((a2) >= (a3)) ? (a2) : (((a3) >= (a1)) ? (a1) : (a3))))

/**
 * Applies the Video Interface divot filter to an image.
 *
 * This filter removes "divots" in an anti-aliased image, single-pixel holes created when many boundary edges all
 * occupy a single pixel. The algorithm removes these by sliding a 3-pixel-wide window across each row of pixels and
 * replaces the center pixel color with the median pixel color in the window.
 *
 * This is a software implementation of the same algorithm used in the Video Interface hardware when OS_VI_DIVOT_ON is
 * set in the VI Control Register.
 *
 * @param this  PreRender instance
 */
void PreRender_DivotFilter(PreRender* this);

/**
 * Applies the Video Interface anti-aliasing filter and (optionally) the divot filter to `this->fbufSave` using
 * `this->cvgSave`
 */
void PreRender_ApplyFilters(PreRender* this);

#endif
