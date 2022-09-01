#ifndef Z64_RELOCATION_H
#define Z64_RELOCATION_H

#include "global.h"

void Overlay_Relocate(void* allocatedVRamAddress, OverlayRelocationSection* overlayInfo, void* vRamStart);

#endif
