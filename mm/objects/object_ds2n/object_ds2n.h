#ifndef OBJECT_DS2N_H
#define OBJECT_DS2N_H 1

typedef enum Ds2nLimb {
    /* 0x00 */ DS2N_LIMB_NONE,
    /* 0x01 */ DS2N_LIMB_HIPS,
    /* 0x02 */ DS2N_LIMB_LEFT_THIGH,
    /* 0x03 */ DS2N_LIMB_LEFT_SHIN,
    /* 0x04 */ DS2N_LIMB_LEFT_FOOT,
    /* 0x05 */ DS2N_LIMB_RIGHT_THIGH,
    /* 0x06 */ DS2N_LIMB_RIGHT_SHIN,
    /* 0x07 */ DS2N_LIMB_RIGHT_FOOT,
    /* 0x08 */ DS2N_LIMB_08,
    /* 0x09 */ DS2N_LIMB_09,
    /* 0x0A */ DS2N_LIMB_0A,
    /* 0x0B */ DS2N_LIMB_TORSO,
    /* 0x0C */ DS2N_LIMB_LEFT_UPPER_ARM,
    /* 0x0D */ DS2N_LIMB_LEFT_FOREARM,
    /* 0x0E */ DS2N_LIMB_LEFT_HAND,
    /* 0x0F */ DS2N_LIMB_RIGHT_UPPER_ARM,
    /* 0x10 */ DS2N_LIMB_RIGHT_FOREARM,
    /* 0x11 */ DS2N_LIMB_RIGHT_HAND,
    /* 0x12 */ DS2N_LIMB_HEAD,
    /* 0x13 */ DS2N_LIMB_MAX
} Ds2nLimb;

extern Vtx object_ds2nVtx_000000[];
extern Gfx gDs2nTorsoDL[];
extern Gfx gDs2nHeadDL[];
extern Gfx gDs2nRightUpperArmDL[];
extern Gfx gDs2nRightForearmDL[];
extern Gfx gDs2nRightHandDL[];
extern Gfx gDs2nLeftUpperArmDL[];
extern Gfx gDs2nLeftForearmDL[];
extern Gfx gDs2nLeftHandDL[];
extern Gfx gDs2nHipsDL[];
extern Gfx gDs2nRightThighDL[];
extern Gfx gDs2nRightShinDL[];
extern Gfx gDs2nRightFootDL[];
extern Gfx gDs2nLeftThighDL[];
extern Gfx gDs2nLeftShinDL[];
extern Gfx gDs2nLeftFootDL[];
extern u64 gDs2nMainTLUT[];
extern u64 gDs2nFingersTLUT[];
extern u64 gDs2nEyesTLUT[];
extern u64 gDs2nPantsAndShirtBottomTex[];
extern u64 gDs2nShoesTex[];
extern u64 gDs2nBeltTieTex[];
extern u64 gDs2nEyeHalfTex[];
extern u64 gDs2nEyeClosedTex[];
extern u64 gDs2nFingersTex[];
extern u64 gDs2nSkinGradientTex[];
extern u64 gDs2nHairTex[];
extern u64 gDs2nHairlineTex[];
extern u64 gDs2nShirtButtonsTex[];
extern u64 gDs2nVestTex[];
extern u64 gDs2nShirtTex[];
extern u64 gDs2nEyeOpenTex[];
extern u64 gDs2nMouthOpenTex[];
extern u64 gDs2nMain2TLUT[];
extern u64 gDs2nFingers2TLUT[];
extern u64 gDs2nEyes2TLUT[];
extern u64 gDs2nPantsAndShirtBottom2Tex[];
extern u64 gDs2nShoes2Tex[];
extern u64 gDs2nFingers2Tex[];
extern u64 gDs2nSkinGradient2Tex[];
extern u64 gDs2nHair2Tex[];
extern u64 gDs2nHairline2Tex[];
extern u64 gDs2nShirtButtons2Tex[];
extern u64 gDs2nVest2Tex[];
extern u64 gDs2nShirt2Tex[];
extern u64 gDs2nEyeOpen2Tex[];
extern u64 gDs2nMouthOpen2Tex[];
extern s16 sDs2nIdleAnimFrameData[];
extern JointIndex sDs2nIdleAnimJointIndices[];
extern AnimationHeader gDs2nIdleAnim;
extern StandardLimb gDs2nHipsLimb;
extern StandardLimb gDs2nLeftThighLimb;
extern StandardLimb gDs2nLeftShinLimb;
extern StandardLimb gDs2nLeftFootLimb;
extern StandardLimb gDs2nRightThighLimb;
extern StandardLimb gDs2nRightShinLimb;
extern StandardLimb gDs2nRightFootLimb;
extern StandardLimb gDs2nLimb_008098;
extern StandardLimb gDs2nLimb_0080B0;
extern StandardLimb gDs2nLimb_0080BC;
extern StandardLimb gDs2nTorsoLimb;
extern StandardLimb gDs2nLeftUpperArmLimb;
extern StandardLimb gDs2nLeftForearmLimb;
extern StandardLimb gDs2nLeftHandLimb;
extern StandardLimb gDs2nRightUpperArmLimb;
extern StandardLimb gDs2nRightForearmLimb;
extern StandardLimb gDs2nRightHandLimb;
extern StandardLimb gDs2nHeadLimb;
extern void* gDs2nSkelLimbs[];
extern FlexSkeletonHeader gDs2nSkel;
#endif
