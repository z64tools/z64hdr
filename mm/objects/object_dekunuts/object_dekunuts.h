#ifndef OBJECT_DEKUNUTS_H
#define OBJECT_DEKUNUTS_H 1

typedef enum DekuScrubLimb {
    /* 0x00 */ DEKU_SCRUB_LIMB_NONE,
    /* 0x01 */ DEKU_SCRUB_LIMB_BODY,
    /* 0x02 */ DEKU_SCRUB_LIMB_HEAD,
    /* 0x03 */ DEKU_SCRUB_LIMB_HEADDRESS,
    /* 0x04 */ DEKU_SCRUB_LIMB_CREST,
    /* 0x05 */ DEKU_SCRUB_LIMB_SNOUT,
    /* 0x06 */ DEKU_SCRUB_LIMB_LEFT_LEG,
    /* 0x07 */ DEKU_SCRUB_LIMB_LEFT_FOOT,
    /* 0x08 */ DEKU_SCRUB_LIMB_RIGHT_LEG,
    /* 0x09 */ DEKU_SCRUB_LIMB_RIGHT_FOOT,
    /* 0x0A */ DEKU_SCRUB_LIMB_MAX
} DekuScrubLimb;

extern s16 sDekuScrubSpitAnimFrameData[];
extern JointIndex sDekuScrubSpitAnimJointIndices[];
extern AnimationHeader gDekuScrubSpitAnim;
extern Vtx object_dekunutsVtx_000180[];
extern Gfx gDekuScrubRightFootDL[];
extern Gfx gDekuScrubRightLegDL[];
extern Gfx gDekuScrubLeftFootDL[];
extern Gfx gDekuScrubLeftLegDL[];
extern Gfx gDekuScrubSnoutDL[];
extern Gfx gDekuScrubCrestDL[];
extern Gfx gDekuScrubHeaddressDL[];
extern Gfx gDekuScrubHeadDL[];
extern Gfx gDekuScrubBodyDL[];
extern u64 gDekuScrubSnoutTex[];
extern u64 gDekuScrubMouthTex[];
extern u64 gDekuScrubLeafTex[];
extern u64 gDekuScrubEyeTex[];
extern u64 gDekuScrubSkinTex[];
extern Vtx object_dekunutsVtx_001C70[];
extern Gfx gDekuScrubFlowerDL[];
extern Vtx object_dekunutsVtx_001F20[];
extern Gfx gDekuScrubFlowerFragmentDL[];
extern u64 gDekuScrubFlowerFragmentTex[];
extern StandardLimb gDekuScrubBodyLimb;
extern StandardLimb gDekuScrubHeadLimb;
extern StandardLimb gDekuScrubHeaddressLimb;
extern StandardLimb gDekuScrubCrestLimb;
extern StandardLimb gDekuScrubSnoutLimb;
extern StandardLimb gDekuScrubLeftLegLimb;
extern StandardLimb gDekuScrubLeftFootLimb;
extern StandardLimb gDekuScrubRightLegLimb;
extern StandardLimb gDekuScrubRightFootLimb;
extern void* gDekuScrubSkelLimbs[];
extern SkeletonHeader gDekuScrubSkel;
extern s16 sDekuScrubDamageAnimFrameData[];
extern JointIndex sDekuScrubDamageAnimJointIndices[];
extern AnimationHeader gDekuScrubDamageAnim;
extern s16 sDekuScrubStandingIdleAnimFrameData[];
extern JointIndex sDekuScrubStandingIdleAnimJointIndices[];
extern AnimationHeader gDekuScrubStandingIdleAnim;
extern s16 sDekuScrubBurrowAnimFrameData[];
extern JointIndex sDekuScrubBurrowAnimJointIndices[];
extern AnimationHeader gDekuScrubBurrowAnim;
extern s16 sDekuScrubDieAnimFrameData[];
extern JointIndex sDekuScrubDieAnimJointIndices[];
extern AnimationHeader gDekuScrubDieAnim;
extern s16 sDekuScrubUnburrowAnimFrameData[];
extern JointIndex sDekuScrubUnburrowAnimJointIndices[];
extern AnimationHeader gDekuScrubUnburrowAnim;
extern s16 sDekuScrubLookAroundAnimFrameData[];
extern JointIndex sDekuScrubLookAroundAnimJointIndices[];
extern AnimationHeader gDekuScrubLookAroundAnim;
extern s16 sDekuScrubUpAnimFrameData[];
extern JointIndex sDekuScrubUpAnimJointIndices[];
extern AnimationHeader gDekuScrubUpAnim;
extern s16 sDekuScrubIdleAnimFrameData[];
extern JointIndex sDekuScrubIdleAnimJointIndices[];
extern AnimationHeader gDekuScrubIdleAnim;
extern s16 sDekuScrubPantingAnimFrameData[];
extern JointIndex sDekuScrubPantingAnimJointIndices[];
extern AnimationHeader gDekuScrubPantingAnim;
extern s16 sDekuScrubRunAnimFrameData[];
extern JointIndex sDekuScrubRunAnimJointIndices[];
extern AnimationHeader gDekuScrubRunAnim;
#endif
