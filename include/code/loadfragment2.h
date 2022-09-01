#ifndef Z64_LOADFRAGMENT2_H
#define Z64_LOADFRAGMENT2_H

#include "global.h"

void* Overlay_AllocateAndLoad(uintptr_t vRomStart, uintptr_t vRomEnd, void* vRamStart, void* vRamEnd);

#endif
