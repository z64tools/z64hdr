#ifndef Z64_CRC_H
#define Z64_CRC_H

#include "global.h"

// Valid addr up to 0x7FF
// It's the address of a block of 0x20 bytes in the mempak
// So that means the whole mempak has a 16-bit address space
u8 __osContAddressCrc(u16 addr);

u8 __osContDataCrc(u8* data);

#endif
