#ifndef OBJECT_EFC_TW_H
#define OBJECT_EFC_TW_H 1

typedef enum TimewarpLimb {
    /* 0x00 */ TIMEWARP_LIMB_NONE,
    /* 0x01 */ TIMEWARP_LIMB_1,
    /* 0x02 */ TIMEWARP_LIMB_2,
    /* 0x03 */ TIMEWARP_LIMB_MAX
} TimewarpLimb;

extern u8 object_efc_twCurveAnime_Ref_000000[];
extern s16 object_efc_twCurveAnime_Copy_000014[];
extern TransformData object_efc_twCurveAnime_TransformData_000038[];
extern TransformUpdateIndex gTimewarpAnim;
extern Vtx gTimewarpVtx[];
extern Gfx gTimewarpDL[];
extern u64 gTimewarpTex[];
extern SkelCurveLimb gTimewarp1Limb;
extern SkelCurveLimb gTimewarp2Limb;
extern SkelCurveLimb* gTimewarpSkelLimbs[];
extern SkelCurveLimbList gTimewarpSkel;
#endif
