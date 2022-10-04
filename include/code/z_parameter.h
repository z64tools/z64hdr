#ifndef Z64_PARAMETER_H
#define Z64_PARAMETER_H

#include "global.h"
#include "vt.h"
#include "assets/textures/parameter_static/parameter_static.h"
#include "assets/textures/do_action_static/do_action_static.h"
#include "assets/textures/icon_item_static/icon_item_static.h"

// TODO extract this information from the texture definitions themselves
#define DO_ACTION_TEX_WIDTH 48
#define DO_ACTION_TEX_HEIGHT 16
#define DO_ACTION_TEX_SIZE ((DO_ACTION_TEX_WIDTH * DO_ACTION_TEX_HEIGHT) / 2) // (sizeof(gCheckDoActionENGTex))

typedef struct {
    /* 0x00 */ u8 sceneId;
    /* 0x01 */ u8 flags1;
    /* 0x02 */ u8 flags2;
    /* 0x03 */ u8 flags3;
} RestrictionFlags; // size = 0x4

extern RestrictionFlags sRestrictionFlags[];

extern s16 sHBAScoreTier;
extern u16 sHBAScoreDigits[];

extern u16 sCUpInvisible;
extern u16 sCUpTimer;

extern s16 gSpoilingItems[];
extern s16 gSpoilingItemReverts[];

extern s16 sMagicBorderR;
extern s16 sMagicBorderG;
extern s16 sMagicBorderB;

extern s16 sExtraItemBases[];

extern s16 D_80125A58;
extern s16 D_80125A5C;

extern Gfx sSetupDL_80125A60[];

// original name: "alpha_change"
void Interface_ChangeAlpha(u16 alphaType);

void func_80082644(PlayState* play, s16 alpha);

void func_8008277C(PlayState* play, s16 maxAlpha, s16 alpha);

void func_80082850(PlayState* play, s16 maxAlpha);

void func_80083108(PlayState* play);

void Interface_SetSceneRestrictions(PlayState* play);

Gfx* Gfx_TextureIA8(Gfx* displayListHead, void* texture, s16 textureWidth, s16 textureHeight, s16 rectLeft, s16 rectTop,
                    s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy);

Gfx* Gfx_TextureI8(Gfx* displayListHead, void* texture, s16 textureWidth, s16 textureHeight, s16 rectLeft, s16 rectTop,
                   s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy);

void Inventory_SwapAgeEquipment(void);

void Interface_InitHorsebackArchery(PlayState* play);

void func_800849EC(PlayState* play);

void Interface_LoadItemIcon1(PlayState* play, u16 button);

void Interface_LoadItemIcon2(PlayState* play, u16 button);

void func_80084BF4(PlayState* play, u16 flag);

u8 Item_Give(PlayState* play, u8 item);

u8 Item_CheckObtainability(u8 item);

void Inventory_DeleteItem(u16 item, u16 invSlot);

s32 Inventory_ReplaceItem(PlayState* play, u16 oldItem, u16 newItem);

s32 Inventory_HasEmptyBottle(void);

s32 Inventory_HasSpecificBottle(u8 bottleItem);

void Inventory_UpdateBottleItem(PlayState* play, u8 item, u8 button);

s32 Inventory_ConsumeFairy(PlayState* play);

void func_80086D5C(s32* buf, u16 size);

void Interface_LoadActionLabel(InterfaceContext* interfaceCtx, u16 action, s16 loadOffset);

void Interface_SetDoAction(PlayState* play, u16 action);

void Interface_SetNaviCall(PlayState* play, u16 naviCallState);

void Interface_LoadActionLabelB(PlayState* play, u16 action);

/**
 * @return false if player is out of health
 */
s32 Health_ChangeBy(PlayState* play, s16 amount);

void Health_GiveHearts(s16 hearts);

void Rupees_ChangeBy(s16 rupeeChange);

void Inventory_ChangeAmmo(s16 item, s16 ammoChange);

void Magic_Fill(PlayState* play);

void Magic_Reset(PlayState* play);

/**
 * Request to either increase or consume magic.
 * @param amount the positive-valued amount to either increase or decrease magic by
 * @param type how the magic is increased or consumed.
 * @return false if the request failed
 */
s32 Magic_RequestChange(PlayState* play, s16 amount, s16 type);

void Magic_Update(PlayState* play);

void Magic_DrawMeter(PlayState* play);

void func_80088AA0(s16 arg0);

void func_80088AF0(PlayState* play);

void func_80088B34(s16 arg0);

void Interface_DrawActionLabel(GraphicsContext* gfxCtx, void* texture);

void Interface_DrawItemButtons(PlayState* play);

void Interface_DrawItemIconTexture(PlayState* play, void* texture, s16 button);

void Interface_DrawAmmoCount(PlayState* play, s16 button, s16 alpha);

void Interface_DrawActionButton(PlayState* play);

void Interface_InitVertices(PlayState* play);

void func_8008A8B8(PlayState* play, s32 topY, s32 bottomY, s32 leftX, s32 rightX);

void func_8008A994(InterfaceContext* interfaceCtx);

void Interface_Draw(PlayState* play);

void Interface_Update(PlayState* play);

#endif
