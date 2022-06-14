#ifndef __Z_KALEIDO_SCOPE_CALL__
#define __Z_KALEIDO_SCOPE_CALL__

#include "global.h"
#include "vt.h"

void (*sKaleidoScopeUpdateFunc);
void (*sKaleidoScopeDrawFunc);

extern u32 D_8016139C;

extern void KaleidoScope_Update(PlayState* play);
extern void KaleidoScope_Draw(PlayState* play);

#endif // __Z_KALEIDO_SCOPE_CALL__
