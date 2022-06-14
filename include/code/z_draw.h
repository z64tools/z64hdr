#ifndef __Z_DRAW__
#define __Z_DRAW__

#include "global.h"
#include "assets/objects/object_gi_key/object_gi_key.h"
#include "assets/objects/object_gi_jewel/object_gi_jewel.h"
#include "assets/objects/object_gi_melody/object_gi_melody.h"
#include "assets/objects/object_gi_heart/object_gi_heart.h"
#include "assets/objects/object_gi_compass/object_gi_compass.h"
#include "assets/objects/object_gi_bosskey/object_gi_bosskey.h"
#include "assets/objects/object_gi_medal/object_gi_medal.h"
#include "assets/objects/object_gi_nuts/object_gi_nuts.h"
#include "assets/objects/object_gi_hearts/object_gi_hearts.h"
#include "assets/objects/object_gi_arrowcase/object_gi_arrowcase.h"
#include "assets/objects/object_gi_bombpouch/object_gi_bombpouch.h"
#include "assets/objects/object_gi_bottle/object_gi_bottle.h"
#include "assets/objects/object_gi_stick/object_gi_stick.h"
#include "assets/objects/object_gi_map/object_gi_map.h"
#include "assets/objects/object_gi_shield_1/object_gi_shield_1.h"
#include "assets/objects/object_gi_magicpot/object_gi_magicpot.h"
#include "assets/objects/object_gi_bomb_1/object_gi_bomb_1.h"
#include "assets/objects/object_gi_purse/object_gi_purse.h"
#include "assets/objects/object_gi_gerudo/object_gi_gerudo.h"
#include "assets/objects/object_gi_arrow/object_gi_arrow.h"
#include "assets/objects/object_gi_bomb_2/object_gi_bomb_2.h"
#include "assets/objects/object_gi_egg/object_gi_egg.h"
#include "assets/objects/object_gi_scale/object_gi_scale.h"
#include "assets/objects/object_gi_shield_2/object_gi_shield_2.h"
#include "assets/objects/object_gi_hookshot/object_gi_hookshot.h"
#include "assets/objects/object_gi_ocarina/object_gi_ocarina.h"
#include "assets/objects/object_gi_milk/object_gi_milk.h"
#include "assets/objects/object_gi_pachinko/object_gi_pachinko.h"
#include "assets/objects/object_gi_boomerang/object_gi_boomerang.h"
#include "assets/objects/object_gi_bow/object_gi_bow.h"
#include "assets/objects/object_gi_glasses/object_gi_glasses.h"
#include "assets/objects/object_gi_liquid/object_gi_liquid.h"
#include "assets/objects/object_gi_shield_3/object_gi_shield_3.h"
#include "assets/objects/object_gi_letter/object_gi_letter.h"
#include "assets/objects/object_gi_clothes/object_gi_clothes.h"
#include "assets/objects/object_gi_bean/object_gi_bean.h"
#include "assets/objects/object_gi_fish/object_gi_fish.h"
#include "assets/objects/object_gi_saw/object_gi_saw.h"
#include "assets/objects/object_gi_hammer/object_gi_hammer.h"
#include "assets/objects/object_gi_grass/object_gi_grass.h"
#include "assets/objects/object_gi_longsword/object_gi_longsword.h"
#include "assets/objects/object_gi_niwatori/object_gi_niwatori.h"
#include "assets/objects/object_gi_bottle_letter/object_gi_bottle_letter.h"
#include "assets/objects/object_gi_ocarina_0/object_gi_ocarina_0.h"
#include "assets/objects/object_gi_boots_2/object_gi_boots_2.h"
#include "assets/objects/object_gi_seed/object_gi_seed.h"
#include "assets/objects/object_gi_gloves/object_gi_gloves.h"
#include "assets/objects/object_gi_coin/object_gi_coin.h"
#include "assets/objects/object_gi_ki_tan_mask/object_gi_ki_tan_mask.h"
#include "assets/objects/object_gi_redead_mask/object_gi_redead_mask.h"
#include "assets/objects/object_gi_skj_mask/object_gi_skj_mask.h"
#include "assets/objects/object_gi_rabit_mask/object_gi_rabit_mask.h"
#include "assets/objects/object_gi_truth_mask/object_gi_truth_mask.h"
#include "assets/objects/object_gi_eye_lotion/object_gi_eye_lotion.h"
#include "assets/objects/object_gi_powder/object_gi_powder.h"
#include "assets/objects/object_gi_mushroom/object_gi_mushroom.h"
#include "assets/objects/object_gi_ticketstone/object_gi_ticketstone.h"
#include "assets/objects/object_gi_brokensword/object_gi_brokensword.h"
#include "assets/objects/object_gi_prescription/object_gi_prescription.h"
#include "assets/objects/object_gi_bracelet/object_gi_bracelet.h"
#include "assets/objects/object_gi_soldout/object_gi_soldout.h"
#include "assets/objects/object_gi_frog/object_gi_frog.h"
#include "assets/objects/object_gi_golonmask/object_gi_golonmask.h"
#include "assets/objects/object_gi_zoramask/object_gi_zoramask.h"
#include "assets/objects/object_gi_gerudomask/object_gi_gerudomask.h"
#include "assets/objects/object_gi_hoverboots/object_gi_hoverboots.h"
#include "assets/objects/object_gi_m_arrow/object_gi_m_arrow.h"
#include "assets/objects/object_gi_sutaru/object_gi_sutaru.h"
#include "assets/objects/object_gi_goddess/object_gi_goddess.h"
#include "assets/objects/object_gi_fire/object_gi_fire.h"
#include "assets/objects/object_gi_insect/object_gi_insect.h"
#include "assets/objects/object_gi_butterfly/object_gi_butterfly.h"
#include "assets/objects/object_gi_ghost/object_gi_ghost.h"
#include "assets/objects/object_gi_soul/object_gi_soul.h"
#include "assets/objects/object_gi_dekupouch/object_gi_dekupouch.h"
#include "assets/objects/object_gi_rupy/object_gi_rupy.h"
#include "assets/objects/object_gi_sword_1/object_gi_sword_1.h"
#include "assets/objects/object_st/object_st.h"

void GetItem_DrawMaskOrBombchu(PlayState* play, s16 drawId);
void GetItem_DrawSoldOut(PlayState* play, s16 drawId);
void GetItem_DrawBlueFire(PlayState* play, s16 drawId);
void GetItem_DrawPoes(PlayState* play, s16 drawId);
void GetItem_DrawFairy(PlayState* play, s16 drawId);
void GetItem_DrawMirrorShield(PlayState* play, s16 drawId);
void GetItem_DrawSkullToken(PlayState* play, s16 drawId);
void GetItem_DrawEggOrMedallion(PlayState* play, s16 drawId);
void GetItem_DrawCompass(PlayState* play, s16 drawId);
void GetItem_DrawPotion(PlayState* play, s16 drawId);
void GetItem_DrawGoronSword(PlayState* play, s16 drawId);
void GetItem_DrawDekuNuts(PlayState* play, s16 drawId);
void GetItem_DrawRecoveryHeart(PlayState* play, s16 drawId);
void GetItem_DrawFish(PlayState* play, s16 drawId);
void GetItem_DrawOpa0(PlayState* play, s16 drawId);
void GetItem_DrawOpa0Xlu1(PlayState* play, s16 drawId);
void GetItem_DrawXlu01(PlayState* play, s16 drawId);
void GetItem_DrawOpa10Xlu2(PlayState* play, s16 drawId);
void GetItem_DrawMagicArrow(PlayState* play, s16 drawId);
void GetItem_DrawMagicSpell(PlayState* play, s16 drawId);
void GetItem_DrawOpa1023(PlayState* play, s16 drawId);
void GetItem_DrawOpa10Xlu32(PlayState* play, s16 drawId);
void GetItem_DrawSmallRupee(PlayState* play, s16 drawId);
void GetItem_DrawScale(PlayState* play, s16 drawId);
void GetItem_DrawBulletBag(PlayState* play, s16 drawId);
void GetItem_DrawWallet(PlayState* play, s16 drawId);

typedef struct {
    /* 0x00 */ void (*drawFunc)(PlayState*, s16);
    /* 0x04 */ Gfx* dlists[8];
} DrawItemTableEntry;

extern DrawItemTableEntry sDrawItemTable[233];

void GetItem_DrawMaskOrBombchu(PlayState* play, s16 drawId);
void GetItem_DrawSoldOut(PlayState* play, s16 drawId);
void GetItem_DrawBlueFire(PlayState* play, s16 drawId);
void GetItem_DrawPoes(PlayState* play, s16 drawId);
void GetItem_DrawFairy(PlayState* play, s16 drawId);
void GetItem_DrawMirrorShield(PlayState* play, s16 drawId);
void GetItem_DrawSkullToken(PlayState* play, s16 drawId);
void GetItem_DrawEggOrMedallion(PlayState* play, s16 drawId);
void GetItem_DrawCompass(PlayState* play, s16 drawId);
void GetItem_DrawPotion(PlayState* play, s16 drawId);
void GetItem_DrawGoronSword(PlayState* play, s16 drawId);
void GetItem_DrawDekuNuts(PlayState* play, s16 drawId);
void GetItem_DrawRecoveryHeart(PlayState* play, s16 drawId);
void GetItem_DrawFish(PlayState* play, s16 drawId);
void GetItem_DrawOpa0(PlayState* play, s16 drawId);
void GetItem_DrawOpa0Xlu1(PlayState* play, s16 drawId);
void GetItem_DrawXlu01(PlayState* play, s16 drawId);
void GetItem_DrawOpa10Xlu2(PlayState* play, s16 drawId);
void GetItem_DrawMagicArrow(PlayState* play, s16 drawId);
void GetItem_DrawMagicSpell(PlayState* play, s16 drawId);
void GetItem_DrawOpa1023(PlayState* play, s16 drawId);
void GetItem_DrawOpa10Xlu32(PlayState* play, s16 drawId);
void GetItem_DrawSmallRupee(PlayState* play, s16 drawId);
void GetItem_DrawScale(PlayState* play, s16 drawId);
void GetItem_DrawBulletBag(PlayState* play, s16 drawId);
void GetItem_DrawWallet(PlayState* play, s16 drawId);

#endif // __Z_DRAW__
