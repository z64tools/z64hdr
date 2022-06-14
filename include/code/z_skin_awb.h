#ifndef __Z_SKIN_AWB__
#define __Z_SKIN_AWB__

#include "global.h"
#include "overlays/actors/ovl_En_fHG/z_en_fhg.h"

void Skin_InitAnimatedLimb(PlayState* play, Skin* skin, s32 limbIndex);
s32 func_800A698C(Skin* skin, SkinLimb** skeleton, MtxF* limbMatrices, u8 parentIndex, u8 limbIndex);

#endif // __Z_SKIN_AWB__
