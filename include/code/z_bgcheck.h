#ifndef Z_BGCHECK_H
#define Z_BGCHECK_H

#include "global.h"
#include "vt.h"

#define SS_NULL 0xFFFF

// bccFlags
#define BGCHECK_CHECK_WALL (1 << 0)
#define BGCHECK_CHECK_FLOOR (1 << 1)
#define BGCHECK_CHECK_CEILING (1 << 2)
#define BGCHECK_CHECK_ONE_FACE (1 << 3)
#define BGCHECK_CHECK_DYNA (1 << 4)
#define BGCHECK_CHECK_ALL \
    (BGCHECK_CHECK_WALL | BGCHECK_CHECK_FLOOR | BGCHECK_CHECK_CEILING | BGCHECK_CHECK_ONE_FACE | BGCHECK_CHECK_DYNA)

// bciFlags
#define BGCHECK_IGNORE_NONE 0
#define BGCHECK_IGNORE_CEILING (1 << 0)
#define BGCHECK_IGNORE_WALL (1 << 1)
#define BGCHECK_IGNORE_FLOOR (1 << 2)

// poly exclusion flags (xpFlags)
#define COLPOLY_IGNORE_NONE 0
#define COLPOLY_IGNORE_CAMERA (1 << 0)
#define COLPOLY_IGNORE_ENTITY (1 << 1)
#define COLPOLY_IGNORE_PROJECTILES (1 << 2)

// func_80041DB8, SurfaceType wall properties
extern s32 D_80119D90[32];

// SurfaceType_GetSfx
extern u16 D_80119E10[14];

/**
 * original name: T_BGCheck_PosErrorCheck
 */
s32 BgCheck_PosErrorCheck(Vec3f* pos, char* file, s32 line);

/**
 * Set SSNode
 */
void SSNode_SetValue(SSNode* node, s16* polyId, u16 next);

/**
 * Set SSList to SS_NULL
 */
void SSList_SetNull(SSList* ssList);

/**
 * Insert `polyId` at the start of the static `ssList` list
 */
void SSNodeList_SetSSListHead(SSNodeList* nodeList, SSList* ssList, s16* polyId);

/**
 * Insert `polyId` at the start of the dyna `ssList` list
 */
void DynaSSNodeList_SetSSListHead(DynaSSNodeList* nodeList, SSList* ssList, s16* polyId);

/**
 * Initialize DynaSSNodeList
 */
void DynaSSNodeList_Initialize(PlayState* play, DynaSSNodeList* nodeList);

/**
 * Initialize DynaSSNodeList tbl
 */
void DynaSSNodeList_Alloc(PlayState* play, DynaSSNodeList* nodeList, s32 max);

/**
 * Reset DynaSSNodeList count
 */
void DynaSSNodeList_ResetCount(DynaSSNodeList* nodeList);

/**
 * Get next available node index in DynaSSNodeList
 * returns SS_NULL if list is full
 */
u16 DynaSSNodeList_GetNextNodeIdx(DynaSSNodeList* nodeList);

/**
 * original name: T_BGCheck_Vec3sToVec3f
 */
void BgCheck_Vec3sToVec3f(Vec3s* src, Vec3f* dst);

/**
 * original name: T_BGCheck_Vec3fToVec3s
 */
void BgCheck_Vec3fToVec3s(Vec3s* dst, Vec3f* src);

/**
 * Get CollisionPoly's lowest y point
 */
s16 CollisionPoly_GetMinY(CollisionPoly* poly, Vec3s* vtxList);

/**
 * CollisionPoly get unit normal
 */
void CollisionPoly_GetNormalF(CollisionPoly* poly, f32* nx, f32* ny, f32* nz);

/**
 * Compute transform matrix mapping +y (up) to the collision poly's normal
 */
void func_80038A28(CollisionPoly* poly, f32 tx, f32 ty, f32 tz, MtxF* dest);

/**
 * Calculate point distance from plane along normal
 */
f32 CollisionPoly_GetPointDistanceFromPlane(CollisionPoly* poly, Vec3f* point);

/**
 * Get Poly Vertices
 */
void CollisionPoly_GetVertices(CollisionPoly* poly, Vec3s* vtxList, Vec3f* dest);

/**
 * Get vertices by bgId
 * original name: T_Polygon_GetVertex_bg_ai
 */
void CollisionPoly_GetVerticesByBgId(CollisionPoly* poly, s32 bgId, CollisionContext* colCtx, Vec3f* dest);

/**
 * Checks if point (`x`,`z`) is within `chkDist` of `poly`, computing `yIntersect` if true
 * Determinant max 300.0f
 */
s32 CollisionPoly_CheckYIntersectApprox1(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect,
                                         f32 chkDist);

/**
 * Checks if point (`x`,`z`) is within `chkDist` of `poly`, computing `yIntersect` if true
 * Determinant max 0.0f (checks if on or within poly)
 */
s32 CollisionPoly_CheckYIntersect(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect, f32 chkDist);

/**
 * Checks if point (`x`,`z`) is within 1.0f of `poly`, computing `yIntersect` if true
 * Determinant max 300.0f
 */
s32 CollisionPoly_CheckYIntersectApprox2(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect);

/**
 * Checks if point (`y`,`z`) is within 1.0f of `poly`, computing `xIntersect` if true
 * Determinant max 300.0f
 */
s32 CollisionPoly_CheckXIntersectApprox(CollisionPoly* poly, Vec3s* vtxList, f32 y, f32 z, f32* xIntersect);

/**
 * Checks if point (`x`,`y`) is within 1.0f of `poly`, computing `zIntersect` if true
 * Determinant max 300.0f
 */
s32 CollisionPoly_CheckZIntersectApprox(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 y, f32* zIntersect);

/**
 * Test if travelling from `posA` to `posB` intersects `poly`
 * returns true if an intersection occurs, else false
 * returns `planeIntersect`, which is the point at which the line from `posA` to `posB` crosses `poly`'s plane
 * if `chkOneFace` is true, return false (no intersection) when going through the poly from A to B is done in the
 * normal's direction
 */
s32 CollisionPoly_LineVsPoly(CollisionPoly* poly, Vec3s* vtxList, Vec3f* posA, Vec3f* posB, Vec3f* planeIntersect,
                             s32 chkOneFace, f32 chkDist);

/**
 * Tests if sphere `center` `radius` intersects `poly`
 */
s32 CollisionPoly_SphVsPoly(CollisionPoly* poly, Vec3s* vtxList, Vec3f* center, f32 radius);

/**
 * Add poly to StaticLookup table
 * Table is sorted by poly's smallest y vertex component
 * `ssList` is the list to append a new poly to
 * `polyList` is the CollisionPoly lookup list
 * `vtxList` is the vertex lookup list
 * `polyId` is the index of the poly in polyList to insert into the lookup table
 */
void StaticLookup_AddPolyToSSList(CollisionContext* colCtx, SSList* ssList, CollisionPoly* polyList, Vec3s* vtxList,
                                  s16 polyId);

/**
 * Add CollisionPoly to StaticLookup list
 */
void StaticLookup_AddPoly(StaticLookup* lookup, CollisionContext* colCtx, CollisionPoly* polyList, Vec3s* vtxList,
                          s16 index);

/**
 * Locates the closest static poly directly underneath `pos`, starting at list `ssList`
 * returns yIntersect of the closest poly, or `yIntersectMin`
 * stores the pointer of the closest poly to `outPoly`
 * if (flags & 1), ignore polys with a normal.y < 0 (from vertical walls to ceilings)
 */
f32 BgCheck_RaycastFloorStaticList(CollisionContext* colCtx, u16 xpFlags, SSList* ssList, CollisionPoly** outPoly,
                                   Vec3f* pos, f32 yIntersectMin, f32 chkDist, s32 flags);

/**
 * Locates the closest static poly directly underneath `pos` within `lookup`.
 * returns yIntersect of the closest poly, or `yIntersectMin`
 * stores the pointer of the closest poly to `outPoly`
 */
f32 BgCheck_RaycastFloorStatic(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags, CollisionPoly** poly,
                               Vec3f* pos, u32 arg5, f32 chkDist, f32 yIntersectMin);

/**
 * Compute wall displacement on `posX` and `posZ`
 * sets `wallPolyPtr` to `poly` if `wallPolyPtr` is NULL or not a damage wall
 * returns true if `wallPolyPtr` was changed
 * `invXZlength` is 1 / sqrt( sq(poly.normal.x) + sq(poly.normal.z) )
 */
s32 BgCheck_ComputeWallDisplacement(CollisionContext* colCtx, CollisionPoly* poly, f32* posX, f32* posZ, f32 nx, f32 ny,
                                    f32 nz, f32 invXZlength, f32 planeDist, f32 radius, CollisionPoly** wallPolyPtr);

/**
 * Performs collision detection on static poly walls within `lookup` on sphere `pos`, `radius`
 * returns true if a collision was detected
 * `outX` `outZ` return the displaced x,z coordinates,
 * `outPoly` returns the pointer to the nearest poly collided with, or NULL
 */
s32 BgCheck_SphVsStaticWall(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags, f32* outX, f32* outZ,
                            Vec3f* pos, f32 radius, CollisionPoly** outPoly);

/**
 * Tests for collision with a static poly ceiling
 * returns true if a collision occurs, else false
 * `outPoly` returns the poly collided with
 * `outY` returns the y coordinate needed to not collide with `outPoly`
 */
s32 BgCheck_CheckStaticCeiling(StaticLookup* lookup, u16 xpFlags, CollisionContext* colCtx, f32* outY, Vec3f* pos,
                               f32 checkHeight, CollisionPoly** outPoly);

/**
 * Tests if line `posA` to `posB` intersects with a static poly in list `ssList`. Uses polyCheckTbl
 * returns true if such a poly exists, else false
 * `outPoly` returns the pointer of the poly intersected
 * `posB` and `outPos` returns the point of intersection with `outPoly`
 * `outDistSq` returns the squared distance from `posA` to the point of intersect
 */
s32 BgCheck_CheckLineAgainstSSList(SSList* ssList, CollisionContext* colCtx, u16 xpFlags1, u16 xpFlags2, Vec3f* posA,
                                   Vec3f* posB, Vec3f* outPos, CollisionPoly** outPoly, f32* outDistSq, f32 chkDist,
                                   s32 bccFlags);

/**
 * Tests if line `posA` to `posB` intersects with a static poly in `lookup`. Uses polyCheckTbl
 * returns true if such a poly exists, else false
 * `outPoly` returns the pointer of the poly intersected
 * `posB` and `outPos` returns the point of intersection with `outPoly`
 * `outDistSq` returns the squared distance from `posA` to the point of intersect
 */
s32 BgCheck_CheckLineInSubdivision(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags1, u16 xpFlags2,
                                   Vec3f* posA, Vec3f* posB, Vec3f* outPos, CollisionPoly** outPoly, f32 chkDist,
                                   f32* outDistSq, u32 bccFlags);

/**
 * Get first static poly intersecting sphere `center` `radius` from list `node`
 * returns true if any poly intersects the sphere, else returns false
 * `outPoly` returns the pointer of the first poly found that intersects
 */
s32 BgCheck_SphVsFirstStaticPolyList(SSNode* node, u16 xpFlags, CollisionContext* colCtx, Vec3f* center, f32 radius,
                                     CollisionPoly** outPoly);

/**
 * Get first static poly intersecting sphere `center` `radius` within `lookup`
 * returns true if any poly intersects the sphere, else false
 * `outPoly` returns the first poly found that intersects
 */
s32 BgCheck_SphVsFirstStaticPoly(StaticLookup* lookup, u16 xpFlags, CollisionContext* colCtx, Vec3f* center, f32 radius,
                                 CollisionPoly** outPoly, u16 bciFlags);

/**
 * Get StaticLookup from `pos`
 * Does not return NULL
 */
StaticLookup* BgCheck_GetNearestStaticLookup(CollisionContext* colCtx, StaticLookup* lookupTbl, Vec3f* pos);

/**
 * Get StaticLookup from `pos`
 * Returns NULL if just outside the mesh bounding box
 */
StaticLookup* BgCheck_GetStaticLookup(CollisionContext* colCtx, StaticLookup* lookupTbl, Vec3f* pos);

/**
 * Get StaticLookup subdivision indices from `pos`
 * `sector` returns the subdivision x,y,z indices containing or is nearest to `pos`
 */
void BgCheck_GetStaticLookupIndicesFromPos(CollisionContext* colCtx, Vec3f* pos, Vec3i* sector);

/**
 * Get negative bias subdivision indices
 * decrements indices if `pos` is within BGCHECK_SUBDIV_OVERLAP units of the negative subdivision boundary
 * `sx`, `sy`, `sz` returns the subdivision x, y, z indices
 */
void BgCheck_GetSubdivisionMinBounds(CollisionContext* colCtx, Vec3f* pos, s32* sx, s32* sy, s32* sz);

/**
 * Get positive bias subdivision indices
 * increments indicies if `pos` is within BGCHECK_SUBDIV_OVERLAP units of the postive subdivision boundary
 * `sx`, `sy`, `sz` returns the subdivision x, y, z indices
 */
void BgCheck_GetSubdivisionMaxBounds(CollisionContext* colCtx, Vec3f* pos, s32* sx, s32* sy, s32* sz);

/**
 * Calculate the subdivision index bounding box for CollisionPoly `polyId`
 * `subdivMinX`, `subdivMinY`, `subdivMinZ` returns the minimum subdivision x, y, z indices
 * `subdivMaxX`, `subdivMaxY`, `subdivMaxZ` returns the maximum subdivision x, y, z indices
 */
void BgCheck_GetPolySubdivisionBounds(CollisionContext* colCtx, Vec3s* vtxList, CollisionPoly* polyList,
                                      s32* subdivMinX, s32* subdivMinY, s32* subdivMinZ, s32* subdivMaxX,
                                      s32* subdivMaxY, s32* subdivMaxZ, s16 polyId);

/**
 * Test if poly `polyList`[`polyId`] intersects cube `min` `max`
 * returns true if the poly intersects the cube, else false
 */
s32 BgCheck_PolyIntersectsSubdivision(Vec3f* min, Vec3f* max, CollisionPoly* polyList, Vec3s* vtxList, s16 polyId);

/**
 * Initialize StaticLookup Table
 * returns size of table, in bytes
 */
u32 BgCheck_InitializeStaticLookup(CollisionContext* colCtx, PlayState* play, StaticLookup* lookupTbl);

/**
 * Is current scene a SPOT scene
 */
s32 BgCheck_IsSpotScene(PlayState* play);

typedef struct {
    s16 sceneId;
    u32 memSize;
} BgCheckSceneMemEntry;

/**
 * Get custom scene memSize
 */
s32 BgCheck_TryGetCustomMemsize(s32 sceneId, u32* memSize);

/**
 * Compute subdivLength for scene mesh lookup, for a single dimension
 */
void BgCheck_SetSubdivisionDimension(f32 min, s32 subdivAmount, f32* max, f32* subdivLength, f32* subdivLengthInv);

typedef struct {
    s16 sceneId;
    Vec3s subdivAmount;
    s32 nodeListMax; // if -1, dynamically compute max nodes
} BgCheckSceneSubdivisionEntry;

/**
 * Allocate CollisionContext
 */
void BgCheck_Allocate(CollisionContext* colCtx, PlayState* play, CollisionHeader* colHeader);

/**
 * Get CollisionHeader
 * original name: T_BGCheck_getBGDataInfo
 */
CollisionHeader* BgCheck_GetCollisionHeader(CollisionContext* colCtx, s32 bgId);

/**
 * Test if pos is near collision boundaries
 */
s32 BgCheck_PosInStaticBoundingBox(CollisionContext* colCtx, Vec3f* pos);

/**
 * Raycast Toward Floor
 * returns the yIntersect of the nearest poly found directly below `pos`, or BGCHECK_Y_MIN if no floor detected
 * returns the poly found in `outPoly`, and the bgId of the entity in `outBgId`
 */
f32 BgCheck_RaycastFloorImpl(PlayState* play, CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly,
                             s32* outBgId, Vec3f* pos, Actor* actor, u32 arg7, f32 chkDist);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_CameraRaycastFloor1(CollisionContext* colCtx, CollisionPoly** outPoly, Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor1(CollisionContext* colCtx, CollisionPoly** outPoly, Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor2(PlayState* play, CollisionContext* colCtx, CollisionPoly** outPoly, Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor3(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor4(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor,
                                Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor5(PlayState* play, CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId,
                                Actor* actor, Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor6(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor, Vec3f* pos,
                                f32 chkDist);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor7(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor,
                                Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_AnyRaycastFloor1(CollisionContext* colCtx, CollisionPoly* outPoly, Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_AnyRaycastFloor2(CollisionContext* colCtx, CollisionPoly* outPoly, s32* bgId, Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_CameraRaycastFloor2(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor8(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor,
                                Vec3f* pos);

/**
 * Public raycast toward floor
 * returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
 */
f32 BgCheck_EntityRaycastFloor9(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Vec3f* pos);

/**
 * Tests if moving from `posPrev` to `posNext` will collide with a "wall"
 * `radius` is used to form a sphere for collision detection purposes
 * `checkHeight` is the positive height above posNext to perform certain checks
 * returns true if a collision is detected, else false
 * `outPoly` returns the closest poly detected, while `outBgId` returns the poly owner
 */
s32 BgCheck_CheckWallImpl(CollisionContext* colCtx, u16 xpFlags, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev,
                          f32 radius, CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 checkHeight, u8 argA);

/**
 * Public. Tests if moving from `posPrev` to `posNext` will collide with a "wall"
 * `radius` is used to form a sphere for collision detection purposes
 * `checkHeight` is the positive height above posNext to perform certain checks
 * returns true if a collision is detected, else false
 * `outPoly` returns the closest poly detected
 */
s32 BgCheck_EntitySphVsWall1(CollisionContext* colCtx, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                             CollisionPoly** outPoly, f32 checkHeight);

/**
 * Public. Tests if moving from `posPrev` to `posNext` will collide with a "wall"
 * `radius` is used to form a sphere for collision detection purposes
 * `checkHeight` is the positive height above posNext to perform certain checks
 * returns true if a collision is detected, else false
 * `outPoly` returns the closest poly detected, while `outBgId` returns the poly owner
 */
s32 BgCheck_EntitySphVsWall2(CollisionContext* colCtx, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                             CollisionPoly** outPoly, s32* outBgId, f32 checkHeight);

/**
 * Public. Tests if moving from `posPrev` to `posNext` will collide with a "wall"
 * `radius` is used to form a sphere for collision detection purposes
 * `checkHeight` is the positive height above posNext to perform certain checks
 * `actor` is the actor performing the check, allowing it to be skipped
 * returns true if a collision is detected, else false
 * `outPoly` returns the closest poly detected, while `outBgId` returns the poly owner
 */
s32 BgCheck_EntitySphVsWall3(CollisionContext* colCtx, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                             CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 checkHeight);

/***
 * Public. Tests if moving from `posPrev` to `posNext` will collide with a "wall"
 * Skips a check that occurs only when moving on the xz plane
 * `radius` is used to form a sphere for collision detection purposes
 * `checkHeight` is the positive height above posNext to perform certain checks
 * `actor` is the actor performing the check, allowing it to be skipped
 * returns true if a collision is detected, else false
 * `outPoly` returns the closest poly detected, while `outBgId` returns the poly owner
 */
s32 BgCheck_EntitySphVsWall4(CollisionContext* colCtx, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                             CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 checkHeight);

/***
 * Tests for collision with a ceiling poly
 * `checkHeight` should be a positive value
 * returns true if a collision occurs, else false
 * `outPoly` returns the poly collided with, while `outBgId` returns the owner of the poly
 * `outY` returns the y coordinate of pos needed to not collide with `outPoly`
 */
s32 BgCheck_CheckCeilingImpl(CollisionContext* colCtx, u16 xpFlags, f32* outY, Vec3f* pos, f32 checkHeight,
                             CollisionPoly** outPoly, s32* outBgId, Actor* actor);

/**
 * Tests for collision with any ceiling poly
 * `checkHeight` must be a positive value
 * returns true if a collision occurs, else false
 * `outY` returns the displaced y coordinate needed to not collide with the poly
 */
s32 BgCheck_AnyCheckCeiling(CollisionContext* colCtx, f32* outY, Vec3f* pos, f32 checkHeight);

/**
 * Tests for collision with any entity solid ceiling poly
 * `checkHeight` must be a positive value
 * returns true if a collision occurs, else false
 * `outY` returns the displaced y coordinate needed to not collide with the poly
 */
s32 BgCheck_EntityCheckCeiling(CollisionContext* colCtx, f32* outY, Vec3f* pos, f32 checkHeight,
                               CollisionPoly** outPoly, s32* outBgId, Actor* actor);

/**
 * Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 * `posB`? `posResult` returns the point of intersection
 * `outPoly` returns the pointer to the intersected poly, while `outBgId` returns the entity the poly belongs to
 */
s32 BgCheck_CheckLineImpl(CollisionContext* colCtx, u16 xpFlags1, u16 xpFlags2, Vec3f* posA, Vec3f* posB,
                          Vec3f* posResult, CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 chkDist,
                          u32 bccFlags);

/**
 * Get bccFlags
 */
u32 BgCheck_GetBccFlags(s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32 chkDyna);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_CameraLineTest1(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                            CollisionPoly** outPoly, s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace,
                            s32* bgId);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_CameraLineTest2(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                            CollisionPoly** outPoly, s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace,
                            s32* bgId);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_EntityLineTest1(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                            CollisionPoly** outPoly, s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace,
                            s32* bgId);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_EntityLineTest2(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                            CollisionPoly** outPoly, s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId,
                            Actor* actor);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_EntityLineTest3(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                            CollisionPoly** outPoly, s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId,
                            Actor* actor, f32 chkDist);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_ProjectileLineTest(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                               CollisionPoly** outPoly, s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace,
                               s32* bgId);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_AnyLineTest1(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                         s32 chkOneFace);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_AnyLineTest2(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                         s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace);

/**
 * Public. Tests if a line from `posA` to `posB` intersects with a poly
 * returns true if it does, else false
 */
s32 BgCheck_AnyLineTest3(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                         s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId);

/**
 * Get first poly intersecting sphere `center` `radius`
 * ignores `actor` dyna poly
 * returns true if any poly intersects the sphere, else false
 * `outPoly` returns the pointer of the first poly found that intersects
 * `outBgId` returns the bgId of the entity that owns `outPoly`
 */
s32 BgCheck_SphVsFirstPolyImpl(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, s32* outBgId,
                               Vec3f* center, f32 radius, Actor* actor, u16 bciFlags);

/**
 * Public get first poly intersecting sphere `center` `radius`
 */
s32 BgCheck_SphVsFirstPoly(CollisionContext* colCtx, Vec3f* center, f32 radius);

/**
 * Public get first wall poly intersecting sphere `center` `radius`
 */
s32 BgCheck_SphVsFirstWall(CollisionContext* colCtx, Vec3f* center, f32 radius);

/**
 * Init SSNodeList
 */
void SSNodeList_Initialize(SSNodeList* this);

/**
 * Allocate SSNodeList
 * tblMax is the number of SSNode records to allocate
 * numPolys is the number of polygons defined within the CollisionHeader
 */
void SSNodeList_Alloc(PlayState* play, SSNodeList* this, s32 tblMax, s32 numPolys);

/**
 * Get next SSNodeList SSNode
 */
SSNode* SSNodeList_GetNextNode(SSNodeList* this);

/**
 * Get next SSNodeList SSNode index
 */
u16 SSNodeList_GetNextNodeIdx(SSNodeList* this);

/**
 * Initialize ScaleRotPos
 */
void ScaleRotPos_Initialize(ScaleRotPos* srp);

/**
 * Set ScaleRotPos
 */
void ScaleRotPos_SetValue(ScaleRotPos* srp, Vec3f* scale, Vec3s* rot, Vec3f* pos);

/**
 * ScaleRotPos equality test
 */
s32 ScaleRotPos_Equals(ScaleRotPos* a, ScaleRotPos* b);

/**
 * Reset DynaLookup lists
 */
void DynaLookup_ResetLists(DynaLookup* dynaLookup);

/**
 * Reset DynaLookup
 */
void DynaLookup_Reset(DynaLookup* dynaLookup);

/**
 * Reset vtxStartIndex
 */
void DynaLookup_ResetVtxStartIndex(u16* vtxStartIndex);

/**
 * Initialize BgActor
 */
void BgActor_Initialize(PlayState* play, BgActor* bgActor);

/**
 * setActor internal
 */
void BgActor_SetActor(BgActor* bgActor, Actor* actor, CollisionHeader* colHeader);

/**
 * Test if the BgActor transform is the same
 */
s32 BgActor_IsTransformUnchanged(BgActor* bgActor);

/**
 * NULL polyList
 */
void DynaPoly_NullPolyList(CollisionPoly** polyList);

/**
 * Allocate dyna.polyList
 */
void DynaPoly_AllocPolyList(PlayState* play, CollisionPoly** polyList, s32 numPolys);

/**
 * NULL vtxList
 */
void DynaPoly_NullVtxList(Vec3s** vtxList);

/**
 * Allocate dyna.vtxList
 */
void DynaPoly_AllocVtxList(PlayState* play, Vec3s** vtxList, s32 numVtx);

/**
 * Update BgActor's prevTransform
 */
void DynaPoly_SetBgActorPrevTransform(PlayState* play, BgActor* bgActor);

/**
 * Is BgActor Id
 */
s32 DynaPoly_IsBgIdBgActor(s32 bgId);

/**
 * Init DynaCollisionContext
 */
void DynaPoly_Init(PlayState* play, DynaCollisionContext* dyna);

/**
 * Set DynaCollisionContext
 */
void DynaPoly_Alloc(PlayState* play, DynaCollisionContext* dyna);

/**
 * Set BgActor
 * original name: DynaPolyInfo_setActor
 */
s32 DynaPoly_SetBgActor(PlayState* play, DynaCollisionContext* dyna, Actor* actor, CollisionHeader* colHeader);

/**
 * Gets the actor assigned to `bgId`
 * possible orginal name: DynaPolyInfo_getActor
 */
DynaPolyActor* DynaPoly_GetActor(CollisionContext* colCtx, s32 bgId);

void func_8003EBF8(PlayState* play, DynaCollisionContext* dyna, s32 bgId);

void func_8003EC50(PlayState* play, DynaCollisionContext* dyna, s32 bgId);

void func_8003ECA8(PlayState* play, DynaCollisionContext* dyna, s32 bgId);

void func_8003ED00(PlayState* play, DynaCollisionContext* dyna, s32 bgId);

/**
 * original name: DynaPolyInfo_delReserve
 */
void DynaPoly_DeleteBgActor(PlayState* play, DynaCollisionContext* dyna, s32 bgId);

void func_8003EE6C(PlayState* play, DynaCollisionContext* dyna);

/**
 * original name: DynaPolyInfo_expandSRT
 */
void DynaPoly_ExpandSRT(PlayState* play, DynaCollisionContext* dyna, s32 bgId, s32* vtxStartIndex,
                        s32* polyStartIndex);

void func_8003F8EC(PlayState* play, DynaCollisionContext* dyna, Actor* actor);

/**
 * DynaPolyInfo_setup
 */
void DynaPoly_Setup(PlayState* play, DynaCollisionContext* dyna);

/**
 * Update all BgActor's previous ScaleRotPos
 */
void DynaPoly_UpdateBgActorTransforms(PlayState* play, DynaCollisionContext* dyna);

#define DYNA_RAYCAST_FLOORS 1
#define DYNA_RAYCAST_WALLS 2
#define DYNA_RAYCAST_CEILINGS 4

/**
 * Perform dyna poly raycast toward floor on a list of floor, wall, or ceiling polys
 * `listType` specifies the poly list type (e.g. DYNA_RAYCAST_FLOORS)
 */
f32 BgCheck_RaycastFloorDynaList(DynaRaycast* dynaRaycast, u32 listType);

/**
 * Perform dyna poly raycast toward floor
 * returns the yIntersect of the poly found, or BGCHECK_Y_MIN if no poly is found
 */
f32 BgCheck_RaycastFloorDyna(DynaRaycast* dynaRaycast);

/**
 * Performs collision detection on a BgActor's wall polys on sphere `pos`, `radius`
 * returns true if a collision was detected
 * `outX` `outZ` return the displaced x,z coordinates
 * `outPoly` returns the pointer to the nearest poly collided with, or NULL
 * `outBgId` returns `bgId` if the poly SurfaceType's wall damage flag is not set, else ?
 */
s32 BgCheck_SphVsDynaWallInBgActor(CollisionContext* colCtx, u16 xpFlags, DynaCollisionContext* dyna, SSList* ssList,
                                   f32* outX, f32* outZ, CollisionPoly** outPoly, s32* outBgId, Vec3f* pos, f32 radius,
                                   s32 bgId);

/**
 * Performs collision detection on all dyna poly walls using sphere `pos`, `radius`
 * returns true if a collision was detected
 * `outX` `outZ` return the displaced x,z coordinates
 * `outPoly` returns the pointer to the nearest poly collided with, or NULL
 * `outBgId` returns the index of the BgActor that owns `outPoly`
 * If `actor` is not NULL, an BgActor bound to that actor will be ignored
 */
s32 BgCheck_SphVsDynaWall(CollisionContext* colCtx, u16 xpFlags, f32* outX, f32* outZ, Vec3f* pos, f32 radius,
                          CollisionPoly** outPoly, s32* outBgId, Actor* actor);

/**
 * Tests for collision with a dyna poly ceiling, starting at `ssList`
 * returns true if a collision occurs, else false
 * `outPoly` returns the poly collided with
 * `outY` returns the y coordinate needed to not collide with `outPoly`
 */
s32 BgCheck_CheckDynaCeilingList(CollisionContext* colCtx, u16 xpFlags, DynaCollisionContext* dyna, SSList* ssList,
                                 f32* outY, Vec3f* pos, f32 checkHeight, CollisionPoly** outPoly);

/**
 * Tests collision with a dyna poly ceiling
 * returns true if a collision occurs, else false
 * `outPoly` returns the poly collided with, while `outBgId` returns the id of the BgActor that owns the poly
 * `outY` returns the y coordinate needed to not collide with `outPoly`, or `pos`.y + `chkDist` if no collision occurs
 */
s32 BgCheck_CheckDynaCeiling(CollisionContext* colCtx, u16 xpFlags, f32* outY, Vec3f* pos, f32 chkDist,
                             CollisionPoly** outPoly, s32* outBgId, Actor* actor);

/**
 * Tests if DynaLineTest intersects with a poly
 * returns true if a poly was intersected, else false
 */
s32 BgCheck_CheckLineAgainstBgActorSSList(DynaLineTest* dynaLineTest);

/**
 * Tests if line `posA` `posB` intersects with a dyna poly within BgActor `bgId`
 * `distSq` is the maximum squared distance to check for a collision
 * returns true if an intersection occurred, else false
 * `posB`? and `posResult` return the point of intersection
 * `outPoly` returns the poly intersected
 * `distSq` returns the squared distance of the intersection
 */
s32 BgCheck_CheckLineAgainstBgActor(CollisionContext* colCtx, u16 xpFlags, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                                    CollisionPoly** outPoly, f32* distSq, s32 bgId, f32 chkDist, s32 bccFlags);

/**
 * Tests if line from `posA` to `posB` passes through a dyna poly.
 * returns true if so, otherwise false
 * `outPoly` returns the pointer of the poly intersected.
 * `outBgId` returns the BgActor index of the poly
 */
s32 BgCheck_CheckLineAgainstDyna(CollisionContext* colCtx, u16 xpFlags, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                                 CollisionPoly** outPoly, f32* distSq, s32* outBgId, Actor* actor, f32 chkDist,
                                 s32 bccFlags);

/**
 * Get first dyna poly intersecting sphere `center` `radius` from list `ssList`
 * returns true if any poly intersects the sphere, else returns false
 * `outPoly` returns the pointer of the first poly found that intersects
 */
s32 BgCheck_SphVsFirstDynaPolyList(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, Vec3f* center,
                                   f32 radius, SSList* ssList);

/**
 * Get first dyna poly intersecting sphere `center` `radius` from BgActor `bgId`
 * returns true if any poly intersects the sphere, else false
 * `outPoly` returns the pointer of the first poly found that intersects
 */
s32 BgCheck_SphVsFirstDynaPolyInBgActor(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, Vec3f* center,
                                        f32 radius, s32 bgId, u16 bciFlags);

/**
 * Gets first dyna poly intersecting sphere `center` `radius`
 * returns true if poly detected, else false
 * `outPoly` returns the first intersecting poly, while `outBgId` returns the BgActor index of that poly
 */
s32 BgCheck_SphVsFirstDynaPoly(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, s32* outBgId,
                               Vec3f* center, f32 radius, Actor* actor, u16 bciFlags);

/**
 * SEGMENTED_TO_VIRTUAL CollisionHeader members
 */
void CollisionHeader_SegmentedToVirtual(CollisionHeader* colHeader);

/**
 * Convert CollisionHeader Segmented to Virtual addressing
 */
void CollisionHeader_GetVirtual(void* colHeader, CollisionHeader** dest);

/**
 * SEGMENT_TO_VIRTUAL all active BgActor CollisionHeaders
 */
void func_800418D0(CollisionContext* colCtx, PlayState* play);

/**
 * Reset SSNodeList polyCheckTbl
 */
void BgCheck_ResetPolyCheckTbl(SSNodeList* nodeList, s32 numPolys);

/**
 * Get SurfaceType property set
 */
u32 SurfaceType_GetData(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId, s32 dataIdx);

/**
 * SurfaceType return CamData Index
 */
u32 SurfaceType_GetCamDataIndex(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * CamData return cameraSType
 */
u16 func_80041A4C(CollisionContext* colCtx, u32 camId, s32 bgId);

/**
 * SurfaceType return cameraSType
 */
u16 SurfaceType_GetCameraSType(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * CamData Get number of cameras
 */
u16 func_80041B24(CollisionContext* colCtx, u32 camId, s32 bgId);

/**
 * SurfaceType Get number of cameras
 */
u16 SurfaceType_GetNumCameras(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * CamData Get camPosData
 */
Vec3s* func_80041C10(CollisionContext* colCtx, s32 camId, s32 bgId);

/**
 * SurfaceType Get camPosData
 */
Vec3s* SurfaceType_GetCamPosData(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get Scene Exit Index
 */
u32 SurfaceType_GetSceneExitIndex(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get ? Property (& 0x0003 E000)
 */
u32 func_80041D4C(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get ? Property (& 0x001C 0000)
 */
u32 func_80041D70(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get Wall Property (Internal)
 */
u32 func_80041D94(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get Wall Flags
 */
s32 func_80041DB8(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Is Wall Flag (1 << 0) Set
 */
s32 func_80041DE4(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Is Wall Flag (1 << 1) Set
 */
s32 func_80041E18(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Is Wall Flag (1 << 2) Set
 */
s32 func_80041E4C(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * unused
 */
u32 func_80041E80(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get Floor Property
 */
u32 func_80041EA4(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Is Floor Minus 1
 */
u32 func_80041EC8(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Is Horse Blocked
 */
u32 SurfaceType_IsHorseBlocked(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

u32 func_80041F10(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get Poly Sfx
 */
u16 SurfaceType_GetSfx(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType get terrain slope surface
 */
u32 SurfaceType_GetSlope(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType get surface lighting setting
 */
u32 SurfaceType_GetLightSettingIndex(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType get echo
 */
u32 SurfaceType_GetEcho(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Is Hookshot Surface
 */
u32 SurfaceType_IsHookshotSurface(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * CollisionPoly is ignored by entities
 * Returns true if poly is ignored by entities, else false
 */
s32 SurfaceType_IsIgnoredByEntities(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * CollisionPoly is ignored by projectiles
 * Returns true if poly is ignored by projectiles, else false
 */
s32 SurfaceType_IsIgnoredByProjectiles(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * Checks if poly is a floor conveyor
 *
 * A conveyor surface is enabled with non-zero speed.
 * When enabled, the conveyor will exhibit two types of behaviour depending on the return value:
 *
 * If true, then it is a floor conveyor and will push player only while being stood on
 * If false, then it is a water conveyor and will push player only while in water
 */
s32 SurfaceType_IsFloorConveyor(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get Conveyor Surface Speed
 */
u32 SurfaceType_GetConveyorSpeed(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType Get Conveyor Direction
 * returns a value between 0-63, representing 360 / 64 degrees of rotation
 */
u32 SurfaceType_GetConveyorDirection(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * SurfaceType is Wall Damage
 */
u32 SurfaceType_IsWallDamage(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId);

/**
 * Zora's Domain WaterBox in King Zora's Room
 */
extern WaterBox zdWaterBox;

/**
 * WaterBox's effective bounding box
 */
extern f32 zdWaterBoxMinX;
extern f32 zdWaterBoxMinY;
extern f32 zdWaterBoxMinZ;
extern f32 zdWaterBoxMaxX;
extern f32 zdWaterBoxMaxY;
extern f32 zdWaterBoxMaxZ;

/**
 * Public. Get the water surface at point (`x`, `ySurface`, `z`). `ySurface` doubles as position y input
 * returns true if point is within the xz boundaries of an active water box, else false
 * `ySurface` returns the water box's surface, while `outWaterBox` returns a pointer to the WaterBox
 */
s32 WaterBox_GetSurface1(PlayState* play, CollisionContext* colCtx, f32 x, f32 z, f32* ySurface,
                         WaterBox** outWaterBox);

/**
 * Internal. Get the water surface at point (`x`, `ySurface`, `z`). `ySurface` doubles as position y input
 * returns true if point is within the xz boundaries of an active water box, else false
 * `ySurface` returns the water box's surface, while `outWaterBox` returns a pointer to the WaterBox
 */
s32 WaterBox_GetSurfaceImpl(PlayState* play, CollisionContext* colCtx, f32 x, f32 z, f32* ySurface,
                            WaterBox** outWaterBox);

/**
 * Gets the first active WaterBox at `pos` where WaterBox.properties & 0x80000 == 0
 * `surfaceChkDist` is the absolute y distance from the water surface to check
 * returns the index of the waterbox found, or -1 if no waterbox is found
 * `outWaterBox` returns the pointer to the waterbox found, or NULL if none is found
 */
s32 WaterBox_GetSurface2(PlayState* play, CollisionContext* colCtx, Vec3f* pos, f32 surfaceChkDist,
                         WaterBox** outWaterBox);

/**
 * WaterBox get CamData index
 */
u32 WaterBox_GetCamDataIndex(CollisionContext* colCtx, WaterBox* waterBox);

/**
 * WaterBox get CamData cameraSType
 */
u16 WaterBox_GetCameraSType(CollisionContext* colCtx, WaterBox* waterBox);

/**
 * WaterBox get lighting settings
 */
u32 WaterBox_GetLightSettingIndex(CollisionContext* colCtx, WaterBox* waterBox);

/**
 * Get the water surface at point (`x`, `ySurface`, `z`). `ySurface` doubles as position y input
 * same as WaterBox_GetSurfaceImpl, but tests if WaterBox properties & 0x80000 != 0
 * returns true if point is within the xz boundaries of an active water box, else false
 * `ySurface` returns the water box's surface, while `outWaterBox` returns a pointer to the WaterBox
 */
s32 func_800425B0(PlayState* play, CollisionContext* colCtx, f32 x, f32 z, f32* ySurface, WaterBox** outWaterBox);

/**
 * Gets the `closestPoint` to `point` on the line formed from the intesection of planes `polyA` and `polyB`
 * returns true if the `closestPoint` exists, else returns false
 */
s32 func_80042708(CollisionPoly* polyA, CollisionPoly* polyB, Vec3f* point, Vec3f* closestPoint);

/**
 * Get the `closestPoint` to line (`pointA`, `pointB`) formed from the intersection of planes `polyA` and `polyB`
 * returns true if the `closestPoint` exists, else returns false
 */
s32 func_800427B4(CollisionPoly* polyA, CollisionPoly* polyB, Vec3f* pointA, Vec3f* pointB, Vec3f* closestPoint);

/**
 * Draw a list of dyna polys, specified by `ssList`
 */
void BgCheck_DrawDynaPolyList(PlayState* play, CollisionContext* colCtx, DynaCollisionContext* dyna, SSList* ssList,
                              u8 r, u8 g, u8 b);

/**
 * Draw a BgActor's dyna polys
 * `bgId` is the BgActor index that should be drawn
 */
void BgCheck_DrawBgActor(PlayState* play, CollisionContext* colCtx, s32 bgId);

/**
 * Draw all dyna polys
 */
void BgCheck_DrawDynaCollision(PlayState* play, CollisionContext* colCtx);

/**
 * Draw a static poly
 */
void BgCheck_DrawStaticPoly(PlayState* play, CollisionContext* colCtx, CollisionPoly* poly, u8 r, u8 g, u8 b);

/**
 * Draw a list of static polys, specified by `ssList`
 */
void BgCheck_DrawStaticPolyList(PlayState* play, CollisionContext* colCtx, SSList* ssList, u8 r, u8 g, u8 b);

/**
 * Draw scene collision
 */
void BgCheck_DrawStaticCollision(PlayState* play, CollisionContext* colCtx);

#endif
