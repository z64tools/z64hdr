extern s16 sPlayerInitialPosX;
extern s16 sPlayerInitialPosZ;
extern s16 sPlayerInitialDirection;
extern s16 sEntranceIconMapIndex;

void Map_SetPaletteData(PlayState* play, s16 room);
void Minimap_DrawCompassIcons(PlayState* play);
s16 Map_GetFloorTextIndexOffset(s32 mapIndex, s32 floor);