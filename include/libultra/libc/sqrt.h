#ifndef Z64_SQRT_H
#define Z64_SQRT_H

#include "global.h"

#ifndef __GNUC__
#define __builtin_sqrt sqrt
#endif

f64 sqrt(f64 f);

#endif
