#ifndef CONTPFS_H
#define CONTPFS_H

#include "ultra64.h"
#include "global.h"

extern s32 __osPfsInodeCacheChannel;
extern u8 __osPfsInodeCacheBank;

u16 __osSumcalc(u8* ptr, s32 length);

s32 __osIdCheckSum(u16* ptr, u16* checkSum, u16* idSum);

s32 __osRepairPackId(OSPfs* pfs, __OSPackId* badid, __OSPackId* newid);

s32 __osCheckPackId(OSPfs* pfs, __OSPackId* check);

s32 __osGetId(OSPfs* pfs);

s32 __osCheckId(OSPfs* pfs);

s32 __osPfsRWInode(OSPfs* pfs, __OSInode* inode, u8 flag, u8 bank);

#endif
