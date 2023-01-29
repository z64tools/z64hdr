#ifndef Z64_MAP_MARK_H
#define Z64_MAP_MARK_H

#include "global.h"
#include "vt.h"
#include "assets/textures/parameter_static/parameter_static.h"

typedef struct {
    /* 0x00 */ void* texture;
    /* 0x04 */ u32 imageFormat;
    /* 0x08 */ u32 imageSize;
    /* 0x0C */ u32 textureWidth;
    /* 0x10 */ u32 textureHeight;
    /* 0x14 */ u32 rectWidth;
    /* 0x18 */ u32 rectHeight;
    /* 0x1C */ u32 dsdx;
    /* 0x20 */ u32 dtdy;
} MapMarkInfo; // size = 0x24

typedef struct {
    /* 0x00 */ void* loadedRamAddr; // original name: "allocp"
    /* 0x04 */ uintptr_t vromStart;
    /* 0x08 */ uintptr_t vromEnd;
    /* 0x0C */ void* vramStart;
    /* 0x10 */ void* vramEnd;
    /* 0x14 */ void* vramTable;
} MapMarkDataOverlay; // size = 0x18

extern u32 sBaseImageSizes[];
extern u32 sLoadBlockImageSizes[];
extern u32 sIncrImageSizes[];
extern u32 sShiftImageSizes[];
extern u32 sBytesImageSizes[];
extern u32 sLineBytesImageSizes[];

#define G_IM_SIZ_MARK sBaseImageSizes[markInfo->imageSize]
#define G_IM_SIZ_MARK_LOAD_BLOCK sLoadBlockImageSizes[markInfo->imageSize]
#define G_IM_SIZ_MARK_INCR sIncrImageSizes[markInfo->imageSize]
#define G_IM_SIZ_MARK_SHIFT sShiftImageSizes[markInfo->imageSize]
#define G_IM_SIZ_MARK_BYTES sBytesImageSizes[markInfo->imageSize]
#define G_IM_SIZ_MARK_LINE_BYTES sLineBytesImageSizes[markInfo->imageSize]

extern MapMarkInfo sMapMarkInfoTable[];

extern MapMarkDataOverlay sMapMarkDataOvl;

extern MapMarkData** sLoadedMarkDataTable;

void MapMark_Init(PlayState* play);

void MapMark_ClearPointers(PlayState* play);

void MapMark_DrawForDungeon(PlayState* play);

void MapMark_Draw(PlayState* play);

#endif
