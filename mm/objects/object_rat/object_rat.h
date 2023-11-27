#ifndef OBJECT_RAT_H
#define OBJECT_RAT_H 1

typedef enum RealBombchuLimb {
    /* 0x00 */ REAL_BOMBCHU_LIMB_NONE,
    /* 0x01 */ REAL_BOMBCHU_LIMB_BODY,
    /* 0x02 */ REAL_BOMBCHU_LIMB_HEAD,
    /* 0x03 */ REAL_BOMBCHU_LIMB_TAIL_BASE,
    /* 0x04 */ REAL_BOMBCHU_LIMB_TAIL_MIDDLE,
    /* 0x05 */ REAL_BOMBCHU_LIMB_TAIL_END,
    /* 0x06 */ REAL_BOMBCHU_LIMB_FRONT_LEFT_LEG,
    /* 0x07 */ REAL_BOMBCHU_LIMB_BACK_LEFT_LEG,
    /* 0x08 */ REAL_BOMBCHU_LIMB_FRONT_RIGHT_LEG,
    /* 0x09 */ REAL_BOMBCHU_LIMB_BACK_RIGHT_LEG,
    /* 0x0A */ REAL_BOMBCHU_LIMB_MAX
} RealBombchuLimb;

extern s16 sRealBombchuSpotAnimFrameData[];
extern JointIndex sRealBombchuSpotAnimJointIndices[];
extern AnimationHeader gRealBombchuSpotAnim;
extern s16 sRealBombchuRunAnimFrameData[];
extern JointIndex sRealBombchuRunAnimJointIndices[];
extern AnimationHeader gRealBombchuRunAnim;
extern Vtx object_ratVtx_000280[];
extern Gfx gRealBombchuBodyDL[];
extern Gfx gRealBombchuBackRightLegDL[];
extern Gfx gRealBombchuFrontRightLegDL[];
extern Gfx gRealBombchuBackLeftLegDL[];
extern Gfx gRealBombchuFrontLeftLegDL[];
extern Gfx gRealBombchuTailBaseDL[];
extern Gfx gRealBombchuTailMiddleDL[];
extern Gfx gRealBombchuTailEndDL[];
extern Gfx gRealBombchuHeadDL[];
extern u64 gRealBombchuSkinTex[];
extern u64 gRealBombchuMouthTex[];
extern u64 gRealBombchuEyeTex[];
extern StandardLimb gRealBombchuBodyLimb;
extern StandardLimb gRealBombchuHeadLimb;
extern StandardLimb gRealBombchuTailBaseLimb;
extern StandardLimb gRealBombchuTailMiddleLimb;
extern StandardLimb gRealBombchuTailEndLimb;
extern StandardLimb gRealBombchuFrontLeftLegLimb;
extern StandardLimb gRealBombchuBackLeftLegLimb;
extern StandardLimb gRealBombchuFrontRightLegLimb;
extern StandardLimb gRealBombchuBackRightLegLimb;
extern void* gRealBombchuSkelLimbs[];
extern FlexSkeletonHeader gRealBombchuSkel;
#endif
