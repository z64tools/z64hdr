#ifndef __Z_VIEW__
#define __Z_VIEW__

#include "global.h"
#include "vt.h"

extern vu32 sLogOnNextViewInit;

void View_ViewportToVp(Vp* dest, Viewport* src);
void View_ApplyShrinkWindow(View* view);

#endif // __Z_VIEW__
