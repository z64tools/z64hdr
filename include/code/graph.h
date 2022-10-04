#ifndef Z64_GRAPH_H
#define Z64_GRAPH_H

#include "global.h"
#include "vt.h"

#define GFXPOOL_HEAD_MAGIC 0x1234
#define GFXPOOL_TAIL_MAGIC 0x5678

extern OSTime sGraphUpdateTime;
extern OSTime sGraphSetTaskTime;
extern FaultClient sGraphFaultClient;
extern CfbInfo sGraphCfbInfos[3];
extern FaultClient sGraphUcodeFaultClient;

extern UCodeInfo D_8012D230[3];

extern UCodeInfo D_8012D248[3];

void Graph_FaultClient(void);

void Graph_DisassembleUCode(Gfx* workBuf);

void Graph_UCodeFaultClient(Gfx* workBuf);

void Graph_InitTHGA(GraphicsContext* gfxCtx);

GameStateOverlay* Graph_GetNextGameState(GameState* gameState);

void Graph_Init(GraphicsContext* gfxCtx);

void Graph_Destroy(GraphicsContext* gfxCtx);

void Graph_TaskSet00(GraphicsContext* gfxCtx);

void Graph_Update(GraphicsContext* gfxCtx, GameState* gameState);

void Graph_ThreadEntry(void* arg0);

void* Graph_Alloc(GraphicsContext* gfxCtx, size_t size);

void* Graph_Alloc2(GraphicsContext* gfxCtx, size_t size);

void Graph_OpenDisps(Gfx** dispRefs, GraphicsContext* gfxCtx, const char* file, s32 line);

void Graph_CloseDisps(Gfx** dispRefs, GraphicsContext* gfxCtx, const char* file, s32 line);

Gfx* Graph_GfxPlusOne(Gfx* gfx);

Gfx* Graph_BranchDlist(Gfx* gfx, Gfx* dst);

void* Graph_DlistAlloc(Gfx** gfx, u32 size);

#endif
