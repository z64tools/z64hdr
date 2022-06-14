extern volatile OSTime D_8016A578;
extern SpeedMeterTimeEntry* sSpeedMeterTimeEntryPtr;
extern SpeedMeterTimeEntry sSpeedMeterTimeEntryArray[6];

#define DrawRec(gfx, color, ulx, uly, lrx, lry)        \
    gDPPipeSync(gfx);                                  \
    gDPSetFillColor(gfx, ((color) << 16) | (color));   \
    gDPFillRectangle(gfx, (ulx), (uly), (lrx), (lry)); \
    gDPPipeSync(gfx);
