#ifndef __SPTASK__
#define __SPTASK__

#include "global.h"
#define _osVirtualToPhysical(ptr)              \
    if (ptr != NULL) {                         \
        ptr = (void*)osVirtualToPhysical(ptr); \
    }

#endif // __SPTASK__
