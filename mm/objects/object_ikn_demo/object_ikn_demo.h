#ifndef OBJECT_IKN_DEMO_H
#define OBJECT_IKN_DEMO_H 1

typedef enum ObjectIknDemo1Limb {
    /* 0x00 */ OBJECT_IKN_DEMO_1_LIMB_NONE,
    /* 0x01 */ OBJECT_IKN_DEMO_1_LIMB_01,
    /* 0x02 */ OBJECT_IKN_DEMO_1_LIMB_02,
    /* 0x03 */ OBJECT_IKN_DEMO_1_LIMB_03,
    /* 0x04 */ OBJECT_IKN_DEMO_1_LIMB_04,
    /* 0x05 */ OBJECT_IKN_DEMO_1_LIMB_05,
    /* 0x06 */ OBJECT_IKN_DEMO_1_LIMB_06,
    /* 0x07 */ OBJECT_IKN_DEMO_1_LIMB_07,
    /* 0x08 */ OBJECT_IKN_DEMO_1_LIMB_08,
    /* 0x09 */ OBJECT_IKN_DEMO_1_LIMB_09,
    /* 0x0A */ OBJECT_IKN_DEMO_1_LIMB_0A,
    /* 0x0B */ OBJECT_IKN_DEMO_1_LIMB_0B,
    /* 0x0C */ OBJECT_IKN_DEMO_1_LIMB_0C,
    /* 0x0D */ OBJECT_IKN_DEMO_1_LIMB_0D,
    /* 0x0E */ OBJECT_IKN_DEMO_1_LIMB_0E,
    /* 0x0F */ OBJECT_IKN_DEMO_1_LIMB_0F,
    /* 0x10 */ OBJECT_IKN_DEMO_1_LIMB_10,
    /* 0x11 */ OBJECT_IKN_DEMO_1_LIMB_MAX
} ObjectIknDemo1Limb;

typedef enum ObjectIknDemo2Limb {
    /* 0x00 */ OBJECT_IKN_DEMO_2_LIMB_NONE,
    /* 0x01 */ OBJECT_IKN_DEMO_2_LIMB_01,
    /* 0x02 */ OBJECT_IKN_DEMO_2_LIMB_02,
    /* 0x03 */ OBJECT_IKN_DEMO_2_LIMB_03,
    /* 0x04 */ OBJECT_IKN_DEMO_2_LIMB_04,
    /* 0x05 */ OBJECT_IKN_DEMO_2_LIMB_05,
    /* 0x06 */ OBJECT_IKN_DEMO_2_LIMB_06,
    /* 0x07 */ OBJECT_IKN_DEMO_2_LIMB_MAX
} ObjectIknDemo2Limb;

typedef enum ObjectIknDemo3Limb {
    /* 0x00 */ OBJECT_IKN_DEMO_3_LIMB_NONE,
    /* 0x01 */ OBJECT_IKN_DEMO_3_LIMB_01,
    /* 0x02 */ OBJECT_IKN_DEMO_3_LIMB_02,
    /* 0x03 */ OBJECT_IKN_DEMO_3_LIMB_03,
    /* 0x04 */ OBJECT_IKN_DEMO_3_LIMB_04,
    /* 0x05 */ OBJECT_IKN_DEMO_3_LIMB_05,
    /* 0x06 */ OBJECT_IKN_DEMO_3_LIMB_06,
    /* 0x07 */ OBJECT_IKN_DEMO_3_LIMB_MAX
} ObjectIknDemo3Limb;

extern s16 object_ikn_demo_Anim_0000B8FrameData[];
extern JointIndex object_ikn_demo_Anim_0000B8JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_0000B8;
extern Vtx object_ikn_demoVtx_0000D0[];
extern Gfx object_ikn_demo_DL_001D20[];
extern Gfx object_ikn_demo_DL_002128[];
extern Gfx object_ikn_demo_DL_002208[];
extern Gfx object_ikn_demo_DL_0022D0[];
extern Gfx object_ikn_demo_DL_002420[];
extern Gfx object_ikn_demo_DL_0024E0[];
extern Gfx object_ikn_demo_DL_0025B0[];
extern Gfx object_ikn_demo_DL_002670[];
extern Gfx object_ikn_demo_DL_002740[];
extern Gfx object_ikn_demo_DL_002858[];
extern Gfx object_ikn_demo_DL_002970[];
extern Gfx object_ikn_demo_DL_0029F8[];
extern Gfx object_ikn_demo_DL_002A80[];
extern Gfx object_ikn_demo_DL_002B08[];
extern Gfx object_ikn_demo_DL_002B90[];
extern Gfx object_ikn_demo_DL_002C68[];
extern u64 object_ikn_demo_Tex_002D50[];
extern u64 object_ikn_demo_Tex_002D70[];
extern u64 object_ikn_demo_Tex_002E70[];
extern u64 object_ikn_demo_Tex_002F70[];
extern u64 object_ikn_demo_Tex_003070[];
extern u64 object_ikn_demo_Tex_0030F0[];
extern u64 object_ikn_demo_Tex_0032F0[];
extern u64 object_ikn_demo_Tex_0034F0[];
extern u64 object_ikn_demo_Tex_0035F0[];
extern StandardLimb object_ikn_demo_Standardlimb_0037F0;
extern StandardLimb object_ikn_demo_Standardlimb_0037FC;
extern StandardLimb object_ikn_demo_Standardlimb_003808;
extern StandardLimb object_ikn_demo_Standardlimb_003814;
extern StandardLimb object_ikn_demo_Standardlimb_003820;
extern StandardLimb object_ikn_demo_Standardlimb_00382C;
extern StandardLimb object_ikn_demo_Standardlimb_003838;
extern StandardLimb object_ikn_demo_Standardlimb_003844;
extern StandardLimb object_ikn_demo_Standardlimb_003850;
extern StandardLimb object_ikn_demo_Standardlimb_00385C;
extern StandardLimb object_ikn_demo_Standardlimb_003868;
extern StandardLimb object_ikn_demo_Standardlimb_003874;
extern StandardLimb object_ikn_demo_Standardlimb_003880;
extern StandardLimb object_ikn_demo_Standardlimb_00388C;
extern StandardLimb object_ikn_demo_Standardlimb_003898;
extern StandardLimb object_ikn_demo_Standardlimb_0038A4;
extern void* object_ikn_demo_Skel_0038F0Limbs[];
extern FlexSkeletonHeader object_ikn_demo_Skel_0038F0;
extern s16 object_ikn_demo_Anim_003CACFrameData[];
extern JointIndex object_ikn_demo_Anim_003CACJointIndices[];
extern AnimationHeader object_ikn_demo_Anim_003CAC;
extern s16 object_ikn_demo_Anim_004208FrameData[];
extern JointIndex object_ikn_demo_Anim_004208JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_004208;
extern s16 object_ikn_demo_Anim_004514FrameData[];
extern JointIndex object_ikn_demo_Anim_004514JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_004514;
extern s16 object_ikn_demo_Anim_004A58FrameData[];
extern JointIndex object_ikn_demo_Anim_004A58JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_004A58;
extern s16 object_ikn_demo_Anim_0065D8FrameData[];
extern JointIndex object_ikn_demo_Anim_0065D8JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_0065D8;
extern s16 object_ikn_demo_Anim_0067B8FrameData[];
extern JointIndex object_ikn_demo_Anim_0067B8JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_0067B8;
extern s16 object_ikn_demo_Anim_006808FrameData[];
extern JointIndex object_ikn_demo_Anim_006808JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_006808;
extern Vtx object_ikn_demoVtx_006820[];
extern Gfx object_ikn_demo_DL_0072F0[];
extern Gfx object_ikn_demo_DL_007680[];
extern Gfx object_ikn_demo_DL_0077B0[];
extern Gfx object_ikn_demo_DL_0078E0[];
extern Gfx object_ikn_demo_DL_007988[];
extern Gfx object_ikn_demo_DL_007A38[];
extern StandardLimb object_ikn_demo_Standardlimb_007AE8;
extern StandardLimb object_ikn_demo_Standardlimb_007AF4;
extern StandardLimb object_ikn_demo_Standardlimb_007B00;
extern StandardLimb object_ikn_demo_Standardlimb_007B0C;
extern StandardLimb object_ikn_demo_Standardlimb_007B18;
extern StandardLimb object_ikn_demo_Standardlimb_007B24;
extern void* object_ikn_demo_Skel_007B48Limbs[];
extern FlexSkeletonHeader object_ikn_demo_Skel_007B48;
extern s16 object_ikn_demo_Anim_0081A8FrameData[];
extern JointIndex object_ikn_demo_Anim_0081A8JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_0081A8;
extern s16 object_ikn_demo_Anim_0083F4FrameData[];
extern JointIndex object_ikn_demo_Anim_0083F4JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_0083F4;
extern s16 object_ikn_demo_Anim_008724FrameData[];
extern JointIndex object_ikn_demo_Anim_008724JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_008724;
extern s16 object_ikn_demo_Anim_008AF4FrameData[];
extern JointIndex object_ikn_demo_Anim_008AF4JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_008AF4;
extern s16 object_ikn_demo_Anim_008CECFrameData[];
extern JointIndex object_ikn_demo_Anim_008CECJointIndices[];
extern AnimationHeader object_ikn_demo_Anim_008CEC;
extern s16 object_ikn_demo_Anim_008F1CFrameData[];
extern JointIndex object_ikn_demo_Anim_008F1CJointIndices[];
extern AnimationHeader object_ikn_demo_Anim_008F1C;
extern s16 object_ikn_demo_Anim_009044FrameData[];
extern JointIndex object_ikn_demo_Anim_009044JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_009044;
extern s16 object_ikn_demo_Anim_009254FrameData[];
extern JointIndex object_ikn_demo_Anim_009254JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_009254;
extern s16 object_ikn_demo_Anim_0098E4FrameData[];
extern JointIndex object_ikn_demo_Anim_0098E4JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_0098E4;
extern s16 object_ikn_demo_Anim_009A44FrameData[];
extern JointIndex object_ikn_demo_Anim_009A44JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_009A44;
extern s16 object_ikn_demo_Anim_009CC8FrameData[];
extern JointIndex object_ikn_demo_Anim_009CC8JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_009CC8;
extern s16 object_ikn_demo_Anim_009EA8FrameData[];
extern JointIndex object_ikn_demo_Anim_009EA8JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_009EA8;
extern s16 object_ikn_demo_Anim_009F00FrameData[];
extern JointIndex object_ikn_demo_Anim_009F00JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_009F00;
extern Vtx object_ikn_demoVtx_009F10[];
extern Gfx object_ikn_demo_DL_00AB80[];
extern Gfx object_ikn_demo_DL_00AEA0[];
extern Gfx object_ikn_demo_DL_00B028[];
extern Gfx object_ikn_demo_DL_00B1B0[];
extern Gfx object_ikn_demo_DL_00B258[];
extern Gfx object_ikn_demo_DL_00B308[];
extern StandardLimb object_ikn_demo_Standardlimb_00B430;
extern StandardLimb object_ikn_demo_Standardlimb_00B43C;
extern StandardLimb object_ikn_demo_Standardlimb_00B448;
extern StandardLimb object_ikn_demo_Standardlimb_00B454;
extern StandardLimb object_ikn_demo_Standardlimb_00B460;
extern StandardLimb object_ikn_demo_Standardlimb_00B46C;
extern void* object_ikn_demo_Skel_00B490Limbs[];
extern FlexSkeletonHeader object_ikn_demo_Skel_00B490;
extern s16 object_ikn_demo_Anim_00B704FrameData[];
extern JointIndex object_ikn_demo_Anim_00B704JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00B704;
extern s16 object_ikn_demo_Anim_00B8C0FrameData[];
extern JointIndex object_ikn_demo_Anim_00B8C0JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00B8C0;
extern s16 object_ikn_demo_Anim_00B9E4FrameData[];
extern JointIndex object_ikn_demo_Anim_00B9E4JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00B9E4;
extern s16 object_ikn_demo_Anim_00BDB4FrameData[];
extern JointIndex object_ikn_demo_Anim_00BDB4JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00BDB4;
extern s16 object_ikn_demo_Anim_00BF04FrameData[];
extern JointIndex object_ikn_demo_Anim_00BF04JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00BF04;
extern s16 object_ikn_demo_Anim_00C154FrameData[];
extern JointIndex object_ikn_demo_Anim_00C154JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00C154;
extern s16 object_ikn_demo_Anim_00C2C4FrameData[];
extern JointIndex object_ikn_demo_Anim_00C2C4JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00C2C4;
extern s16 object_ikn_demo_Anim_00C59CFrameData[];
extern JointIndex object_ikn_demo_Anim_00C59CJointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00C59C;
extern s16 object_ikn_demo_Anim_00C804FrameData[];
extern JointIndex object_ikn_demo_Anim_00C804JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00C804;
extern s16 object_ikn_demo_Anim_00CA74FrameData[];
extern JointIndex object_ikn_demo_Anim_00CA74JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00CA74;
extern s16 object_ikn_demo_Anim_00CD28FrameData[];
extern JointIndex object_ikn_demo_Anim_00CD28JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00CD28;
extern s16 object_ikn_demo_Anim_00D044FrameData[];
extern JointIndex object_ikn_demo_Anim_00D044JointIndices[];
extern AnimationHeader object_ikn_demo_Anim_00D044;
extern u64 object_ikn_demo_Tex_00D060[];
extern u64 object_ikn_demo_Tex_00D1E0[];
extern u64 object_ikn_demo_Tex_00D4E0[];
extern u64 object_ikn_demo_Tex_00D600[];
extern u64 object_ikn_demo_Tex_00D900[];
extern u64 object_ikn_demo_Tex_00D940[];
extern u64 object_ikn_demo_Tex_00DC80[];
#endif
