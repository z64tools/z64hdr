#ifndef __SQRTF__
#define __SQRTF__

#include "global.h"
#ifndef __GNUC__
#define __builtin_sqrtf sqrtf
#endif

f32 sqrtf(f32 f);

#endif // __SQRTF__
