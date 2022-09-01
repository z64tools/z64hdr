#ifndef LISTALLOC_H
#define LISTALLOC_H

#include "global.h"

ListAlloc* ListAlloc_Init(ListAlloc* this);

void* ListAlloc_Alloc(ListAlloc* this, u32 size);

void ListAlloc_Free(ListAlloc* this, void* data);

void ListAlloc_FreeAll(ListAlloc* this);

#endif
