#ifndef OBJECT_BOX_H
#define OBJECT_BOX_H 1

typedef enum ObjectBoxChestLimb {
    /* 0x00 */ OBJECT_BOX_CHEST_LIMB_NONE,
    /* 0x01 */ OBJECT_BOX_CHEST_LIMB_01,
    /* 0x02 */ OBJECT_BOX_CHEST_LIMB_02,
    /* 0x03 */ OBJECT_BOX_CHEST_LIMB_03,
    /* 0x04 */ OBJECT_BOX_CHEST_LIMB_04,
    /* 0x05 */ OBJECT_BOX_CHEST_LIMB_MAX
} ObjectBoxChestLimb;

typedef enum ObjectBoxLightLimb {
    /* 0x00 */ OBJECT_BOX_LIGHT_LIMB_NONE,
    /* 0x01 */ OBJECT_BOX_LIGHT_LIMB_01,
    /* 0x02 */ OBJECT_BOX_LIGHT_LIMB_02,
    /* 0x03 */ OBJECT_BOX_LIGHT_LIMB_03,
    /* 0x04 */ OBJECT_BOX_LIGHT_LIMB_04,
    /* 0x05 */ OBJECT_BOX_LIGHT_LIMB_05,
    /* 0x06 */ OBJECT_BOX_LIGHT_LIMB_06,
    /* 0x07 */ OBJECT_BOX_LIGHT_LIMB_07,
    /* 0x08 */ OBJECT_BOX_LIGHT_LIMB_08,
    /* 0x09 */ OBJECT_BOX_LIGHT_LIMB_09,
    /* 0x0A */ OBJECT_BOX_LIGHT_LIMB_10,
    /* 0x0B */ OBJECT_BOX_LIGHT_LIMB_11,
    /* 0x0C */ OBJECT_BOX_LIGHT_LIMB_12,
    /* 0x0D */ OBJECT_BOX_LIGHT_LIMB_13,
    /* 0x0E */ OBJECT_BOX_LIGHT_LIMB_14,
    /* 0x0F */ OBJECT_BOX_LIGHT_LIMB_MAX
} ObjectBoxLightLimb;

extern s16 sBoxBigChestOpenChildAnimFrameData[];
extern JointIndex sBoxBigChestOpenChildAnimJointIndices[];
extern AnimationHeader gBoxBigChestOpenChildAnim;
extern s16 sBoxBigChestOpenAdultAnimFrameData[];
extern JointIndex sBoxBigChestOpenAdultAnimJointIndices[];
extern AnimationHeader gBoxBigChestOpenAdultAnim;
extern u8 object_box_zeroes_unk_0000025C[];
extern s16 sBoxChestOpenAnimFrameData[];
extern JointIndex sBoxChestOpenAnimJointIndices[];
extern AnimationHeader gBoxChestOpenAnim;
extern u8 object_box_zeroes_unk_0000044C[];
extern Vtx object_boxVtx_0004B0[];
extern Gfx gBoxChestBaseDL[];
extern Vtx object_boxVtx_000810[];
extern Gfx gBoxChestBaseGildedDL[];
extern Vtx object_boxVtx_000B70[];
extern Gfx gBoxChestBaseOrnateDL[];
extern Vtx object_boxVtx_000EC8[];
extern Gfx gBoxChestLidDL[];
extern Vtx object_boxVtx_001430[];
extern Gfx gBoxChestLidGildedDL[];
extern Vtx object_boxVtx_001998[];
extern Gfx gBoxChestLidOrnateDL[];
extern u64 gBoxChestLockTex[];
extern u64 gBoxChestCornerTex[];
extern u64 gBoxChestLockGildedTex[];
extern u64 gBoxChestCornerGildedTex[];
extern u64 gBoxChestLockOrnateTex[];
extern u64 gBoxChestCornerOrnateTex[];
extern StandardLimb object_box_Standardlimb_006660;
extern StandardLimb object_box_Standardlimb_00666C;
extern StandardLimb object_box_Standardlimb_006678;
extern StandardLimb object_box_Standardlimb_006684;
extern void* gBoxChestSkelLimbs[];
extern SkeletonHeader gBoxChestSkel;
extern u8 object_boxCurveAnime_Ref_0066B0[];
extern s16 object_boxCurveAnime_Copy_006730[];
extern TransformData object_boxCurveAnime_TransformData_00681C[];
extern TransformUpdateIndex gBoxLightAdultCurveAnim;
extern u8 object_boxCurveAnime_Ref_006A30[];
extern s16 object_boxCurveAnime_Copy_006AB0[];
extern TransformData object_boxCurveAnime_TransformData_006B9C[];
extern TransformUpdateIndex gBoxLightChildCurveAnim;
extern u64 gBoxLightTex[];
extern Vtx object_boxVtx_007640[];
extern Gfx object_box_DL_007890[];
extern Gfx object_box_DL_007978[];
extern Gfx object_box_DL_007A40[];
extern Gfx object_box_DL_007B08[];
extern Gfx object_box_DL_007BD0[];
extern SkelCurveLimb object_box_Curvelimb_007C98;
extern SkelCurveLimb object_box_Curvelimb_007CA4;
extern SkelCurveLimb object_box_Curvelimb_007CB0;
extern SkelCurveLimb object_box_Curvelimb_007CBC;
extern SkelCurveLimb object_box_Curvelimb_007CC8;
extern SkelCurveLimb object_box_Curvelimb_007CD4;
extern SkelCurveLimb object_box_Curvelimb_007CE0;
extern SkelCurveLimb object_box_Curvelimb_007CEC;
extern SkelCurveLimb object_box_Curvelimb_007CF8;
extern SkelCurveLimb object_box_Curvelimb_007D04;
extern SkelCurveLimb object_box_Curvelimb_007D10;
extern SkelCurveLimb object_box_Curvelimb_007D1C;
extern SkelCurveLimb object_box_Curvelimb_007D28;
extern SkelCurveLimb object_box_Curvelimb_007D34;
extern SkelCurveLimb* gBoxLightCurveSkelLimbs[];
extern SkelCurveLimbList gBoxLightCurveSkel;
extern s16 sBoxBigChestOpenGoronAnimFrameData[];
extern JointIndex sBoxBigChestOpenGoronAnimJointIndices[];
extern AnimationHeader gBoxBigChestOpenGoronAnim;
extern s16 sBoxBigChestOpenDekuAnimFrameData[];
extern JointIndex sBoxBigChestOpenDekuAnimJointIndices[];
extern AnimationHeader gBoxBigChestOpenDekuAnim;
extern u8 object_box_zeroes_unk_00007F40[];
extern CamData gBoxChestColCamDataList[];
extern SurfaceType gBoxChestColSurfaceType[];
extern CollisionPoly gBoxChestColPolygons[];
extern Vec3s gBoxChestColVertices[];
extern CollisionHeader gBoxChestCol;
#endif
