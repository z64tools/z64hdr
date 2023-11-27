#ifndef OBJECT_SSH_H
#define OBJECT_SSH_H 1

typedef enum ObjectSshLimb {
    /* 0x00 */ OBJECT_SSH_LIMB_NONE,
    /* 0x01 */ OBJECT_SSH_LIMB_01,
    /* 0x02 */ OBJECT_SSH_LIMB_02,
    /* 0x03 */ OBJECT_SSH_LIMB_03,
    /* 0x04 */ OBJECT_SSH_LIMB_04,
    /* 0x05 */ OBJECT_SSH_LIMB_05,
    /* 0x06 */ OBJECT_SSH_LIMB_06,
    /* 0x07 */ OBJECT_SSH_LIMB_07,
    /* 0x08 */ OBJECT_SSH_LIMB_08,
    /* 0x09 */ OBJECT_SSH_LIMB_09,
    /* 0x0A */ OBJECT_SSH_LIMB_0A,
    /* 0x0B */ OBJECT_SSH_LIMB_0B,
    /* 0x0C */ OBJECT_SSH_LIMB_0C,
    /* 0x0D */ OBJECT_SSH_LIMB_0D,
    /* 0x0E */ OBJECT_SSH_LIMB_0E,
    /* 0x0F */ OBJECT_SSH_LIMB_0F,
    /* 0x10 */ OBJECT_SSH_LIMB_10,
    /* 0x11 */ OBJECT_SSH_LIMB_11,
    /* 0x12 */ OBJECT_SSH_LIMB_12,
    /* 0x13 */ OBJECT_SSH_LIMB_13,
    /* 0x14 */ OBJECT_SSH_LIMB_14,
    /* 0x15 */ OBJECT_SSH_LIMB_15,
    /* 0x16 */ OBJECT_SSH_LIMB_16,
    /* 0x17 */ OBJECT_SSH_LIMB_17,
    /* 0x18 */ OBJECT_SSH_LIMB_18,
    /* 0x19 */ OBJECT_SSH_LIMB_19,
    /* 0x1A */ OBJECT_SSH_LIMB_1A,
    /* 0x1B */ OBJECT_SSH_LIMB_1B,
    /* 0x1C */ OBJECT_SSH_LIMB_1C,
    /* 0x1D */ OBJECT_SSH_LIMB_1D,
    /* 0x1E */ OBJECT_SSH_LIMB_MAX
} ObjectSshLimb;

extern Vtx object_sshVtx_000000[];
extern Gfx object_ssh_DL_0000D0[];
extern Gfx object_ssh_DL_0000D8[];
extern u64 object_ssh_Tex_000190[];
extern s16 object_ssh_Anim_001494FrameData[];
extern JointIndex object_ssh_Anim_001494JointIndices[];
extern AnimationHeader object_ssh_Anim_001494;
extern u64 object_ssh_TLUT_0014B0[];
extern u64 object_ssh_Tex_0016B0[];
extern u64 object_ssh_Tex_0016F0[];
extern u64 object_ssh_Tex_001770[];
extern u64 object_ssh_Tex_0017B0[];
extern u64 object_ssh_Tex_0018B0[];
extern u64 object_ssh_Tex_001930[];
extern u64 object_ssh_Tex_001970[];
extern u64 object_ssh_Tex_001D70[];
extern u64 object_ssh_Tex_001DF0[];
extern u64 object_ssh_Tex_0021F0[];
extern Vtx object_sshVtx_0025F0[];
extern Gfx object_ssh_DL_004E60[];
extern Gfx object_ssh_DL_005210[];
extern Gfx object_ssh_DL_0056A0[];
extern Gfx object_ssh_DL_005850[];
extern Gfx object_ssh_DL_005A08[];
extern Gfx object_ssh_DL_005AD0[];
extern Gfx object_ssh_DL_005B98[];
extern Gfx object_ssh_DL_005C60[];
extern Gfx object_ssh_DL_005D28[];
extern Gfx object_ssh_DL_005DF0[];
extern Gfx object_ssh_DL_005EB8[];
extern Gfx object_ssh_DL_005F78[];
extern Gfx object_ssh_DL_0061D8[];
extern StandardLimb object_ssh_Standardlimb_0062A0;
extern StandardLimb object_ssh_Standardlimb_0062AC;
extern StandardLimb object_ssh_Standardlimb_0062B8;
extern StandardLimb object_ssh_Standardlimb_0062C4;
extern StandardLimb object_ssh_Standardlimb_0062D0;
extern StandardLimb object_ssh_Standardlimb_0062DC;
extern StandardLimb object_ssh_Standardlimb_0062E8;
extern StandardLimb object_ssh_Standardlimb_0062F4;
extern StandardLimb object_ssh_Standardlimb_006300;
extern StandardLimb object_ssh_Standardlimb_00630C;
extern StandardLimb object_ssh_Standardlimb_006318;
extern StandardLimb object_ssh_Standardlimb_006324;
extern StandardLimb object_ssh_Standardlimb_006330;
extern StandardLimb object_ssh_Standardlimb_00633C;
extern StandardLimb object_ssh_Standardlimb_006348;
extern StandardLimb object_ssh_Standardlimb_006354;
extern StandardLimb object_ssh_Standardlimb_006360;
extern StandardLimb object_ssh_Standardlimb_00636C;
extern StandardLimb object_ssh_Standardlimb_006378;
extern StandardLimb object_ssh_Standardlimb_006384;
extern StandardLimb object_ssh_Standardlimb_006390;
extern StandardLimb object_ssh_Standardlimb_00639C;
extern StandardLimb object_ssh_Standardlimb_0063A8;
extern StandardLimb object_ssh_Standardlimb_0063B4;
extern StandardLimb object_ssh_Standardlimb_0063C0;
extern StandardLimb object_ssh_Standardlimb_0063CC;
extern StandardLimb object_ssh_Standardlimb_0063D8;
extern StandardLimb object_ssh_Standardlimb_0063E4;
extern StandardLimb object_ssh_Standardlimb_0063F0;
extern void* object_ssh_Skel_006470Limbs[];
extern SkeletonHeader object_ssh_Skel_006470;
extern s16 object_ssh_Anim_006788FrameData[];
extern JointIndex object_ssh_Anim_006788JointIndices[];
extern AnimationHeader object_ssh_Anim_006788;
extern s16 object_ssh_Anim_006D78FrameData[];
extern JointIndex object_ssh_Anim_006D78JointIndices[];
extern AnimationHeader object_ssh_Anim_006D78;
#endif
