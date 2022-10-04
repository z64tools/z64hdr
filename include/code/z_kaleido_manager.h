#ifndef Z64_KALEIDO_MANAGER_H
#define Z64_KALEIDO_MANAGER_H

#include "global.h"
#include "vt.h"

#define KALEIDO_OVERLAY(name, nameString)                                                     \
    {                                                                                         \
        NULL, (uintptr_t)_ovl_##name##SegmentRomStart, (uintptr_t)_ovl_##name##SegmentRomEnd, \
            _ovl_##name##SegmentStart, _ovl_##name##SegmentEnd, 0, nameString,                \
    }

extern KaleidoMgrOverlay gKaleidoMgrOverlayTable[];

extern void* sKaleidoAreaPtr;
extern KaleidoMgrOverlay* gKaleidoMgrCurOvl;
extern u8 gBossMarkState;

void KaleidoManager_LoadOvl(KaleidoMgrOverlay* ovl);

void KaleidoManager_ClearOvl(KaleidoMgrOverlay* ovl);

void KaleidoManager_Init(PlayState* play);

void KaleidoManager_Destroy(void);

// NOTE: this function looks messed up and probably doesn't work how it was intended to
void* KaleidoManager_GetRamAddr(void* vram);

#endif
