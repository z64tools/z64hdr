#define DISP_CHAR_WIDTH 8
#define DISP_CHAR_HEIGHT 8
#define TEX_CHAR_WIDTH 8
#define TEX_CHAR_HEIGHT 8
#define TEX_CHAR_COLS 2
#define TEX_CHAR_ROWS 16
#define GET_CHAR_TLUT_INDEX(c) (c & 3)
#define GET_TEX_CHAR_S(c) ((u16)(c & 4) * ((1 << 5) * TEX_CHAR_WIDTH / 4))
#define GET_TEX_CHAR_T(c) ((u16)(c >> 3) * ((1 << 5) * TEX_CHAR_HEIGHT))

extern u32 sFontColorRed;
extern u32 sFontColorGreen;
extern u32 sFontColorBlue;
extern u32 sFontColorAlpha;
extern s32 sScreenPosX;
extern s32 sScreenPosY;
extern s32 sCurTLUTIndex;

void Moji_SetColor(u32 red, u32 green, u32 blue, u32 alpha);
void Moji_SetPosition(s32 gridX, s32 gridY);
void Moji_DrawChar(GraphicsContext* gfxCtx, char c);
void Moji_DrawString(GraphicsContext* gfxCtx, const char* str);