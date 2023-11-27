#ifndef OBJECT_CROW_H
#define OBJECT_CROW_H 1

typedef enum ObjectCrowLimb {
    /* 0x00 */ OBJECT_CROW_LIMB_NONE,
    /* 0x01 */ OBJECT_CROW_LIMB_ROOT,
    /* 0x02 */ OBJECT_CROW_LIMB_BODY,
    /* 0x03 */ OBJECT_CROW_LIMB_RIGHT_WING_BODY,
    /* 0x04 */ OBJECT_CROW_LIMB_RIGHT_WING_TIP,
    /* 0x05 */ OBJECT_CROW_LIMB_LEFT_WING_BODY,
    /* 0x06 */ OBJECT_CROW_LIMB_LEFT_WING_TIP,
    /* 0x07 */ OBJECT_CROW_LIMB_UPPER_TAIL,
    /* 0x08 */ OBJECT_CROW_LIMB_TAIL,
    /* 0x09 */ OBJECT_CROW_LIMB_MAX
} ObjectCrowLimb;

extern s16 sGuayFlyAnimFrameData[];
extern JointIndex sGuayFlyAnimJointIndices[];
extern AnimationHeader gGuayFlyAnim;
extern Vtx object_crowVtx_000100[];
extern Gfx gGuayBodyDL[];
extern Gfx gGuayRightWingTipDL[];
extern Gfx gGuayRightWingBodyDL[];
extern Gfx gGuayLeftWingTipDL[];
extern Gfx gGuayLeftWingBodyDL[];
extern Gfx gGuayTailDL[];
extern Gfx gGuayUpperTailDL[];
extern u64 gGuayBodyTex[];
extern u64 gGuayEyeTex[];
extern u64 gGuayTailTex[];
extern StandardLimb gGuayRootLimb;
extern StandardLimb gGuayBodyLimb;
extern StandardLimb gGuayRightWingBodyLimb;
extern StandardLimb gGuayRightWingTipLimb;
extern StandardLimb gGuayLeftWingBodyLimb;
extern StandardLimb gGuayLeftWingTipLimb;
extern StandardLimb gGuayUpperTailLimb;
extern StandardLimb gGuayTailLimb;
extern void* gGuaySkelLimbs[];
extern FlexSkeletonHeader gGuaySkel;
#endif
