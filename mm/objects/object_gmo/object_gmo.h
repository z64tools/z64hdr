#ifndef OBJECT_GMO_H
#define OBJECT_GMO_H 1

typedef enum NejironLimb {
    /* 0x00 */ NEJIRON_LIMB_NONE,
    /* 0x01 */ NEJIRON_LIMB_BODY,
    /* 0x02 */ NEJIRON_LIMB_EYES,
    /* 0x03 */ NEJIRON_LIMB_MAX
} NejironLimb;

extern s16 sNejironIdleAnimFrameData[];
extern JointIndex sNejironIdleAnimJointIndices[];
extern AnimationHeader gNejironIdleAnim;
extern Vtx object_gmoVtx_000030[];
extern Gfx gNejironBodyDL[];
extern Gfx gNejironEyesDL[];
extern u64 gNejironBodyTLUT[];
extern u64 gNejironBodyTex[];
extern u64 gNejironEyeOpenTex[];
extern u64 gNejironEyeHalfTex[];
extern u64 gNejironEyeClosedTex[];
extern StandardLimb gNejironBodyLimb;
extern StandardLimb gNejironEyeLimb;
extern void* gNejironSkelLimbs[];
extern SkeletonHeader gNejironSkel;
#endif
