#ifndef Z64_MESSAGE_PAL_H
#define Z64_MESSAGE_PAL_H

#include "global.h"
#include "message_data_static.h"
#include "vt.h"
#include "assets/textures/parameter_static/parameter_static.h"

extern s16 sTextFade; // original name: key_off_flag ?

extern u8 D_8014B2F4;

extern s16 sOcarinaButtonIndexBufPos;

extern s16 sOcarinaButtonIndexBufLen;

extern u8 sTextboxSkipped;

extern u16 sNextTextId;

extern s16 sTextIsCredits;

extern UNK_TYPE D_8014B30C;

extern s16 sLastPlayedSong;

extern s16 sHasSunsSong;

extern s16 sMessageHasSetSfx;

extern u16 sOcarinaSongBitFlags; // ocarina bit flags

extern MessageTableEntry sNesMessageEntryTable[];

extern const char* sGerMessageEntryTable[];

extern const char* sFraMessageEntryTable[];

extern MessageTableEntry sStaffMessageEntryTable[];

extern MessageTableEntry* sNesMessageEntryTablePtr;
extern const char** sGerMessageEntryTablePtr;
extern const char** sFraMessageEntryTablePtr;
extern MessageTableEntry* sStaffMessageEntryTablePtr;

extern s16 sTextboxBackgroundForePrimColors[][3];

extern s16 sTextboxBackgroundBackPrimColors[][3];

extern s16 sTextboxBackgroundYOffsets[];

// original name: onpu_buff
extern u8 sOcarinaButtonIndexBuf[12];

extern s16 sOcarinaButtonAlphaValues[9];

// Maps the ocarina song order to the quest item order
extern s16 gOcarinaSongItemMap[];

extern s32 sCharTexSize;
extern s32 sCharTexScale;
extern s16 sOcarinaButtonAPrimR;
extern s16 sOcarinaButtonAPrimB;
extern s16 sOcarinaButtonAPrimG;
extern s16 sOcarinaButtonAEnvR;
extern s16 sOcarinaButtonAEnvB;
extern s16 sOcarinaButtonAEnvG;
extern s16 sOcarinaButtonCPrimR;
extern s16 sOcarinaButtonCPrimB;
extern s16 sOcarinaButtonCPrimG;
extern s16 sOcarinaButtonCEnvR;
extern s16 sOcarinaButtonCEnvB;
extern s16 sOcarinaButtonCEnvG;

void Message_ResetOcarinaNoteState(void);

void Message_UpdateOcarinaMemoryGame(PlayState* play);

u8 Message_ShouldAdvance(PlayState* play);

u8 Message_ShouldAdvanceSilent(PlayState* play);

/**
 * Closes any currently displayed textbox immediately, without waiting for
 * input from the player.
 */
void Message_CloseTextbox(PlayState* play);

void Message_HandleChoiceSelection(PlayState* play, u8 numChoices);

void Message_DrawTextChar(PlayState* play, void* textureImage, Gfx** p);

// resizes textboxes when opening them
void Message_GrowTextbox(MessageContext* msgCtx);

void Message_FindMessage(PlayState* play, u16 textId);

void Message_FindCreditsMessage(PlayState* play, u16 textId);

void Message_SetTextColor(MessageContext* msgCtx, u16 colorParameter);

void Message_DrawTextboxIcon(PlayState* play, Gfx** p, s16 x, s16 y);

#define MESSAGE_SPACE_WIDTH 6
extern f32 sFontWidths[144];

u16 Message_DrawItemIcon(PlayState* play, u16 itemId, Gfx** p, u16 i);

void Message_HandleOcarina(PlayState* play);

/**
 * Draws the text contents of a textbox, up to the current point that has
 * been scrolled to so far.
 */
void Message_DrawText(PlayState* play, Gfx** gfxP);

void Message_LoadItemIcon(PlayState* play, u16 itemId, s16 y);

void Message_Decode(PlayState* play);

void Message_OpenText(PlayState* play, u16 textId);

void Message_StartTextbox(PlayState* play, u16 textId, Actor* actor);

void Message_ContinueTextbox(PlayState* play, u16 textId);

void Message_StartOcarina(PlayState* play, u16 ocarinaActionId);

void func_8010BD58(PlayState* play, u16 ocarinaActionId);

void func_8010BD88(PlayState* play, u16 ocarinaActionId);

u8 Message_GetState(MessageContext* msgCtx);

void Message_DrawTextBox(PlayState* play, Gfx** p);

void Message_SetView(View* view);

/**
 * Draws the textbox in full and updates ocarina state
 */
void Message_DrawMain(PlayState* play, Gfx** p);

/**
 * If the s16 variable pointed to by `var` changes in value, a black bar and white box
 * are briefly drawn onto the screen. It can only watch one variable per build due to
 * the last value being saved in a static variable.
 */
void Message_DrawDebugVariableChanged(s16* var, GraphicsContext* gfxCtx);

void Message_DrawDebugText(PlayState* play, Gfx** p);

void Message_Draw(PlayState* play);

void Message_Update(PlayState* play);

void Message_SetTables(void);

// Appears to be file padding
extern UNK_TYPE D_80153D7C;

// This should be part of z_game_over.c, but cannot be moved there as the entire
// late_rodata section of this file is in the way
extern s16 gGameOverTimer;

#endif
