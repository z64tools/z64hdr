#ifndef UCODE_DISAS_H
#define UCODE_DISAS_H

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

extern F3dzexConst sUCodeDisasGeometryModes[];

extern F3dzexFlag sUCodeDisasMtxFlags[];

extern const char* UCodeDisas_ParseCombineColor(u32 value, u32 idx);

extern const char* UCodeDisas_ParseCombineAlpha(u32 value, u32 idx);

void UCodeDisas_Init(UCodeDisas* this);

void UCodeDisas_Destroy(UCodeDisas* this);

void UCodeDisas_SetCurUCodeImpl(UCodeDisas* this, void* ptr);

void UCodeDisas_ParseGeometryMode(UCodeDisas* this, u32 mode);

void UCodeDisas_ParseRenderMode(UCodeDisas* this, u32 mode);

void UCodeDisas_PrintVertices(UCodeDisas* this, Vtx* vtx, s32 count, s32 start);

// Todo: clean this up

typedef struct {
	s8  cmd;
	u8  v0;
	u8  v1;
	u8  wd;
	u32 pad;
} Gline3DFix;

typedef struct {
	int cmd  : 8;
	u32 pad  : 4;
	u32 numv : 8;
	s32 pad2 : 4;
	u8  vbidx;
} Gvtx;

typedef struct {
	u8 pad : 8;
	u8 v0  : 8;
	u8 v1  : 8;
	u8 v2  : 8;
} Gtrimod;

typedef struct {
	int     cmd : 8;
	int     pad : 24;
	Gtrimod tri;
} Gtri1;

typedef struct {
	Gtrimod tri1;
	Gtrimod tri2;
} Gtri2;

typedef struct {
	u8 pad  : 8;
	u8 v0   : 8;
	u8 v1   : 8;
	u8 v2   : 8;
	u8 pad1 : 8;
	u8 pad2 : 8;
	u8 pad3 : 8;
	u8 v3   : 8;
} Gquadmod;

typedef struct {
	u16 pad;
	u16 vstart;
	u16 pad2;
	u16 vend;
} Gcull;

typedef struct {
	u16 pad;
	u16 vstart;
	u16 pad2;
	u16 vend;
} Gbranchz;

typedef struct {
	int cmd : 8;
	u8  pad;
	u8  prim_min_level;
	u8  prim_level;
	u8  r;
	u8  g;
	u8  b;
	u8  a;
} GsetcolorMod;

typedef struct {
	u8   cmd;
	char pad[3];
	u16  z;
	u16  d;
} Gsetprimdepth;

typedef struct {
	u8  cmd;
	u8  type;
	u16 len;
	union {
		u32 u32;
		f32 f32;
	} value;
} Gnoop;

typedef struct {
	u8  cmd;
	u8  pad[2];
	u8  params;
	u32 addr;
} Gmatrix;

typedef struct {
	u8  cmd;
	u32 a : 4;
	u32 c : 5;
	u32 z : 3;
	u32 x : 3;
	u32 e : 4;
	u32 g : 5;
	u32 b : 4;
	u32 f : 4;
	u32 v : 3;
	u32 t : 3;
	u32 d : 3;
	u32 y : 3;
	u32 w : 3;
	u32 h : 3;
	u32 u : 3;
	u32 s : 3;
} GsetcombineMod;

typedef struct {
	u32 cmd  : 8;
	u32 pad0 : 8;
	u32 sft  : 8;
	u32 len  : 8;
	u32 data : 32;
} GsetothermodeMod;

typedef struct {
	s32 cmd    : 8;
	u32 offset : 16;
	u32 index  : 8;
	u32 data;
} Gmovewd;

typedef struct {
	s32 cmd    : 8;
	u32 size   : 8;
	u32 offset : 8;
	u32 index  : 8;
	u32 data;
} Gmovemem;

typedef struct {
	u8 cmd      : 8;
	u8 lodscale : 8;
	u8 pad      : 2;
	u8 level    : 3;
	u8 tile     : 3;
	
	unsigned char  on;
	unsigned short s;
	unsigned short t;
} Gtexturemod;

typedef struct {
	int cmd            : 8;
	int pad1           : 24;
	u32 param          : 26;
	unsigned char pad3 : 6;
} Gpopmtxmod;

typedef union {
	Gwords           words;
	Gnoop            noop;
	Gmatrix          matrix;
	Gdma             dma;
	Gtri1            tri1;
	Gtri2            tri2;
	Gquadmod         quad;
	Gcull            cull;
	Gline3D          line;
	Gline3DFix       linefix;
	Gmovewd          movewd;
	Gmovemem         movemem;
	Gpopmtx          popmtx;
	Gpopmtxmod       popmtxmod;
	Gsegment         segment;
	GsetothermodeH   setothermodeH;
	GsetothermodeL   setothermodeL;
	GsetothermodeMod setothermode;
	Gtexture         texture;
	Gtexturemod      texmod;
	Gperspnorm       perspnorm;
	Gsetimg          setimg;
	GsetcombineMod   setcombine;
	GsetcolorMod     setcolor; // mod
	Gfillrect        fillrect; /* use for setscissor also */
	Gsettile         settile;
	Gloadtile        loadtile; /* use for loadblock also, th is dxt */
	Gsettilesize     settilesize;
	Gloadtlut        loadtlut;
	Gsetprimdepth    setprimdepth;
	Gvtx             vtx;
	long long int    force_structure_alignment;
} GfxMod;

void UCodeDisas_Disassemble(UCodeDisas* this, GfxMod* ptr);

void UCodeDisas_RegisterUCode(UCodeDisas* this, s32 count, UCodeInfo* ucodeArray);

void UCodeDisas_SetCurUCode(UCodeDisas* this, void* ptr);

#endif
