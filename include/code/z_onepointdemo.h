void OnePointCutscene_AddVecSphToVec3f(Vec3f* dst, Vec3f* src, VecSph* vecSph);
s16 OnePointCutscene_Vec3fYaw(Vec3f* vec1, Vec3f* vec2);
void OnePointCutscene_Vec3sToVec3f(Vec3f* src, Vec3s* dst);
s32 OnePointCutscene_BgCheckLineTest(CollisionContext* colCtx, Vec3f* vec1, Vec3f* vec2);
f32 OnePointCutscene_RaycastFloor(CollisionContext* colCtx, Vec3f* pos);
void OnePointCutscene_SetCsCamPoints(Camera* camera, s16 actionParameters, s16 initTimer, CutsceneCameraPoint* atPoints, CutsceneCameraPoint* eyePoints);
s32 OnePointCutscene_SetInfo(PlayState* play, s16 subCamId, s16 csId, Actor* actor, s16 timer);
s16 OnePointCutscene_SetAsChild(PlayState* play, s16 newCamId, s16 parentCamId);
s32 OnePointCutscene_RemoveCamera(PlayState* play, s16 subCamId);

#define vChildCamId temp2
#define vSubCamStatus temp1
#define vCurCamId temp2
#define vNextCamId temp1
#define vTargetCat temp1
#define vParentCamId temp1
#define vLastHigherCat temp2
#define vSubCamId temp2