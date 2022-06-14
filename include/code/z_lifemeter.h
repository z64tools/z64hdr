#ifndef __Z_LIFEMETER__
#define __Z_LIFEMETER__

#include "global.h"
#include "assets/textures/parameter_static/parameter_static.h"

extern s16 sBeatingHeartsDDPrim[3];
extern s16 sBeatingHeartsDDEnv[3];
extern s16 sHeartsDDPrim[2][3];
extern s16 sHeartsDDEnv[2][3];

s32 func_80078E18(PlayState* play);
s32 func_80078E34(PlayState* play);
s32 func_80078E84(PlayState* play);

#endif // __Z_LIFEMETER__
