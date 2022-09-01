#ifndef Z64_EN_ITEM00_H
#define Z64_EN_ITEM00_H

#include "global.h"
#include "overlays/actors/ovl_En_Elf/z_en_elf.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "overlays/effects/ovl_Effect_Ss_Dead_Sound/z_eff_ss_dead_sound.h"

#define FLAGS 0

void EnItem00_Init(Actor* thisx, PlayState* play);
void EnItem00_Destroy(Actor* thisx, PlayState* play);
void EnItem00_Update(Actor* thisx, PlayState* play);
void EnItem00_Draw(Actor* thisx, PlayState* play);

void func_8001DFC8(EnItem00* this, PlayState* play);
void func_8001E1C8(EnItem00* this, PlayState* play);
void func_8001E304(EnItem00* this, PlayState* play);
void func_8001E5C8(EnItem00* this, PlayState* play);

void EnItem00_DrawRupee(EnItem00* this, PlayState* play);
void EnItem00_DrawCollectible(EnItem00* this, PlayState* play);
void EnItem00_DrawHeartContainer(EnItem00* this, PlayState* play);
void EnItem00_DrawHeartPiece(EnItem00* this, PlayState* play);

extern const ActorInit En_Item00_InitVars;

extern ColliderCylinderInit sCylinderInit;

extern InitChainEntry sInitChain[];

extern Color_RGBA8 sEffectPrimColor;
extern Color_RGBA8 sEffectEnvColor;
extern Vec3f sEffectVelocity;
extern Vec3f sEffectAccel;

extern void* sRupeeTex[];

extern void* sItemDropTex[];

extern u8 sItemDropIds[];

extern u8 sDropQuantities[];

void EnItem00_SetupAction(EnItem00* this, EnItem00ActionFunc actionFunc);

void EnItem00_Init(Actor* thisx, PlayState* play);

void EnItem00_Destroy(Actor* thisx, PlayState* play);

void func_8001DFC8(EnItem00* this, PlayState* play);

void func_8001E1C8(EnItem00* this, PlayState* play);

void func_8001E304(EnItem00* this, PlayState* play);

void func_8001E5C8(EnItem00* this, PlayState* play);

// The BSS in the function acted weird in the past. It is matching now but might cause issues in the future
void EnItem00_Update(Actor* thisx, PlayState* play);

void EnItem00_Draw(Actor* thisx, PlayState* play);

/**
 * Draw Function used for Rupee types of En_Item00.
 */
void EnItem00_DrawRupee(EnItem00* this, PlayState* play);

/**
 * Draw Function used for most collectible types of En_Item00 (ammo, bombs, sticks, nuts, magic...).
 */
void EnItem00_DrawCollectible(EnItem00* this, PlayState* play);

/**
 * Draw Function used for the Heart Container type of En_Item00.
 */
void EnItem00_DrawHeartContainer(EnItem00* this, PlayState* play);

/**
 * Draw Function used for the Piece of Heart type of En_Item00.
 */
void EnItem00_DrawHeartPiece(EnItem00* this, PlayState* play);

/**
 * Converts a given drop type ID based on link's current age, health and owned items.
 * Returns a new drop type ID or -1 to cancel the drop.
 */
s16 func_8001F404(s16 dropId);

// External functions used by other actors to drop collectibles, which usually results in spawning an En_Item00 actor.

EnItem00* Item_DropCollectible(PlayState* play, Vec3f* spawnPos, s16 params);

EnItem00* Item_DropCollectible2(PlayState* play, Vec3f* spawnPos, s16 params);

void Item_DropCollectibleRandom(PlayState* play, Actor* fromActor, Vec3f* spawnPos, s16 params);

#endif
