#ifndef __Z_SS_SRAM__
#define __Z_SS_SRAM__

#include "ultra64.h"
#include "global.h"

typedef struct {
    /* 0x00 */ OSPiHandle piHandle;
    /* 0x74 */ OSIoMesg ioMesg;
    /* 0x8C */ OSMesgQueue msgQueue;
} SsSramContext;

extern SsSramContext sSsSramContext;

#endif // __Z_SS_SRAM__
