void SkelCurve_Clear(SkelCurve* skelCurve);
s32 SkelCurve_Init(PlayState* play, SkelCurve* skelCurve, CurveSkeletonHeader* skeletonHeaderSeg, CurveAnimationHeader* animation);
void SkelCurve_Destroy(PlayState* play, SkelCurve* skelCurve);
void SkelCurve_SetAnim(SkelCurve* skelCurve, CurveAnimationHeader* animation, f32 arg2, f32 endFrame, f32 curFrame, f32 playSpeed);

typedef enum {
    /* 0 */ SKELCURVE_VEC_TYPE_SCALE,
    /* 1 */ SKELCURVE_VEC_TYPE_ROTATION,
    /* 2 */ SKELCURVE_VEC_TYPE_POSIITON,
    /* 3 */ SKELCURVE_VEC_TYPE_MAX
} SkelCurveVecType;

#define SKELCURVE_SCALE_SCALE 1024.0f
#define SKELCURVE_SCALE_POSITION 100

s32 SkelCurve_Update(PlayState* play, SkelCurve* skelCurve);
void SkelCurve_DrawLimb(PlayState* play, s32 limbIndex, SkelCurve* skelCurve, OverrideCurveLimbDraw overrideLimbDraw, PostCurveLimbDraw postLimbDraw, s32 lod, void* data);
void SkelCurve_Draw(Actor* actor, PlayState* play, SkelCurve* skelCurve, OverrideCurveLimbDraw overrideLimbDraw, PostCurveLimbDraw postLimbDraw, s32 lod, void* data);
