#ifndef OBJECT_FIREFLY_H
#define OBJECT_FIREFLY_H 1

typedef enum FireKeeseLimb {
    /* 0x00 */ FIRE_KEESE_LIMB_NONE,
    /* 0x01 */ FIRE_KEESE_LIMB_ROOT,
    /* 0x02 */ FIRE_KEESE_LIMB_ROOT_WRAPPER,
    /* 0x03 */ FIRE_KEESE_LIMB_FEET_ROOT,
    /* 0x04 */ FIRE_KEESE_LIMB_RIGHT_FOOT_ROOT,
    /* 0x05 */ FIRE_KEESE_LIMB_RIGHT_FOOT_WRAPPER,
    /* 0x06 */ FIRE_KEESE_LIMB_RIGHT_FOOT,
    /* 0x07 */ FIRE_KEESE_LIMB_LEFT_FOOT_ROOT,
    /* 0x08 */ FIRE_KEESE_LIMB_LEFT_FOOT_WRAPPER,
    /* 0x09 */ FIRE_KEESE_LIMB_LEFT_FOOT,
    /* 0x0A */ FIRE_KEESE_LIMB_BODY,
    /* 0x0B */ FIRE_KEESE_LIMB_LEFT_WING_ROOT,
    /* 0x0C */ FIRE_KEESE_LIMB_LEFT_WING_WRAPPER,
    /* 0x0D */ FIRE_KEESE_LIMB_LEFT_WING_END_MID_ROOT,
    /* 0x0E */ FIRE_KEESE_LIMB_LEFT_WING_END_ROOT,
    /* 0x0F */ FIRE_KEESE_LIMB_LEFT_WING_END,
    /* 0x10 */ FIRE_KEESE_LIMB_LEFT_WING_MID,
    /* 0x11 */ FIRE_KEESE_LIMB_LEFT_WING_START,
    /* 0x12 */ FIRE_KEESE_LIMB_RIGHT_WING_ROOT,
    /* 0x13 */ FIRE_KEESE_LIMB_RIGHT_WING_WRAPPER,
    /* 0x14 */ FIRE_KEESE_LIMB_RIGHT_WING_END_MID_ROOT,
    /* 0x15 */ FIRE_KEESE_LIMB_RIGHT_WING_END_ROOT,
    /* 0x16 */ FIRE_KEESE_LIMB_RIGHT_WING_END,
    /* 0x17 */ FIRE_KEESE_LIMB_RIGHT_WING_MID,
    /* 0x18 */ FIRE_KEESE_LIMB_RIGHT_WING_START,
    /* 0x19 */ FIRE_KEESE_LIMB_HEAD_ROOT,
    /* 0x1A */ FIRE_KEESE_LIMB_HEAD_WRAPPER,
    /* 0x1B */ FIRE_KEESE_LIMB_HEAD,
    /* 0x1C */ FIRE_KEESE_LIMB_MAX
} FireKeeseLimb;

extern s16 sFireKeeseFlyAnimFrameData[];
extern JointIndex sFireKeeseFlyAnimJointIndices[];
extern AnimationHeader gFireKeeseFlyAnim;
extern u64 gKeeseRedEyeTex[];
extern u64 gFireKeeseBodyTex[];
extern u64 gFireKeeseEyeTex[];
extern u64 gFireKeeseEarTex[];
extern u64 gFireKeeseTalonTex[];
extern u64 gFireKeeseWingTex[];
extern u64 gKeeseBodyTex[];
extern u64 gKeeseTalonTex[];
extern u64 gKeeseWingTex[];
extern u64 gKeeseEarTex[];
extern Vtx object_fireflyVtx_000890[];
extern Gfx gFireKeeseHeadDL[];
extern Gfx gFireKeeseBodyDL[];
extern Gfx gFireKeeseLeftFootDL[];
extern Gfx gFireKeeseRightFootDL[];
extern Gfx gFireKeeseRightWingStartDL[];
extern Gfx gFireKeeseRightWingMidDL[];
extern Gfx gFireKeeseRightWingEndDL[];
extern Gfx gFireKeeseLeftWingEndDL[];
extern Gfx gFireKeeseLeftWingMidDL[];
extern Gfx gFireKeeseLeftWingStartDL[];
extern Gfx gKeeseRedEyesDL[];
extern StandardLimb gFireKeeseRootLimb;
extern StandardLimb gFireKeeseRootWrapperLimb;
extern StandardLimb gFireKeeseFeetRootLimb;
extern StandardLimb gFireKeeseRightFootRootLimb;
extern StandardLimb gFirekeeseRightFootWrapperLimb;
extern StandardLimb gFireKeeseRightFootLimb;
extern StandardLimb gFireKeeseLeftFootRootLimb;
extern StandardLimb gFireKeeseLeftFootWrapperLimb;
extern StandardLimb gFireKeeseLeftFootLimb;
extern StandardLimb gFireKeeseBodyLimb;
extern StandardLimb gFireKeeseLeftWingRootLimb;
extern StandardLimb gFireKeeseLeftWingWrapperLimb;
extern StandardLimb gFireKeeseLeftWingEndMidRootLimb;
extern StandardLimb gFireKeeseLeftWingEndRootLimb;
extern StandardLimb gFireKeeseLeftWingEndLimb;
extern StandardLimb gFireKeeseLeftWingMidLimb;
extern StandardLimb gFireKeeseLeftWingStartLimb;
extern StandardLimb gFireKeeseRightWingRootLimb;
extern StandardLimb gFireKeeseRightWingWrapperLimb;
extern StandardLimb gFireKeeseRightWingEndMidRootLimb;
extern StandardLimb gFireKeeseRightWingEndRootLimb;
extern StandardLimb gFireKeeseRightWingEndLimb;
extern StandardLimb gFireKeeseRightWingMidLimb;
extern StandardLimb gFireKeeseRightWingStartLimb;
extern StandardLimb gFireKeeseHeadRootLimb;
extern StandardLimb gFireKeeseHeadWrapperLimb;
extern StandardLimb gFireKeeseHeadLimb;
extern void* gFireKeeseSkelLimbs[];
extern SkeletonHeader gFireKeeseSkel;
#endif
