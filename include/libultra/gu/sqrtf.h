#ifndef SQRTF_H
#define SQRTF_H

#include "global.h"

#ifndef __GNUC__
#define __builtin_sqrtf sqrtf
#endif

f32 sqrtf(f32 f);

#endif
