#ifndef XLITOB_H
#define XLITOB_H

#include "global.h"

#define BUFF_LEN 0x18

extern u8 D_8000AF70[];
extern u8 D_8000AF84[];

void _Litob(_Pft* args, u8 type);

#endif
