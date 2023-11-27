#ifndef OBJECT_STH_H
#define OBJECT_STH_H 1

typedef enum ObjectSthLimb {
    /* 0x00 */ STH_LIMB_NONE,
    /* 0x01 */ STH_LIMB_PELVIS,
    /* 0x02 */ STH_LIMB_LEFT_THIGH,
    /* 0x03 */ STH_LIMB_LEFT_SHIN,
    /* 0x04 */ STH_LIMB_LEFT_FOOT,
    /* 0x05 */ STH_LIMB_RIGHT_THIGH,
    /* 0x06 */ STH_LIMB_RIGHT_SHIN,
    /* 0x07 */ STH_LIMB_RIGHT_FOOT,
    /* 0x08 */ STH_LIMB_CHEST,
    /* 0x09 */ STH_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ STH_LIMB_LEFT_FOREARM,
    /* 0x0B */ STH_LIMB_LEFT_HAND,
    /* 0x0C */ STH_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ STH_LIMB_RIGHT_FOREARM,
    /* 0x0E */ STH_LIMB_RIGHT_HAND,
    /* 0x0F */ STH_LIMB_HEAD,
    /* 0x10 */ STH_LIMB_MAX
} ObjectSthLimb;

extern Vtx gSthUnusedHeadVtx[];
extern Vtx object_sthVtx_000530[];
extern Gfx gSthHeadDL[];
extern Gfx gSthRightHandDL[];
extern Gfx gSthRightForearmDL[];
extern Gfx gSthRightUpperArmDL[];
extern Gfx gSthLeftHandDL[];
extern Gfx gSthLeftForearmDL[];
extern Gfx gSthLeftUpperArmDL[];
extern Gfx gSthTorsoDL[];
extern Gfx gSthRightFootDL[];
extern Gfx gSthRightShinDL[];
extern Gfx gSthRightThighDL[];
extern Gfx gSthLeftFootDL[];
extern Gfx gSthLeftShinDL[];
extern Gfx gSthLeftThighDL[];
extern Gfx gSthPelvisDL[];
extern u64 gSthTLUT[];
extern u64 gSthSkinTex[];
extern u64 gSthFingerTex[];
extern u64 gSthShirtTex[];
extern u64 gSthBeltBuckleTex[];
extern u64 gSthPantsTex[];
extern StandardLimb gSthPelvisLimb;
extern StandardLimb gSthLeftThighLimb;
extern StandardLimb gSthLeftShinLimb;
extern StandardLimb gSthLeftFootLimb;
extern StandardLimb gSthRightThighLimb;
extern StandardLimb gSthRightShinLimb;
extern StandardLimb gSthRightFootLimb;
extern StandardLimb gSthTorsoLimb;
extern StandardLimb gSthLeftUpperArmLimb;
extern StandardLimb gSthLeftForearmLimb;
extern StandardLimb gSthLeftHandLimb;
extern StandardLimb gSthRightUpperArmLimb;
extern StandardLimb gSthRightForearmLimb;
extern StandardLimb gSthRightHandLimb;
extern StandardLimb gSthHeadLimb;
extern void* gSthSkelLimbs[];
extern FlexSkeletonHeader gSthSkel;
#endif
