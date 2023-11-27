#ifndef OBJECT_MU_H
#define OBJECT_MU_H 1

typedef enum HoneyAndDarlingLimb {
    /* 0x00 */ HONEY_AND_DARLING_LIMB_NONE,
    /* 0x01 */ HONEY_AND_DARLING_LIMB_LEGS,
    /* 0x02 */ HONEY_AND_DARLING_LIMB_MAN_TORSO,
    /* 0x03 */ HONEY_AND_DARLING_LIMB_MAN_LEFT_UPPER_ARM,
    /* 0x04 */ HONEY_AND_DARLING_LIMB_MAN_LEFT_FOREARM,
    /* 0x05 */ HONEY_AND_DARLING_LIMB_MAN_LEFT_HAND,
    /* 0x06 */ HONEY_AND_DARLING_LIMB_MAN_RIGHT_UPPER_ARM,
    /* 0x07 */ HONEY_AND_DARLING_LIMB_MAN_RIGHT_FOREARM,
    /* 0x08 */ HONEY_AND_DARLING_LIMB_MAN_RIGHT_HAND,
    /* 0x09 */ HONEY_AND_DARLING_LIMB_MAN_HEAD,
    /* 0x0A */ HONEY_AND_DARLING_LIMB_WOMAN_ROOT,
    /* 0x0B */ HONEY_AND_DARLING_LIMB_WOMAN_TORSO,
    /* 0x0C */ HONEY_AND_DARLING_LIMB_WOMAN_LEFT_UPPER_ARM,
    /* 0x0D */ HONEY_AND_DARLING_LIMB_WOMAN_LEFT_FOREARM_ROOT,
    /* 0x0E */ HONEY_AND_DARLING_LIMB_WOMAN_LEFT_FOREARM,
    /* 0x0F */ HONEY_AND_DARLING_LIMB_WOMAN_LEFT_HAND,
    /* 0x10 */ HONEY_AND_DARLING_LIMB_WOMAN_RIGHT_UPPER_ARM,
    /* 0x11 */ HONEY_AND_DARLING_LIMB_WOMAN_RIGHT_FOREARM_ROOT,
    /* 0x12 */ HONEY_AND_DARLING_LIMB_WOMAN_RIGHT_FOREARM,
    /* 0x13 */ HONEY_AND_DARLING_LIMB_WOMAN_RIGHT_HAND,
    /* 0x14 */ HONEY_AND_DARLING_LIMB_WOMAN_HEAD,
    /* 0x15 */ HONEY_AND_DARLING_LIMB_MAX
} HoneyAndDarlingLimb;

extern s16 sHoneyAndDarlingCupCheeksLoopAnimFrameData[];
extern JointIndex sHoneyAndDarlingCupCheeksLoopAnimJointIndices[];
extern AnimationHeader gHoneyAndDarlingCupCheeksLoopAnim;
extern s16 sHoneyAndDarlingHugLoopAnimFrameData[];
extern JointIndex sHoneyAndDarlingHugLoopAnimJointIndices[];
extern AnimationHeader gHoneyAndDarlingHugLoopAnim;
extern s16 sHoneyAndDarlingGameDanceLoopAnimFrameData[];
extern JointIndex sHoneyAndDarlingGameDanceLoopAnimJointIndices[];
extern AnimationHeader gHoneyAndDarlingGameDanceLoopAnim;
extern s16 sHoneyAndDarlingHoldHandsLoopAnimFrameData[];
extern JointIndex sHoneyAndDarlingHoldHandsLoopAnimJointIndices[];
extern AnimationHeader gHoneyAndDarlingHoldHandsLoopAnim;
extern s16 sHoneyAndDarlingIdleAnimFrameData[];
extern JointIndex sHoneyAndDarlingIdleAnimJointIndices[];
extern AnimationHeader gHoneyAndDarlingIdleAnim;
extern u64 gHoneyAndDarlingTLUT[];
extern u64 gHoneyAndDarlingShirtsAndShoesTex[];
extern u64 gHoneyAndDarlingWomanDressTex[];
extern u64 gHoneyAndDarlingJointShadeTex[];
extern u64 gHoneyAndDarlingHeadSkinTex[];
extern u64 gHoneyAndDarlingManHairTex[];
extern u64 gHoneyAndDarlingEarTex[];
extern u64 gHoneyAndDarlingMouthTex[];
extern u64 gHoneyAndDarlingManEyeTex[];
extern u64 gHoneyAndDarlingHandTex[];
extern u64 gHoneyAndDarlingWomanHairTex[];
extern u64 gHoneyAndDarlingWomanEyeTex[];
extern Vtx object_muVtx_006470[];
extern Gfx gHoneyAndDarlingLegsDL[];
extern Gfx gHoneyAndDarlingWomanHeadDL[];
extern Gfx gHoneyAndDarlingWomanRightHandDL[];
extern Gfx gHoneyAndDarlingWomanRightForearmDL[];
extern Gfx gHoneyAndDarlingWomanRightUpperArmDL[];
extern Gfx gHoneyAndDarlingWomanLeftHandDL[];
extern Gfx gHoneyAndDarlingWomanLeftForearmDL[];
extern Gfx gHoneyAndDarlingWomanLeftUpperArmDL[];
extern Gfx gHoneyAndDarlingWomanTorsoDL[];
extern Gfx gHoneyAndDarlingManTorsoDL[];
extern Gfx gHoneyAndDarlingManHeadDL[];
extern Gfx gHoneyAndDarlingManRightUpperArmDL[];
extern Gfx gHoneyAndDarlingManRightForearmDL[];
extern Gfx gHoneyAndDarlingManRightHandDL[];
extern Gfx gHoneyAndDarlingManLeftUpperArmDL[];
extern Gfx gHoneyAndDarlingManLeftForearmDL[];
extern Gfx gHoneyAndDarlingManLeftHandDL[];
extern Gfx gHoneyAndDarlingHeartMaterialDL[];
extern Gfx gHoneyAndDarlingHeartModelDL[];
extern Vtx object_muVtx_00B130[];
extern StandardLimb gHoneyAndDarlingLegsLimb;
extern StandardLimb gHoneyAndDarlingManTorsoLimb;
extern StandardLimb gHoneyAndDarlingManLeftUpperArmLimb;
extern StandardLimb gHoneyAndDarlingManLeftForearmLimb;
extern StandardLimb gHoneyAndDarlingManLeftHandLimb;
extern StandardLimb gHoneyAndDarlingManRightUpperArmLimb;
extern StandardLimb gHoneyAndDarlingManRightForearmLimb;
extern StandardLimb gHoneyAndDarlingManRightHandLimb;
extern StandardLimb gHoneyAndDarlingManHeadLimb;
extern StandardLimb gHoneyAndDarlingWomanRootLimb;
extern StandardLimb gHoneyAndDarlingWomanTorsoLimb;
extern StandardLimb gHoneyAndDarlingWomanLeftUpperArmLimb;
extern StandardLimb gHoneyAndDarlingWomanLeftForearmRootLimb;
extern StandardLimb gHoneyAndDarlingWomanLeftForearmLimb;
extern StandardLimb gHoneyAndDarlingWomanLeftHandLimb;
extern StandardLimb gHoneyAndDarlingWomanRightUpperArmLimb;
extern StandardLimb gHoneyAndDarlingWomanRightForearmRootLimb;
extern StandardLimb gHoneyAndDarlingWomanRightForearmLimb;
extern StandardLimb gHoneyAndDarlingWomanRightHandLimb;
extern StandardLimb gHoneyAndDarlingWomanHeadLimb;
extern void* gHoneyAndDarlingSkelLimbs[];
extern FlexSkeletonHeader gHoneyAndDarlingSkel;
extern s16 sHoneyAndDarlingSurpiseAnimFrameData[];
extern JointIndex sHoneyAndDarlingSurpiseAnimJointIndices[];
extern AnimationHeader gHoneyAndDarlingSurpiseAnim;
#endif
