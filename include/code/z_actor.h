#ifndef Z_ACTOR_H
#define Z_ACTOR_H

#include "global.h"
#include "vt.h"

#include "overlays/actors/ovl_Arms_Hook/z_arms_hook.h"
#include "overlays/actors/ovl_En_Part/z_en_part.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"
#include "assets/objects/object_bdoor/object_bdoor.h"

extern CollisionPoly* sCurCeilingPoly;
extern s32 sCurCeilingBgId;

void ActorShape_Init(ActorShape* shape, f32 yOffset, ActorShadowFunc shadowDraw, f32 shadowScale);

void ActorShadow_Draw(Actor* actor, Lights* lights, PlayState* play, Gfx* dlist, Color_RGBA8* color);

void ActorShadow_DrawCircle(Actor* actor, Lights* lights, PlayState* play);

void ActorShadow_DrawWhiteCircle(Actor* actor, Lights* lights, PlayState* play);

void ActorShadow_DrawHorse(Actor* actor, Lights* lights, PlayState* play);

void ActorShadow_DrawFoot(PlayState* play, Light* light, MtxF* arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6);

void ActorShadow_DrawFeet(Actor* actor, Lights* lights, PlayState* play);

void Actor_SetFeetPos(Actor* actor, s32 limbIndex, s32 leftFootIndex, Vec3f* leftFootPos, s32 rightFootIndex,
                      Vec3f* rightFootPos);

void Actor_ProjectPos(PlayState* play, Vec3f* src, Vec3f* xyzDest, f32* cappedInvWDest);

typedef struct {
    /* 0x00 */ Color_RGBA8 inner;
    /* 0x04 */ Color_RGBA8 outer;
} NaviColor; // size = 0x8

extern NaviColor sNaviColorList[];

// unused
extern Gfx D_80115FF0[];

void func_8002BE64(TargetContext* targetCtx, s32 index, f32 arg2, f32 arg3, f32 arg4);

void func_8002BE98(TargetContext* targetCtx, s32 actorCategory, PlayState* play);

void Actor_SetNaviToActor(TargetContext* targetCtx, Actor* actor, s32 actorCategory, PlayState* play);

void func_8002C0C0(TargetContext* targetCtx, Actor* actor, PlayState* play);

void func_8002C124(TargetContext* targetCtx, PlayState* play);

void func_8002C7BC(TargetContext* targetCtx, Player* player, Actor* actorArg, PlayState* play);

/**
 * Tests if current scene switch flag is set.
 */
s32 Flags_GetSwitch(PlayState* play, s32 flag);

/**
 * Sets current scene switch flag.
 */
void Flags_SetSwitch(PlayState* play, s32 flag);

/**
 * Unsets current scene switch flag.
 */
void Flags_UnsetSwitch(PlayState* play, s32 flag);

/**
 * Tests if unknown flag is set.
 */
s32 Flags_GetUnknown(PlayState* play, s32 flag);

/**
 * Sets unknown flag.
 */
void Flags_SetUnknown(PlayState* play, s32 flag);

/**
 * Unsets unknown flag.
 */
void Flags_UnsetUnknown(PlayState* play, s32 flag);

/**
 * Tests if current scene chest flag is set.
 */
s32 Flags_GetTreasure(PlayState* play, s32 flag);

/**
 * Sets current scene chest flag.
 */
void Flags_SetTreasure(PlayState* play, s32 flag);

/**
 * Tests if current scene clear flag is set.
 */
s32 Flags_GetClear(PlayState* play, s32 flag);

/**
 * Sets current scene clear flag.
 */
void Flags_SetClear(PlayState* play, s32 flag);

/**
 * Unsets current scene clear flag.
 */
void Flags_UnsetClear(PlayState* play, s32 flag);

/**
 * Tests if current scene temp clear flag is set.
 */
s32 Flags_GetTempClear(PlayState* play, s32 flag);

/**
 * Sets current scene temp clear flag.
 */
void Flags_SetTempClear(PlayState* play, s32 flag);

/**
 * Unsets current scene temp clear flag.
 */
void Flags_UnsetTempClear(PlayState* play, s32 flag);

/**
 * Tests if current scene collectible flag is set.
 */
s32 Flags_GetCollectible(PlayState* play, s32 flag);

/**
 * Sets current scene collectible flag.
 */
void Flags_SetCollectible(PlayState* play, s32 flag);

void TitleCard_Init(PlayState* play, TitleCardContext* titleCtx);

void TitleCard_InitBossName(PlayState* play, TitleCardContext* titleCtx, void* texture, s16 x, s16 y, u8 width,
                            u8 height);

void TitleCard_InitPlaceName(PlayState* play, TitleCardContext* titleCtx, void* texture, s32 x, s32 y, s32 width,
                             s32 height, s32 delay);

void TitleCard_Update(PlayState* play, TitleCardContext* titleCtx);

void TitleCard_Draw(PlayState* play, TitleCardContext* titleCtx);

s32 TitleCard_Clear(PlayState* play, TitleCardContext* titleCtx);

void Actor_Kill(Actor* actor);

void Actor_SetWorldToHome(Actor* actor);

void Actor_SetFocus(Actor* actor, f32 yOffset);

void Actor_SetWorldRotToShape(Actor* actor);

void Actor_SetShapeRotToWorld(Actor* actor);

void Actor_SetScale(Actor* actor, f32 scale);

void Actor_SetObjectDependency(PlayState* play, Actor* actor);

void Actor_Init(Actor* actor, PlayState* play);

void Actor_Destroy(Actor* actor, PlayState* play);

void func_8002D7EC(Actor* actor);

void func_8002D868(Actor* actor);

void Actor_MoveForward(Actor* actor);

void func_8002D908(Actor* actor);

void func_8002D97C(Actor* actor);

void func_8002D9A4(Actor* actor, f32 arg1);

void func_8002D9F8(Actor* actor, SkelAnime* skelAnime);

s16 Actor_WorldYawTowardActor(Actor* actorA, Actor* actorB);

s16 Actor_FocusYawTowardActor(Actor* actorA, Actor* actorB);

s16 Actor_WorldYawTowardPoint(Actor* actor, Vec3f* refPoint);

s16 Actor_WorldPitchTowardActor(Actor* actorA, Actor* actorB);

s16 Actor_FocusPitchTowardActor(Actor* actorA, Actor* actorB);

s16 Actor_WorldPitchTowardPoint(Actor* actor, Vec3f* refPoint);

f32 Actor_WorldDistXYZToActor(Actor* actorA, Actor* actorB);

f32 Actor_WorldDistXYZToPoint(Actor* actor, Vec3f* refPoint);

f32 Actor_WorldDistXZToActor(Actor* actorA, Actor* actorB);

f32 Actor_WorldDistXZToPoint(Actor* actor, Vec3f* refPoint);

void func_8002DBD0(Actor* actor, Vec3f* result, Vec3f* arg2);

f32 Actor_HeightDiff(Actor* actorA, Actor* actorB);

f32 Player_GetHeight(Player* player);

f32 func_8002DCE4(Player* player);

s32 func_8002DD6C(Player* player);

s32 func_8002DD78(Player* player);

s32 func_8002DDA8(PlayState* play);

s32 func_8002DDE4(PlayState* play);

s32 func_8002DDF4(PlayState* play);

void func_8002DE04(PlayState* play, Actor* actorA, Actor* actorB);

void func_8002DE74(PlayState* play, Player* player);

void Actor_MountHorse(PlayState* play, Player* player, Actor* horse);

s32 func_8002DEEC(Player* player);

void func_8002DF18(PlayState* play, Player* player);

s32 func_8002DF38(PlayState* play, Actor* actor, u8 csMode);

s32 func_8002DF54(PlayState* play, Actor* actor, u8 csMode);

void func_8002DF90(DynaPolyActor* dynaActor);

void func_8002DFA4(DynaPolyActor* dynaActor, f32 arg1, s16 arg2);

/**
 * Chcek if the player is facing the specified actor.
 * The maximum angle difference that qualifies as "facing" is specified by `maxAngle`.
 */
s32 Player_IsFacingActor(Actor* actor, s16 maxAngle, PlayState* play);

/**
 * Chcek if `actorB` is facing `actorA`.
 * The maximum angle difference that qualifies as "facing" is specified by `maxAngle`.
 *
 * This function is unused in the original game.
 */
s32 Actor_ActorBIsFacingActorA(Actor* actorA, Actor* actorB, s16 maxAngle);

/**
 * Chcek if the specified actor is facing the player.
 * The maximum angle difference that qualifies as "facing" is specified by `maxAngle`.
 */
s32 Actor_IsFacingPlayer(Actor* actor, s16 maxAngle);

/**
 * Chcek if `actorA` is facing `actorB`.
 * The maximum angle difference that qualifies as "facing" is specified by `maxAngle`.
 *
 * This function is unused in the original game.
 */
s32 Actor_ActorAIsFacingActorB(Actor* actorA, Actor* actorB, s16 maxAngle);

/**
 * Chcek if the specified actor is facing the player and is nearby.
 * The maximum angle difference that qualifies as "facing" is specified by `maxAngle`.
 * The minimum distance that qualifies as "nearby" is specified by `range`.
 */
s32 Actor_IsFacingAndNearPlayer(Actor* actor, f32 range, s16 maxAngle);

/**
 * Chcek if `actorA` is facing `actorB` and is nearby.
 * The maximum angle difference that qualifies as "facing" is specified by `maxAngle`.
 * The minimum distance that qualifies as "nearby" is specified by `range`.
 */
s32 Actor_ActorAIsFacingAndNearActorB(Actor* actorA, Actor* actorB, f32 range, s16 maxAngle);

s32 func_8002E234(Actor* actor, f32 arg1, s32 arg2);

s32 func_8002E2AC(PlayState* play, Actor* actor, Vec3f* arg2, s32 arg3);

void Actor_UpdateBgCheckInfo(PlayState* play, Actor* actor, f32 wallCheckHeight, f32 wallCheckRadius,
                             f32 ceilingCheckHeight, s32 flags);

extern Mtx D_8015BBA8;

Gfx* func_8002E830(Vec3f* object, Vec3f* eye, Vec3f* lightDir, GraphicsContext* gfxCtx, Gfx* gfx, Hilite** hilite);

Hilite* func_8002EABC(Vec3f* object, Vec3f* eye, Vec3f* lightDir, GraphicsContext* gfxCtx);

Hilite* func_8002EB44(Vec3f* object, Vec3f* eye, Vec3f* lightDir, GraphicsContext* gfxCtx);

void func_8002EBCC(Actor* actor, PlayState* play, s32 flag);

void func_8002ED80(Actor* actor, PlayState* play, s32 flag);

PosRot* Actor_GetFocus(PosRot* dest, Actor* actor);

PosRot* Actor_GetWorld(PosRot* dest, Actor* actor);

PosRot* Actor_GetWorldPosShapeRot(PosRot* arg0, Actor* actor);

f32 func_8002EFC0(Actor* actor, Player* player, s16 arg2);

typedef struct {
    /* 0x0 */ f32 rangeSq;
    /* 0x4 */ f32 leashScale;
} TargetRangeParams; // size = 0x8

#define TARGET_RANGE(range, leash) \
    { SQ(range), (f32)range / leash }

extern TargetRangeParams D_80115FF8[];

u32 func_8002F090(Actor* actor, f32 arg1);

s32 func_8002F0C8(Actor* actor, Player* player, s32 flag);

u32 Actor_ProcessTalkRequest(Actor* actor, PlayState* play);

s32 func_8002F1C4(Actor* actor, PlayState* play, f32 arg2, f32 arg3, u32 exchangeItemId);

s32 func_8002F298(Actor* actor, PlayState* play, f32 arg2, u32 exchangeItemId);

s32 func_8002F2CC(Actor* actor, PlayState* play, f32 arg2);

s32 func_8002F2F4(Actor* actor, PlayState* play);

u32 Actor_TextboxIsClosing(Actor* actor, PlayState* play);

s8 func_8002F368(PlayState* play);

void Actor_GetScreenPos(PlayState* play, Actor* actor, s16* x, s16* y);

u32 Actor_HasParent(Actor* actor, PlayState* play);

s32 func_8002F434(Actor* actor, PlayState* play, s32 getItemId, f32 xzRange, f32 yRange);

void func_8002F554(Actor* actor, PlayState* play, s32 getItemId);

void func_8002F580(Actor* actor, PlayState* play);

u32 Actor_HasNoParent(Actor* actor, PlayState* play);

void func_8002F5C4(Actor* actorA, Actor* actorB, PlayState* play);

void func_8002F5F0(Actor* actor, PlayState* play);

s32 Actor_IsMounted(PlayState* play, Actor* horse);

u32 Actor_SetRideActor(PlayState* play, Actor* horse, s32 mountSide);

s32 Actor_NotMounted(PlayState* play, Actor* horse);

void func_8002F698(PlayState* play, Actor* actor, f32 arg2, s16 arg3, f32 arg4, u32 arg5, u32 arg6);

void func_8002F6D4(PlayState* play, Actor* actor, f32 arg2, s16 arg3, f32 arg4, u32 arg5);

void func_8002F71C(PlayState* play, Actor* actor, f32 arg2, s16 arg3, f32 arg4);

void func_8002F758(PlayState* play, Actor* actor, f32 arg2, s16 arg3, f32 arg4, u32 arg5);

void func_8002F7A0(PlayState* play, Actor* actor, f32 arg2, s16 arg3, f32 arg4);

void func_8002F7DC(Actor* actor, u16 sfxId);

void Audio_PlayActorSound2(Actor* actor, u16 sfxId);

void func_8002F850(PlayState* play, Actor* actor);

void func_8002F8F0(Actor* actor, u16 sfxId);

void func_8002F91C(Actor* actor, u16 sfxId);

void func_8002F948(Actor* actor, u16 sfxId);

void func_8002F974(Actor* actor, u16 sfxId);

void func_8002F994(Actor* actor, s32 arg1);

// Tests if something hit Jabu Jabu surface, displaying hit splash and playing sfx if true
s32 func_8002F9EC(PlayState* play, Actor* actor, CollisionPoly* poly, s32 bgId, Vec3f* pos);

// Local data used for Farore's Wind light (stored in BSS, possibly a struct?)
extern LightInfo D_8015BC00;
extern LightNode* D_8015BC10;
extern s32 D_8015BC14;
extern f32 D_8015BC18;

void func_8002FA60(PlayState* play);

void Actor_DrawFaroresWindPointer(PlayState* play);

void func_80030488(PlayState* play);

void Actor_DisableLens(PlayState* play);

// Actor_InitContext
void func_800304DC(PlayState* play, ActorContext* actorCtx, ActorEntry* actorEntry);

extern u32 D_80116068[ACTORCAT_MAX];

void Actor_UpdateAll(PlayState* play, ActorContext* actorCtx);

void Actor_FaultPrint(Actor* actor, char* command);

void Actor_Draw(PlayState* play, Actor* actor);

void func_80030ED8(Actor* actor);

#define LENS_MASK_WIDTH 64
#define LENS_MASK_HEIGHT 64
// 26 and 6 are for padding between the mask texture and the screen borders
#define LENS_MASK_OFFSET_S ((SCREEN_WIDTH / 2 - LENS_MASK_WIDTH) - 26)
#define LENS_MASK_OFFSET_T ((SCREEN_HEIGHT / 2 - LENS_MASK_HEIGHT) - 6)

void Actor_DrawLensOverlay(GraphicsContext* gfxCtx);

void Actor_DrawLensActors(PlayState* play, s32 numInvisibleActors, Actor** invisibleActors);

s32 func_800314B0(PlayState* play, Actor* actor);

s32 func_800314D4(PlayState* play, Actor* actor, Vec3f* arg2, f32 arg3);

void func_800315AC(PlayState* play, ActorContext* actorCtx);

void func_80031A28(PlayState* play, ActorContext* actorCtx);

extern u8 sEnemyActorCategories[];

void Actor_FreezeAllEnemies(PlayState* play, ActorContext* actorCtx, s32 duration);

void func_80031B14(PlayState* play, ActorContext* actorCtx);

// Actor_CleanupContext
void func_80031C3C(ActorContext* actorCtx, PlayState* play);

/**
 * Adds a given actor instance at the front of the actor list of the specified category.
 * Also sets the actor instance as being of that category.
 */
void Actor_AddToCategory(ActorContext* actorCtx, Actor* actorToAdd, u8 actorCategory);

/**
 * Removes a given actor instance from its actor list.
 * Also sets the temp clear flag of the current room if the actor removed was the last enemy loaded.
 */
Actor* Actor_RemoveFromCategory(PlayState* play, ActorContext* actorCtx, Actor* actorToRemove);

void Actor_FreeOverlay(ActorOverlay* actorOverlay);

Actor* Actor_Spawn(ActorContext* actorCtx, PlayState* play, s16 actorId, f32 posX, f32 posY, f32 posZ, s16 rotX,
                   s16 rotY, s16 rotZ, s16 params);

Actor* Actor_SpawnAsChild(ActorContext* actorCtx, Actor* parent, PlayState* play, s16 actorId, f32 posX, f32 posY,
                          f32 posZ, s16 rotX, s16 rotY, s16 rotZ, s16 params);

void Actor_SpawnTransitionActors(PlayState* play, ActorContext* actorCtx);

Actor* Actor_SpawnEntry(ActorContext* actorCtx, ActorEntry* actorEntry, PlayState* play);

Actor* Actor_Delete(ActorContext* actorCtx, Actor* actor, PlayState* play);

s32 func_80032880(PlayState* play, Actor* actor);

extern Actor* D_8015BBE8;
extern Actor* D_8015BBEC;
extern f32 D_8015BBF0;
extern f32 sbgmEnemyDistSq;
extern s32 D_8015BBF8;
extern s16 D_8015BBFC;

void func_800328D4(PlayState* play, ActorContext* actorCtx, Player* player, u32 actorCategory);

extern u8 D_801160A0[];

Actor* func_80032AF0(PlayState* play, ActorContext* actorCtx, Actor** actorPtr, Player* player);

/**
 * Finds the first actor instance of a specified ID and category if there is one.
 */
Actor* Actor_Find(ActorContext* actorCtx, s32 actorId, s32 actorCategory);

/**
 * Play the death sound effect and flash the screen white for 4 frames.
 * While the screen flashes, the game freezes.
 */
void Enemy_StartFinishingBlow(PlayState* play, Actor* actor);

s16 func_80032CB4(s16* arg0, s16 arg1, s16 arg2, s16 arg3);

s16 func_80032D60(s16* arg0, s16 arg1, s16 arg2, s16 arg3);

void BodyBreak_Alloc(BodyBreak* bodyBreak, s32 count, PlayState* play);

void BodyBreak_SetInfo(BodyBreak* bodyBreak, s32 limbIndex, s32 minLimbIndex, s32 maxLimbIndex, u32 count, Gfx** dList,
                       s16 objectId);

s32 BodyBreak_SpawnParts(Actor* actor, BodyBreak* bodyBreak, PlayState* play, s16 type);

void Actor_SpawnFloorDustRing(PlayState* play, Actor* actor, Vec3f* posXZ, f32 radius, s32 amountMinusOne,
                              f32 randAccelWeight, s16 scale, s16 scaleStep, u8 useLighting);

void func_80033480(PlayState* play, Vec3f* posBase, f32 randRangeDiameter, s32 amountMinusOne, s16 scaleBase,
                   s16 scaleStep, u8 arg6);

Actor* Actor_GetCollidedExplosive(PlayState* play, Collider* collider);

Actor* func_80033684(PlayState* play, Actor* explosiveActor);

/**
 * Dynamically changes the category of a given actor instance.
 * This is done by moving it to the corresponding category list and setting its category variable accordingly.
 */
void Actor_ChangeCategory(PlayState* play, ActorContext* actorCtx, Actor* actor, u8 actorCategory);

/**
 * Checks if a hookshot or arrow actor is going to collide with the cylinder denoted by the
 * actor's `cylRadius` and `cylHeight`.
 * The check is only peformed if the projectile actor is within the provided sphere radius.
 *
 * Returns the actor if there will be collision, NULL otherwise.
 */
Actor* Actor_GetProjectileActor(PlayState* play, Actor* refActor, f32 radius);

/**
 * Sets the actor's text id with a dynamic prefix based on the current scene.
 */
void Actor_SetTextWithPrefix(PlayState* play, Actor* actor, s16 baseTextId);

/**
 * Checks if a given actor will be standing on the ground after being translated
 * by the provided distance and angle.
 *
 * Returns true if the actor will be standing on ground.
 */
s16 Actor_TestFloorInDirection(Actor* actor, PlayState* play, f32 distance, s16 angle);

/**
 * Returns true if the player is targeting the provided actor
 */
s32 Actor_IsTargeted(PlayState* play, Actor* actor);

/**
 * Returns true if the player is targeting an actor other than the provided actor
 */
s32 Actor_OtherIsTargeted(PlayState* play, Actor* actor);

f32 func_80033AEC(Vec3f* arg0, Vec3f* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

void func_80033C30(Vec3f* arg0, Vec3f* arg1, u8 alpha, PlayState* play);

void func_80033DB8(PlayState* play, s16 arg1, s16 arg2);

void func_80033E1C(PlayState* play, s16 arg1, s16 arg2, s16 arg3);

void func_80033E88(Actor* actor, PlayState* play, s16 arg2, s16 arg3);

f32 Rand_ZeroFloat(f32 f);

f32 Rand_CenteredFloat(f32 f);

typedef struct {
    /* 0x00 */ f32 chainAngle;
    /* 0x04 */ f32 chainLength;
    /* 0x08 */ f32 yShift;
    /* 0x0C */ f32 chainsScale;
    /* 0x10 */ f32 chainsRotZInit;
    /* 0x14 */ Gfx* chainDL;
    /* 0x18 */ Gfx* lockDL;
} DoorLockInfo; // size = 0x1C

extern DoorLockInfo sDoorLocksInfo[];

/**
 * Draws chains and lock of a locked door, of the specified `type` (see `DoorLockType`).
 * `frame` can be 0 to 10, where 0 is "open" and 10 is "closed", the chains slide accordingly.
 */
void Actor_DrawDoorLock(PlayState* play, s32 frame, s32 type);

void func_8003424C(PlayState* play, Vec3f* arg1);

void Actor_SetColorFilter(Actor* actor, s16 colorFlag, s16 colorIntensityMax, s16 xluFlag, s16 duration);

Hilite* func_800342EC(Vec3f* object, PlayState* play);

Hilite* func_8003435C(Vec3f* object, PlayState* play);

s32 func_800343CC(PlayState* play, Actor* actor, s16* arg2, f32 interactRange, callback1_800343CC unkFunc1,
                  callback2_800343CC unkFunc2);

typedef struct {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ s16 unk_08;
    /* 0x0A */ s16 unk_0A;
    /* 0x0C */ u8 unk_0C;
} struct_80116130_0; // size = 0x10

typedef struct {
    /* 0x00 */ struct_80116130_0 sub_00;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ s16 unk_14;
} struct_80116130; // size = 0x18

extern struct_80116130 D_80116130[];

void func_800344BC(Actor* actor, struct_80034A14_arg1* arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7,
                   u8 arg8);

s16 func_800347E8(s16 arg0);

s16 func_80034810(Actor* actor, struct_80034A14_arg1* arg1, f32 arg2, s16 arg3, s16 arg4);

void func_80034A14(Actor* actor, struct_80034A14_arg1* arg1, s16 arg2, s16 arg3);

Gfx* func_80034B28(GraphicsContext* gfxCtx);

Gfx* func_80034B54(GraphicsContext* gfxCtx);

void func_80034BA0(PlayState* play, SkelAnime* skelAnime, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw,
                   Actor* actor, s16 alpha);

void func_80034CC4(PlayState* play, SkelAnime* skelAnime, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw,
                   Actor* actor, s16 alpha);

s16 func_80034DD4(Actor* actor, PlayState* play, s16 arg2, f32 arg3);

void Animation_ChangeByInfo(SkelAnime* skelAnime, AnimationInfo* animationInfo, s32 index);

void func_80034F54(PlayState* play, s16* arg1, s16* arg2, s32 arg3);

void Actor_Noop(Actor* actor, PlayState* play);

s32 func_80035124(Actor* actor, PlayState* play);

#include "z_cheap_proc.h"

u8 func_800353E8(PlayState* play);

/**
 * Finds the first actor instance of a specified ID and category within a given range from
 * an actor if there is one. If the ID provided is -1, this will look for any actor of the
 * specified category rather than a specific ID.
 */
Actor* Actor_FindNearby(PlayState* play, Actor* refActor, s16 actorId, u8 actorCategory, f32 range);

s32 func_800354B4(PlayState* play, Actor* actor, f32 range, s16 arg3, s16 arg4, s16 arg5);

void func_8003555C(PlayState* play, Vec3f* pos, Vec3f* velocity, Vec3f* accel);

extern Vec3f D_80116268;
extern Vec3f D_80116274;

extern Gfx D_80116280[];

void func_800355B8(PlayState* play, Vec3f* pos);

u8 func_800355E4(PlayState* play, Collider* collider);

u8 Actor_ApplyDamage(Actor* actor);

void Actor_SetDropFlag(Actor* actor, ColliderInfo* colInfo, s32 freezeFlag);

void Actor_SetDropFlagJntSph(Actor* actor, ColliderJntSph* jntSph, s32 freezeFlag);

void func_80035844(Vec3f* arg0, Vec3f* arg1, Vec3s* arg2, s32 arg3);

/**
 * Spawns En_Part (Dissipating Flames) actor as a child of the given actor.
 */
Actor* func_800358DC(Actor* actor, Vec3f* spawnPos, Vec3s* spawnRot, f32* arg3, s32 timer, s16* unused, PlayState* play,
                     s16 params, s32 arg8);

void func_800359B8(Actor* actor, s16 arg1, Vec3s* arg2);

void func_80035B18(PlayState* play, Actor* actor, u16 textId);

/**
 * Tests if event_chk_inf flag is set.
 */
s32 Flags_GetEventChkInf(s32 flag);

/**
 * Sets event_chk_inf flag.
 */
void Flags_SetEventChkInf(s32 flag);

/**
 * Tests if "inf_table flag is set.
 */
s32 Flags_GetInfTable(s32 flag);

/**
 * Sets "inf_table" flag.
 */
void Flags_SetInfTable(s32 flag);

u32 func_80035BFC(PlayState* play, s16 arg1);

void func_80036E50(u16 textId, s16 arg1);

s32 func_800374E0(PlayState* play, Actor* actor, u16 textId);

u16 func_80037C30(PlayState* play, s16 arg1);

s32 func_80037C5C(PlayState* play, s16 arg1, u16 textId);

s32 func_80037C94(PlayState* play, Actor* actor, s32 arg2);

s32 func_80037CB8(PlayState* play, Actor* actor, s16 arg2);

s32 func_80037D98(PlayState* play, Actor* actor, s16 arg2, s32* arg3);

s32 Actor_TrackNone(Vec3s* headRot, Vec3s* torsoRot);

s32 Actor_TrackPoint(Actor* actor, Vec3f* target, Vec3s* headRot, Vec3s* torsoRot);

/**
 * Same as Actor_TrackPlayer, except use the actor's world position as the focus point, with the height
 * specified.
 *
 * @param play
 * @param actor
 * @param headRot the computed actor's head's rotation step
 * @param torsoRot the computed actor's torso's rotation step
 * @param focusHeight the height of the focus point relative to their world position
 *
 * @return true if rotated towards player, false if rotations were stepped back to zero.
 *
 * @note same note as Actor_TrackPlayer
 */
s32 Actor_TrackPlayerSetFocusHeight(PlayState* play, Actor* actor, Vec3s* headRot, Vec3s* torsoRot, f32 focusHeight);

/**
 * Computes the necessary HeadRot and TorsoRot steps to be added to the normal rotation to smoothly turn an actors's
 * head and torso towards the player if within a certain yaw, else smoothly returns the rotations back to zero.
 * Also sets the focus position with the specified point.
 *
 * @param play
 * @param actor
 * @param headRot the computed actor's head's rotation step
 * @param torsoRot the computed actor's torso's rotation step
 * @param focusPos the point to set as the actor's focus position
 *
 * @return true if rotated towards player, false if rotations were stepped back to zero.
 *
 * @note if in a cutscene or debug camera is enabled, and the last entrance used was Kokiri Forest spawn 0, the computed
 * rotation will instead turn towards the view eye no matter the yaw.
 */
s32 Actor_TrackPlayer(PlayState* play, Actor* actor, Vec3s* headRot, Vec3s* torsoRot, Vec3f focusPos);

#endif
