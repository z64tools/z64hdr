#ifndef Z64_MAP_DATA_H
#define Z64_MAP_DATA_H

#include "global.h"

extern s16 sFloorTexIndexOffset[10][8];

extern s16 sBossFloor[8];

extern s16 sRoomPalette[10][32];

extern s16 sMaxPaletteCount[10];

extern s16 sPaletteRoom[10][8][14];

extern s16 sRoomCompassOffsetX[10][44];

extern s16 sRoomCompassOffsetY[10][44];

extern u8 sDgnMinimapCount[12];

extern u16 sDgnMinimapTexIndexOffset[10];

extern u16 sOwMinimapTexSize[24];

extern u16 sOwMinimapTexOffset[24];

extern s16 sOwMinimapPosX[24];

extern s16 sOwMinimapPosY[24];

extern s16 sOwCompassInfo[24][4];

extern s16 sDgnTexIndexBase[10];

extern s16 sDgnCompassInfo[10][4];

extern s16 sOwMinimapWidth[24];

extern s16 sOwMinimapHeight[24];

extern s16 sOwEntranceIconPosX[24];

extern s16 sOwEntranceIconPosY[24];

extern u16 sOwEntranceFlag[20];

extern f32 sFloorCoordY[10][8];

extern u16 sSwitchEntryCount[10];

extern u8 sSwitchFromRoom[10][51];

extern u8 sSwitchFromFloor[10][51];

extern u8 sSwitchToRoom[10][51];

extern u8 sFloorID[10][8]; /* clang-format on */

/* Y coord of big skull icon on map screen, relative to center of screen.
   -99 if no dungeon map, otherwise (51 - 14 * FloorNumber) */
extern s16 sSkullFloorIconY[10];

extern MapData gMapDataTable;

#endif
