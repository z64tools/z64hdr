#ifndef Z64_ROOM_H
#define Z64_ROOM_H

#include "global.h"
#include "vt.h"

extern Vec3f D_801270A0;

// unused
extern Gfx D_801270B0[];

void Room_DrawNormal(PlayState* play, Room* room, u32 flags);
void Room_DrawImage(PlayState* play, Room* room, u32 flags);
void Room_DrawCullable(PlayState* play, Room* room, u32 flags);

extern void (*sRoomDrawHandlers[ROOM_SHAPE_TYPE_MAX])(PlayState* play, Room* room, u32 flags);

void func_80095AA0(PlayState* play, Room* room, Input* input, s32 arg3);

void Room_DrawNormal(PlayState* play, Room* room, u32 flags);

typedef enum {
    /* 0 */ ROOM_CULL_DEBUG_MODE_OFF,
    /* 1 */ ROOM_CULL_DEBUG_MODE_UP_TO_TARGET,
    /* 2 */ ROOM_CULL_DEBUG_MODE_ONLY_TARGET
} RoomCullableDebugMode;

typedef struct RoomShapeCullableEntryLinked {
    /* 0x00 */ RoomShapeCullableEntry* entry;
    /* 0x04 */ f32 boundsNearZ;
    /* 0x08 */ struct RoomShapeCullableEntryLinked* prev;
    /* 0x0C */ struct RoomShapeCullableEntryLinked* next;
} RoomShapeCullableEntryLinked; // size = 0x10

/**
 * Handle room drawing for the "cullable" type of room shape.
 *
 * Each entry referenced by the room shape struct is attached to display lists, and a position and radius indicating the
 * bounding sphere for the geometry drawn.
 * The first step Z-sorts the entries, and excludes the entries with a bounding sphere that is entirely before or
 * beyond the rendered depth range.
 * The second step draws the entries that remain, from nearest to furthest.
 */
void Room_DrawCullable(PlayState* play, Room* room, u32 flags);

#define JPEG_MARKER 0xFFD8FFE0

/**
 * If the data is JPEG, decode it and overwrite the initial data with the result.
 * Uses the depth frame buffer as temporary storage.
 */
s32 Room_DecodeJpeg(void* data);

void Room_DrawBackground2D(Gfx** gfxP, void* tex, void* tlut, u16 width, u16 height, u8 fmt, u8 siz, u16 tlutMode,
                           u16 tlutCount, f32 offsetX, f32 offsetY);

#define ROOM_IMAGE_NODRAW_BACKGROUND (1 << 0)
#define ROOM_IMAGE_NODRAW_OPA (1 << 1)
#define ROOM_IMAGE_NODRAW_XLU (1 << 2)

void Room_DrawImageSingle(PlayState* play, Room* room, u32 flags);

RoomShapeImageMultiBgEntry* Room_GetImageMultiBgEntry(RoomShapeImageMulti* roomShapeImageMulti, PlayState* play);

void Room_DrawImageMulti(PlayState* play, Room* room, u32 flags);

void Room_DrawImage(PlayState* play, Room* room, u32 flags);

void func_80096FD4(PlayState* play, Room* room);

u32 func_80096FE8(PlayState* play, RoomContext* roomCtx);

s32 func_8009728C(PlayState* play, RoomContext* roomCtx, s32 roomNum);

s32 func_800973FC(PlayState* play, RoomContext* roomCtx);

void Room_Draw(PlayState* play, Room* room, u32 flags);

void func_80097534(PlayState* play, RoomContext* roomCtx);

#endif
