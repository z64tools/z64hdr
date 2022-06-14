#ifndef __Z_HORSE__
#define __Z_HORSE__

#include "global.h"
#include "vt.h"

typedef struct {
    /* 0x00 */ s16 scene;
    /* 0x02 */ Vec3s pos;
    /* 0x08 */ s16 angle;
    /* 0x0A */ s16 type;
} HorseSpawn;

typedef struct {
    /* 0x00 */ s16 scene;
    /* 0x04 */ s32 cutsceneIndex;
    /* 0x08 */ Vec3s pos;
    /* 0x0E */ s16 angle;
    /* 0x10 */ s16 type;
} struct_8011F9B8;

#endif // __Z_HORSE__
