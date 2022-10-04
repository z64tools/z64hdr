#ifndef Z64_CODE_80043480_H
#define Z64_CODE_80043480_H

#include "global.h"

void DynaPolyActor_Init(DynaPolyActor* dynaActor, s32 flags);

void DynaPolyActor_UnsetAllInteractFlags(DynaPolyActor* dynaActor);

void DynaPolyActor_SetActorOnTop(DynaPolyActor* dynaActor);

void DynaPolyActor_SetPlayerOnTop(DynaPolyActor* dynaActor);

void DynaPoly_SetPlayerOnTop(CollisionContext* colCtx, s32 floorBgId);

void DynaPolyActor_SetPlayerAbove(DynaPolyActor* dynaActor);

void DynaPoly_SetPlayerAbove(CollisionContext* colCtx, s32 floorBgId);

void func_80043538(DynaPolyActor* dynaActor);

s32 DynaPolyActor_IsActorOnTop(DynaPolyActor* dynaActor);

s32 DynaPolyActor_IsPlayerOnTop(DynaPolyActor* dynaActor);

s32 DynaPolyActor_IsPlayerAbove(DynaPolyActor* dynaActor);

s32 func_800435B4(DynaPolyActor* dynaActor);

s32 func_800435D8(PlayState* play, DynaPolyActor* dynaActor, s16 arg2, s16 arg3, s16 arg4);

#endif
