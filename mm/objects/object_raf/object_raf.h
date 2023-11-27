#ifndef OBJECT_RAF_H
#define OBJECT_RAF_H 1

typedef enum CarnivorousLilyPadLimb {
    /* 0x00 */ CARNIVOROUS_LILY_PAD_LIMB_NONE,
    /* 0x01 */ CARNIVOROUS_LILY_PAD_LIMB_FLOWER,
    /* 0x02 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_LOWER_SEGMENT,
    /* 0x03 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_MIDDLE_SEGMENT,
    /* 0x04 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_UPPER_SEGMENT,
    /* 0x05 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_LOWER_SEGMENT,
    /* 0x06 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_MIDDLE_SEGMENT,
    /* 0x07 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_UPPER_SEGMENT,
    /* 0x08 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_LOWER_SEGMENT,
    /* 0x09 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_MIDDLE_SEGMENT,
    /* 0x0A */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_UPPER_SEGMENT,
    /* 0x0B */ CARNIVOROUS_LILY_PAD_LIMB_ROOTS,
    /* 0x0C */ CARNIVOROUS_LILY_PAD_LIMB_MAX
} CarnivorousLilyPadLimb;

extern CamData gCarnivorousLilyPadColCamDataList[];
extern SurfaceType gCarnivorousLilyPadColCamPosData[];
extern CollisionPoly gCarnivorousLilyPadColPolygons[];
extern Vec3s gCarnivorousLilyPadColVertices[];
extern CollisionHeader gCarnivorousLilyPadCol;
extern Vtx object_rafVtx_000140[];
extern Gfx gCarnivorousLilyPadTexturelessPlatformDL[];
extern s16 sCarnivorousLilyPadConvulseAnimFrameData[];
extern JointIndex sCarnivorousLilyPadConvulseAnimJointIndices[];
extern AnimationHeader gCarnivorousLilyPadConvulseAnim;
extern s16 sCarnivorousLilyPadDeathAnimFrameData[];
extern JointIndex sCarnivorousLilyPadDeathAnimJointIndices[];
extern AnimationHeader gCarnivorousLilyPadDeathAnim;
extern s16 sCarnivorousLilyPadSpitAnimFrameData[];
extern JointIndex sCarnivorousLilyPadSpitAnimJointIndices[];
extern AnimationHeader gCarnivorousLilyPadSpitAnim;
extern s16 sCarnivorousLilyPadChewAnimFrameData[];
extern JointIndex sCarnivorousLilyPadChewAnimJointIndices[];
extern AnimationHeader gCarnivorousLilyPadChewAnim;
extern s16 sCarnivorousLilyPadCloseAnimFrameData[];
extern JointIndex sCarnivorousLilyPadCloseAnimJointIndices[];
extern AnimationHeader gCarnivorousLilyPadCloseAnim;
extern Vtx object_rafVtx_000C90[];
extern Gfx gCarnivorousLilyPadFlowerDL[];
extern Gfx gCarnivorousLilyPadRootsDL[];
extern Gfx gCarnivorousLilyPadTrap3LowerSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap3MiddleSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap3UpperSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap2LowerSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap2MiddleSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap2UpperSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap1LowerSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap1MiddleSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap1UpperSegmentDL[];
extern Vtx object_rafVtx_002240[];
extern Gfx gCarnivorousLilyPadParticlePetalDL[];
extern Gfx gCarnivorousLilyPadParticleTeethDL[];
extern Gfx gCarnivorousLilyPadParticleDL[];
extern u64 gCarnivorousLilyPadRootsTex[];
extern u64 gCarnivorousLilyPadFlowerPetalTex[];
extern u64 gCarnivorousLilyPadFlowerCenterTex[];
extern u64 gCarnivorousLilyPadTrapPetalTex[];
extern u64 gCarnivorousLilyPadTrapTeethTex[];
extern StandardLimb gCarnivorousLilyPadFlowerLimb;
extern StandardLimb gCarnivorousLilyPadTrap1LowerSegmentLimb;
extern StandardLimb gCarnivorousLilyPadTrap1MiddleSegmentLimb;
extern StandardLimb gCarnivorousLilyPadTrap1UpperSegmentLimb;
extern StandardLimb gCarnivorousLilyPadTrap2LowerSegmentLimb;
extern StandardLimb gCarnivorousLilyPadTrap2MiddleSegmentLimb;
extern StandardLimb gCarnivorousLilyPadTrap2UpperSegmentLimb;
extern StandardLimb gCarnivorousLilyPadTrap3LowerSegmentLimb;
extern StandardLimb gCarnivorousLilyPadTrap3MiddleSegmentLimb;
extern StandardLimb gCarnivorousLilyPadTrap3UpperSegmentLimb;
extern StandardLimb gCarnivorousLilyPadRootsLimb;
extern void* gCarnivorousLilyPadSkelLimbs[];
extern FlexSkeletonHeader gCarnivorousLilyPadSkel;
#endif
