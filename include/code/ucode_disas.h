#ifndef __UCODE_DISAS__
#define __UCODE_DISAS__

#include "global.h"
#define F3DZEX_CONST(name) \
	{ name, #name }
#define F3DZEX_FLAG(set, unset) \
	{ set, #set, #unset }
#define F3DZEX_RENDERMODE(name, mask) \
	{ #name, name, mask }
#define F3DZEX_SETRENDERMACRO(name, shift, len, value0, value1, value2, value3) \
	{ \
		name, shift, len, { \
			{ #value0, value0 }, { #value1, value1 }, { #value2, value2 }, { #value3, value3 }, \
		} \
	}
#define DISAS_LOG \
	if (this->enableLog) \
	osSyncPrintf

u32 UCodeDisas_TranslateAddr(UCodeDisas* this, u32 addr);

extern F3dzexConst sUCodeDisasGeometryModes[11];
extern F3dzexFlag sUCodeDisasMtxFlags[6];

const char* UCodeDisas_ParseCombineColor(u32 value, u32 idx);
const char* UCodeDisas_ParseCombineAlpha(u32 value, u32 idx);
void UCodeDisas_SetCurUCodeImpl(UCodeDisas* this, void* ptr);
void UCodeDisas_ParseGeometryMode(UCodeDisas* this, u32 mode);
void UCodeDisas_ParseRenderMode(UCodeDisas* this, u32 mode);
void UCodeDisas_PrintVertices(UCodeDisas* this, Vtx* vtx, s32 count, s32 start);

#endif // __UCODE_DISAS__
