#ifndef OBJECT_BEE_H
#define OBJECT_BEE_H 1

typedef enum ObjectBeeLimb {
    /* 0x00 */ OBJECT_BEE_LIMB_NONE,
    /* 0x01 */ OBJECT_BEE_LIMB_ROOT,
    /* 0x02 */ OBJECT_BEE_LIMB_WINGS_ROOT,
    /* 0x03 */ OBJECT_BEE_LIMB_LEFT_WING_ROOT,
    /* 0x04 */ OBJECT_BEE_LIMB_LEFT_WING,
    /* 0x05 */ OBJECT_BEE_LIMB_RIGHT_WING_ROOT,
    /* 0x06 */ OBJECT_BEE_LIMB_RIGHT_WING,
    /* 0x07 */ OBJECT_BEE_LIMB_BODY,
    /* 0x08 */ OBJECT_BEE_LIMB_ANTENNAE,
    /* 0x09 */ OBJECT_BEE_LIMB_HEAD,
    /* 0x0A */ OBJECT_BEE_LIMB_MAX
} ObjectBeeLimb;

extern s16 sBeeFlyingAnimFrameData[];
extern JointIndex sBeeFlyingAnimJointIndices[];
extern AnimationHeader gBeeFlyingAnim;
extern Vtx object_beeVtx_000070[];
extern Gfx gBeeBodyDL[];
extern Gfx gBeeHeadDL[];
extern Gfx gBeeAntennaeDL[];
extern Gfx gBeeRightWingDL[];
extern Gfx gBeeLeftWingDL[];
extern u64 gBeeWingTLUT[];
extern u64 gBeeHeadTLUT[];
extern u64 gBeeBodyTLUT[];
extern u64 gBeeAntennaeTLUT[];
extern u64 gBeeWingTex[];
extern u64 gBeeHeadTex[];
extern u64 gBeeBodyTex[];
extern u64 gBeeAntennaeTex[];
extern StandardLimb gBeeRootLimb;
extern StandardLimb gBeeWingsRootLimb;
extern StandardLimb gBeeLeftWingRootLimb;
extern StandardLimb gBeeLeftWingLimb;
extern StandardLimb gBeeRightWingRootLimb;
extern StandardLimb gBeeRightWingLimb;
extern StandardLimb gBeeBodyLimb;
extern StandardLimb gBeeAntennaeLimb;
extern StandardLimb gBeeHeadLimb;
extern void* gBeeSkelLimbs[];
extern SkeletonHeader gBeeSkel;
#endif
