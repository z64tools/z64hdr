#ifndef OBJECT_WARP1_H
#define OBJECT_WARP1_H 1

typedef enum WarpCrystalLimb {
    /* 0x00 */ WARP_CRYSTAL_LIMB_NONE,
    /* 0x01 */ WARP_CRYSTAL_LIMB_ROOT,
    /* 0x02 */ WARP_CRYSTAL_LIMB_WRAPPER,
    /* 0x03 */ WARP_CRYSTAL_LIMB_BOTTOM,
    /* 0x04 */ WARP_CRYSTAL_TOP_SEGMENT_1_ROOT,
    /* 0x05 */ WARP_CRYSTAL_TOP_SEGMENT_1_WRAPPER,
    /* 0x06 */ WARP_CRYSTAL_TOP_SEGMENT_1,
    /* 0x07 */ WARP_CRYSTAL_TOP_SEGMENT_2_ROOT,
    /* 0x08 */ WARP_CRYSTAL_TOP_SEGMENT_2_WRAPPER,
    /* 0x09 */ WARP_CRYSTAL_TOP_SEGMENT_2,
    /* 0x0A */ WARP_CRYSTAL_TOP_SEGMENT_3_ROOT,
    /* 0x0B */ WARP_CRYSTAL_TOP_SEGMENT_3_WRAPPER,
    /* 0x0C */ WARP_CRYSTAL_TOP_SEGMENT_3,
    /* 0x0D */ WARP_CRYSTAL_TOP_SEGMENT_4_ROOT,
    /* 0x0E */ WARP_CRYSTAL_TOP_SEGMENT_4_WRAPPER,
    /* 0x0F */ WARP_CRYSTAL_TOP_SEGMENT_4,
    /* 0x10 */ WARP_CRYSTAL_TOP_SEGMENT_5_ROOT,
    /* 0x11 */ WARP_CRYSTAL_TOP_SEGMENT_5_WRAPPER,
    /* 0x12 */ WARP_CRYSTAL_TOP_SEGMENT_5,
    /* 0x13 */ WARP_CRYSTAL_TOP_SEGMENT_6_ROOT,
    /* 0x14 */ WARP_CRYSTAL_TOP_SEGMENT_6_WRAPPER,
    /* 0x15 */ WARP_CRYSTAL_TOP_SEGMENT_6,
    /* 0x16 */ WARP_CRYSTAL_LIMB_MAX
} WarpCrystalLimb;

extern Vtx object_warp1Vtx_000000[];
extern Gfx gWarpPortalDL[];
extern u64 gWarpPortalTex[];
extern s16 sWarpCrystalAnimFrameData[];
extern JointIndex sWarpCrystalAnimJointIndices[];
extern AnimationHeader gWarpCrystalAnim;
extern Vtx object_warp1Vtx_001390[];
extern Gfx gWarpCrystalBottomDL[];
extern Gfx gWarpCrystalTopSegment1DL[];
extern Gfx gWarpCrystalTopSegment2DL[];
extern Gfx gWarpCrystalTopSegment3DL[];
extern Gfx gWarpCrystalTopSegment4DL[];
extern Gfx gWarpCrystalTopSegment5DL[];
extern Gfx gWarpCrystalTopSegment6DL[];
extern u64 gWarpCrystalTex[];
extern StandardLimb gWarpCrystalRootLimb;
extern StandardLimb gWarpCrystalWrapperLimb;
extern StandardLimb gWarpCrystalBottomLimb;
extern StandardLimb gWarpCrystalTopSegment1RootLimb;
extern StandardLimb gWarpCrystalTopSegment1WrapperLimb;
extern StandardLimb gWarpCrystalTopSegment1Limb;
extern StandardLimb gWarpCrystalTopSegment2RootLimb;
extern StandardLimb gWarpCrystalTopSegment2WrapperLimb;
extern StandardLimb gWarpCrystalTopSegment2Limb;
extern StandardLimb gWarpCrystalTopSegment3RootLimb;
extern StandardLimb gWarpCrystalTopSegment3WrapperLimb;
extern StandardLimb gWarpCrystalTopSegment3Limb;
extern StandardLimb gWarpCrystalTopSegment4RootLimb;
extern StandardLimb gWarpCrystalTopSegment4WrapperLimb;
extern StandardLimb gWarpCrystalTopSegment4Limb;
extern StandardLimb gWarpCrystalTopSegment5RootLimb;
extern StandardLimb gWarpCrystalTopSegment5WrapperLimb;
extern StandardLimb gWarpCrystalTopSegment5Limb;
extern StandardLimb gWarpCrystalTopSegment6RootLimb;
extern StandardLimb gWarpCrystalTopSegment6WrapperLimb;
extern StandardLimb gWarpCrystalTopSegment6Limb;
extern void* gWarpCrystalSkelLimbs[];
extern SkeletonHeader gWarpCrystalSkel;
extern Vtx object_warp1Vtx_002CB0[];
extern Gfx gWarpBossWarpActivationBeamDL[];
extern Gfx gWarpBossWarpActivationBeamEmptyDL[];
extern u64 gWarpBossWarpActivationBeamTex[];
extern u64 gWarpBossWarpActivationBeamMaskTex[];
extern AnimatedMatTexScrollParams gWarpBossWarpActivationBeamTexAnimTexScrollParams_0044D0[];
extern AnimatedMaterial gWarpBossWarpActivationBeamTexAnim[];
extern Vtx object_warp1Vtx_0044E0[];
extern Gfx gWarpBossWarpLightShaftsDL[];
extern Gfx gWarpBossWarpLightShaftsEmptyDL[];
extern u64 gWarpBossWarpLightShaftsTex[];
extern u64 gWarpBossWarpLightShaftsMaskTex[];
extern AnimatedMatTexScrollParams gWarpBossWarpLightShaftsTexAnimTexScrollParams_0057D0[];
extern AnimatedMaterial gWarpBossWarpLightShaftsTexAnim[];
extern Vtx object_warp1Vtx_0057E0[];
extern Gfx gWarpBossWarpGlowEmptyDL[];
extern Gfx gWarpBossWarpGlowDL[];
extern u64 gWarpBossWarpGlowBottomMaskTex[];
extern u64 gWarpBossWarpGlowTopMaskTex[];
extern u64 gWarpBossWarpGlowTex[];
extern AnimatedMatTexScrollParams gWarpBossWarpGlowTexAnimTexScrollParams_007230[];
extern AnimatedMaterial gWarpBossWarpGlowTexAnim[];
extern Vtx object_warp1Vtx_007240[];
extern Gfx gWarpBossWarpPlatformDL[];
extern u64 gWarpBossWarpPlatformBottomTLUT[];
extern u64 gWarpBossWarpPlatformTopTLUT[];
extern u64 gWarpBossWarpPlatformBottomTex[];
extern u64 gWarpBossWarpPlatformTopTex[];
extern CamData gWarpBossWarpPlatformColCamDataList[];
extern SurfaceType gWarpBossWarpPlatformColSurfaceType[];
extern CollisionPoly gWarpBossWarpPlatformColPolygons[];
extern Vec3s gWarpBossWarpPlatformColVertices[];
extern CollisionHeader gWarpBossWarpPlatformCol;
#endif
