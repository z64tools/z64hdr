#ifndef __DB_CAMERA__
#define __DB_CAMERA__

#include "ultra64.h"
#include "global.h"

extern char* D_8012CEE0[];
extern char* D_8012CEE4;
extern char* D_8012CEE8;
extern char* D_8012CEEC;
extern char* D_8012CEF0;
extern char* D_8012CEF4;
extern char* D_8012CEF8[];
extern char* D_8012CF04;
extern char* D_8012CF08;
extern char* D_8012CF0C;
extern char* D_8012CF10;
extern char* D_8012CF14;
extern char* D_8012CF18[];
extern char* D_8012CF24[];
extern char* D_8012CF30;
extern char* D_8012CF34;
extern char* D_8012CF38;
extern char* D_8012CF3C;
extern char* D_8012CF40;
extern char* D_8012CF44;
extern char* D_8012CF48;
extern char* D_8012CF4C;
extern char* D_8012CF50[];
extern char* D_8012CF60[];
extern char* D_8012CF64;
extern char* D_8012CF68;
extern char* D_8012CF6C;
extern char* D_8012CF70;
extern char* D_8012CF74;
extern char* D_8012CF78;
extern char* D_8012CF7C;
extern char* D_8012CF80;
extern char* D_8012CF84;
extern char* D_8012CF88[];
extern char* D_8012CF94;
extern char* D_8012CF98;
extern char* D_8012CF9C[];
extern char* D_8012CFA4;
extern char* D_8012CFA8;
extern char* D_8012CFAC;
extern char* D_8012CFB0;
extern char D_8012CFB4[];
extern char D_8012CFC4[];
extern char D_8012CFD0[];
extern char D_8012CFE4[];
extern char D_8012CFF8[];
extern char D_8012D00C[];
extern char D_8012D020[];
extern char D_8012D034[];
extern char D_8012D048[];
extern char D_8012D05C[];
extern char D_8012D070[];
extern char D_8012D084[];
extern char D_8012D098[];
extern char D_8012D0AC[];
extern char D_8012D0C0[];
extern char D_8012D0D4[];
extern char D_8012D0E4[];
extern char D_8012D0F8[];

#define ACTION_E 0
#define ACTION_SAVE 1
#define ACTION_LOAD 2
#define ACTION_CLEAR 3
#define MENU_INFO 0
#define MENU_CALLBACK 1
#define MENU_SUCCESS 2
#define MENU_ERROR 9
#define DEMO_CTRL_MENU(actionIdx, menuIdx) (actionIdx * 100 + menuIdx)

s32 DbCamera_SaveCallback(char* c);
s32 DbCamera_LoadCallback(char* c);
s32 DbCamera_ClearCallback(char* c);
s32 DbCamera_LoadCallback(char* c);
s32 DbCamera_SaveCallback(char* c);
s32 DbCamera_ClearCallback(char* c);

extern char D_8012D114[];
extern char D_8012D128[];
extern char D_8012D13C[];

void func_800BB03C(Camera* cam);
void func_800BB060(void);
s32 func_800BB06C(void);

#endif // __DB_CAMERA__
