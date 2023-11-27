#ifndef OBJECT_ZL1_H
#define OBJECT_ZL1_H 1

typedef enum ChildZelda1Limb {
    /* 0x00 */ CHILD_ZELDA_1_LIMB_NONE,
    /* 0x01 */ CHILD_ZELDA_1_LIMB_ROOT,
    /* 0x02 */ CHILD_ZELDA_1_LIMB_WAIST,
    /* 0x03 */ CHILD_ZELDA_1_LIMB_LEFT_LEG,
    /* 0x04 */ CHILD_ZELDA_1_LIMB_LEFT_FOOT,
    /* 0x05 */ CHILD_ZELDA_1_LIMB_RIGHT_LEG,
    /* 0x06 */ CHILD_ZELDA_1_LIMB_RIGHT_FOOT,
    /* 0x07 */ CHILD_ZELDA_1_LIMB_DRESS_1,
    /* 0x08 */ CHILD_ZELDA_1_LIMB_DRESS_2,
    /* 0x09 */ CHILD_ZELDA_1_LIMB_DRESS_3,
    /* 0x0A */ CHILD_ZELDA_1_LIMB_TORSO,
    /* 0x0B */ CHILD_ZELDA_1_LIMB_LEFT_UPPER_ARM,
    /* 0x0C */ CHILD_ZELDA_1_LIMB_LEFT_FOREARM,
    /* 0x0D */ CHILD_ZELDA_1_LIMB_LEFT_HAND,
    /* 0x0E */ CHILD_ZELDA_1_LIMB_RIGHT_UPPER_ARM,
    /* 0x0F */ CHILD_ZELDA_1_LIMB_RIGHT_FOREARM,
    /* 0x10 */ CHILD_ZELDA_1_LIMB_RIGHT_HAND,
    /* 0x11 */ CHILD_ZELDA_1_LIMB_HEAD,
    /* 0x12 */ CHILD_ZELDA_1_LIMB_MAX
} ChildZelda1Limb;

extern s16 sChildZelda1Anim_00438FrameData[];
extern JointIndex sChildZelda1Anim_00438JointIndices[];
extern AnimationHeader gChildZelda1Anim_00438;
extern u64 gChildZelda1TLUT_0450[];
extern u64 gChildZelda1DressGradientTex[];
extern u64 gChildZelda1PurpleDressPatternTex[];
extern u64 gChildZelda1TriforceSashTex[];
extern u64 gChildZelda1BeltTex[];
extern u64 gChildZelda1BeltLoopsTex[];
extern u64 gChildZelda1DressWrinklesTex[];
extern u64 gChildZelda1BackOfHandTex[];
extern u64 gChildZelda1BraceletTex[];
extern u64 gChildZelda1BlueUndershirtGradient1Tex[];
extern u64 gChildZelda1BlueUndershirtGradient2Tex[];
extern u64 gChildZelda1Tex_1A50[];
extern u64 gChildZelda1StripedShoulderPatternTex[];
extern u64 gChildZelda1UndershirtWrinklesTex[];
extern u64 gChildZelda1PendantTex[];
extern Vtx object_zl1Vtx_0023D0[];
extern Gfx gChildZelda1TorsoDL[];
extern Gfx gChildZelda1RightUpperArmDL[];
extern Gfx gChildZelda1RightForearmDL[];
extern Gfx gChildZelda1RightHandDL[];
extern Gfx gChildZelda1LeftUpperArmDL[];
extern Gfx gChildZelda1LeftForearmDL[];
extern Gfx gChildZelda1LeftHandDL[];
extern Gfx gChildZelda1WaistDL[];
extern Gfx gChildZelda1Dress1DL[];
extern Gfx gChildZelda1Dress2DL[];
extern Gfx gChildZelda1Dress3DL[];
extern u64 gChildZelda1TLUT_6CD8[];
extern u64 gChildZelda1TLUT_6ED0[];
extern u64 gChildZelda1TLUT_70C8[];
extern u64 gChildZelda1EyeOpenLookingUpRightTex[];
extern u64 gChildZelda1MouthNeutralTex[];
extern u64 gChildZelda1HeaddressGradientTex[];
extern u64 gChildZelda1SkinGradientTex[];
extern u64 gChildZelda1HeaddressTriforceEmblemTex[];
extern u64 gChildZelda1PointedHairOnSideTex[];
extern u64 gChildZelda1HairTex[];
extern u64 gChildZelda1Tex_81C8[];
extern u64 gChildZelda1EarTex[];
extern u64 gChildZelda1AlternateDressPatternTex[];
extern u64 gChildZelda1AlternateDressBeltTex[];
extern u64 gChildZelda1AlternateDressGradientTex[];
extern u64 gChildZelda1AlternateDressLiningTex[];
extern u64 gChildZelda1BootTex[];
extern u64 gChildZelda1BootShaftTex[];
extern u64 gChildZelda1EyeOpenLookingLeftTex[];
extern u64 gChildZelda1EyeOpenLookingRightTex[];
extern u64 gChildZelda1MouthFrowningTex[];
extern u64 gChildZelda1EyeHalf1Tex[];
extern u64 gChildZelda1EyeHalf2Tex[];
extern u64 gChildZelda1EyeClosedTex[];
extern u64 gChildZelda1EyeWideTex[];
extern u64 gChildZelda1MouthOpenTex[];
extern u64 gChildZelda1Tex_A848[];
extern u64 gChildZelda1HeaddressTex_A8C8[];
extern u64 gChildZelda1HeaddressStripeTex[];
extern u64 gChildZelda1MouthOpenSmilingTex[];
extern Vtx object_zl1Vtx_00AF48[];
extern Gfx gChildZelda1HeadDL[];
extern Gfx gChildZelda1AlternateDressDL[];
extern Gfx gChildZelda1LeftFootDL[];
extern Gfx gChildZelda1RightFootDL[];
extern Gfx gChildZelda1RightLegDL[];
extern Gfx gChildZelda1LeftLegDL[];
extern u64 object_zl1Tex_00EE58[];
extern Vtx object_zl1Vtx_00F258[];
extern Gfx gChildZelda1OcarinaDL[];
extern StandardLimb gChildZelda1RootLimb;
extern StandardLimb gChildZelda1WaistLimb;
extern StandardLimb gChildZelda1LeftLegLimb;
extern StandardLimb gChildZelda1LeftFootLimb;
extern StandardLimb gChildZelda1RightLegLimb;
extern StandardLimb gChildZelda1RightFootLimb;
extern StandardLimb gChildZelda1Dress1Limb;
extern StandardLimb gChildZelda1Dress2Limb;
extern StandardLimb gChildZelda1Dress3Limb;
extern StandardLimb gChildZelda1TorsoLimb;
extern StandardLimb gChildZelda1LeftUpperArmLimb;
extern StandardLimb gChildZelda1LeftForearmLimb;
extern StandardLimb gChildZelda1LeftHandLimb;
extern StandardLimb gChildZelda1RightUpperArmLimb;
extern StandardLimb gChildZelda1RightForearmLimb;
extern StandardLimb gChildZelda1RightHandLimb;
extern StandardLimb gChildZelda1HeadLimb;
extern void* gChildZelda1SkelLimbs[];
extern FlexSkeletonHeader gChildZelda1Skel;
extern s16 sChildZelda1Anim_10B38FrameData[];
extern JointIndex sChildZelda1Anim_10B38JointIndices[];
extern AnimationHeader gChildZelda1Anim_10B38;
extern s16 sChildZelda1Anim_11348FrameData[];
extern JointIndex sChildZelda1Anim_11348JointIndices[];
extern AnimationHeader gChildZelda1Anim_11348;
extern s16 sChildZelda1Anim_116E4FrameData[];
extern JointIndex sChildZelda1Anim_116E4JointIndices[];
extern AnimationHeader gChildZelda1Anim_116E4;
extern s16 sChildZelda1Anim_12B88FrameData[];
extern JointIndex sChildZelda1Anim_12B88JointIndices[];
extern AnimationHeader gChildZelda1Anim_12B88;
extern s16 sChildZelda1Anim_12118FrameData[];
extern JointIndex sChildZelda1Anim_12118JointIndices[];
extern AnimationHeader gChildZelda1Anim_12118;
extern s16 sChildZelda1Anim_12B04FrameData[];
extern JointIndex sChildZelda1Anim_12B04JointIndices[];
extern AnimationHeader gChildZelda1Anim_12B04;
extern s16 sChildZelda1Anim_12F80FrameData[];
extern JointIndex sChildZelda1Anim_12F80JointIndices[];
extern AnimationHeader gChildZelda1Anim_12F80;
extern s16 sChildZelda1Anim_132D8FrameData[];
extern JointIndex sChildZelda1Anim_132D8JointIndices[];
extern AnimationHeader gChildZelda1Anim_132D8;
extern s16 sChildZelda1Anim_138E0FrameData[];
extern JointIndex sChildZelda1Anim_138E0JointIndices[];
extern AnimationHeader gChildZelda1Anim_138E0;
extern s16 sChildZelda1Anim_13F10FrameData[];
extern JointIndex sChildZelda1Anim_13F10JointIndices[];
extern AnimationHeader gChildZelda1Anim_13F10;
extern s16 sChildZelda1Anim_143A8FrameData[];
extern JointIndex sChildZelda1Anim_143A8JointIndices[];
extern AnimationHeader gChildZelda1Anim_143A8;
#endif
