#ifndef Z64_RCP_UTILS_H
#define Z64_RCP_UTILS_H

#include "global.h"

#define printSpStatus(x, name) \
    if (x & SP_STATUS_##name)  \
    osSyncPrintf(#name " ")

#define printDpStatus(x, name) \
    if (x & DPC_STATUS_##name) \
    osSyncPrintf(#name " ")

void RcpUtils_PrintRegisterStatus(void);

void RcpUtils_Reset(void);

#endif
