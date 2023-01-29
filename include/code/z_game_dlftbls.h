#ifndef Z64_GAME_DLFTBLS_H
#define Z64_GAME_DLFTBLS_H

#include "global.h"

#define GAMESTATE_OVERLAY(name, init, destroy, size)                                                     \
    {                                                                                                    \
        NULL, (uintptr_t)_ovl_##name##SegmentRomStart, (uintptr_t)_ovl_##name##SegmentRomEnd,            \
            _ovl_##name##SegmentStart, _ovl_##name##SegmentEnd, NULL, init, destroy, NULL, NULL, 0, size \
    }
#define GAMESTATE_OVERLAY_INTERNAL(init, destroy, size) \
    { NULL, 0, 0, NULL, NULL, NULL, init, destroy, NULL, NULL, 0, size }

extern GameStateOverlay gGameStateOverlayTable[];

#endif
