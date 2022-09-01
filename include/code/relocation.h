#ifndef RELOCATION_H
#define RELOCATION_H

#include "global.h"

void Overlay_Relocate(void* allocatedVRamAddress, OverlayRelocationSection* overlayInfo, void* vRamStart);

#endif
