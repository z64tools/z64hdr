#ifndef OBJECT_ANI_H
#define OBJECT_ANI_H 1

typedef enum AniLimb {
    /* 0x00 */ ANI_LIMB_NONE,
    /* 0x01 */ ANI_LIMB_PELVIS,
    /* 0x02 */ ANI_LIMB_LEFT_THIGH,
    /* 0x03 */ ANI_LIMB_LEFT_SHIN,
    /* 0x04 */ ANI_LIMB_LEFT_FOOT,
    /* 0x05 */ ANI_LIMB_RIGHT_THIGH,
    /* 0x06 */ ANI_LIMB_RIGHT_SHIN,
    /* 0x07 */ ANI_LIMB_RIGHT_FOOT,
    /* 0x08 */ ANI_LIMB_TORSO,
    /* 0x09 */ ANI_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ ANI_LIMB_LEFT_FOREARM,
    /* 0x0B */ ANI_LIMB_LEFT_HAND,
    /* 0x0C */ ANI_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ ANI_LIMB_RIGHT_FOREARM,
    /* 0x0E */ ANI_LIMB_RIGHT_HAND,
    /* 0x0F */ ANI_LIMB_HEAD,
    /* 0x10 */ ANI_LIMB_MAX
} AniLimb;

extern s16 sAniTreeHangLosingBalanceAnimFrameData[];
extern JointIndex sAniTreeHangLosingBalanceAnimJointIndices[];
extern AnimationHeader gAniTreeHangLosingBalanceAnim;
extern s16 sAniFallOverHoldingFootAnimFrameData[];
extern JointIndex sAniFallOverHoldingFootAnimJointIndices[];
extern AnimationHeader gAniFallOverHoldingFootAnim;
extern s16 sAniHoldingFootWrithingInPainAnimFrameData[];
extern JointIndex sAniHoldingFootWrithingInPainAnimJointIndices[];
extern AnimationHeader gAniHoldingFootWrithingInPainAnim;
extern s16 sAniUnusedSidesteppingAnimFrameData[];
extern JointIndex sAniUnusedSidesteppingAnimJointIndices[];
extern AnimationHeader gAniUnusedSidesteppingAnim;
extern s16 sAniTreeHangingAnimFrameData[];
extern JointIndex sAniTreeHangingAnimJointIndices[];
extern AnimationHeader gAniTreeHangingAnim;
extern s16 sAniTreeHangingReachAnimFrameData[];
extern JointIndex sAniTreeHangingReachAnimJointIndices[];
extern AnimationHeader gAniTreeHangingReachAnim;
extern StandardLimb gAniPelvisLimb;
extern StandardLimb gAniLeftThighLimb;
extern StandardLimb gAniLeftShinLimb;
extern StandardLimb gAniLeftFootLimb;
extern StandardLimb gAniRightThighLimb;
extern StandardLimb gAniRightShinLimb;
extern StandardLimb gAniRightFootLimb;
extern StandardLimb gAniTorsoLimb;
extern StandardLimb gAniLeftUpperArmLimb;
extern StandardLimb gAniLeftForearmLimb;
extern StandardLimb gAniLeftHandLimb;
extern StandardLimb gAniRightUpperArmLimb;
extern StandardLimb gAniRightForearmLimb;
extern StandardLimb gAniRightHandLimb;
extern StandardLimb gAniHeadLimb;
extern void* gAniSkelLimbs[];
extern FlexSkeletonHeader gAniSkel;
extern Vtx object_aniVtx_0028B0[];
extern Gfx gAniRightHandDL[];
extern Gfx gAniRightForearmDL[];
extern Gfx gAniRightUpperArmDL[];
extern Gfx gAniLeftHandDL[];
extern Gfx gAniLeftForearmDL[];
extern Gfx gAniLeftUpperArmDL[];
extern Gfx gAniTorsoDL[];
extern Gfx gAniRightFootDL[];
extern Gfx gAniRightShinDL[];
extern Gfx gAniRightThighDL[];
extern Gfx gAniLeftFootDL[];
extern Gfx gAniLeftShinDL[];
extern Gfx gAniLeftThighDL[];
extern Gfx gAniPelvisDL[];
extern u64 gAniGeneralTLUT[];
extern u64 gAniUnkGradientTex[];
extern u64 gAniFingersTex[];
extern u64 gAniShirtEdgeTex[];
extern u64 gAniSandleBuckleTex[];
extern u64 gAniPantsTex[];
extern u64 gAniEyeTLUT[];
extern u64 gAniOpenEyeTex[];
extern u64 gAniMouthTex[];
extern u64 gAniUnkGradient2Tex[];
extern u64 gAniEarTex[];
extern u64 gAniHairTex[];
extern u64 gAniClosingEyeTex[];
extern u64 gAniClosedEyeTex[];
extern Vtx object_aniVtx_007318[];
extern Gfx gAniHeadDL[];
extern s16 sAniLandingThenStandingUpAnimFrameData[];
extern JointIndex sAniLandingThenStandingUpAnimJointIndices[];
extern AnimationHeader gAniLandingThenStandingUpAnim;
extern s16 sAniHoldUpHandAnimFrameData[];
extern JointIndex sAniHoldUpHandAnimJointIndices[];
extern AnimationHeader gAniHoldUpHandAnim;
extern s16 sAniStandingNormalAnimFrameData[];
extern JointIndex sAniStandingNormalAnimJointIndices[];
extern AnimationHeader gAniStandingNormalAnim;
extern s16 sAniHandBehindHeadApologyAnimFrameData[];
extern JointIndex sAniHandBehindHeadApologyAnimJointIndices[];
extern AnimationHeader gAniHandBehindHeadApologyAnim;
extern s16 sAniKnockBackAnimFrameData[];
extern JointIndex sAniKnockBackAnimJointIndices[];
extern AnimationHeader gAniKnockBackAnim;
extern s16 sAniKnockBackGettingUpAnimFrameData[];
extern JointIndex sAniKnockBackGettingUpAnimJointIndices[];
extern AnimationHeader gAniKnockBackGettingUpAnim;
extern s16 sAniSittingBackAnimFrameData[];
extern JointIndex sAniSittingBackAnimJointIndices[];
extern AnimationHeader gAniSittingBackAnim;
#endif
