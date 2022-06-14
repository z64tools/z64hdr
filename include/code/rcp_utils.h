#ifndef __RCP_UTILS__
#define __RCP_UTILS__

#include "global.h"
#define printSpStatus(x, name) \
    if (x & SP_STATUS_##name)  \
    osSyncPrintf(#name " ")
#define printDpStatus(x, name) \
    if (x & DPC_STATUS_##name) \
    osSyncPrintf(#name " ")

#endif // __RCP_UTILS__
