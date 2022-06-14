#define SS_NULL 0xFFFF
#define BGCHECK_CHECK_WALL (1 << 0)
#define BGCHECK_CHECK_FLOOR (1 << 1)
#define BGCHECK_CHECK_CEILING (1 << 2)
#define BGCHECK_CHECK_ONE_FACE (1 << 3)
#define BGCHECK_CHECK_DYNA (1 << 4)
#define BGCHECK_CHECK_ALL \
    (BGCHECK_CHECK_WALL | BGCHECK_CHECK_FLOOR | BGCHECK_CHECK_CEILING | BGCHECK_CHECK_ONE_FACE | BGCHECK_CHECK_DYNA)
#define BGCHECK_IGNORE_NONE 0
#define BGCHECK_IGNORE_CEILING (1 << 0)
#define BGCHECK_IGNORE_WALL (1 << 1)
#define BGCHECK_IGNORE_FLOOR (1 << 2)
#define COLPOLY_IGNORE_NONE 0
#define COLPOLY_IGNORE_CAMERA (1 << 0)
#define COLPOLY_IGNORE_ENTITY (1 << 1)
#define COLPOLY_IGNORE_PROJECTILES (1 << 2)

extern s32 D_80119D90[32];
extern u16 D_80119E10[14];

s32 BgCheck_PosErrorCheck(Vec3f* pos, char* file, s32 line);
void SSNode_SetValue(SSNode* node, s16* polyId, u16 next);
void SSList_SetNull(SSList* ssList);
void SSNodeList_SetSSListHead(SSNodeList* nodeList, SSList* ssList, s16* polyId);
void DynaSSNodeList_SetSSListHead(DynaSSNodeList* nodeList, SSList* ssList, s16* polyId);
void DynaSSNodeList_Initialize(PlayState* play, DynaSSNodeList* nodeList);
void DynaSSNodeList_Alloc(PlayState* play, DynaSSNodeList* nodeList, s32 max);
void DynaSSNodeList_ResetCount(DynaSSNodeList* nodeList);
void BgCheck_Vec3sToVec3f(Vec3s* src, Vec3f* dst);
void BgCheck_Vec3fToVec3s(Vec3s* dst, Vec3f* src);
s16 CollisionPoly_GetMinY(CollisionPoly* poly, Vec3s* vtxList);
void CollisionPoly_GetNormalF(CollisionPoly* poly, f32* nx, f32* ny, f32* nz);
s32 CollisionPoly_CheckYIntersectApprox1(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect, f32 chkDist);
s32 CollisionPoly_CheckYIntersect(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect, f32 chkDist);
s32 CollisionPoly_CheckYIntersectApprox2(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect);
s32 CollisionPoly_CheckXIntersectApprox(CollisionPoly* poly, Vec3s* vtxList, f32 y, f32 z, f32* xIntersect);
s32 CollisionPoly_CheckZIntersectApprox(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 y, f32* zIntersect);
s32 CollisionPoly_LineVsPoly(CollisionPoly* poly, Vec3s* vtxList, Vec3f* posA, Vec3f* posB, Vec3f* planeIntersect, s32 chkOneFace, f32 chkDist);
s32 CollisionPoly_SphVsPoly(CollisionPoly* poly, Vec3s* vtxList, Vec3f* center, f32 radius);
void StaticLookup_AddPolyToSSList(CollisionContext* colCtx, SSList* ssList, CollisionPoly* polyList, Vec3s* vtxList, s16 polyId);
void StaticLookup_AddPoly(StaticLookup* lookup, CollisionContext* colCtx, CollisionPoly* polyList, Vec3s* vtxList, s16 index);
f32 BgCheck_RaycastFloorStaticList(CollisionContext* colCtx, u16 xpFlags, SSList* ssList, CollisionPoly** outPoly, Vec3f* pos, f32 yIntersectMin, f32 chkDist, s32 flags);
f32 BgCheck_RaycastFloorStatic(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags, CollisionPoly** poly, Vec3f* pos, u32 arg5, f32 chkDist, f32 yIntersectMin);
s32 BgCheck_ComputeWallDisplacement(CollisionContext* colCtx, CollisionPoly* poly, f32* posX, f32* posZ, f32 nx, f32 ny, f32 nz, f32 invXZlength, f32 planeDist, f32 radius, CollisionPoly** wallPolyPtr);
s32 BgCheck_SphVsStaticWall(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags, f32* outX, f32* outZ, Vec3f* pos, f32 radius, CollisionPoly** outPoly);
s32 BgCheck_CheckLineInSubdivision(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags1, u16 xpFlags2, Vec3f* posA, Vec3f* posB, Vec3f* outPos, CollisionPoly** outPoly, f32 chkDist, f32* outDistSq, u32 bccFlags);
s32 BgCheck_SphVsFirstStaticPolyList(SSNode* node, u16 xpFlags, CollisionContext* colCtx, Vec3f* center, f32 radius, CollisionPoly** outPoly);
s32 BgCheck_SphVsFirstStaticPoly(StaticLookup* lookup, u16 xpFlags, CollisionContext* colCtx, Vec3f* center, f32 radius, CollisionPoly** outPoly, u16 bciFlags);
StaticLookup* BgCheck_GetNearestStaticLookup(CollisionContext* colCtx, StaticLookup* lookupTbl, Vec3f* pos);
void BgCheck_GetSubdivisionMinBounds(CollisionContext* colCtx, Vec3f* pos, s32* sx, s32* sy, s32* sz);
void BgCheck_GetSubdivisionMaxBounds(CollisionContext* colCtx, Vec3f* pos, s32* sx, s32* sy, s32* sz);
void BgCheck_GetPolySubdivisionBounds(CollisionContext* colCtx, Vec3s* vtxList, CollisionPoly* polyList, s32* subdivMinX, s32* subdivMinY, s32* subdivMinZ, s32* subdivMaxX, s32* subdivMaxY, s32* subdivMaxZ, s16 polyId);
s32 BgCheck_PolyIntersectsSubdivision(Vec3f* min, Vec3f* max, CollisionPoly* polyList, Vec3s* vtxList, s16 polyId);
u32 BgCheck_InitializeStaticLookup(CollisionContext* colCtx, PlayState* play, StaticLookup* lookupTbl);
s32 BgCheck_IsSpotScene(PlayState* play);

typedef struct {
    s16 sceneId;
    u32 memSize;
} BgCheckSceneMemEntry;

s32 BgCheck_TryGetCustomMemsize(s32 sceneId, u32* memSize);
void BgCheck_SetSubdivisionDimension(f32 min, s32 subdivAmount, f32* max, f32* subdivLength, f32* subdivLengthInv);

typedef struct {
    s16 sceneId;
    Vec3s subdivAmount;
    s32 nodeListMax; // if -1, dynamically compute max nodes
} BgCheckSceneSubdivisionEntry;

CollisionHeader* BgCheck_GetCollisionHeader(CollisionContext* colCtx, s32 bgId);
f32 BgCheck_RaycastFloorImpl(PlayState* play, CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, s32* outBgId, Vec3f* pos, Actor* actor, u32 arg7, f32 chkDist);
f32 BgCheck_CameraRaycastFloor1(CollisionContext* colCtx, CollisionPoly** outPoly, Vec3f* pos);
s32 BgCheck_CheckCeilingImpl(CollisionContext* colCtx, u16 xpFlags, f32* outY, Vec3f* pos, f32 checkHeight, CollisionPoly** outPoly, s32* outBgId, Actor* actor);
u32 BgCheck_GetBccFlags(s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32 chkDyna);
s32 BgCheck_SphVsFirstPolyImpl(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, s32* outBgId, Vec3f* center, f32 radius, Actor* actor, u16 bciFlags);
s32 BgCheck_SphVsFirstWall(CollisionContext* colCtx, Vec3f* center, f32 radius);
void ScaleRotPos_Initialize(ScaleRotPos* srp);
void ScaleRotPos_SetValue(ScaleRotPos* srp, Vec3f* scale, Vec3s* rot, Vec3f* pos);
s32 ScaleRotPos_Equals(ScaleRotPos* a, ScaleRotPos* b);
void DynaLookup_ResetLists(DynaLookup* dynaLookup);
void DynaLookup_Reset(DynaLookup* dynaLookup);
void DynaLookup_ResetVtxStartIndex(u16* vtxStartIndex);
void BgActor_Initialize(PlayState* play, BgActor* bgActor);
void BgActor_SetActor(BgActor* bgActor, Actor* actor, CollisionHeader* colHeader);
s32 BgActor_IsTransformUnchanged(BgActor* bgActor);
void DynaPoly_NullPolyList(CollisionPoly** polyList);
void DynaPoly_AllocPolyList(PlayState* play, CollisionPoly** polyList, s32 numPolys);
void DynaPoly_NullVtxList(Vec3s** vtxList);
void DynaPoly_AllocVtxList(PlayState* play, Vec3s** vtxList, s32 numVtx);
void DynaPoly_SetBgActorPrevTransform(PlayState* play, BgActor* bgActor);
void func_8003ED00(PlayState* play, DynaCollisionContext* dyna, s32 bgId);
void DynaPoly_ExpandSRT(PlayState* play, DynaCollisionContext* dyna, s32 bgId, s32* vtxStartIndex, s32* polyStartIndex);

#define DYNA_RAYCAST_FLOORS 1
#define DYNA_RAYCAST_WALLS 2
#define DYNA_RAYCAST_CEILINGS 4

f32 BgCheck_RaycastFloorDynaList(DynaRaycast* dynaRaycast, u32 listType);
s32 BgCheck_SphVsDynaWallInBgActor(CollisionContext* colCtx, u16 xpFlags, DynaCollisionContext* dyna, SSList* ssList, f32* outX, f32* outZ, CollisionPoly** outPoly, s32* outBgId, Vec3f* pos, f32 radius, s32 bgId);
s32 BgCheck_CheckDynaCeilingList(CollisionContext* colCtx, u16 xpFlags, DynaCollisionContext* dyna, SSList* ssList, f32* outY, Vec3f* pos, f32 checkHeight, CollisionPoly** outPoly);
s32 BgCheck_CheckLineAgainstBgActorSSList(DynaLineTest* dynaLineTest);
s32 BgCheck_CheckLineAgainstBgActor(CollisionContext* colCtx, u16 xpFlags, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly, f32* distSq, s32 bgId, f32 chkDist, s32 bccFlags);
s32 BgCheck_SphVsFirstDynaPolyList(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, Vec3f* center, f32 radius, SSList* ssList);
s32 BgCheck_SphVsFirstDynaPolyInBgActor(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, Vec3f* center, f32 radius, s32 bgId, u16 bciFlags);
void CollisionHeader_SegmentedToVirtual(CollisionHeader* colHeader);
u32 SurfaceType_GetData(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId, s32 dataIdx);
u16 func_80041B24(CollisionContext* colCtx, u32 camId, s32 bgId);
u32 func_80041D94(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);
u32 func_80041E80(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

extern WaterBox zdWaterBox;
extern f32 zdWaterBoxMinX;
extern f32 zdWaterBoxMinY;
extern f32 zdWaterBoxMinZ;
extern f32 zdWaterBoxMaxX;
extern f32 zdWaterBoxMaxY;
extern f32 zdWaterBoxMaxZ;

s32 func_800425B0(PlayState* play, CollisionContext* colCtx, f32 x, f32 z, f32* ySurface, WaterBox** outWaterBox);
void BgCheck_DrawDynaPolyList(PlayState* play, CollisionContext* colCtx, DynaCollisionContext* dyna, SSList* ssList, u8 r, u8 g, u8 b);
void BgCheck_DrawBgActor(PlayState* play, CollisionContext* colCtx, s32 bgId);
void BgCheck_DrawStaticPoly(PlayState* play, CollisionContext* colCtx, CollisionPoly* poly, u8 r, u8 g, u8 b);
void BgCheck_DrawStaticPolyList(PlayState* play, CollisionContext* colCtx, SSList* ssList, u8 r, u8 g, u8 b);