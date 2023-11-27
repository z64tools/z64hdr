#ifndef OBJECT_RZ_H
#define OBJECT_RZ_H 1

typedef enum ObjectRzLimb {
    /* 0x00 */ OBJECT_RZ_LIMB_NONE,
    /* 0x01 */ OBJECT_RZ_LIMB_01,
    /* 0x02 */ OBJECT_RZ_LIMB_02,
    /* 0x03 */ OBJECT_RZ_LIMB_03,
    /* 0x04 */ OBJECT_RZ_LIMB_04,
    /* 0x05 */ OBJECT_RZ_LIMB_05,
    /* 0x06 */ OBJECT_RZ_LIMB_06,
    /* 0x07 */ OBJECT_RZ_LIMB_07,
    /* 0x08 */ OBJECT_RZ_LIMB_08,
    /* 0x09 */ OBJECT_RZ_LIMB_09,
    /* 0x0A */ OBJECT_RZ_LIMB_0A,
    /* 0x0B */ OBJECT_RZ_LIMB_0B,
    /* 0x0C */ OBJECT_RZ_LIMB_0C,
    /* 0x0D */ OBJECT_RZ_LIMB_0D,
    /* 0x0E */ OBJECT_RZ_LIMB_0E,
    /* 0x0F */ OBJECT_RZ_LIMB_0F,
    /* 0x10 */ OBJECT_RZ_LIMB_10,
    /* 0x11 */ OBJECT_RZ_LIMB_11,
    /* 0x12 */ OBJECT_RZ_LIMB_12,
    /* 0x13 */ OBJECT_RZ_LIMB_13,
    /* 0x14 */ OBJECT_RZ_LIMB_14,
    /* 0x15 */ OBJECT_RZ_LIMB_15,
    /* 0x16 */ OBJECT_RZ_LIMB_MAX
} ObjectRzLimb;

extern s16 sRosaSistersApplaudingAnimFrameData[];
extern JointIndex sRosaSistersApplaudingAnimJointIndices[];
extern AnimationHeader gRosaSistersApplaudingAnim;
extern s16 sRosaSistersOnKneesAnimFrameData[];
extern JointIndex sRosaSistersOnKneesAnimJointIndices[];
extern AnimationHeader gRosaSistersOnKneesAnim;
extern s16 sRosaSistersDancingAnimFrameData[];
extern JointIndex sRosaSistersDancingAnimJointIndices[];
extern AnimationHeader gRosaSistersDancingAnim;
extern s16 sRosaSistersSittingAnimFrameData[];
extern JointIndex sRosaSistersSittingAnimJointIndices[];
extern AnimationHeader gRosaSistersSittingAnim;
extern s16 sRosaSistersStandingAnimFrameData[];
extern JointIndex sRosaSistersStandingAnimJointIndices[];
extern AnimationHeader gRosaSistersStandingAnim;
extern s16 sRosaSistersThinkingAnimFrameData[];
extern JointIndex sRosaSistersThinkingAnimJointIndices[];
extern AnimationHeader gRosaSistersThinkingAnim;
extern s16 sRosaSistersWalkingAnimFrameData[];
extern JointIndex sRosaSistersWalkingAnimJointIndices[];
extern AnimationHeader gRosaSistersWalkingAnim;
extern s16 sRosaSistersWalkingWhileThinkingAnimFrameData[];
extern JointIndex sRosaSistersWalkingWhileThinkingAnimJointIndices[];
extern AnimationHeader gRosaSistersWalkingWhileThinkingAnim;
extern Vtx object_rzVtx_005E60[];
extern Gfx object_rz_DL_0092B0[];
extern Gfx object_rz_DL_0094C8[];
extern Gfx object_rz_DL_009620[];
extern Gfx object_rz_DL_009850[];
extern Gfx object_rz_DL_009A68[];
extern Gfx object_rz_DL_009BC0[];
extern Gfx object_rz_DL_009DF0[];
extern Gfx object_rz_DL_009FD0[];
extern Gfx object_rz_DL_00A088[];
extern Gfx object_rz_DL_00A378[];
extern Gfx object_rz_DL_00A9F8[];
extern Gfx object_rz_DL_00AB98[];
extern Gfx object_rz_DL_00AC50[];
extern Gfx object_rz_DL_00AD70[];
extern Gfx object_rz_DL_00AE88[];
extern Gfx object_rz_DL_00B050[];
extern Gfx object_rz_DL_00B170[];
extern Gfx object_rz_DL_00B288[];
extern u64 object_rz_TLUT_00B450[];
extern u64 object_rz_Tex_00B650[];
extern u64 object_rz_Tex_00B850[];
extern u64 object_rz_Tex_00B890[];
extern u64 object_rz_Tex_00B8D0[];
extern u64 object_rz_Tex_00B9D0[];
extern u64 object_rz_Tex_00BAD0[];
extern u64 object_rz_Tex_00BBD0[];
extern u64 object_rz_Tex_00BC50[];
extern u64 object_rz_Tex_00C050[];
extern u64 object_rz_Tex_00C150[];
extern u64 object_rz_Tex_00C190[];
extern u64 object_rz_Tex_00C590[];
extern u64 object_rz_Tex_00C990[];
extern u64 object_rz_Tex_00CD90[];
extern u64 object_rz_Tex_00D190[];
extern u64 object_rz_Tex_00D1D0[];
extern u64 object_rz_Tex_00D2D0[];
extern F3DPrimColor object_rzTexColorChangingPrimColors_00D6D0[];
extern F3DEnvColor object_rzTexColorChangingEnvColors_00D6DC[];
extern AnimatedMatColorParams object_rz_Matanimheader_00D768ColorParams_00D6E4;
extern TexturePtr object_rzTexCycleTexPtrs_00D6F4[];
extern u8 object_rzTexCycleTexIndices_00D708[];
extern AnimatedMatTexCycleParams object_rz_Matanimheader_00D768TexCycleParams_00D710;
extern F3DPrimColor object_rzTexColorChangingPrimColors_00D720[];
extern F3DEnvColor object_rzTexColorChangingEnvColors_00D72C[];
extern AnimatedMatColorParams object_rz_Matanimheader_00D768ColorParams_00D734;
extern F3DPrimColor object_rzTexColorChangingPrimColors_00D744[];
extern F3DEnvColor object_rzTexColorChangingEnvColors_00D750[];
extern AnimatedMatColorParams object_rz_Matanimheader_00D768ColorParams_00D758;
extern AnimatedMaterial object_rz_Matanimheader_00D768[];
extern StandardLimb object_rz_Standardlimb_00D788;
extern StandardLimb object_rz_Standardlimb_00D794;
extern StandardLimb object_rz_Standardlimb_00D7A0;
extern StandardLimb object_rz_Standardlimb_00D7AC;
extern StandardLimb object_rz_Standardlimb_00D7B8;
extern StandardLimb object_rz_Standardlimb_00D7C4;
extern StandardLimb object_rz_Standardlimb_00D7D0;
extern StandardLimb object_rz_Standardlimb_00D7DC;
extern StandardLimb object_rz_Standardlimb_00D7E8;
extern StandardLimb object_rz_Standardlimb_00D7F4;
extern StandardLimb object_rz_Standardlimb_00D800;
extern StandardLimb object_rz_Standardlimb_00D80C;
extern StandardLimb object_rz_Standardlimb_00D818;
extern StandardLimb object_rz_Standardlimb_00D824;
extern StandardLimb object_rz_Standardlimb_00D830;
extern StandardLimb object_rz_Standardlimb_00D83C;
extern StandardLimb object_rz_Standardlimb_00D848;
extern StandardLimb object_rz_Standardlimb_00D854;
extern StandardLimb object_rz_Standardlimb_00D860;
extern StandardLimb object_rz_Standardlimb_00D86C;
extern StandardLimb object_rz_Standardlimb_00D878;
extern void* object_rz_Skel_00D8D8Limbs[];
extern FlexSkeletonHeader object_rz_Skel_00D8D8;
#endif
