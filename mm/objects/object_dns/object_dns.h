#ifndef OBJECT_DNS_H
#define OBJECT_DNS_H 1

typedef enum KingsChamberDekuGuardLimb {
    /* 0x00 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_NONE,
    /* 0x01 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_TORSO,
    /* 0x02 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_HEAD,
    /* 0x03 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_STALK,
    /* 0x04 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_LEFT_LEAF,
    /* 0x05 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_RIGHT_LEAF,
    /* 0x06 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_CENTER_LEAF,
    /* 0x07 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_SNOUT,
    /* 0x08 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_RIGHT_MUSTACHE,
    /* 0x09 */ KINGS_CHAMBER_DEKU_GUARD_LIMB_LEFT_MUSTACHE,
    /* 0x0A */ KINGS_CHAMBER_DEKU_GUARD_LIMB_EYES,
    /* 0x0B */ KINGS_CHAMBER_DEKU_GUARD_LIMB_LEFT_FOOT,
    /* 0x0C */ KINGS_CHAMBER_DEKU_GUARD_LIMB_RIGHT_FOOT,
    /* 0x0D */ KINGS_CHAMBER_DEKU_GUARD_LIMB_MAX
} KingsChamberDekuGuardLimb;

extern s16 sKingsChamberDekuGuardDanceAnimFrameData[];
extern JointIndex sKingsChamberDekuGuardDanceAnimJointIndices[];
extern AnimationHeader gKingsChamberDekuGuardDanceAnim;
extern s16 sKingsChamberDekuGuardFlipAnimFrameData[];
extern JointIndex sKingsChamberDekuGuardFlipAnimJointIndices[];
extern AnimationHeader gKingsChamberDekuGuardFlipAnim;
extern s16 sKingsChamberDekuGuardSurpriseStartAnimFrameData[];
extern JointIndex sKingsChamberDekuGuardSurpriseStartAnimJointIndices[];
extern AnimationHeader gKingsChamberDekuGuardSurpriseStartAnim;
extern s16 sKingsChamberDekuGuardSurpriseLoopAnimFrameData[];
extern JointIndex sKingsChamberDekuGuardSurpriseLoopAnimJointIndices[];
extern AnimationHeader gKingsChamberDekuGuardSurpriseLoopAnim;
extern s16 sKingsChamberDekuGuardRunStartAnimFrameData[];
extern JointIndex sKingsChamberDekuGuardRunStartAnimJointIndices[];
extern AnimationHeader gKingsChamberDekuGuardRunStartAnim;
extern s16 sKingsChamberDekuGuardRunLoopAnimFrameData[];
extern JointIndex sKingsChamberDekuGuardRunLoopAnimJointIndices[];
extern AnimationHeader gKingsChamberDekuGuardRunLoopAnim;
extern Vtx object_dnsVtx_001000[];
extern Gfx gKingsChamberDekuGuardRightFootDL[];
extern Gfx gKingsChamberDekuGuardLeftFootDL[];
extern Gfx gKingsChamberDekuGuardSnoutDL[];
extern Gfx gKingsChamberDekuGuardHeadDL[];
extern Gfx gKingsChamberDekuGuardStalkDL[];
extern Gfx gKingsChamberDekuGuardEyesDL[];
extern Gfx gKingsChamberDekuGuardTorsoDL[];
extern Gfx gKingsChamberDekuGuardLeftMustacheDL[];
extern Gfx gKingsChamberDekuGuardRightMustacheDL[];
extern Gfx gKingsChamberDekuGuardLeftLeafDL[];
extern Gfx gKingsChamberDekuGuardCenterLeafDL[];
extern Gfx gKingsChamberDekuGuardRightLeafDL[];
extern u64 gKingsChamberDekuGuardLeafTex[];
extern u64 gKingsChamberDekuGuardBodyTex[];
extern u64 gKingsChamberDekuGuardMouthTex[];
extern u64 gKingsChamberDekuGuardEyeOpenTex[];
extern u64 gKingsChamberDekuGuardEyeHalfTex[];
extern u64 gKingsChamberDekuGuardEyeClosedTex[];
extern Vtx object_dnsVtx_002A68[];
extern Gfx gKingsChamberDekuGuardDekuFlowerDL[];
extern StandardLimb gKingsChamberDekuGuardTorsoLimb;
extern StandardLimb gKingsChamberDekuGuardHeadLimb;
extern StandardLimb gKingsChamberDekuGuardStalkLimb;
extern StandardLimb gKingsChamberDekuGuardLeftLeafLimb;
extern StandardLimb gKingsChamberDekuGuardRightLeafLimb;
extern StandardLimb gKingsChamberDekuGuardCenterLeafLimb;
extern StandardLimb gKingsChamberDekuGuardSnoutLimb;
extern StandardLimb gKingsChamberDekuGuardRightMustacheLimb;
extern StandardLimb gKingsChamberDekuGuardLeftMustacheLimb;
extern StandardLimb gKingsChamberDekuGuardEyesLimb;
extern StandardLimb gKingsChamberDekuGuardLeftFootLimb;
extern StandardLimb gKingsChamberDekuGuardRightFootLimb;
extern void* gKingsChamberDekuGuardSkelLimbs[];
extern SkeletonHeader gKingsChamberDekuGuardSkel;
extern s16 sKingsChamberDekuGuardIdleAnimFrameData[];
extern JointIndex sKingsChamberDekuGuardIdleAnimJointIndices[];
extern AnimationHeader gKingsChamberDekuGuardIdleAnim;
extern s16 sKingsChamberDekuGuardWalkAnimFrameData[];
extern JointIndex sKingsChamberDekuGuardWalkAnimJointIndices[];
extern AnimationHeader gKingsChamberDekuGuardWalkAnim;
#endif
