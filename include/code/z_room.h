#ifndef __Z_ROOM__
#define __Z_ROOM__

#include "global.h"
#include "vt.h"

void Room_Draw0(PlayState* play, Room* room, u32 flags);
void Room_Draw2(PlayState* play, Room* room, u32 flags);
void Room_Draw1(PlayState* play, Room* room, u32 flags);

extern Vec3f D_801270A0;
extern Gfx D_801270B0[19];

void (*sRoomDrawHandlers[3]);
void Room_Draw0(PlayState* play, Room* room, u32 flags);

#define SHAPE_SORT_MAX 64

typedef struct struct_80095D04 {
    /* 0x00 */ PolygonDlist2* unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ struct struct_80095D04* unk_08;
    /* 0x0C */ struct struct_80095D04* unk_0C;
} struct_80095D04;

void Room_Draw2(PlayState* play, Room* room, u32 flags);

#define JPEG_MARKER 0xFFD8FFE0

s32 func_80096238(void* data);
void Room_Draw1Single(PlayState* play, Room* room, u32 flags);
BgImage* func_80096A74(MeshHeader1Multi* meshHeader1Multi, PlayState* play);
void Room_Draw1Multi(PlayState* play, Room* room, u32 flags);
void Room_Draw1(PlayState* play, Room* room, u32 flags);

#endif // __Z_ROOM__
