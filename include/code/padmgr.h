#ifndef __PADMGR__
#define __PADMGR__

#include "global.h"
#include "vt.h"

extern s32 D_8012D280;

void PadMgr_RumbleSetSingle(PadMgr* padMgr, u32 ctrlr, u32 rumble);
void PadMgr_ThreadEntry(PadMgr* padMgr);

#endif // __PADMGR__
