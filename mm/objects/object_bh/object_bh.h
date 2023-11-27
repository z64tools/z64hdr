#ifndef OBJECT_BH_H
#define OBJECT_BH_H 1

typedef enum ObjectBhLimb {
    /* 0x00 */ OBJECT_BH_LIMB_NONE,
    /* 0x01 */ OBJECT_BH_LIMB_BODY,
    /* 0x02 */ OBJECT_BH_LIMB_RIGHT_WING_TO_BODY,
    /* 0x03 */ OBJECT_BH_LIMB_RIGHT_WING_TO_EDGE,
    /* 0x04 */ OBJECT_BH_LIMB_LEFT_WING_TO_BODY,
    /* 0x05 */ OBJECT_BH_LIMB_LEFT_WING_TO_EDGE,
    /* 0x06 */ OBJECT_BH_LIMB_MAX
} ObjectBhLimb;

extern s16 sBhFlyingAnimFrameData[];
extern JointIndex sBhFlyingAnimJointIndices[];
extern AnimationHeader gBhFlyingAnim;
extern Vtx object_bhVtx_000090[];
extern Gfx gBhBodyDL[];
extern Gfx gBhRightWingToEdgeDL[];
extern Gfx gBhRightWingToBodyDL[];
extern Gfx gBhLeftWingToEdgeDL[];
extern Gfx gBhLeftWingToBodyDL[];
extern u64 gBhBodyTex[];
extern u64 gBhWingTex[];
extern StandardLimb gBhBodyLimb;
extern StandardLimb gBhRightWingToBodyLimb;
extern StandardLimb gBhRightWingToEdgeLimb;
extern StandardLimb gBhLeftWingToBodyLimb;
extern StandardLimb gBhLeftWingToEdgeLimb;
extern void* gBhSkelLimbs[];
extern FlexSkeletonHeader gBhSkel;
#endif
