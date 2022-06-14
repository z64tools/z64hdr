#ifndef __Z_EN_ITEM00__
#define __Z_EN_ITEM00__

#include "global.h"
#include "overlays/actors/ovl_En_Elf/z_en_elf.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "overlays/effects/ovl_Effect_Ss_Dead_Sound/z_eff_ss_dead_sound.h"

void EnItem00_Init(Actor* thisx, PlayState* play);
void EnItem00_Destroy(Actor* thisx, PlayState* play);
void EnItem00_Update(Actor* thisx, PlayState* play);
void EnItem00_Draw(Actor* thisx, PlayState* play);
void func_8001DFC8(EnItem00* this, PlayState* play);
void func_8001E1C8(EnItem00* this, PlayState* play);
void func_8001E304(EnItem00* this, PlayState* play);
void func_8001E5C8(EnItem00* this, PlayState* play);
void EnItem00_DrawRupee(EnItem00* this, PlayState* play);
void EnItem00_DrawCollectible(EnItem00* this, PlayState* play);
void EnItem00_DrawHeartContainer(EnItem00* this, PlayState* play);
void EnItem00_DrawHeartPiece(EnItem00* this, PlayState* play);
void EnItem00_SetupAction(EnItem00* this, EnItem00ActionFunc actionFunc);
void EnItem00_Init(Actor* thisx, PlayState* play);
void EnItem00_Destroy(Actor* thisx, PlayState* play);
void func_8001DFC8(EnItem00* this, PlayState* play);
void func_8001E1C8(EnItem00* this, PlayState* play);
void func_8001E304(EnItem00* this, PlayState* play);
void func_8001E5C8(EnItem00* this, PlayState* play);
void EnItem00_Update(Actor* thisx, PlayState* play);
void EnItem00_Draw(Actor* thisx, PlayState* play);
void EnItem00_DrawRupee(EnItem00* this, PlayState* play);
void EnItem00_DrawCollectible(EnItem00* this, PlayState* play);
void EnItem00_DrawHeartContainer(EnItem00* this, PlayState* play);
void EnItem00_DrawHeartPiece(EnItem00* this, PlayState* play);
s16 func_8001F404(s16 dropId);

#endif // __Z_EN_ITEM00__
