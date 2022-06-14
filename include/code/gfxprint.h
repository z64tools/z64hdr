extern u16 sGfxPrintFontTLUT[64];
extern u16 sGfxPrintRainbowTLUT[16];
extern u8 sGfxPrintRainbowData[8];
extern u8 sGfxPrintFontData[2048];

void GfxPrint_Setup(GfxPrint* this);
void GfxPrint_PrintCharImpl(GfxPrint* this, u8 c);
void GfxPrint_PrintChar(GfxPrint* this, u8 c);
void GfxPrint_PrintStringWithSize(GfxPrint* this, const void* buffer, u32 charSize, u32 charCount);
void GfxPrint_PrintString(GfxPrint* this, const char* str);
void* GfxPrint_Callback(void* arg, const char* str, u32 size);
s32 GfxPrint_VPrintf(GfxPrint* this, const char* fmt, va_list args);