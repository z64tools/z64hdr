#ifndef _SYMBOLS_H_
#define _SYMBOLS_H_
#define __STAHP__

#include "../z64.h"

extern GameInfo* gGameInfo;
asm("gGameInfo = 0x8015FA90");

#define GLOBAL_CONTEXT (GlobalContext*)0x80212020

extern SaveContext gSaveContext;
asm ("gSaveContext = 0x8015E660;");

extern GlobalContext* gGlobalContext;
asm("gGlobalContext = 0x80212020");

extern u32 gSegments[16];
asm ("gSegments = 0x80166FA8");

extern DmaEntry gDmaDataTable[];
asm("gDmaDataTable = 0x80016DA0");

extern RomFile gObjectTable[402];
asm ("gObjectTable = 0x80127528;");

extern RomFile gActorOverlayTable[];
asm ("gObjectTable = 0x801162A0;");

extern RomFile gSceneTable[];
asm ("gObjectTable = 0x80129A10;");

extern u32 gUpgradeMasks[8];
asm("gUpgradeMasks = 0x801271B0");

extern u32 gUpgradeShifts[8];
asm("gUpgradeShifts = 0x801271F4");

extern s32 gScreenWidth;
asm ("gScreenWidth = 0x8012D270");

extern s32 gScreenHeight;
asm ("gScreenHeight = 0x8012D274");

extern Mtx gMtxClear;
asm ("gMtxClear = 0x8012DB20");

extern u16 gTimeSpeed;
asm ("gTimeSpeed = 0x8011FB40");

extern u32 gBitFlags[32];
asm ("gBitFlags = 0x80127120;");

#endif