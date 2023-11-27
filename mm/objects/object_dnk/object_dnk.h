#ifndef OBJECT_DNK_H
#define OBJECT_DNK_H 1

typedef enum DekuPalaceGuardLimb {
    /* 0x00 */ DEKU_PALACE_GUARD_LIMB_NONE,
    /* 0x01 */ DEKU_PALACE_GUARD_LIMB_TORSO,
    /* 0x02 */ DEKU_PALACE_GUARD_LIMB_HEAD,
    /* 0x03 */ DEKU_PALACE_GUARD_LIMB_LEFT_LEAF,
    /* 0x04 */ DEKU_PALACE_GUARD_LIMB_RIGHT_LEAF,
    /* 0x05 */ DEKU_PALACE_GUARD_LIMB_CENTER_LEAF,
    /* 0x06 */ DEKU_PALACE_GUARD_LIMB_REAR_LEAF,
    /* 0x07 */ DEKU_PALACE_GUARD_LIMB_SNOUT,
    /* 0x08 */ DEKU_PALACE_GUARD_LIMB_EYES,
    /* 0x09 */ DEKU_PALACE_GUARD_LIMB_LEFT_FOOT,
    /* 0x0A */ DEKU_PALACE_GUARD_LIMB_RIGHT_FOOT,
    /* 0x0B */ DEKU_PALACE_GUARD_LIMB_MAX
} DekuPalaceGuardLimb;

extern s16 sDekuPalaceGuardAttackAnimFrameData[];
extern JointIndex sDekuPalaceGuardAttackAnimJointIndices[];
extern AnimationHeader gDekuPalaceGuardAttackAnim;
extern s16 sDekuPalaceGuardDigAnimFrameData[];
extern JointIndex sDekuPalaceGuardDigAnimJointIndices[];
extern AnimationHeader gDekuPalaceGuardDigAnim;
extern s16 sDekuPalaceGuardHappyAnimFrameData[];
extern JointIndex sDekuPalaceGuardHappyAnimJointIndices[];
extern AnimationHeader gDekuPalaceGuardHappyAnim;
extern s16 sDekuPalaceGuardJumpAnimFrameData[];
extern JointIndex sDekuPalaceGuardJumpAnimJointIndices[];
extern AnimationHeader gDekuPalaceGuardJumpAnim;
extern s16 sDekuPalaceGuardStartAnimFrameData[];
extern JointIndex sDekuPalaceGuardStartAnimJointIndices[];
extern AnimationHeader gDekuPalaceGuardStartAnim;
extern u64 gDekuPalaceGuardLeafTorsoTex[];
extern u64 gDekuPalaceGuardFootTex[];
extern u64 gDekuPalaceGuardHeadTex[];
extern u64 gDekuPalaceGuardMouthTex[];
extern u64 gDekuPalaceGuardEyeOpenTex[];
extern u64 gDekuPalaceGuardEyeHalfTex[];
extern u64 gDekuPalaceGuardEyeClosedTex[];
extern Vtx object_dnkVtx_001800[];
extern Gfx gDekuPalaceGuardRightLeafDL[];
extern Gfx gDekuPalaceGuardRightLeaf2DL[];
extern Gfx gDekuPalaceGuardLeftLeafDL[];
extern Gfx gDekuPalaceGuardLeftLeaf2DL[];
extern Gfx gDekuPalaceGuardRearLeafDL[];
extern Gfx gDekuPalaceGuardRearLeaf2DL[];
extern Gfx gDekuPalaceGuardCenterLeafDL[];
extern Gfx gDekuPalaceGuardCenterLeaf2DL[];
extern Gfx gDekuPalaceGuardTorsoDL[];
extern Gfx gDekuPalaceGuardTorso2DL[];
extern Gfx gDekuPalaceGuardEyesDL[];
extern Gfx gDekuPalaceGuardEyes2DL[];
extern Gfx gDekuPalaceGuardRightFootDL[];
extern Gfx gDekuPalaceGuardRightFoot2DL[];
extern Gfx gDekuPalaceGuardLeftFootDL[];
extern Gfx gDekuPalaceGuardLeftFoot2DL[];
extern Gfx gDekuPalaceGuardHeadDL[];
extern Gfx gDekuPalaceGuardHead2DL[];
extern Gfx gDekuPalaceGuardSnoutDL[];
extern Gfx gDekuPalaceGuardSnout2DL[];
extern Vtx object_dnkVtx_002520[];
extern Gfx gDekuPalaceGuardFlowerDL[];
extern StandardLimb gDekuPalaceGuardTorsoLimb;
extern StandardLimb gDekuPalaceGuardHeadLimb;
extern StandardLimb gDekuPalaceGuardLeftLeafLimb;
extern StandardLimb gDekuPalaceGuardRightLeafLimb;
extern StandardLimb gDekuPalaceGuardCenterLeafLimb;
extern StandardLimb gDekuPalaceGuardRearLeafLimb;
extern StandardLimb gDekuPalaceGuardSnoutLimb;
extern StandardLimb gDekuPalaceGuardEyesLimb;
extern StandardLimb gDekuPalaceGuardLeftFootLimb;
extern StandardLimb gDekuPalaceGuardRightFootLimb;
extern void* gDekuPalaceGuardSkelLimbs[];
extern SkeletonHeader gDekuPalaceGuardSkel;
extern s16 sDekuPalaceGuardWaitAnimFrameData[];
extern JointIndex sDekuPalaceGuardWaitAnimJointIndices[];
extern AnimationHeader gDekuPalaceGuardWaitAnim;
extern s16 sDekuPalaceGuardWalkAnimFrameData[];
extern JointIndex sDekuPalaceGuardWalkAnimJointIndices[];
extern AnimationHeader gDekuPalaceGuardWalkAnim;
#endif
