#ifndef __Z_JPEG__
#define __Z_JPEG__

#include "global.h"
#include "vt.h"
#define MARKER_ESCAPE 0x00
#define MARKER_SOI 0xD8
#define MARKER_SOF 0xC0
#define MARKER_DHT 0xC4
#define MARKER_DQT 0xDB
#define MARKER_DRI 0xDD
#define MARKER_SOS 0xDA
#define MARKER_APP0 0xE0
#define MARKER_APP1 0xE1
#define MARKER_APP2 0xE2
#define MARKER_COM 0xFE
#define MARKER_EOI 0xD9

void Jpeg_ScheduleDecoderTask(JpegContext* ctx);
void Jpeg_CopyToZbuffer(u16* src, u16* zbuffer, s32 x, s32 y);
u16 Jpeg_GetUnalignedU16(u8* ptr);
void Jpeg_ParseMarkers(u8* ptr, JpegContext* ctx);

#endif // __Z_JPEG__
