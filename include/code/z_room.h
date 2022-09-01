#ifndef Z_ROOM_H
#define Z_ROOM_H

#include "global.h"
#include "vt.h"

void func_80095AB4(PlayState* play, Room* room, u32 flags);
void func_80095D04(PlayState* play, Room* room, u32 flags);
void func_80096F6C(PlayState* play, Room* room, u32 flags);

extern Vec3f D_801270A0;

// unused
extern Gfx D_801270B0[];

extern void (*sRoomDrawHandlers[])(PlayState* play, Room* room, u32 flags);

void func_80095AA0(PlayState* play, Room* room, Input* arg2, UNK_TYPE arg3);

// Room Draw Polygon Type 0
void func_80095AB4(PlayState* play, Room* room, u32 flags);

#define SHAPE_SORT_MAX 64

typedef struct struct_80095D04 {
    /* 0x00 */ PolygonDlist2* unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ struct struct_80095D04* unk_08;
    /* 0x0C */ struct struct_80095D04* unk_0C;
} struct_80095D04; // size = 0x10

// Room Draw Polygon Type 2
void func_80095D04(PlayState* play, Room* room, u32 flags);

#define JPEG_MARKER 0xFFD8FFE0

s32 func_80096238(void* data);

void func_8009638C(Gfx** displayList, void* source, void* tlut, u16 width, u16 height, u8 fmt, u8 siz, u16 mode0,
                   u16 tlutCount, f32 frameX, f32 frameY);

// Room Draw Polygon Type 1 - Single Format
void func_80096680(PlayState* play, Room* room, u32 flags);

BgImage* func_80096A74(PolygonType1* polygon1, PlayState* play);

// Room Draw Polygon Type 1 - Multi Format
void func_80096B6C(PlayState* play, Room* room, u32 flags);

// Room Draw Polygon Type 1
void func_80096F6C(PlayState* play, Room* room, u32 flags);

void func_80096FD4(PlayState* play, Room* room);

u32 func_80096FE8(PlayState* play, RoomContext* roomCtx);

s32 func_8009728C(PlayState* play, RoomContext* roomCtx, s32 roomNum);

s32 func_800973FC(PlayState* play, RoomContext* roomCtx);

void Room_Draw(PlayState* play, Room* room, u32 flags);

void func_80097534(PlayState* play, RoomContext* roomCtx);

#endif
