#ifndef OBJECT_DT_H
#define OBJECT_DT_H 1

typedef enum ObjectDtLimb {
    /* 0x00 */ OBJECT_DT_LIMB_NONE,
    /* 0x01 */ OBJECT_DT_LIMB_01,
    /* 0x02 */ OBJECT_DT_LIMB_02,
    /* 0x03 */ OBJECT_DT_LIMB_03,
    /* 0x04 */ OBJECT_DT_LIMB_04,
    /* 0x05 */ OBJECT_DT_LIMB_05,
    /* 0x06 */ OBJECT_DT_LIMB_06,
    /* 0x07 */ OBJECT_DT_LIMB_07,
    /* 0x08 */ OBJECT_DT_LIMB_08,
    /* 0x09 */ OBJECT_DT_LIMB_09,
    /* 0x0A */ OBJECT_DT_LIMB_0A,
    /* 0x0B */ OBJECT_DT_LIMB_0B,
    /* 0x0C */ OBJECT_DT_LIMB_0C,
    /* 0x0D */ OBJECT_DT_LIMB_0D,
    /* 0x0E */ OBJECT_DT_LIMB_0E,
    /* 0x0F */ OBJECT_DT_LIMB_MAX
} ObjectDtLimb;

extern s16 object_dt_Anim_0005A4FrameData[];
extern JointIndex object_dt_Anim_0005A4JointIndices[];
extern AnimationHeader object_dt_Anim_0005A4;
extern s16 object_dt_Anim_000854FrameData[];
extern JointIndex object_dt_Anim_000854JointIndices[];
extern AnimationHeader object_dt_Anim_000854;
extern s16 object_dt_Anim_000BE0FrameData[];
extern JointIndex object_dt_Anim_000BE0JointIndices[];
extern AnimationHeader object_dt_Anim_000BE0;
extern s16 object_dt_Anim_000DA8FrameData[];
extern JointIndex object_dt_Anim_000DA8JointIndices[];
extern AnimationHeader object_dt_Anim_000DA8;
extern s16 object_dt_Anim_00112CFrameData[];
extern JointIndex object_dt_Anim_00112CJointIndices[];
extern AnimationHeader object_dt_Anim_00112C;
extern Vtx object_dtVtx_001140[];
extern Gfx object_dt_DL_004DB0[];
extern Gfx object_dt_DL_005130[];
extern Gfx object_dt_DL_0054C8[];
extern Gfx object_dt_DL_005AF8[];
extern Gfx object_dt_DL_005DB0[];
extern Gfx object_dt_DL_005E70[];
extern Gfx object_dt_DL_006018[];
extern Gfx object_dt_DL_006140[];
extern Gfx object_dt_DL_006258[];
extern Gfx object_dt_DL_0063B8[];
extern Gfx object_dt_DL_0064E0[];
extern Gfx object_dt_DL_0065F8[];
extern Gfx object_dt_DL_006800[];
extern Gfx object_dt_DL_006928[];
extern u64 object_dt_TLUT_006A50[];
extern u64 object_dt_TLUT_006C50[];
extern u64 object_dt_TLUT_006E50[];
extern u64 object_dt_Tex_007050[];
extern u64 object_dt_Tex_007090[];
extern u64 object_dt_Tex_007190[];
extern u64 object_dt_Tex_0071D0[];
extern u64 object_dt_Tex_007210[];
extern u64 object_dt_Tex_007310[];
extern u64 gDotourEyeShockTex[];
extern u64 gDotourEyebrowHighTex[];
extern u64 object_dt_Tex_007850[];
extern u64 object_dt_Tex_007C50[];
extern u64 object_dt_Tex_007D50[];
extern u64 object_dt_Tex_008150[];
extern u64 object_dt_Tex_008190[];
extern u64 object_dt_Tex_008390[];
extern u64 object_dt_Tex_009390[];
extern u64 gDotourEyeOpenTex[];
extern u64 object_dt_Tex_009990[];
extern u64 object_dt_Tex_009D90[];
extern u64 gDotourEyeClosedTex[];
extern u64 gDotourEyebrowMidTex[];
extern u64 gDotourEyebrowLowTex[];
extern u64 object_dt_Tex_00A590[];
extern u64 gDotourEyeLookDownTex[];
extern u64 gDotourEyeSquintTex[];
extern TexturePtr object_dtTexCycleTexPtrs_00AF90[];
extern u8 object_dtTexCycleTexIndices_00AFA4[];
extern AnimatedMatTexCycleParams object_dt_Matanimheader_00AFDCTexCycleParams_00AFAC;
extern TexturePtr object_dtTexCycleTexPtrs_00AFBC[];
extern u8 object_dtTexCycleTexIndices_00AFC8[];
extern AnimatedMatTexCycleParams object_dt_Matanimheader_00AFDCTexCycleParams_00AFCC;
extern AnimatedMaterial object_dt_Matanimheader_00AFDC[];
extern StandardLimb object_dt_Standardlimb_00AFEC;
extern StandardLimb object_dt_Standardlimb_00AFF8;
extern StandardLimb object_dt_Standardlimb_00B004;
extern StandardLimb object_dt_Standardlimb_00B010;
extern StandardLimb object_dt_Standardlimb_00B01C;
extern StandardLimb object_dt_Standardlimb_00B028;
extern StandardLimb object_dt_Standardlimb_00B034;
extern StandardLimb object_dt_Standardlimb_00B040;
extern StandardLimb object_dt_Standardlimb_00B04C;
extern StandardLimb object_dt_Standardlimb_00B058;
extern StandardLimb object_dt_Standardlimb_00B064;
extern StandardLimb object_dt_Standardlimb_00B070;
extern StandardLimb object_dt_Standardlimb_00B07C;
extern StandardLimb object_dt_Standardlimb_00B088;
extern void* object_dt_Skel_00B0CCLimbs[];
extern FlexSkeletonHeader object_dt_Skel_00B0CC;
extern s16 object_dt_Anim_00B500FrameData[];
extern JointIndex object_dt_Anim_00B500JointIndices[];
extern AnimationHeader object_dt_Anim_00B500;
#endif
