#ifndef OBJECT_PO_FUSEN_H
#define OBJECT_PO_FUSEN_H 1

typedef enum PoeBalloonLimb {
    /* 0x00 */ POE_BALLOON_LIMB_NONE,
    /* 0x01 */ POE_BALLOON_LIMB_ROOT,
    /* 0x02 */ POE_BALLOON_LIMB_BODY,
    /* 0x03 */ POE_BALLOON_RIGHT_UPPER_ARM,
    /* 0x04 */ POE_BALLOON_RIGHT_FOREARM,
    /* 0x05 */ POE_BALLOON_RIGHT_HAND,
    /* 0x06 */ POE_BALLOON_LEFT_UPPER_ARM,
    /* 0x07 */ POE_BALLOON_LEFT_FOREARM,
    /* 0x08 */ POE_BALLOON_LEFT_HAND,
    /* 0x09 */ POE_BALLOON_LIMB_CHAIN_AND_LANTERN,
    /* 0x0A */ POE_BALLOON_LIMB_MAX
} PoeBalloonLimb;

extern s16 sPoeBalloonEmptyAnimFrameData[];
extern JointIndex sPoeBalloonEmptyAnimJointIndices[];
extern AnimationHeader gPoeBalloonEmptyAnim;
extern Vtx object_po_fusenVtx_000050[];
extern Gfx gPoeBalloonChainAndLanternDL[];
extern Gfx gPoeBalloonLeftHandDL[];
extern Gfx gPoeBalloonLeftForearmDL[];
extern Gfx gPoeBalloonLeftUpperArmDL[];
extern Gfx gPoeBalloonRightHandDL[];
extern Gfx gPoeBalloonRightForearmDL[];
extern Gfx gPoeBalloonRightUpperArmDL[];
extern Gfx gPoeBalloonBodyDL[];
extern u64 gPoeBalloonTLUT[];
extern u64 gPoeBalloonTatteredChinTex[];
extern u64 gPoeBalloonLanternTopTex[];
extern u64 gPoeBalloonLanternStandTex[];
extern u64 gPoeBalloonLanternGlassTex[];
extern u64 gPoeBalloonHandTex[];
extern u64 gPoeBalloonOrangeSkinTex[];
extern u64 gPoeBalloonFaceTex[];
extern u64 gPoeBalloonChainLinkTex[];
extern StandardLimb gPoeBalloonRootLimb;
extern StandardLimb gPoeBalloonBodyLimb;
extern StandardLimb gPoeBalloonRightUpperArmLimb;
extern StandardLimb gPoeBalloonRightForearmLimb;
extern StandardLimb gPoeBalloonRightHandLimb;
extern StandardLimb gPoeBalloonLeftUpperArmLimb;
extern StandardLimb gPoeBalloonLeftForearmLimb;
extern StandardLimb gPoeBalloonLeftHandLimb;
extern StandardLimb gPoeBalloonChainAndLanternLimb;
extern void* gPoeBalloonSkelLimbs[];
extern FlexSkeletonHeader gPoeBalloonSkel;
#endif
