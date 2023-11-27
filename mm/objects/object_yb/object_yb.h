#ifndef OBJECT_YB_H
#define OBJECT_YB_H 1

typedef enum ObjectYbLimb {
    /* 0x00 */ YB_LIMB_NONE,
    /* 0x01 */ YB_LIMB_MAIN_ROOT,
    /* 0x02 */ YB_LIMB_PANTS,
    /* 0x03 */ YB_LIMB_LEGS_ROOT,
    /* 0x04 */ YB_LIMB_RIGHT_THIGH,
    /* 0x05 */ YB_LIMB_RIGHT_SHIN,
    /* 0x06 */ YB_LIMB_RIGHT_FOOT,
    /* 0x07 */ YB_LIMB_LEFT_THIGH,
    /* 0x08 */ YB_LIMB_LEFT_SHIN,
    /* 0x09 */ YB_LIMB_LEFT_FOOT,
    /* 0x0A */ YB_LIMB_CHEST_ROOT,
    /* 0x0B */ YB_LIMB_HEAD,
    /* 0x0C */ YB_LIMB_PONYTAIL,
    /* 0x0D */ YB_LIMB_EMPTY_5E88,
    /* 0x0E */ YB_LIMB_LEFT_UPPER_ARM,
    /* 0x0F */ YB_LIMB_LEFT_FOREARM,
    /* 0x10 */ YB_LIMB_LEFT_HAND,
    /* 0x11 */ YB_LIMB_RIGHT_UPPER_ARM,
    /* 0x12 */ YB_LIMB_RIGHT_FOREARM,
    /* 0x13 */ YB_LIMB_RIGHT_HAND,
    /* 0x14 */ YB_LIMB_EMPTY_5EDC,
    /* 0x15 */ YB_LIMB_TORSO,
    /* 0x16 */ YB_LIMB_MAX
} ObjectYbLimb;

extern s16 object_yb_Anim_000200FrameData[];
extern JointIndex object_yb_Anim_000200JointIndices[];
extern AnimationHeader object_yb_Anim_000200;
extern Vtx object_ybVtx_000210[];
extern Vtx object_ybVtx_0020B0[];
extern Vtx object_ybVtx_002D80[];
extern Gfx gYbPantsAndBellyButtonDL[];
extern Gfx gYbRightThighDL[];
extern Gfx gYbRightShinDL[];
extern Gfx gYbRightFoodDL[];
extern Gfx gYbLeftThighDL[];
extern Gfx gYbLeftShinDL[];
extern Gfx gYbLeftFootDL[];
extern Gfx gYbEndDisplayList4108DL[];
extern Gfx gYbUpperTorsoDL[];
extern Gfx gYbHeadDL[];
extern Gfx gYbPonyTailDL[];
extern Gfx gYbEndDisplayList4970DL[];
extern Gfx gYbRightUpperArmDL[];
extern Gfx gYbRightForearmDL[];
extern Gfx gYbRightHandDL[];
extern Gfx gYbLeftUpperArmDL[];
extern Gfx gYbLeftForearmDL[];
extern Gfx gYbLeftHandDL[];
extern u64 gYbTLUT[];
extern u64 gYbForeheadBlotchTex[];
extern u64 gYbPonytailTex[];
extern u64 gYbFingersTex[];
extern u64 gYbToesTex[];
extern u64 gYbHairlineTex[];
extern u64 gYbBellybuttonTex[];
extern u64 gYbNoseTex[];
extern u64 gYbEyeTex[];
extern u64 gYbPantsTex[];
extern StandardLimb gYbMainRootLimb;
extern StandardLimb gYbPantsLimb;
extern StandardLimb gYbLegsRootLimb;
extern StandardLimb gYbRightThighLimb;
extern StandardLimb gYbRightShinLimb;
extern StandardLimb gYbRightFootLimb;
extern StandardLimb gYbLeftThighLimb;
extern StandardLimb gYbLeftShinLimb;
extern StandardLimb gYbLeftFootLimb;
extern StandardLimb gYbChestRootLimb;
extern StandardLimb gYbHeadLimb;
extern StandardLimb gYbPonyTailLimb;
extern StandardLimb gYbEmpty5E88Limb;
extern StandardLimb gYbLeftUpperArmLimb;
extern StandardLimb gYbLeftForearmLimb;
extern StandardLimb gYbLeftHandLimb;
extern StandardLimb gYbRightUpperArmLimb;
extern StandardLimb gYbRightForearmLimb;
extern StandardLimb gYbRightHandLimb;
extern StandardLimb gYbEmpty5EDCLimb;
extern StandardLimb gYbUpperTorsoLimb;
extern void* gYbSkelLimbs[];
extern FlexSkeletonHeader gYbSkel;
#endif
