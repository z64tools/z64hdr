#ifdef __MESSAGE_H__
extern MessageTableEntry sNesMessageEntryTable[];
extern MessageTableEntry sStaffMessageEntryTable[];
extern MessageTableEntry* sNesMessageEntryTablePtr;
extern MessageTableEntry* sStaffMessageEntryTablePtr;
#endif

extern s16 sTextFade;
extern u8 D_8014B2F4;
extern s16 sOcarinaButtonIndexBufPos;
extern s16 sOcarinaButtonIndexBufLen;
extern u8 sTextboxSkipped;
extern u16 sNextTextId;
extern s16 sTextIsCredits;
extern s16 sLastPlayedSong;
extern s16 sHasSunsSong;
extern s16 sMessageHasSetSfx;
extern u16 sOcarinaSongBitFlags;

extern const char* sGerMessageEntryTable[];
extern const char* sFraMessageEntryTable[];

extern const char** sGerMessageEntryTablePtr;
extern const char** sFraMessageEntryTablePtr;
extern s16 sTextboxBackgroundForePrimColors[8][3];
extern s16 sTextboxBackgroundBackPrimColors[4][3];
extern s16 sTextboxBackgroundYOffsets[2];
extern u8 sOcarinaButtonIndexBuf[12];
extern s16 sOcarinaButtonAlphaValues[9];
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
u8 Message_ShouldAdvanceSilent(PlayState* play);
void Message_HandleChoiceSelection(PlayState* play, u8 numChoices);
void Message_DrawTextChar(PlayState* play, void* textureImage, Gfx** p);
void Message_GrowTextbox(MessageContext* msgCtx);
void Message_FindMessage(PlayState* play, u16 textId);
void Message_FindCreditsMessage(PlayState* play, u16 textId);
void Message_SetTextColor(MessageContext* msgCtx, u16 colorParameter);
void Message_DrawTextboxIcon(PlayState* play, Gfx** p, s16 x, s16 y);

#define MESSAGE_SPACE_WIDTH 6

extern f32 sFontWidths[144];

u16 Message_DrawItemIcon(PlayState* play, u16 itemId, Gfx** p, u16 i);
void Message_HandleOcarina(PlayState* play);
void Message_DrawText(PlayState* play, Gfx** gfxP);
void Message_LoadItemIcon(PlayState* play, u16 itemId, s16 y);
void Message_Decode(PlayState* play);
void Message_OpenText(PlayState* play, u16 textId);
void Message_StartOcarina(PlayState* play, u16 ocarinaActionId);
void Message_DrawTextBox(PlayState* play, Gfx** p);
void Message_SetView(View* view);
void Message_DrawMain(PlayState* play, Gfx** p);
void Message_DrawDebugVariableChanged(s16* var, GraphicsContext* gfxCtx);
void Message_DrawDebugText(PlayState* play, Gfx** p);

extern s16 gGameOverTimer;