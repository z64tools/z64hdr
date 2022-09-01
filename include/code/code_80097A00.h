#ifndef Z64_CODE_80097A00_H
#define Z64_CODE_80097A00_H

#include "global.h"
#include "assets/textures/icon_item_static/icon_item_static.h"
#include "assets/textures/icon_item_24_static/icon_item_24_static.h"
#include "assets/textures/parameter_static/parameter_static.h"

// Bit Flag array in which gBitFlags[n] is literally (1 << n)
extern u32 gBitFlags[];

extern u16 gEquipMasks[EQUIP_TYPE_MAX];
extern u16 gEquipNegMasks[EQUIP_TYPE_MAX];

extern u32 gUpgradeMasks[UPG_MAX];
extern u32 gUpgradeNegMasks[UPG_MAX];

extern u8 gEquipShifts[EQUIP_TYPE_MAX];

extern u8 gUpgradeShifts[UPG_MAX];

extern u16 gUpgradeCapacities[UPG_MAX][4];

extern u32 gGsFlagsMasks[];
extern u32 gGsFlagsShifts[];

extern void* gItemIcons[];

// Used to map item IDs to inventory slots
extern u8 gItemSlots[];

void Inventory_ChangeEquipment(s16 equipment, u16 value);

u8 Inventory_DeleteEquipment(PlayState* play, s16 equipment);

void Inventory_ChangeUpgrade(s16 upgrade, s16 value);

#endif
