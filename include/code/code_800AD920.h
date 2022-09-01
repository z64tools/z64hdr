#ifndef CODE_800AD920_H
#define CODE_800AD920_H

#include "global.h"

// Note : This file is related to z_vismono, the original name was probably z_vis<something after "mono" alphabetically>

// z-buffer
extern u16 D_0E000000[];

// Init
void func_800AD920(struct_80166500* this);

// Destroy
void func_800AD950(struct_80166500* this);

// Draw
void func_800AD958(struct_80166500* this, Gfx** gfxp);

#endif
