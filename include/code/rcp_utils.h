#define printSpStatus(x, name) \
    if (x & SP_STATUS_##name)  \
    osSyncPrintf(#name " ")
#define printDpStatus(x, name) \
    if (x & DPC_STATUS_##name) \
    osSyncPrintf(#name " ")
