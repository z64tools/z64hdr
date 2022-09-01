#ifndef Z_FACE_REACTION_H
#define Z_FACE_REACTION_H

#include "global.h"

extern u16 sReactionTextIds[][PLAYER_MASK_MAX];

u16 Text_GetFaceReaction(PlayState* play, u32 reactionSet);

#endif
