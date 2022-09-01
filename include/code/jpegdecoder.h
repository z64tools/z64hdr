#ifndef Z64_JPEGDECODER_H
#define Z64_JPEGDECODER_H

#include "global.h"

extern u8* sJpegBitStreamPtr;
extern u32 sJpegBitStreamByteIdx;
extern u8 sJpegBitStreamBitIdx;
extern u8 sJpegBitStreamDontSkip;
extern u32 sJpegBitStreamCurWord;

s32 JpegDecoder_Decode(JpegDecoder* decoder, u16* mcuBuff, s32 count, u8 isFollowing, JpegDecoderState* state);

s32 JpegDecoder_ProcessMcu(JpegHuffmanTable* hTable0, JpegHuffmanTable* hTable1, u16* mcu, s16* unk);

s32 JpegDecoder_ParseNextSymbol(JpegHuffmanTable* hTable, s16* outCoeff, s8* outZeroCount);

u16 JpegDecoder_ReadBits(u8 len);

#endif
