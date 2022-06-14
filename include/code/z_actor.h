#ifndef __Z_ACTOR__
#define __Z_ACTOR__

#include "global.h"
#include "vt.h"
#include "overlays/actors/ovl_Arms_Hook/z_arms_hook.h"
#include "overlays/actors/ovl_En_Part/z_en_part.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"
#include "assets/objects/object_bdoor/object_bdoor.h"

void ActorShadow_DrawFoot(PlayState* play, Light* light, MtxF* arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6);

typedef struct {
    /* 0x00 */ Color_RGBA8 inner;
    /* 0x04 */ Color_RGBA8 outer;
} NaviColor;

extern NaviColor sNaviColorList[13];
extern Gfx D_80115FF0[1];

void func_8002BE64(TargetContext* targetCtx, s32 index, f32 arg2, f32 arg3, f32 arg4);
void func_8002BE98(TargetContext* targetCtx, s32 actorCategory, PlayState* play);
void Actor_SetNaviToActor(TargetContext* targetCtx, Actor* actor, s32 actorCategory, PlayState* play);
void func_8002C0C0(TargetContext* targetCtx, Actor* actor, PlayState* play);
void func_8002C7BC(TargetContext* targetCtx, Player* player, Actor* actorArg, PlayState* play);
void TitleCard_Update(PlayState* play, TitleCardContext* titleCtx);
void TitleCard_Draw(PlayState* play, TitleCardContext* titleCtx);
void Actor_SetWorldToHome(Actor* actor);
void Actor_SetWorldRotToShape(Actor* actor);
void Actor_SetShapeRotToWorld(Actor* actor);
void Actor_Destroy(Actor* actor, PlayState* play);
void func_8002D9F8(Actor* actor, SkelAnime* skelAnime);
s16 Actor_FocusYawTowardActor(Actor* actorA, Actor* actorB);
s16 Actor_FocusPitchTowardActor(Actor* actorA, Actor* actorB);
s32 func_8002DDA8(PlayState* play);
s32 func_8002E234(Actor* actor, f32 arg1, s32 arg2);
s32 func_8002E2AC(PlayState* play, Actor* actor, Vec3f* arg2, s32 arg3);

extern Mtx D_8015BBA8;

Gfx* func_8002E830(Vec3f* object, Vec3f* eye, Vec3f* lightDir, GraphicsContext* gfxCtx, Gfx* gfx, Hilite** hilite);
f32 func_8002EFC0(Actor* actor, Player* player, s16 arg2);

typedef struct {
    /* 0x0 */ f32 rangeSq;
    /* 0x4 */ f32 leashScale;
} TargetRangeParams;

#define TARGET_RANGE(range, leash) \
    { SQ(range), (f32)range / leash }

extern TargetRangeParams D_80115FF8[20];

u32 func_8002F090(Actor* actor, f32 arg1);

extern LightInfo D_8015BC00;
extern LightNode* D_8015BC10;
extern s32 D_8015BC14;
extern f32 D_8015BC18;

void func_8002FA60(PlayState* play);
void Actor_DrawFaroresWindPointer(PlayState* play);
void func_80030488(PlayState* play);

extern u32 D_80116068[12];

void Actor_FaultPrint(Actor* actor, char* command);
void func_80030ED8(Actor* actor);

#define LENS_MASK_WIDTH 64
#define LENS_MASK_HEIGHT 64
#define LENS_MASK_OFFSET_S ((SCREEN_WIDTH / 2 - LENS_MASK_WIDTH) - 26)
#define LENS_MASK_OFFSET_T ((SCREEN_HEIGHT / 2 - LENS_MASK_HEIGHT) - 6)

void Actor_DrawLensOverlay(GraphicsContext* gfxCtx);
void Actor_DrawLensActors(PlayState* play, s32 numInvisibleActors, Actor** invisibleActors);
s32 func_800314B0(PlayState* play, Actor* actor);

extern u8 sEnemyActorCategories[2];

void Actor_FreezeAllEnemies(PlayState* play, ActorContext* actorCtx, s32 duration);
void Actor_AddToCategory(ActorContext* actorCtx, Actor* actorToAdd, u8 actorCategory);
Actor* Actor_RemoveFromCategory(PlayState* play, ActorContext* actorCtx, Actor* actorToRemove);
void Actor_FreeOverlay(ActorOverlay* actorOverlay);
s32 func_80032880(PlayState* play, Actor* actor);

extern Actor* D_8015BBE8;
extern Actor* D_8015BBEC;
extern f32 D_8015BBF0;
extern f32 sbgmEnemyDistSq;
extern s32 D_8015BBF8;
extern s16 D_8015BBFC;

void func_800328D4(PlayState* play, ActorContext* actorCtx, Player* player, u32 actorCategory);

extern u8 D_801160A0[12];

s16 func_80032D60(s16* arg0, s16 arg1, s16 arg2, s16 arg3);

typedef struct {
    /* 0x00 */ f32 chainAngle;
    /* 0x04 */ f32 chainLength;
    /* 0x08 */ f32 yShift;
    /* 0x0C */ f32 chainsScale;
    /* 0x10 */ f32 chainsRotZInit;
    /* 0x14 */ Gfx* chainDL;
    /* 0x18 */ Gfx* lockDL;
} DoorLockInfo;

typedef struct {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ s16 unk_08;
    /* 0x0A */ s16 unk_0A;
    /* 0x0C */ u8 unk_0C;
} struct_80116130_0;

typedef struct {
    /* 0x00 */ struct_80116130_0 sub_00;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ s16 unk_14;
} struct_80116130;

void func_800344BC(Actor* actor, struct_80034A14_arg1* arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u8 arg8);
s16 func_80034810(Actor* actor, struct_80034A14_arg1* arg1, f32 arg2, s16 arg3, s16 arg4);
Gfx* func_80034B28(GraphicsContext* gfxCtx);
Gfx* func_80034B54(GraphicsContext* gfxCtx);
s32 func_80035124(Actor* actor, PlayState* play);

u8 func_800353E8(PlayState* play);

extern Vec3f D_80116268;
extern Vec3f D_80116274;

void func_80035B18(PlayState* play, Actor* actor, u16 textId);
u32 func_80035BFC(PlayState* play, s16 arg1);
void func_80036E50(u16 textId, s16 arg1);
s32 func_800374E0(PlayState* play, Actor* actor, u16 textId);
s32 func_80037C5C(PlayState* play, s16 arg1, u16 textId);
s32 func_80037C94(PlayState* play, Actor* actor, s32 arg2);
s32 func_80037CB8(PlayState* play, Actor* actor, s16 arg2);
s32 Actor_TrackNone(Vec3s* headRot, Vec3s* torsoRot);
s32 Actor_TrackPoint(Actor* actor, Vec3f* target, Vec3s* headRot, Vec3s* torsoRot);
s32 Actor_TrackPlayerSetFocusHeight(PlayState* play, Actor* actor, Vec3s* headRot, Vec3s* torsoRot, f32 focusHeight);

#endif // __Z_ACTOR__
