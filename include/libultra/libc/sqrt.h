#ifndef __SQRT__
#define __SQRT__

#include "global.h"
#ifndef __GNUC__
#define __builtin_sqrt sqrt
#endif

f64 sqrt(f64 f);

#endif // __SQRT__
