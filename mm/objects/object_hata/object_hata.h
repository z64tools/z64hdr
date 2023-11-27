#ifndef OBJECT_HATA_H
#define OBJECT_HATA_H 1

typedef enum FlagpoleLimb {
    /* 0x00 */ FLAGPOLE_LIMB_NONE,
    /* 0x01 */ FLAGPOLE_LIMB_BASE,
    /* 0x02 */ FLAGPOLE_LIMB_POLE,
    /* 0x03 */ FLAGPOLE_LIMB_FLAG1_BASE,
    /* 0x04 */ FLAGPOLE_LIMB_FLAG1_HOIST_END_BASE,
    /* 0x05 */ FLAGPOLE_LIMB_FLAG1_HOIST_MID_BASE,
    /* 0x06 */ FLAGPOLE_LIMB_FLAG1_FLY_MID_BASE,
    /* 0x07 */ FLAGPOLE_LIMB_FLAG1_FLY_END_BASE,
    /* 0x08 */ FLAGPOLE_LIMB_FLAG1_FLY_END,
    /* 0x09 */ FLAGPOLE_LIMB_FLAG1_FLY_MID,
    /* 0x0A */ FLAGPOLE_LIMB_FLAG1_HOIST_MID,
    /* 0x0B */ FLAGPOLE_LIMB_FLAG1_HOIST_END,
    /* 0x0C */ FLAGPOLE_LIMB_FLAG2_BASE,
    /* 0x0D */ FLAGPOLE_LIMB_FLAG2_HOIST_END_BASE,
    /* 0x0E */ FLAGPOLE_LIMB_FLAG2_HOIST_MID_BASE,
    /* 0x0F */ FLAGPOLE_LIMB_FLAG2_FLY_MID_BASE,
    /* 0x10 */ FLAGPOLE_LIMB_FLAG2_FLY_END_BASE,
    /* 0x11 */ FLAGPOLE_LIMB_FLAG2_FLY_END,
    /* 0x12 */ FLAGPOLE_LIMB_FLAG2_FLY_MID,
    /* 0x13 */ FLAGPOLE_LIMB_FLAG2_HOIST_MID,
    /* 0x14 */ FLAGPOLE_LIMB_FLAG2_HOIST_END,
    /* 0x15 */ FLAGPOLE_LIMB_MAX
} FlagpoleLimb;

extern CamData gFlagpoleColCamDataList[];
extern SurfaceType gFlagpoleColCamPosData[];
extern CollisionPoly gFlagpoleColPolygons[];
extern Vec3s gFlagpoleColVertices[];
extern CollisionHeader gFlagpoleCol;
extern s16 sFlagpoleFlapAnimFrameData[];
extern JointIndex sFlagpoleFlapAnimJointIndices[];
extern AnimationHeader gFlagpoleFlapAnim;
extern u64 gFlagpolePoleTex[];
extern u64 gFlagpoleTopTex[];
extern u64 gFlagpoleFlagTex[];
extern Vtx object_hataVtx_002460[];
extern Gfx gFlagpolePoleDL[];
extern Vtx object_hataVtx_002810[];
extern Gfx gFlagpoleFlag1HoistEndDL[];
extern Vtx object_hataVtx_0028E0[];
extern Gfx gFlagpoleFlag1HoistMidDL[];
extern Vtx object_hataVtx_0029B0[];
extern Gfx gFlagpoleFlag1FlyMidDL[];
extern Vtx object_hataVtx_002A80[];
extern Gfx gFlagpoleFlag1FlyEndDL[];
extern Vtx object_hataVtx_002B50[];
extern Gfx gFlagpoleFlag2HoistEndDL[];
extern Vtx object_hataVtx_002C20[];
extern Gfx gFlagpoleFlag2HoistMidDL[];
extern Vtx object_hataVtx_002CF0[];
extern Gfx gFlagpoleFlag2FlyMidDL[];
extern Vtx object_hataVtx_002DC0[];
extern Gfx gFlagpoleFlag2FlyEndDL[];
extern StandardLimb gFlagpolePoleBaseLimb;
extern StandardLimb gFlagpolePoleLimb;
extern StandardLimb gFlagpoleFlag1BaseLimb;
extern StandardLimb gFlagpoleFlag1HoistEndBaseLimb;
extern StandardLimb gFlagpoleFlag1HoistMidBaseLimb;
extern StandardLimb gFlagpoleFlag1FlyMidBaseLimb;
extern StandardLimb gFlagpoleFlag1FlyEndBaseLimb;
extern StandardLimb gFlagpoleFlag1FlyEndLimb;
extern StandardLimb gFlagpoleFlag1FlyMidLimb;
extern StandardLimb gFlagpoleFlag1HoistMidLimb;
extern StandardLimb gFlagpoleFlag1HoistEndLimb;
extern StandardLimb gFlagpoleFlag2BaseLimb;
extern StandardLimb gFlagpoleFlag2HoistEndBaseLimb;
extern StandardLimb gFlagpoleFlag2HoistMidBaseLimb;
extern StandardLimb gFlagpoleFlag2FlyMidBaseLimb;
extern StandardLimb gFlagpoleFlag2FlyEndBaseLimb;
extern StandardLimb gFlagpoleFlag2FlyEndLimb;
extern StandardLimb gFlagpoleFlag2FlyMidLimb;
extern StandardLimb gFlagpoleFlag2HoistMidLimb;
extern StandardLimb gFlagpoleFlag2HoistEndLimb;
extern void* gFlagpoleSkelLimbs[];
extern SkeletonHeader gFlagpoleSkel;
#endif
