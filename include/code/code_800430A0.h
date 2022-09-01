#ifndef CODE_800430A0_H
#define CODE_800430A0_H

#include "global.h"
#include "vt.h"

void func_800430A0(CollisionContext* colCtx, s32 bgId, Actor* actor);

/**
 * Rotate actor
 */
void func_800432A0(CollisionContext* colCtx, s32 bgId, Actor* actor);

void func_80043334(CollisionContext* colCtx, Actor* actor, s32 bgId);

/**
 * Transform actor's position
 * `actor` is the actor to update
 */
s32 func_800433A4(CollisionContext* colCtx, s32 bgId, Actor* actor);

#endif
