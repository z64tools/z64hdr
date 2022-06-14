#ifndef __Z_VR_BOX__
#define __Z_VR_BOX__

#include "global.h"
#include "vt.h"
#include "z64environment.h"

extern u32 D_8012AC90[4];
extern u16 D_8012ACA0[2][0];
extern s16 D_8012AD20[5];
extern s16 D_8012AD2C[9];
extern s16 D_8012AD40[0];
extern u32 D_8012ADC0[6];
extern u16 D_8012ADD8[0];
extern s16 D_8012AE18[5];
extern s16 D_8012AE24[5];
extern s16 D_8012AE30[5];
extern s16 D_8012AE3C[0];

typedef struct {
    /* 0x000 */ s32 unk_0;
    /* 0x004 */ s32 unk_4;
    /* 0x008 */ s32 unk_8;
    /* 0x00C */ s32 unk_C;
    /* 0x010 */ s32 unk_10;
} Struct_8012AF0C;

s32 func_800ADBB0(SkyboxContext* skyboxCtx, Vtx* roomVtx, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9);
s32 func_800AE2C0(SkyboxContext* skyboxCtx, Vtx* roomVtx, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
void func_800AEFC8(SkyboxContext* skyboxCtx, s16 skyboxId);
void func_800AF178(SkyboxContext* skyboxCtx, s32 arg1);
void Skybox_Setup(PlayState* play, SkyboxContext* skyboxCtx, s16 skyboxId);

#endif // __Z_VR_BOX__
