#ifndef OBJECT_HS_H
#define OBJECT_HS_H 1

typedef enum ObjectHsLimb {
    /* 0x00 */ OBJECT_HS_LIMB_NONE,
    /* 0x01 */ HS_LIMB_ROOT,
    /* 0x02 */ HS_LIMB_LEFT_UPPER_ARM,
    /* 0x03 */ HS_LIMB_LEFT_FOREARM,
    /* 0x04 */ HS_LIMB_LEFT_HAND,
    /* 0x05 */ HS_LIMB_RIGHT_UPPER_ARM,
    /* 0x06 */ HS_LIMB_RIGHT_FOREARM,
    /* 0x07 */ HS_LIMB_RIGHT_HAND,
    /* 0x08 */ HS_LIMB_HEAD_ROOT,
    /* 0x09 */ HS_LIMB_HEAD,
    /* 0x0A */ HS_LIMB_HAIR_SPIKES,
    /* 0x0B */ HS_LIMB_HIDDEN_HAIR,
    /* 0x0C */ OBJECT_HS_LIMB_0C,
    /* 0x0D */ OBJECT_HS_LIMB_0D,
    /* 0x0E */ HS_LIMB_LOWER_BODY_PLUS_BOX,
    /* 0x0F */ HS_LIMB_CUCCO_FEED_BAGS,
    /* 0x10 */ OBJECT_HS_LIMB_MAX
} ObjectHsLimb;

extern s16 sHsShiveringAnimFrameData[];
extern JointIndex sHsShiveringAnimJointIndices[];
extern AnimationHeader gHsShiveringAnim;
extern s16 sHsPleadingAnimFrameData[];
extern JointIndex sHsPleadingAnimJointIndices[];
extern AnimationHeader gHsPleadingAnim;
extern s16 sHsIdleAnimFrameData[];
extern JointIndex sHsIdleAnimJointIndices[];
extern AnimationHeader gHsIdleAnim;
extern Vtx object_hsVtx_0005D0[];
extern Gfx object_hs_DL_003760[];
extern Gfx object_hs_DL_003AB0[];
extern Gfx object_hs_DL_004140[];
extern Gfx object_hs_DL_0042A0[];
extern Gfx object_hs_DL_004380[];
extern Gfx object_hs_DL_004728[];
extern Gfx object_hs_DL_004860[];
extern Gfx object_hs_DL_004960[];
extern Gfx object_hs_DL_004AB8[];
extern Gfx object_hs_DL_004BF0[];
extern Gfx gHsEndDL[];
extern Gfx object_hs_DL_004CF8[];
extern u64 object_hs_TLUT_004E50[];
extern u64 gHsRibsTex[];
extern u64 gHsEarTex[];
extern u64 gHsMouthTex[];
extern u64 gHsEyeTex[];
extern u64 gHsPantsTex[];
extern u64 gHsFingersTex[];
extern u64 gHsBraceletTex[];
extern u64 gHsCuccoFeedBagTex[];
extern u64 gHsChairBoxTex[];
extern u64 gHsAbsTex[];
extern u64 gHsBackTex[];
extern StandardLimb gHsRootLimb;
extern StandardLimb gHsLeftUpperArmLimb;
extern StandardLimb gHsLeftForearmLimb;
extern StandardLimb gHsLeftHandLimb;
extern StandardLimb gHsRightUpperArmLimb;
extern StandardLimb gHsRightForearmLimb;
extern StandardLimb gHsRightHandLimb;
extern StandardLimb gHsHeadRootLimb;
extern StandardLimb gHsHeadLimb;
extern StandardLimb gHsHairSpikesLimb;
extern StandardLimb gHsHiddenHairLimb;
extern StandardLimb object_hs_Standardlimb_0061F4;
extern StandardLimb object_hs_Standardlimb_006200;
extern StandardLimb gHsChestAndLowerBodyPlusBoxLimb;
extern StandardLimb gHsCuccoFeedBagsLimb;
extern void* gHsSkelLimbs[];
extern FlexSkeletonHeader gHsSkel;
#endif
