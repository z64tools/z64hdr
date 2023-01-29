#ifndef Z64_COLLISION_BTLTBLS_H
#define Z64_COLLISION_BTLTBLS_H

#include "global.h"

extern DamageTable sDamageTablePresets[];

// Gets the pointer to one of the 23 preset damage tables. Returns NULL if index is out of range.
DamageTable* DamageTable_Get(s32 index);

// Sets all entries in the damage table to 0x00
void DamageTable_Clear(DamageTable* table);

#endif
