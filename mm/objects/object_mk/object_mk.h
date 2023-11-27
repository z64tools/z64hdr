#ifndef OBJECT_MK_H
#define OBJECT_MK_H 1

typedef enum MarineResearcherLimb {
    /* 0x00 */ MARINE_RESEARCHER_LIMB_NONE,
    /* 0x01 */ MARINE_RESEARCHER_LIMB_LOWER_TORSO,
    /* 0x02 */ MARINE_RESEARCHER_LIMB_MID_TORSO,
    /* 0x03 */ MARINE_RESEARCHER_LIMB_LEFT_SHOULDER,
    /* 0x04 */ MARINE_RESEARCHER_LIMB_LEFT_ARM,
    /* 0x05 */ MARINE_RESEARCHER_LIMB_LEFT_HAND,
    /* 0x06 */ MARINE_RESEARCHER_LIMB_RIGHT_SHOULDER,
    /* 0x07 */ MARINE_RESEARCHER_LIMB_RIGHT_ARM,
    /* 0x08 */ MARINE_RESEARCHER_LIMB_RIGHT_HAND,
    /* 0x09 */ MARINE_RESEARCHER_LIMB_UPPER_TORSO,
    /* 0x0A */ MARINE_RESEARCHER_LIMB_NECK,
    /* 0x0B */ MARINE_RESEARCHER_LIMB_HEAD,
    /* 0x0C */ MARINE_RESEARCHER_LIMB_MOUTH,
    /* 0x0D */ MARINE_RESEARCHER_LIMB_MAX
} MarineResearcherLimb;

extern s16 sMarineResearcherHeadWaggleAnimFrameData[];
extern JointIndex sMarineResearcherHeadWaggleAnimJointIndices[];
extern AnimationHeader gMarineResearcherHeadWaggleAnim;
extern s16 sMarineResearcherYellAnimFrameData[];
extern JointIndex sMarineResearcherYellAnimJointIndices[];
extern AnimationHeader gMarineResearcherYellAnim;
extern s16 sMarineResearcherShakeInFearAnimFrameData[];
extern JointIndex sMarineResearcherShakeInFearAnimJointIndices[];
extern AnimationHeader gMarineResearcherShakeInFearAnim;
extern s16 sMarineResearcherStrokeChinAnimFrameData[];
extern JointIndex sMarineResearcherStrokeChinAnimJointIndices[];
extern AnimationHeader gMarineResearcherStrokeChinAnim;
extern s16 sMarineResearcherIdleAnimFrameData[];
extern JointIndex sMarineResearcherIdleAnimJointIndices[];
extern AnimationHeader gMarineResearcherIdleAnim;
extern Vtx object_mkVtx_001C50[];
extern Gfx gMarineResearcherMidTorsoDL[];
extern Gfx gMarineResearcherUpperTorsoDL[];
extern Gfx gMarineResearcherNeckDL[];
extern Gfx gMarineResearcherHeadDL[];
extern Gfx gMarineResearcherMouthDL[];
extern Gfx gMarineResearcherRightShoulderDL[];
extern Gfx gMarineResearcherRightArmDL[];
extern Gfx gMarineResearcherRightHandDL[];
extern Gfx gMarineResearcherLeftShoulderDL[];
extern Gfx gMarineResearcherLeftArmDL[];
extern Gfx gMarineResearcherLeftHandDL[];
extern Gfx gMarineResearcherLowerTorsoDL[];
extern u64 gMarineResearcherTLUT[];
extern u64 gMarineResearcherChestSkinTex[];
extern u64 gMarineResearcherMouthTex[];
extern u64 gMarineResearcherLipsTex[];
extern u64 gMarineResearcherJacketTex[];
extern u64 gMarineResearcherHairTex[];
extern u64 gMarineResearcherEyeTex[];
extern u64 gMarineResearcherNostrilTex[];
extern u64 gMarineResearcherEarTex[];
extern u64 gMarineResearcherShirtTex[];
extern u64 gMarineResearcherFingersTex[];
extern StandardLimb gMarineResearcherLowerTorsoLimb;
extern StandardLimb gMarineResearcherMidTorsoLimb;
extern StandardLimb gMarineResearcherLeftShoulderLimb;
extern StandardLimb gMarineResearcherLeftArmLimb;
extern StandardLimb gMarineResearcherLeftHandLimb;
extern StandardLimb gMarineResearcherRightShoulderLimb;
extern StandardLimb gMarineResearcherRightArmLimb;
extern StandardLimb gMarineResearcherRightHandLimb;
extern StandardLimb gMarineResearcherUpperTorsoLimb;
extern StandardLimb gMarineResearcherNeckLimb;
extern StandardLimb gMarineResearcherHeadLimb;
extern StandardLimb gMarineResearcherMouthLimb;
extern void* gMarineResearcherSkelLimbs[];
extern FlexSkeletonHeader gMarineResearcherSkel;
#endif
