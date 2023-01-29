#ifndef Z64_KALEIDO_SCOPE_CALL_H
#define Z64_KALEIDO_SCOPE_CALL_H

#include "global.h"
#include "vt.h"

extern void (*sKaleidoScopeUpdateFunc)(PlayState* play);
extern void (*sKaleidoScopeDrawFunc)(PlayState* play);
extern f32 gBossMarkScale;
extern u32 D_8016139C;
extern PauseMapMarksData* gLoadedPauseMarkDataTable;

extern void KaleidoScope_Update(PlayState* play);
extern void KaleidoScope_Draw(PlayState* play);

void KaleidoScopeCall_LoadPlayer(void);

void KaleidoScopeCall_Init(PlayState* play);

void KaleidoScopeCall_Destroy(PlayState* play);

void KaleidoScopeCall_Update(PlayState* play);

void KaleidoScopeCall_Draw(PlayState* play);

#endif
