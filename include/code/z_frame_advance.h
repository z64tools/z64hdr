#ifndef Z_FRAME_ADVANCE_H
#define Z_FRAME_ADVANCE_H

#include "global.h"

void FrameAdvance_Init(FrameAdvanceContext* frameAdvCtx);

/**
 * Frame advance allows you to advance through the game one frame at a time on command.
 * To enable, hold R and press Dpad Down on the specified controller.
 * To advance a frame, hold Z and press R.
 * Holding Z and R will advance a frame every half second.
 *
 * This function returns true when frame advance is not active (game will run normally)
 */
s32 FrameAdvance_Update(FrameAdvanceContext* frameAdvCtx, Input* input);

#endif
