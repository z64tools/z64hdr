#ifndef __SPEED_METER__
#define __SPEED_METER__

#include "global.h"
#include "vt.h"

extern volatile OSTime D_8016A578;
extern SpeedMeterTimeEntry* sSpeedMeterTimeEntryPtr;
extern SpeedMeterTimeEntry sSpeedMeterTimeEntryArray[6];

#define DrawRec(gfx, color, ulx, uly, lrx, lry)        \
    gDPPipeSync(gfx);                                  \
    gDPSetFillColor(gfx, ((color) << 16) | (color));   \
    gDPFillRectangle(gfx, (ulx), (uly), (lrx), (lry)); \
    gDPPipeSync(gfx);

#endif // __SPEED_METER__
