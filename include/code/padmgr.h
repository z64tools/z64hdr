#ifndef Z64_PADMGR_H
#define Z64_PADMGR_H

#include "global.h"
#include "vt.h"

extern s32 D_8012D280;

OSMesgQueue* PadMgr_LockSerialMesgQueue(PadMgr* padMgr);

void PadMgr_UnlockSerialMesgQueue(PadMgr* padMgr, OSMesgQueue* serialEventQueue);

void PadMgr_LockPadData(PadMgr* padMgr);

void PadMgr_UnlockPadData(PadMgr* padMgr);

void PadMgr_RumbleControl(PadMgr* padMgr);

void PadMgr_RumbleStop(PadMgr* padMgr);

void PadMgr_RumbleReset(PadMgr* padMgr);

void PadMgr_RumbleSetSingle(PadMgr* padMgr, u32 ctrlr, u32 rumble);

void PadMgr_RumbleSet(PadMgr* padMgr, u8* ctrlrRumbles);

void PadMgr_ProcessInputs(PadMgr* padMgr);

void PadMgr_HandleRetraceMsg(PadMgr* padMgr);

void PadMgr_HandlePreNMI(PadMgr* padMgr);

void PadMgr_RequestPadData(PadMgr* padMgr, Input* inputs, s32 mode);

void PadMgr_ThreadEntry(PadMgr* padMgr);

void PadMgr_Init(PadMgr* padMgr, OSMesgQueue* serialEventQueue, IrqMgr* irqMgr, OSId id, OSPri priority, void* stack);

#endif
