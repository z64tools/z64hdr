#ifndef OBJECT_TANRON4_H
#define OBJECT_TANRON4_H 1

typedef enum ObjectTanron4Limb {
    /* 0x00 */ SEAGULL_LIMB_RIGHT_WING_NONE,
    /* 0x01 */ SEAGULL_LIMB_ROOT,
    /* 0x02 */ SEAGULL_LIMB_BODY,
    /* 0x03 */ SEAGULL_LIMB_LEFT_WING_ROOT,
    /* 0x04 */ SEAGULL_LIMB_LEFT_WING_WRAPPER,
    /* 0x05 */ SEAGULL_LIMB_LEFT_WING_START,
    /* 0x06 */ SEAGULL_LIMB_LEFT_WING_END,
    /* 0x07 */ SEAGULL_LIMB_RIGHT_WING_ROOT,
    /* 0x08 */ SEAGULL_LIMB_RIGHT_WING_WRAPPER,
    /* 0x09 */ SEAGULL_LIMB_RIGHT_WING_START,
    /* 0x0A */ SEAGULL_LIMB_RIGHT_WING_END,
    /* 0x0B */ SEAGULL_LIMB_RIGHT_WING_MAX
} ObjectTanron4Limb;

extern s16 sSeagullGlideAnimFrameData[];
extern JointIndex sSeagullGlideAnimJointIndices[];
extern AnimationHeader gSeagullGlideAnim;
extern s16 sSeagullFlapAnimFrameData[];
extern JointIndex sSeagullFlapAnimJointIndices[];
extern AnimationHeader gSeagullFlapAnim;
extern Vtx object_tanron4Vtx_000180[];
extern Gfx gSeagullBodyDL[];
extern Gfx gSeagullRightWingEndDL[];
extern Gfx gSeagullRightWingStartDL[];
extern Gfx gSeagullLeftWingEndDL[];
extern Gfx gSeagullLeftWingStartDL[];
extern u64 gSeagullBodyTex[];
extern u64 gSeagullWingTex[];
extern StandardLimb gSeagullRootLimb;
extern StandardLimb gSeagullBodyLimb;
extern StandardLimb gSeagullLeftWingRootLimb;
extern StandardLimb gSeagullLeftWingWrapperLimb;
extern StandardLimb gSeagullLeftWingStartLimb;
extern StandardLimb gSeagullLeftWingEndLimb;
extern StandardLimb gSeagullRightWingRootLimb;
extern StandardLimb gSeagullRightWingWrapperLimb;
extern StandardLimb gSeagullRightWingStartLimb;
extern StandardLimb gSeagullRightWingEndLimb;
extern void* gSeagullSkelLimbs[];
extern FlexSkeletonHeader gSeagullSkel;
#endif
