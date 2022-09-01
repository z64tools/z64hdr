#ifndef GAME_H
#define GAME_H

#include "global.h"
#include "vt.h"

extern SpeedMeter D_801664D0;
extern struct_801664F0 D_801664F0;
extern struct_80166500 D_80166500;
extern VisMono sMonoColors;
extern ViMode sViMode;
extern FaultClient sGameFaultClient;
extern u16 sLastButtonPressed;

void GameState_FaultPrint(void);

void GameState_SetFBFilter(Gfx** gfx);

void func_800C4344(GameState* gameState);

void GameState_DrawInputDisplay(u16 input, Gfx** gfx);

void GameState_Draw(GameState* gameState, GraphicsContext* gfxCtx);

void GameState_SetFrameBuffer(GraphicsContext* gfxCtx);

void func_800C49F4(GraphicsContext* gfxCtx);

void PadMgr_RequestPadData(PadMgr*, Input*, s32);

void GameState_ReqPadData(GameState* gameState);

void GameState_Update(GameState* gameState);

void GameState_InitArena(GameState* gameState, size_t size);

void GameState_Realloc(GameState* gameState, size_t size);

void GameState_Init(GameState* gameState, GameStateFunc init, GraphicsContext* gfxCtx);

void GameState_Destroy(GameState* gameState);

GameStateFunc GameState_GetInit(GameState* gameState);

size_t GameState_GetSize(GameState* gameState);

u32 GameState_IsRunning(GameState* gameState);

void* GameState_Alloc(GameState* gameState, size_t size, char* file, s32 line);

void* GameState_AllocEndAlign16(GameState* gameState, size_t size);

s32 GameState_GetArenaSize(GameState* gameState);

#endif
