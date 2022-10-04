#ifndef Z64_RCP_H
#define Z64_RCP_H

#include "global.h"

extern Gfx sSetupDL[SETUPDL_MAX][6];

extern Gfx sFillSetupDL[];

// unused?
extern Gfx D_80127030[];

// unused?
extern Gfx D_80127060[];

extern Gfx gEmptyDL[];

Gfx* Gfx_SetFog(Gfx* gfx, s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);

Gfx* Gfx_SetFogWithSync(Gfx* gfx, s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);

Gfx* Gfx_SetFog2(Gfx* gfx, s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);

Gfx* Gfx_SetupDLImpl(Gfx* gfx, u32 i);

Gfx* Gfx_SetupDL(Gfx* gfx, u32 i);

void Gfx_SetupDLAtPtr(Gfx** gfxp, u32 i);

Gfx* Gfx_SetupDL_57(Gfx* gfx);

Gfx* Gfx_SetupDL_57b(Gfx* gfx);

Gfx* Gfx_SetupDL_52NoCD(Gfx* gfx);

void Gfx_SetupDL_58Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_57Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_50Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_51Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_52Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_53Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_54Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_55Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_26Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_25Xlu2(GraphicsContext* gfxCtx);

void func_80093C80(PlayState* play);

void Gfx_SetupDL_25Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_25Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_31Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_32Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_33Opa(GraphicsContext* gfxCtx);

Gfx* Gfx_SetupDL_64(Gfx* gfx);

Gfx* Gfx_SetupDL_34(Gfx* gfx);

void Gfx_SetupDL_34Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_35Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_44Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_36Opa(GraphicsContext* gfxCtx);

Gfx* Gfx_SetupDL_28(Gfx* gfx);

void Gfx_SetupDL_28Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_43Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_45Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_46Overlay(GraphicsContext* gfxCtx);

void Gfx_SetupDL_38Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_4Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_37Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_2Opa(GraphicsContext* gfxCtx);

Gfx* Gfx_SetupDL_39(Gfx* gfx);

void Gfx_SetupDL_39Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_39Overlay(GraphicsContext* gfxCtx);

void Gfx_SetupDL_39Ptr(Gfx** gfxp);

void Gfx_SetupDL_40Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_41Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_47Xlu(GraphicsContext* gfxCtx);

Gfx* Gfx_SetupDL_66(Gfx* gfx);

Gfx* Gfx_SetupDL_67(Gfx* gfx);

Gfx* Gfx_SetupDL_68NoCD(Gfx* gfx);

Gfx* Gfx_SetupDL_69NoCD(Gfx* gfx);

Gfx* func_800947AC(Gfx* gfx);

Gfx* Gfx_SetupDL_70(Gfx* gfx);

Gfx* Gfx_SetupDL_20NoCD(Gfx* gfx);

void Gfx_SetupDL_42Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_42Overlay(GraphicsContext* gfxCtx);

void Gfx_SetupDL_48Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_49Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_27Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_60NoCDXlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_61Xlu(GraphicsContext* gfxCtx);

void Gfx_SetupDL_56Opa(GraphicsContext* gfxCtx);

void Gfx_SetupDL_56Ptr(Gfx** gfxp);

void Gfx_SetupDL_59Opa(GraphicsContext* gfxCtx);

Gfx* Gfx_BranchTexScroll(Gfx** gfxp, u32 x, u32 y, s32 width, s32 height);

Gfx* func_80094E54(Gfx** gfxp, u32 x, u32 y);

Gfx* func_80094E78(GraphicsContext* gfxCtx, u32 x, u32 y);

Gfx* Gfx_TexScroll(GraphicsContext* gfxCtx, u32 x, u32 y, s32 width, s32 height);

Gfx* Gfx_TwoTexScroll(GraphicsContext* gfxCtx, s32 tile1, u32 x1, u32 y1, s32 width1, s32 height1, s32 tile2, u32 x2,
                      u32 y2, s32 width2, s32 height2);

Gfx* Gfx_TwoTexScrollEnvColor(GraphicsContext* gfxCtx, s32 tile1, u32 x1, u32 y1, s32 width1, s32 height1, s32 tile2,
                              u32 x2, u32 y2, s32 width2, s32 height2, s32 r, s32 g, s32 b, s32 a);

Gfx* Gfx_EnvColor(GraphicsContext* gfxCtx, s32 r, s32 g, s32 b, s32 a);

/**
 * Sets up the frame for drawing.
 * Initializes the scissor region to full screen.
 * Set up the framebuffer and z-buffer.
 * The whole screen is filled with the color supplied as arguments.
 * Letterbox is also applied here, and will share the color of the screen base.
 */
void Gfx_SetupFrame(GraphicsContext* gfxCtx, u8 r, u8 g, u8 b);

void func_80095974(GraphicsContext* gfxCtx);

#endif
