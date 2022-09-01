#ifndef Z64_LOOKATHIL_H
#define Z64_LOOKATHIL_H

#include "global.h"

#define FTOFRAC8(x) ((s32)MIN(((x) * (128.0f)), 127.0f) & 0xFF)

/**
 * guLookAtHiliteF
 * This function creates the viewing matrix (floating point) and sets the LookAt/Hilite structures
 **/
void guLookAtHiliteF(f32 mf[4][4], LookAt* l, Hilite* h, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt,
                     f32 xUp, f32 yUp, f32 zUp, f32 xl1, f32 yl1, f32 zl1, /* light 1 direction */
                     f32 xl2, f32 yl2, f32 zl2,                            /* light 2 direction */
                     s32 hiliteWidth, s32 hiliteHeight)                    /* size of hilite texture */
;

/**
 * guLookAtHilite
 * This function creates the viewing matrix (fixed point) and sets the LookAt/Hilite structures
 * Same args as previous function
 **/
void guLookAtHilite(Mtx* m, LookAt* l, Hilite* h, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp,
                    f32 yUp, f32 zUp, f32 xl1, f32 yl1, f32 zl1, f32 xl2, f32 yl2, f32 zl2, s32 hiliteWidth,
                    s32 hiliteHeight);

#endif
