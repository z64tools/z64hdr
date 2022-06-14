#ifndef __Z_GAME_DLFTBLS__
#define __Z_GAME_DLFTBLS__

#include "global.h"
#define GAMESTATE_OVERLAY(name, init, destroy, size)                                                         \
    {                                                                                                        \
        NULL, (u32)_ovl_##name##SegmentRomStart, (u32)_ovl_##name##SegmentRomEnd, _ovl_##name##SegmentStart, \
            _ovl_##name##SegmentEnd, NULL, init, destroy, NULL, NULL, 0, size                                \
    }
#define GAMESTATE_OVERLAY_INTERNAL(init, destroy, size) \
    { NULL, 0, 0, NULL, NULL, NULL, init, destroy, NULL, NULL, 0, size }

#endif // __Z_GAME_DLFTBLS__
