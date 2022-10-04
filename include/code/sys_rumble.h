#ifndef Z64_SYS_RUMBLE_H
#define Z64_SYS_RUMBLE_H

/**
 * @file sys_rumble.c
 *
 * This file implements a manager for storing and processing rumble pak requests made by the game state. Despite some
 * parts of the system appearing to accommodate all four controller ports, only controller 1 will rumble according to
 * the processed requests.
 * This file is half of the system that runs on the padmgr thread alongside controller communications. The rest of the
 * system that receives the requests from the game state runs on the graph thread and is implemented in `z_rumble.c`.
 *
 * @see RumbleMgr
 * @see z_rumble.c
 *
 * @note Original filename is likely sys_vibrate.c or similar as it is ordered after sys_ucode.c
 */
#include "global.h"

/**
 * Rumble manager update, runs on Vertical Retrace on the padmgr thread.
 */
void RumbleMgr_Update(RumbleMgr* rumbleMgr);

void RumbleMgr_Init(RumbleMgr* rumbleMgr);

void RumbleMgr_Destroy(RumbleMgr* rumbleMgr);

#endif
