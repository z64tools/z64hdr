#ifndef __Z_SRAM__
#define __Z_SRAM__

#include "global.h"
#include "vt.h"

typedef struct {
	/* 0x00 */ char newf[6]; // string "ZELDAZ"
	/* 0x06 */ s16  deaths;
	/* 0x08 */ char playerName[8];
	/* 0x10 */ s16  n64ddFlag;
	/* 0x12 */ s16  healthCapacity; // "max_life"
	/* 0x14 */ s16  health; // "now_life"
	/* 0x16 */ s8   magicLevel;
	/* 0x17 */ s8   magic;
	/* 0x18 */ s16  rupees;
	/* 0x1A */ u16  swordHealth;
	/* 0x1C */ u16  naviTimer;
	/* 0x1E */ u8   isMagicAcquired;
	/* 0x1F */ u8   unk_1F;
	/* 0x20 */ u8   isDoubleMagicAcquired;
	/* 0x21 */ u8   doubleDefense;
	/* 0x22 */ u8   bgsFlag;
	/* 0x23 */ u8   ocarinaGameRoundNum;
	/* 0x24 */ ItemEquips childEquips;
	/* 0x2E */ ItemEquips adultEquips;
	/* 0x38 */ u32  unk_38; // this may be incorrect, currently used for alignement
	/* 0x3C */ char unk_3C[0x0E];
	/* 0x4A */ s16  savedSceneNum;
} SavePlayerData;

typedef struct {
	/* 0x0000 */ SavePlayerData playerData; // "S_Private" substruct name
	/* 0x004C */ ItemEquips equips;
	/* 0x0058 */ Inventory  inventory;
	/* 0x00B8 */ SavedSceneFlags sceneFlags[124];
	/* 0x0E48 */ FaroresWindData fw;
	/* 0x0E70 */ char unk_E70[0x10];
	/* 0x0E80 */ s32  gsFlags[6];
	/* 0x0E98 */ char unk_E98[0x10];
	/* 0x0EA8 */ s32  horseRaceRecord;
	/* 0x0EAC */ char unk_EAC[0x0C];
	/* 0x0EB8 */ u16  eventChkInf[14]; // "event_chk_inf"
	/* 0x0ED4 */ u16  itemGetInf[4]; // "item_get_inf"
	/* 0x0EDC */ u16  infTable[30];  // "inf_table"
	/* 0x0F18 */ char unk_F18[0x04];
	/* 0x0F1C */ u32  worldMapAreaData; // "area_arrival"
	/* 0x0F20 */ char unk_F20[0x4];
	/* 0x0F24 */ u8   scarecrowLongSongSet;
	/* 0x0F25 */ u8   scarecrowLongSong[0x360];
	/* 0x1285 */ char unk_1285[0x24];
	/* 0x12A9 */ u8   scarecrowSpawnSongSet;
	/* 0x12AA */ u8   scarecrowSpawnSong[0x80];
	/* 0x132A */ char unk_132A[0x02];
	/* 0x132C */ HorseData horseData;
	/* 0x1336 */ u16  checksum; // "check_sum"
} SaveInfo;

typedef struct {
	/* 0x00 */ s32 entranceIndex;
	/* 0x04 */ s32 linkAge;
	/* 0x08 */ s32 cutsceneIndex;
	/* 0x0C */ u16 dayTime; // "zelda_time"
	/* 0x10 */ s32 nightFlag;
	/* 0x14 */ s32 totalDays;
	/* 0x18 */ s32 unk_18; // increments with totalDays, gets reset by goron for bgs and one other use
	/* 0x1C */ SaveInfo info; // "information"
} Save;

#define SAVE_PLAYER_DATA (*((SavePlayerData*)&gSaveContext.newf))
#define SAVE_INFO        (*((SaveInfo*)&gSaveContext.newf))
#define SLOT_SIZE        (sizeof(SaveContext) + 0x28)
#define CHECKSUM_SIZE    (sizeof(Save) / 2)
#define DEATHS           offsetof(SaveContext, deaths)
#define NAME             offsetof(SaveContext, playerName)
#define N64DD            offsetof(SaveContext, n64ddFlag)
#define HEALTH_CAP       offsetof(SaveContext, healthCapacity)
#define QUEST            offsetof(SaveContext, inventory.questItems)
#define DEFENSE          offsetof(SaveContext, inventory.defenseHearts)
#define HEALTH           offsetof(SaveContext, health)
#define SLOT_OFFSET(index) (SRAM_HEADER_SIZE + 0x10 + (index * SLOT_SIZE))

extern Inventory sNewSaveInventory;
extern SavePlayerData sDebugSavePlayerData;
extern ItemEquips sDebugSaveEquips;
extern Inventory sDebugSaveInventory;

#endif // __Z_SRAM__
