#ifndef __Z_MAP_EXP__
#define __Z_MAP_EXP__

#include "global.h"
#include "vt.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/textures/parameter_static/parameter_static.h"

extern s16 sPlayerInitialPosX;
extern s16 sPlayerInitialPosZ;
extern s16 sPlayerInitialDirection;
extern s16 sEntranceIconMapIndex;

void Map_SetPaletteData(PlayState* play, s16 room);
void Minimap_DrawCompassIcons(PlayState* play);
s16 Map_GetFloorTextIndexOffset(s32 mapIndex, s32 floor);

#endif // __Z_MAP_EXP__
