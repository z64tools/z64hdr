#ifndef Z_HORSE_H
#define Z_HORSE_H

#include "global.h"
#include "vt.h"
#include "src/overlays/actors/ovl_En_Horse/z_en_horse.h"

s32 func_8006CFC0(s32 scene);

void func_8006D074(PlayState* play);

void func_8006D0AC(PlayState* play);

typedef struct {
    /* 0x00 */ s16 scene;
    /* 0x02 */ Vec3s pos;
    /* 0x08 */ s16 angle;
    /* 0x0A */ s16 type;
} HorseSpawn;

void func_8006D0EC(PlayState* play, Player* player);

typedef struct {
    /* 0x00 */ s16 scene;
    /* 0x04 */ s32 cutsceneIndex;
    /* 0x08 */ Vec3s pos;
    /* 0x0E */ s16 angle;
    /* 0x10 */ s16 type;
} struct_8011F9B8;

void func_8006D684(PlayState* play, Player* player);

void func_8006DC68(PlayState* play, Player* player);

void func_8006DD9C(Actor* actor, Vec3f* arg1, s16 arg2);

#endif
