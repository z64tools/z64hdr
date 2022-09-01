#ifndef Z64_LOAD_H
#define Z64_LOAD_H

#include "global.h"

s32 Overlay_Load(uintptr_t vRomStart, uintptr_t vRomEnd, void* vRamStart, void* vRamEnd, void* allocatedVRamAddr);

#endif
