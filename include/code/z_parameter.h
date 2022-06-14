#define DO_ACTION_TEX_WIDTH 48
#define DO_ACTION_TEX_HEIGHT 16
#define DO_ACTION_TEX_SIZE ((DO_ACTION_TEX_WIDTH * DO_ACTION_TEX_HEIGHT) / 2) // (sizeof(gCheckDoActionENGTex))

typedef struct {
    /* 0x00 */ u8 scene;
    /* 0x01 */ u8 flags1;
    /* 0x02 */ u8 flags2;
    /* 0x03 */ u8 flags3;
} RestrictionFlags;

void func_80082644(PlayState* play, s16 alpha);
void func_8008277C(PlayState* play, s16 maxAlpha, s16 alpha);
void func_80082850(PlayState* play, s16 maxAlpha);
void func_80083108(PlayState* play);
Gfx* Gfx_TextureIA8(Gfx* displayListHead, void* texture, s16 textureWidth, s16 textureHeight, s16 rectLeft, s16 rectTop, s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy);
Gfx* Gfx_TextureI8(Gfx* displayListHead, void* texture, s16 textureWidth, s16 textureHeight, s16 rectLeft, s16 rectTop, s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy);
void func_80086D5C(s32* buf, u16 size);
void Health_GiveHearts(s16 hearts);
void Magic_Update(PlayState* play);
void Magic_DrawMeter(PlayState* play);
void Interface_DrawActionLabel(GraphicsContext* gfxCtx, void* texture);
void Interface_DrawItemButtons(PlayState* play);
void Interface_DrawItemIconTexture(PlayState* play, void* texture, s16 button);
void Interface_DrawAmmoCount(PlayState* play, s16 button, s16 alpha);
void Interface_DrawActionButton(PlayState* play);
void Interface_InitVertices(PlayState* play);
void func_8008A8B8(PlayState* play, s32 topY, s32 bottomY, s32 leftX, s32 rightX);
void func_8008A994(InterfaceContext* interfaceCtx);