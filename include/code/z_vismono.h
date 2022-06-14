#ifndef __Z_VISMONO__
#define __Z_VISMONO__

#include "global.h"
#define VISMONO_CFBFRAG_HEIGHT (0x800 / (SCREEN_WIDTH * G_IM_SIZ_16b_BYTES))
#define VISMONO_DLSIZE (3 + SCREEN_HEIGHT / VISMONO_CFBFRAG_HEIGHT * (7 + 2 + 2 + 3) + 2 + 2)
#define VISMONO_FAC_RED 2
#define VISMONO_FAC_GREEN 4
#define VISMONO_FAC_BLUE 1
#define VISMONO_FAC_NORM (0x1F * VISMONO_FAC_RED + 0x1F * VISMONO_FAC_GREEN + 0x1F * VISMONO_FAC_BLUE)

extern u16 D_0F000000[];

void VisMono_DesaturateTLUT(VisMono* this, u16* tlut);
Gfx* VisMono_DesaturateDList(VisMono* this, Gfx* gfx);
void VisMono_DrawOld(VisMono* this);

#endif // __Z_VISMONO__
