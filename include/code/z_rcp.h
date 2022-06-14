#ifndef __Z_RCP__
#define __Z_RCP__

#include "global.h"

extern Gfx sSetupDL[71][6];
extern Gfx sFillSetupDL[22];
extern Gfx D_80127030[15];
extern Gfx D_80127060[17];

Gfx* Gfx_SetupDLImpl(Gfx* gfx, u32 i);
void Gfx_SetupDLAtPtr(Gfx** gfxp, u32 i);
Gfx* Gfx_SetupDL_57b(Gfx* gfx);
void Gfx_SetupDL_58Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_50Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_52Xlu(GraphicsContext* gfxCtx);
void Gfx_SetupDL_53Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_55Xlu(GraphicsContext* gfxCtx);
void Gfx_SetupDL_31Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_32Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_33Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_34Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_35Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_43Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_45Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_46Overlay(GraphicsContext* gfxCtx);
void Gfx_SetupDL_2Opa(GraphicsContext* gfxCtx);
Gfx* Gfx_SetupDL_67(Gfx* gfx);
Gfx* Gfx_SetupDL_68NoCD(Gfx* gfx);
Gfx* Gfx_SetupDL_69NoCD(Gfx* gfx);
Gfx* Gfx_SetupDL_70(Gfx* gfx);
void Gfx_SetupDL_48Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_49Xlu(GraphicsContext* gfxCtx);
void Gfx_SetupDL_56Opa(GraphicsContext* gfxCtx);
void Gfx_SetupDL_59Opa(GraphicsContext* gfxCtx);
Gfx* func_80094E54(Gfx** gfxp, u32 x, u32 y);

#endif // __Z_RCP__
