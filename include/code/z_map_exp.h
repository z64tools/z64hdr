#ifndef Z_MAP_EXP_H
#define Z_MAP_EXP_H

#include "global.h"
#include "vt.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/textures/parameter_static/parameter_static.h"

extern MapData* gMapData;

extern s16 sPlayerInitialPosX;
extern s16 sPlayerInitialPosZ;
extern s16 sPlayerInitialDirection;
extern s16 sEntranceIconMapIndex;

void Map_SavePlayerInitialInfo(PlayState* play);

void Map_SetPaletteData(PlayState* play, s16 room);

void Map_SetFloorPalettesData(PlayState* play, s16 floor);

void Map_InitData(PlayState* play, s16 room);

void Map_InitRoomData(PlayState* play, s16 room);

void Map_Destroy(PlayState* play);

void Map_Init(PlayState* play);

void Minimap_DrawCompassIcons(PlayState* play);

void Minimap_Draw(PlayState* play);

s16 Map_GetFloorTextIndexOffset(s32 mapIndex, s32 floor);

void Map_Update(PlayState* play);

#endif
