#ifndef Z64_EFFECT_SOFT_SPRITE_DLFTBLS_H
#define Z64_EFFECT_SOFT_SPRITE_DLFTBLS_H

#include "global.h"

// Linker symbol declarations (used in the table below)
#define DEFINE_EFFECT_SS(name, _1) DECLARE_OVERLAY_SEGMENT(name)
#define DEFINE_EFFECT_SS_UNSET(_0)

// #include "tables/..."

#undef DEFINE_EFFECT_SS
#undef DEFINE_EFFECT_SS_UNSET

// Init Vars declarations (also used in the table below)
#define DEFINE_EFFECT_SS(name, _1) extern EffectSsInit name##_InitVars;
#define DEFINE_EFFECT_SS_UNSET(_0)

// #include "tables/..."

#undef DEFINE_EFFECT_SS
#undef DEFINE_EFFECT_SS_UNSET

// Effect SS Overlay Table definition
#define DEFINE_EFFECT_SS(name, _1)               \
    {                                            \
        (uintptr_t)_ovl_##name##SegmentRomStart, \
        (uintptr_t)_ovl_##name##SegmentRomEnd,   \
        _ovl_##name##SegmentStart,               \
        _ovl_##name##SegmentEnd,                 \
        NULL,                                    \
        &name##_InitVars,                        \
        1,                                       \
    },

#define DEFINE_EFFECT_SS_UNSET(_0) { 0 },

extern EffectSsOverlay gEffectSsOverlayTable[];

#undef DEFINE_EFFECT_SS
#undef DEFINE_EFFECT_SS_UNSET

#endif
