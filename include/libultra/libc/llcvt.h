#ifndef LLCVT_H
#define LLCVT_H

#include "global.h"

s64 __d_to_ll(f64 d);

s64 __f_to_ll(f32 f);

u64 __d_to_ull(f64 d);

u64 __f_to_ull(f32 f);

f64 __ll_to_d(s64 l);

f32 __ll_to_f(s64 l);

f64 __ull_to_d(u64 l);

f32 __ull_to_f(u64 l);

#endif
