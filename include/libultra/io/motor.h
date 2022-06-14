#ifndef __MOTOR__
#define __MOTOR__

#include "global.h"
#define BANK_ADDR 0x400
#define MOTOR_ID 0x80

extern OSPifRam osPifBuffers[MAXCONTROLLERS];

s32 __osMotorAccess(OSPfs* pfs, u32 vibrate);
void _MakeMotorData(s32 channel, OSPifRam* buf);
s32 osMotorInit(OSMesgQueue* ctrlrqueue, OSPfs* pfs, s32 channel);

#endif // __MOTOR__
