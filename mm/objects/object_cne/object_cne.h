#ifndef OBJECT_CNE_H
#define OBJECT_CNE_H 1

typedef enum CneLimb {
    /* 0x00 */ CNE_LIMB_NONE,
    /* 0x01 */ CNE_LIMB_PELVIS,
    /* 0x02 */ CNE_LIMB_LEFT_THIGH,
    /* 0x03 */ CNE_LIMB_LEFT_SHIN,
    /* 0x04 */ CNE_LIMB_LEFT_FOOT,
    /* 0x05 */ CNE_LIMB_RIGHT_THIGH,
    /* 0x06 */ CNE_LIMB_RIGHT_SHIN,
    /* 0x07 */ CNE_LIMB_RIGHT_FOOT,
    /* 0x08 */ CNE_LIMB_TORSO,
    /* 0x09 */ CNE_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ CNE_LIMB_LEFT_FOREARM,
    /* 0x0B */ CNE_LIMB_LEFT_HAND,
    /* 0x0C */ CNE_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ CNE_LIMB_RIGHT_FOREARM,
    /* 0x0E */ CNE_LIMB_RIGHT_HAND,
    /* 0x0F */ CNE_LIMB_HEAD,
    /* 0x10 */ CNE_LIMB_MAX
} CneLimb;

extern StandardLimb gCnePelvisLimb;
extern StandardLimb gCneLeftThighLimb;
extern StandardLimb gCneLeftShinLimb;
extern StandardLimb gCneLeftFootLimb;
extern StandardLimb gCneRightThighLimb;
extern StandardLimb gCneRightShinLimb;
extern StandardLimb gCneRightFootLimb;
extern StandardLimb gCneTorsoLimb;
extern StandardLimb gCneLeftUpperArmLimb;
extern StandardLimb gCneLeftForearmLimb;
extern StandardLimb gCneLeftHandLimb;
extern StandardLimb gCneRightUpperArmLimb;
extern StandardLimb gCneRightForearmLimb;
extern StandardLimb gCneRightHandLimb;
extern StandardLimb gCneHeadLimb;
extern void* gCneSkelLimbs[];
extern FlexSkeletonHeader gCneSkel;
extern u32 gCneTLUT[];
extern u32 gCneSkinTex[];
extern u32 gCneBrownHairTex[];
extern u32 gCneHandTex[];
extern u32 gCneBrownHairSkinTex[];
extern u32 gCneBrownHairFaceTex[];
extern u32 gCneDressTex[];
extern u32 gCneDressNeckTex[];
extern Vtx object_cneVtx_000500[];
extern Gfx gCneHeadBrownHairDL[];
extern Gfx gCneRightHandDL[];
extern Gfx gCneRightForearmDL[];
extern Gfx gCneRightUpperArmDL[];
extern Gfx gCneLeftHandDL[];
extern Gfx gCneLeftForearmDL[];
extern Gfx gCneLeftUpperArmDL[];
extern Gfx gCneTorsoDL[];
extern Gfx gCneRightFootDL[];
extern Gfx gCneRightShinDL[];
extern Gfx gCneRightThighDL[];
extern Gfx gCneLeftFootDL[];
extern Gfx gCneLeftShinDL[];
extern Gfx gCneLeftThighDL[];
extern Gfx gCnePelvisDL[];
extern u64 gCneOrangeHairFaceTex[];
extern u64 gCneOrangeHairSkinTex[];
extern Vtx object_cneVtx_002550[];
extern Gfx gCneHeadOrangeHairDL[];
#endif
