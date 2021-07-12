#ifndef _SYMBOLS_H_
#define _SYMBOLS_H_

extern GameInfo* gGameInfo;
extern SaveContext gSaveContext;
extern GlobalContext gGlobalContext;

extern u32 gSegments[16];

extern DmaEntry gDmaDataTable[];
extern RomFile gObjectTable[402];
extern RomFile gActorOverlayTable[];
extern RomFile gSceneTable[];

extern u32 gUpgradeMasks[8];
extern u32 gUpgradeShifts[8];
extern u32 gBitFlags[32];

extern s32 gScreenWidth;
extern s32 gScreenHeight;
extern Mtx gMtxClear;
extern u16 gTimeSpeed;

#endif
