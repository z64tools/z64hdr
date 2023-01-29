#ifndef Z64_VICONFIG_H
#define Z64_VICONFIG_H

#include "global.h"
#include "vt.h"

// this should probably go elsewhere but right now viconfig.o is the only object between idle and z_std_dma
extern OSPiHandle* gCartHandle;

void ViConfig_UpdateVi(u32 black);

void ViConfig_UpdateBlack(void);

#endif
