#ifndef Z64_COMMON_DATA_H
#define Z64_COMMON_DATA_H

#include "global.h"

// The use of ALIGNED8 here is just a temporary solution until the SaveContext is re-structured
ALIGNED8 SaveContext gSaveContext;
extern u32 D_8015FA88;
extern u32 D_8015FA8C;

void SaveContext_Init(void);

#endif
