#ifndef __XLDTOB__
#define __XLDTOB__

#include "global.h"
#define BUFF_LEN 0x20

s16 _Ldunscale(s16*, _Pft*);
void _Genld(_Pft*, u8, u8*, s16, s16);

extern const f64 D_800122E0[9];

#define _D0 0
#define _DBIAS 0x3FF
#define _DLONG 1
#define _DOFF 4
#define _FBIAS 0x7E
#define _FOFF 7
#define _FRND 1
#define _LBIAS 0x3FFE
#define _LOFF 15
#define _C2 1
#define _CSIGN 1
#define _ILONG 0
#define _MBMAX 8
#define NAN 2
#define INF 1
#define FINITE -1
#define _DFRAC ((1 << _DOFF) - 1)
#define _DMASK (0x7FFF & ~_DFRAC)
#define _DMAX ((1 << (15 - _DOFF)) - 1)
#define _DNAN (0x8000 | _DMAX << _DOFF | 1 << (_DOFF - 1))
#define _DSIGN 0x8000
#if _D0 == 3
#define _D1 2 /* little-endian order */
#define _D2 1
#define _D3 0
#else
#define _D1 1 /* big-endian order */
#define _D2 2
#define _D3 3
#endif

s16 _Ldunscale(s16* pex, _Pft* px);
void _Genld(_Pft* px, u8 code, u8* p, s16 nsig, s16 xexp);

#endif // __XLDTOB__
