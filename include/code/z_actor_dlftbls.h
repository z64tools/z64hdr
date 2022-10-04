#ifndef Z64_ACTOR_DLFTBLS_H
#define Z64_ACTOR_DLFTBLS_H

#include "global.h"

// Linker symbol declarations (used in the table below)
#define DEFINE_ACTOR(name, _1, _2, _3) DECLARE_OVERLAY_SEGMENT(name)
#define DEFINE_ACTOR_INTERNAL(_0, _1, _2, _3)
#define DEFINE_ACTOR_UNSET(_0)

// #include "tables/..."

#undef DEFINE_ACTOR
#undef DEFINE_ACTOR_INTERNAL
#undef DEFINE_ACTOR_UNSET

// Init Vars declarations (also used in the table below)
#define DEFINE_ACTOR(name, _1, _2, _3) extern ActorInit name##_InitVars;
#define DEFINE_ACTOR_INTERNAL(name, _1, _2, _3) extern ActorInit name##_InitVars;
#define DEFINE_ACTOR_UNSET(_0)

// #include "tables/..."

#undef DEFINE_ACTOR
#undef DEFINE_ACTOR_INTERNAL
#undef DEFINE_ACTOR_UNSET

// Actor Overlay Table definition
#define DEFINE_ACTOR(name, _1, allocType, nameString) \
    { (u32)_ovl_##name##SegmentRomStart,              \
      (u32)_ovl_##name##SegmentRomEnd,                \
      _ovl_##name##SegmentStart,                      \
      _ovl_##name##SegmentEnd,                        \
      NULL,                                           \
      &name##_InitVars,                               \
      nameString,                                     \
      allocType,                                      \
      0 },

#define DEFINE_ACTOR_INTERNAL(name, _1, allocType, nameString) \
    { 0, 0, NULL, NULL, NULL, &name##_InitVars, nameString, allocType, 0 },

#define DEFINE_ACTOR_UNSET(_0) { 0 },

extern ActorOverlay gActorOverlayTable[];

#undef DEFINE_ACTOR
#undef DEFINE_ACTOR_INTERNAL
#undef DEFINE_ACTOR_UNSET

extern s32 gMaxActorId;

extern FaultClient sFaultClient;

void ActorOverlayTable_LogPrint(void);

void ActorOverlayTable_FaultPrint(void* arg0, void* arg1);

void ActorOverlayTable_Init(void);

void ActorOverlayTable_Cleanup(void);

#endif
