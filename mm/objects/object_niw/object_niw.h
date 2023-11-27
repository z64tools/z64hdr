#ifndef OBJECT_NIW_H
#define OBJECT_NIW_H 1

typedef enum ObjectNiwLimb {
    /* 0x00 */ NIW_LIMB_NONE,
    /* 0x01 */ NIW_LIMB_ROOT,
    /* 0x02 */ NIW_LIMB_2,
    /* 0x03 */ NIW_LIMB_3,
    /* 0x04 */ NIW_LIMB_UNDER_SIDE,
    /* 0x05 */ NIW_LIMB_LEFT_FOOT_ROOT,
    /* 0x06 */ NIW_LIMB_LEFT_FOOT,
    /* 0x07 */ NIW_LIMB_LEFT_WING_ROOT,
    /* 0x08 */ NIW_LIMB_LEFT_WING,
    /* 0x09 */ NIW_LIMB_RIGHT_FOOT_ROOT,
    /* 0x0A */ NIW_LIMB_RIGHT_FOOT,
    /* 0x0B */ NIW_LIMB_RIGHT_WING_ROOT,
    /* 0x0C */ NIW_LIMB_RIGHT_WING,
    /* 0x0D */ NIW_LIMB_UPPER_BODY,
    /* 0x0E */ NIW_LIMB_NECK,
    /* 0x0F */ NIW_LIMB_HEAD,
    /* 0x10 */ NIW_LIMB_MAX
} ObjectNiwLimb;

extern s16 sNiwIdleAnimFrameData[];
extern JointIndex sNiwIdleAnimJointIndices[];
extern AnimationHeader gNiwIdleAnim;
extern Vtx object_niwVtx_000100[];
extern Gfx gNiwNeckDL[];
extern Gfx gNiwHeadDL[];
extern Gfx gNiwTailDL[];
extern Gfx gNiwWingLeftDL[];
extern Gfx gNiwFootLeftDL[];
extern Gfx gNiwWingRightDL[];
extern Gfx gNiwFootRightDL[];
extern u64 gNiwEyeTex[];
extern u64 gNiwHeadFeathersTex[];
extern u64 gNiwBaseFeathersTex[];
extern u64 gNiwBeakTex[];
extern u64 gNiwCombTex[];
extern u64 gNiwTailFeathersTex[];
extern u64 gNiwFootTex[];
extern u64 gNiwFeatherTex[];
extern Vtx object_niwVtx_002380[];
extern Gfx gNiwFeatherMaterialDL[];
extern Gfx gNiwFeatherDL[];
extern StandardLimb gNiwRootLimb;
extern StandardLimb gNiwLimb_244C;
extern StandardLimb gNiwLimb_2458;
extern StandardLimb gNiwTailAndUndersideLimb;
extern StandardLimb gNiwLeftFootRootLimb;
extern StandardLimb gNiwLeftFootLimb;
extern StandardLimb gNiwLeftWingRootLimb;
extern StandardLimb gNiwLeftWingLimb;
extern StandardLimb gNiwRightFootRootLimb;
extern StandardLimb gNiwRightFootLimb;
extern StandardLimb gNiwRightWingRootLimb;
extern StandardLimb gNiwRightWingLimb;
extern StandardLimb gNiwUpperBodyRootLimb;
extern StandardLimb gNiwNeckLimb;
extern StandardLimb gNiwHeadLimb;
extern void* gNiwSkelLimbs[];
extern FlexSkeletonHeader gNiwSkel;
#endif
