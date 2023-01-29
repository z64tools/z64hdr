#ifndef Z64_MOTOR_H
#define Z64_MOTOR_H

#include "global.h"

#define MOTOR_ID 0x80

extern OSPifRam __MotorDataBuf[MAXCONTROLLERS];

s32 __osMotorAccess(OSPfs* pfs, u32 vibrate);

void _MakeMotorData(s32 channel, OSPifRam* mdata);

s32 osMotorInit(OSMesgQueue* ctrlrqueue, OSPfs* pfs, s32 channel);

#endif
