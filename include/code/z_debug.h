#ifndef __Z_DEBUG__
#define __Z_DEBUG__

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

extern s32 D_8015FA94;
extern PrintTextBuffer D_8015FA98[0x16];
extern s16 D_8011E0B0;
extern InputCombo inputCombos[29];
extern char regChar[];

#endif // __Z_DEBUG__
