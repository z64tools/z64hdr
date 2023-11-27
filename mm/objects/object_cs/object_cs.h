#ifndef OBJECT_CS_H
#define OBJECT_CS_H 1

typedef enum ObjectCsLimb {
    /* 0x00 */ OBJECT_CS_LIMB_NONE,
    /* 0x01 */ OBJECT_CS_LIMB_01,
    /* 0x02 */ OBJECT_CS_LIMB_02,
    /* 0x03 */ OBJECT_CS_LIMB_03,
    /* 0x04 */ OBJECT_CS_LIMB_04,
    /* 0x05 */ OBJECT_CS_LIMB_05,
    /* 0x06 */ OBJECT_CS_LIMB_06,
    /* 0x07 */ OBJECT_CS_LIMB_07,
    /* 0x08 */ OBJECT_CS_LIMB_08,
    /* 0x09 */ OBJECT_CS_LIMB_09,
    /* 0x0A */ OBJECT_CS_LIMB_0A,
    /* 0x0B */ OBJECT_CS_LIMB_0B,
    /* 0x0C */ OBJECT_CS_LIMB_0C,
    /* 0x0D */ OBJECT_CS_LIMB_0D,
    /* 0x0E */ OBJECT_CS_LIMB_0E,
    /* 0x0F */ OBJECT_CS_LIMB_0F,
    /* 0x10 */ OBJECT_CS_LIMB_10,
    /* 0x11 */ OBJECT_CS_LIMB_11,
    /* 0x12 */ OBJECT_CS_LIMB_12,
    /* 0x13 */ OBJECT_CS_LIMB_13,
    /* 0x14 */ OBJECT_CS_LIMB_14,
    /* 0x15 */ OBJECT_CS_LIMB_MAX
} ObjectCsLimb;

extern Vtx object_csVtx_000000[];
extern Gfx object_cs_DL_000040[];
extern u64 object_cs_Tex_0000C0[];
extern s16 object_cs_Anim_001708FrameData[];
extern JointIndex object_cs_Anim_001708JointIndices[];
extern AnimationHeader object_cs_Anim_001708;
extern s16 object_cs_Anim_001A1CFrameData[];
extern JointIndex object_cs_Anim_001A1CJointIndices[];
extern AnimationHeader object_cs_Anim_001A1C;
extern s16 object_cs_Anim_002044FrameData[];
extern JointIndex object_cs_Anim_002044JointIndices[];
extern AnimationHeader object_cs_Anim_002044;
extern s16 object_cs_Anim_0026B0FrameData[];
extern JointIndex object_cs_Anim_0026B0JointIndices[];
extern AnimationHeader object_cs_Anim_0026B0;
extern s16 object_cs_Anim_002930FrameData[];
extern JointIndex object_cs_Anim_002930JointIndices[];
extern AnimationHeader object_cs_Anim_002930;
extern s16 object_cs_Anim_0031C4FrameData[];
extern JointIndex object_cs_Anim_0031C4JointIndices[];
extern AnimationHeader object_cs_Anim_0031C4;
extern s16 object_cs_Anim_00349CFrameData[];
extern JointIndex object_cs_Anim_00349CJointIndices[];
extern AnimationHeader object_cs_Anim_00349C;
extern s16 object_cs_Anim_0036B0FrameData[];
extern JointIndex object_cs_Anim_0036B0JointIndices[];
extern AnimationHeader object_cs_Anim_0036B0;
extern s16 object_cs_Anim_003EE4FrameData[];
extern JointIndex object_cs_Anim_003EE4JointIndices[];
extern AnimationHeader object_cs_Anim_003EE4;
extern s16 object_cs_Anim_00433CFrameData[];
extern JointIndex object_cs_Anim_00433CJointIndices[];
extern AnimationHeader object_cs_Anim_00433C;
extern s16 object_cs_Anim_00478CFrameData[];
extern JointIndex object_cs_Anim_00478CJointIndices[];
extern AnimationHeader object_cs_Anim_00478C;
extern s16 object_cs_Anim_004960FrameData[];
extern JointIndex object_cs_Anim_004960JointIndices[];
extern AnimationHeader object_cs_Anim_004960;
extern s16 object_cs_Anim_004C1CFrameData[];
extern JointIndex object_cs_Anim_004C1CJointIndices[];
extern AnimationHeader object_cs_Anim_004C1C;
extern s16 object_cs_Anim_005128FrameData[];
extern JointIndex object_cs_Anim_005128JointIndices[];
extern AnimationHeader object_cs_Anim_005128;
extern s16 object_cs_Anim_0053F4FrameData[];
extern JointIndex object_cs_Anim_0053F4JointIndices[];
extern AnimationHeader object_cs_Anim_0053F4;
extern s16 object_cs_Anim_0057C8FrameData[];
extern JointIndex object_cs_Anim_0057C8JointIndices[];
extern AnimationHeader object_cs_Anim_0057C8;
extern s16 object_cs_Anim_005DC4FrameData[];
extern JointIndex object_cs_Anim_005DC4JointIndices[];
extern AnimationHeader object_cs_Anim_005DC4;
extern s16 object_cs_Anim_0060E8FrameData[];
extern JointIndex object_cs_Anim_0060E8JointIndices[];
extern AnimationHeader object_cs_Anim_0060E8;
extern s16 sBomberIdleAnimFrameData[];
extern JointIndex sBomberIdleAnimJointIndices[];
extern AnimationHeader gBomberIdleAnim;
extern Vtx object_csVtx_0064D0[];
extern Gfx object_cs_DL_009130[];
extern Gfx object_cs_DL_009478[];
extern Gfx object_cs_DL_009578[];
extern Gfx object_cs_DL_009678[];
extern Gfx object_cs_DL_009C50[];
extern Gfx object_cs_DL_009D48[];
extern Gfx object_cs_DL_009E38[];
extern Gfx object_cs_DL_009F80[];
extern Gfx object_cs_DL_00A0C0[];
extern Gfx object_cs_DL_00A1B8[];
extern Gfx object_cs_DL_00A2A8[];
extern Gfx object_cs_DL_00A3F0[];
extern Gfx object_cs_DL_00A508[];
extern Gfx object_cs_DL_00A650[];
extern Gfx object_cs_DL_00A7E0[];
extern Gfx object_cs_DL_00AA58[];
extern Gfx object_cs_DL_00ABA0[];
extern Gfx object_cs_DL_00AD30[];
extern u64 object_cs_TLUT_00B020[];
extern u64 object_cs_TLUT_00B220[];
extern u64 object_cs_TLUT_00B420[];
extern u64 object_cs_Tex_00B620[];
extern u64 object_cs_Tex_00B820[];
extern u64 object_cs_Tex_00B860[];
extern u64 object_cs_Tex_00B8A0[];
extern u64 object_cs_Tex_00B9A0[];
extern u64 object_cs_Tex_00B9E0[];
extern u64 object_cs_Tex_00BAE0[];
extern u8 object_cs_Blob_00BBE0[];
extern u64 object_cs_Tex_00BFE0[];
extern u64 object_cs_Tex_00C020[];
extern u64 object_cs_Tex_00C060[];
extern u64 object_cs_Tex_00C0A0[];
extern u64 object_cs_Tex_00C120[];
extern u64 object_cs_Tex_00C220[];
extern u8 object_cs_Blob_00C320[];
extern u64 object_cs_Tex_00C520[];
extern u64 object_cs_Tex_00CD20[];
extern u64 object_cs_Tex_00D520[];
extern u64 object_cs_Tex_00DD20[];
extern u64 object_cs_Tex_00E120[];
extern u64 object_cs_Tex_00E220[];
extern u64 object_cs_Tex_00E620[];
extern u64 object_cs_Tex_00EA20[];
extern u64 object_cs_Tex_00EE20[];
extern u64 object_cs_Tex_00F220[];
extern u64 object_cs_Tex_00F620[];
extern F3DPrimColor object_csTexColorChangingPrimColors_00F6B4[];
extern AnimatedMatColorParams object_cs_Matanimheader_00F6E4ColorParams_00F6C4;
extern AnimatedMaterial object_cs_Matanimheader_00F6E4[];
extern StandardLimb object_cs_Standardlimb_00F6EC;
extern StandardLimb object_cs_Standardlimb_00F6F8;
extern StandardLimb object_cs_Standardlimb_00F704;
extern StandardLimb object_cs_Standardlimb_00F710;
extern StandardLimb object_cs_Standardlimb_00F71C;
extern StandardLimb object_cs_Standardlimb_00F728;
extern StandardLimb object_cs_Standardlimb_00F734;
extern StandardLimb object_cs_Standardlimb_00F740;
extern StandardLimb object_cs_Standardlimb_00F74C;
extern StandardLimb object_cs_Standardlimb_00F758;
extern StandardLimb object_cs_Standardlimb_00F764;
extern StandardLimb object_cs_Standardlimb_00F770;
extern StandardLimb object_cs_Standardlimb_00F77C;
extern StandardLimb object_cs_Standardlimb_00F788;
extern StandardLimb object_cs_Standardlimb_00F794;
extern StandardLimb object_cs_Standardlimb_00F7A0;
extern StandardLimb object_cs_Standardlimb_00F7AC;
extern StandardLimb object_cs_Standardlimb_00F7B8;
extern StandardLimb object_cs_Standardlimb_00F7C4;
extern StandardLimb object_cs_Standardlimb_00F7D0;
extern void* object_cs_Skel_00F82CLimbs[];
extern FlexSkeletonHeader object_cs_Skel_00F82C;
extern s16 object_cs_Anim_00FAF4FrameData[];
extern JointIndex object_cs_Anim_00FAF4JointIndices[];
extern AnimationHeader object_cs_Anim_00FAF4;
extern s16 object_cs_Anim_01007CFrameData[];
extern JointIndex object_cs_Anim_01007CJointIndices[];
extern AnimationHeader object_cs_Anim_01007C;
extern s16 object_cs_Anim_010B68FrameData[];
extern JointIndex object_cs_Anim_010B68JointIndices[];
extern AnimationHeader object_cs_Anim_010B68;
#endif
