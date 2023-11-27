#ifndef OBJECT_AHG_H
#define OBJECT_AHG_H 1

typedef enum ObjectAhgLimb {
    /* 0x00 */ AHG_LIMB_NONE,
    /* 0x01 */ AHG_LIMB_PELVIS,
    /* 0x02 */ AHG_LIMB_LEFT_THIGH,
    /* 0x03 */ AHG_LIMB_LEFT_SHIN,
    /* 0x04 */ AHG_LIMB_LEFT_FOOT,
    /* 0x05 */ AHG_LIMB_RIGHT_THIGH,
    /* 0x06 */ AHG_LIMB_RIGHT_SHIN,
    /* 0x07 */ AHG_LIMB_RIGHT_FOOT,
    /* 0x08 */ AHG_LIMB_CHEST,
    /* 0x09 */ AHG_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ AHG_LIMB_LEFT_FOREARM,
    /* 0x0B */ AHG_LIMB_LEFT_HAND,
    /* 0x0C */ AHG_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ AHG_LIMB_RIGHT_FOREARM,
    /* 0x0E */ AHG_LIMB_RIGHT_HAND,
    /* 0x0F */ AHG_LIMB_HEAD,
    /* 0x10 */ AHG_LIMB_MAX
} ObjectAhgLimb;

extern u64 gAhgTLUT[];
extern u64 gAhgHairLineTex[];
extern u64 gAhgHairTex[];
extern u64 gAhgEarTex[];
extern u64 gAhgSkinGradientTex[];
extern u64 gAhgEyeOpenTex[];
extern u64 gAhgEyeHalfTex[];
extern u64 gAhgEyeClosedTex[];
extern u64 gAhgFingersTex[];
extern u64 gAhgShirtTex[];
extern u64 gAhgShoesTex[];
extern u64 gAhgBeltBuckleTex[];
extern u64 gAhgBeltLoopTex[];
extern Vtx object_ahgVtx_000C00[];
extern Gfx gAhgBeardedHeadDL[];
extern Gfx gAhgRightHandDL[];
extern Gfx gAhgRightForearmDL[];
extern Gfx gAhgRightUpperArmDL[];
extern Gfx gAhgLeftHandDL[];
extern Gfx gAhgLeftForearmDL[];
extern Gfx gAhgLeftUpperArmDL[];
extern Gfx gAhgTorsoDL[];
extern Gfx gAhgRightFootDL[];
extern Gfx gAhgRightShinDL[];
extern Gfx gAhgRightThighDL[];
extern Gfx gAhgLeftFootDL[];
extern Gfx gAhgLeftShinDL[];
extern Gfx gAhgLeftThighDL[];
extern Gfx gAhgPelvisDL[];
extern u64 gAhg2TLUT[];
extern u64 gAhgEar2Tex[];
extern u64 gAhgMouthTex[];
extern u64 gAhgEyeAndEyebrowTex[];
extern u64 gAhgRedHairTex[];
extern Vtx object_ahgVtx_004C08[];
extern Gfx gAhgRedHeadDL[];
extern Gfx gAhgShortHairHeadDL[];
extern StandardLimb gAhgPelvisLimb;
extern StandardLimb gAhgLeftThighLimb;
extern StandardLimb gAhgLeftShinLimb;
extern StandardLimb gAhgLeftFootLimb;
extern StandardLimb gAhgRightThighLimb;
extern StandardLimb gAhgRightShinLimb;
extern StandardLimb gAhgRightFootLimb;
extern StandardLimb gAhgTorsoLimb;
extern StandardLimb gAhgLeftUpperArmLimb;
extern StandardLimb gAhgLeftForearmLimb;
extern StandardLimb gAhgLeftHandLimb;
extern StandardLimb gAhgRightUpperArmLimb;
extern StandardLimb gAhgRightForearmLimb;
extern StandardLimb gAhgRightHandLimb;
extern StandardLimb gAhgHeadLimb;
extern void* gAhgSkelLimbs[];
extern FlexSkeletonHeader gAhgSkel;
#endif
