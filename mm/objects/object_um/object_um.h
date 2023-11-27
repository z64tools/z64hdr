#ifndef OBJECT_UM_H
#define OBJECT_UM_H 1

typedef enum ObjectUmLimb {
    /* 0x00 */ UM_LIMB_NONE,
    /* 0x01 */ UM_LIMB_SEAT_AND_SHAFTS,
    /* 0x02 */ UM_LIMB_WAGON_ROOT,
    /* 0x03 */ UM_LIMB_WAGON_RIGHT_WHEEL,
    /* 0x04 */ UM_LIMB_WAGON_LEFT_WHEEL,
    /* 0x05 */ UM_LIMB_WAGON_CART_BED,
    /* 0x06 */ UM_LIMB_WAGON_HAND_BRAKE,
    /* 0x07 */ UM_LIMB_WAGON_CART_COVER,
    /* 0x08 */ UM_LIMB_WAGON_LEFT_LEAF_SPRING,
    /* 0x09 */ UM_LIMB_WAGON_RIGHT_LEAF_SPRING,
    /* 0x0A */ UM_LIMB_WAGON_STEERING_WHEEL,
    /* 0x0B */ UM_LIMB_CREMIA_ROOT,
    /* 0x0C */ UM_LIMB_CREMIA_TORSO,
    /* 0x0D */ UM_LIMB_CREMIA_HEAD,
    /* 0x0E */ UM_LIMB_CREMIA_HAIR_END,
    /* 0x0F */ UM_LIMB_CREMIA_LEFT_UPPER_ARM,
    /* 0x10 */ UM_LIMB_CREMIA_LEFT_FOREARM,
    /* 0x11 */ UM_LIMB_CREMIA_LEFT_HAND,
    /* 0x12 */ UM_LIMB_CREMIA_RIGHT_UPPER_ARM,
    /* 0x13 */ UM_LIMB_CREMIA_RIGHT_FOREARM,
    /* 0x14 */ UM_LIMB_CREMIA_RIGHT_HAND,
    /* 0x15 */ UM_LIMB_CREMIA_LOWER_BODY,
    /* 0x16 */ UM_LIMB_MAX
} ObjectUmLimb;

extern Vtx object_umVtx_000000[];
extern Gfx object_um_DL_000040[];
extern u64 object_um_Tex_0000C8[];
extern Vtx object_umVtx_0008D0[];
extern Gfx object_um_DL_000910[];
extern u64 object_um_Tex_000998[];
extern Vtx object_umVtx_0011A0[];
extern Gfx object_um_DL_0011E0[];
extern u64 object_um_Tex_001268[];
extern Vtx object_umVtx_001A70[];
extern Gfx object_um_DL_001EE0[];
extern u64 object_um_Tex_002148[];
extern u64 object_um_Tex_002948[];
extern u64 object_um_Tex_003148[];
extern Vtx object_umVtx_003950[];
extern Gfx gUmMinigamePotDL[];
extern u64 object_um_Tex_003F00[];
extern u64 object_um_Tex_004100[];
extern Vtx object_umVtx_004180[];
extern Gfx object_um_DL_0043E0[];
extern u64 object_um_Tex_004500[];
extern Vtx object_umVtx_004900[];
extern Gfx object_um_DL_004B60[];
extern u64 object_um_Tex_004C80[];
extern Vtx object_umVtx_005080[];
extern Gfx gUmBrokenMinigamePotDL[];
extern u64 object_um_TLUT_0054D0[];
extern u64 object_um_Tex_0056D0[];
extern u64 object_um_Tex_005710[];
extern u64 object_um_Tex_005F10[];
extern Vtx object_umVtx_006310[];
extern Gfx object_um_DL_0067C0[];
extern u64 object_um_TLUT_006AD0[];
extern u64 object_um_Tex_006CD0[];
extern u64 object_um_Tex_006D10[];
extern u64 object_um_Tex_007510[];
extern CamData object_um_Colheader_007E20CamDataList[];
extern SurfaceType object_um_Colheader_007E20SurfaceType[];
extern CollisionPoly object_um_Colheader_007E20Polygons[];
extern Vec3s object_um_Colheader_007E20Vertices[];
extern CollisionHeader object_um_Colheader_007E20;
extern CamData object_um_Colheader_007F50CamDataList[];
extern SurfaceType object_um_Colheader_007F50SurfaceType[];
extern CollisionPoly object_um_Colheader_007F50Polygons[];
extern Vec3s object_um_Colheader_007F50Vertices[];
extern CollisionHeader object_um_Colheader_007F50;
extern Vtx object_umVtx_007F80[];
extern Gfx object_um_DL_00DF20[];
extern Gfx object_um_DL_00E2F0[];
extern Gfx object_um_DL_00E6A8[];
extern Gfx object_um_DL_00ED18[];
extern Gfx object_um_DL_00EEB0[];
extern Gfx object_um_DL_00F150[];
extern Gfx object_um_DL_00F2D8[];
extern Gfx object_um_DL_00F590[];
extern Gfx object_um_DL_00F828[];
extern Gfx object_um_DL_00F9B0[];
extern Gfx object_um_DL_00FBF8[];
extern Gfx object_um_DL_010178[];
extern Gfx object_um_DL_0103E0[];
extern Gfx object_um_DL_010908[];
extern Gfx object_um_DL_010AA8[];
extern Gfx object_um_DL_010B40[];
extern Gfx object_um_DL_010BD8[];
extern Gfx object_um_DL_010CC8[];
extern Gfx object_um_DL_0114B8[];
extern StandardLimb gUmWagonSeatAndShaftsLimb;
extern StandardLimb gUmWagonRootLimb;
extern StandardLimb gUmWagonRightWheelLimb;
extern StandardLimb gUmWagonLeftWheelLimb;
extern StandardLimb gUmWagonCartBedLimb;
extern StandardLimb gUmWagonHandBrakeLimb;
extern StandardLimb gUmWagonCartCoverLimb;
extern StandardLimb gUmWagonLeftLeafSpringLimb;
extern StandardLimb gUmWagonRightLeafSpringLimb;
extern StandardLimb gUmWagonSteeringWheelLimb;
extern StandardLimb gUmCremiaRootLimb;
extern StandardLimb gUmCremiaTorsoLimb;
extern StandardLimb gUmCremiaHeadLimb;
extern StandardLimb gUmCremiaHairEndLimb;
extern StandardLimb gUmCremiaLeftUpperArmLimb;
extern StandardLimb gUmCremiaLeftForearmLimb;
extern StandardLimb gUmCremiaLeftHandLimb;
extern StandardLimb gUmCremiaRightUpperArmLimb;
extern StandardLimb gUmCremiaRightForearmLimb;
extern StandardLimb gUmCremiaRightHandLimb;
extern StandardLimb gUmCremiaLowerBodyLimb;
extern void* gUmSkelLimbs[];
extern FlexSkeletonHeader gUmSkel;
extern s16 sUmGallopAnimFrameData[];
extern JointIndex sUmGallopAnimJointIndices[];
extern AnimationHeader gUmGallopAnim;
extern s16 sUmLookBackAnimFrameData[];
extern JointIndex sUmLookBackAnimJointIndices[];
extern AnimationHeader gUmLookBackAnim;
extern s16 sUmTrotAnimFrameData[];
extern JointIndex sUmTrotAnimJointIndices[];
extern AnimationHeader gUmTrotAnim;
extern u64 object_um_TLUT_012CD0[];
extern u64 object_um_TLUT_012ED0[];
extern u64 object_um_TLUT_0130D0[];
extern u64 object_um_TLUT_0132D0[];
extern u64 object_um_Tex_0134D0[];
extern u64 object_um_Tex_0138D0[];
extern u64 object_um_Tex_013CD0[];
extern u64 object_um_Tex_0144D0[];
extern u64 object_um_Tex_014CD0[];
extern u64 object_um_Tex_0154D0[];
extern u64 object_um_Tex_015CD0[];
extern u64 gUmCremiaEyeOpenTex[];
extern u64 gUmCremiaEyeHalfTex[];
extern u64 gUmCremiaEyeClosedTex[];
extern u64 gUmCremiaEyeHappyTex[];
extern u64 gUmCremiaEyeAngryTex[];
extern u64 gUmCremiaEyeSadTex[];
extern u64 gUmMouthNormalTex[];
extern u64 gUmMouthHappyTex[];
extern u64 gUmMouthFrownTex[];
extern u64 gUmMouthHangingOpenTex[];
extern u64 object_um_Tex_0184D0[];
extern u64 object_um_Tex_018510[];
extern u64 object_um_Tex_018610[];
extern u64 object_um_Tex_018710[];
extern u64 object_um_Tex_018750[];
extern u64 object_um_Tex_018850[];
extern u64 object_um_Tex_018950[];
extern u64 object_um_Tex_0189D0[];
extern u64 object_um_Tex_018A10[];
extern u64 object_um_Tex_018E10[];
extern u64 object_um_Tex_019010[];
extern u64 object_um_Tex_019210[];
extern u64 object_um_Tex_019310[];
extern u64 object_um_Tex_019510[];
extern s16 sUmIdleAnimFrameData[];
extern JointIndex sUmIdleAnimJointIndices[];
extern AnimationHeader gUmIdleAnim;
#endif
