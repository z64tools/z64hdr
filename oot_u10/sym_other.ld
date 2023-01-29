/* makerom */
/* _makeromSegmentStart             = 0x00000000; DebugAddr */

/* boot */
/* rspbootTextStart                 = 0x80009320; DebugAddr */
/* rspbootTextEnd                   = 0x800093F0; DebugAddr */
/* _bootSegmentDataStart            = 0x800093F0; DebugAddr */
/* D_800093F0                       = 0x800093F0; DebugAddr */
/* D_80009410                       = 0x80009410; DebugAddr */
/* _bootSegmentDataEnd              = 0x8000AFC0; DebugAddr */
/* _bootSegmentDataSize             = 0x00001BD0; DebugAddr */
/* _bootSegmentRomEnd               = 0x00012F70; DebugAddr */

/* boot.bss */
_bootSegmentEnd                  = 0x8000B140;
/* _dmadataSegmentRomStart          = 0x00012F70; DebugAddr */

/* dmadata */
_dmadataSegmentStart             = 0x8000B140;

/* Audiobank */
/* _AudiobankSegmentDataStart       = 0x00000010; DebugAddr */
/* _binary_baserom_Audiobank_start  = 0x00000010; DebugAddr */
/* _binary_baserom_Audiobank_end    = 0x0002BDD0; DebugAddr */
/* _AudiobankSegmentDataEnd         = 0x0002BDD0; DebugAddr */
/* _AudiobankSegmentDataSize        = 0x0002BDC0; DebugAddr */
/* _AudiobankSegmentRomEnd          = 0x00044DF0; DebugAddr */

/* Audiobank.bss */
/* _AudiobankSegmentEnd             = 0x0002BDD0; DebugAddr */
/* _AudioseqSegmentRomStart         = 0x00044DF0; DebugAddr */

/* Audioseq */
/* _AudioseqSegmentStart            = 0x0002BDD0; DebugAddr */
/* _AudioseqSegmentDataStart        = 0x0002BDD0; DebugAddr */
/* _binary_baserom_Audioseq_start   = 0x0002BDD0; DebugAddr */
/* _binary_baserom_Audioseq_end     = 0x0007B850; DebugAddr */
/* _AudioseqSegmentDataEnd          = 0x0007B850; DebugAddr */
/* _AudioseqSegmentDataSize         = 0x0004FA80; DebugAddr */
/* _AudioseqSegmentRomEnd           = 0x00094870; DebugAddr */

/* Audioseq.bss */
/* _AudioseqSegmentEnd              = 0x0007B850; DebugAddr */
/* _AudiotableSegmentRomStart       = 0x00094870; DebugAddr */

/* Audiotable */
/* _AudiotableSegmentStart          = 0x0007B850; DebugAddr */
/* _AudiotableSegmentDataStart      = 0x0007B850; DebugAddr */
/* _binary_baserom_Audiotable_start = 0x0007B850; DebugAddr */
/* _binary_baserom_Audiotable_end   = 0x004CCBE0; DebugAddr */
/* _AudiotableSegmentDataEnd        = 0x004CCBE0; DebugAddr */
/* _AudiotableSegmentDataSize       = 0x00451390; DebugAddr */
/* _AudiotableSegmentRomEnd         = 0x004E5C00; DebugAddr */

/* Audiotable.bss */
/* _AudiotableSegmentEnd            = 0x004CCBE0; DebugAddr */
/* _link_animetionSegmentRomStart   = 0x004E5C00; DebugAddr */

/* link_animetion */
/* _link_animetionSegmentStart      = 0x07000000; DebugAddr */

/* code */
/* aspMainTextStart                 = 0x801120C0; DebugAddr */
/* aspMainTextEnd                   = 0x80113070; DebugAddr */
/* gspS2DEX2d_fifoTextStart         = 0x80113070; DebugAddr */
/* njpgdspMainTextStart             = 0x80114930; DebugAddr */
/* gspS2DEX2d_fifoTextEnd           = 0x80114930; DebugAddr */
/* njpgdspMainTextEnd               = 0x80115420; DebugAddr */
/* _codeSegmentDataStart            = 0x80115420; DebugAddr */
/* gMojiFontTLUTs                   = 0x8012A740; DebugAddr */
/* gMojiFontTex                     = 0x8012A7C0; DebugAddr */
/* D_8012ABC0                       = 0x8012ABC0; DebugAddr */
/* _codeSegmentDataEnd              = 0x80134D30; DebugAddr */
/* _codeSegmentDataSize             = 0x0001F910; DebugAddr */
/* gSoundFontTable                  = 0x801550D0; DebugAddr */
/* gSequenceFontTable               = 0x80155340; DebugAddr */
/* gSequenceTable                   = 0x80155500; DebugAddr */
/* gSampleBankTable                 = 0x80155BF0; DebugAddr */
/* aspMainDataStart                 = 0x80155C70; DebugAddr */
/* gspF3DZEX2_NoN_PosLight_fifoTextStart = 0x80155F50; DebugAddr */
/* aspMainDataEnd                   = 0x80155F50; DebugAddr */
/* gspF3DZEX2_NoN_PosLight_fifoDataStart = 0x80157580; DebugAddr */
/* gspF3DZEX2_NoN_PosLight_fifoTextEnd = 0x80157580; DebugAddr */
/* gspS2DEX2d_fifoDataStart         = 0x801579A0; DebugAddr */
/* gspF3DZEX2_NoN_PosLight_fifoDataEnd = 0x801579A0; DebugAddr */
/* njpgdspMainDataStart             = 0x80157D30; DebugAddr */
/* gspS2DEX2d_fifoDataEnd           = 0x80157D30; DebugAddr */
/* njpgdspMainDataEnd               = 0x80157D90; DebugAddr */
/* _codeSegmentRomEnd               = 0x00BCEF30; DebugAddr */

/* code.bss */
/* sFaultInstance                   = 0x8016A800; DebugAddr */
/* sFaultAwaitingInput              = 0x8016A804; DebugAddr */
/* sFaultStack                      = 0x8016A808; DebugAddr */
/* sFaultThreadInfo                 = 0x8016AE08; DebugAddr */
/* gFaultMgr                        = 0x8016AE28; DebugAddr */
/* sFaultDrawer                     = 0x8016B680; DebugAddr */
/* D_8016B6C0                       = 0x8016B6BC; DebugAddr */
/* _codeSegmentEnd                  = 0x801759C0; DebugAddr */
/* _buffersSegmentRomStart          = 0x00BCEF30; DebugAddr */

/* buffers */
/* _buffersSegmentStart             = 0x801759C0; DebugAddr */

/* gameplay_object_exchange_static */
/* _gameplay_object_exchange_staticSegmentDataStart = 0x05017AF0; DebugAddr */
/* _binary_baserom_gameplay_object_exchange_static_start = 0x05017AF0; DebugAddr */
/* _binary_baserom_gameplay_object_exchange_static_end = 0x05017B00; DebugAddr */
/* _gameplay_object_exchange_staticSegmentDataEnd = 0x05017B00; DebugAddr */
/* _gameplay_object_exchange_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _gameplay_object_exchange_staticSegmentRomEnd = 0x00FDB010; DebugAddr */

/* gameplay_object_exchange_static.bss */
/* _gameplay_object_exchange_staticSegmentEnd = 0x05017B00; DebugAddr */
/* _object_link_boySegmentRomStart  = 0x00FDC000; DebugAddr */

/* object_link_boy */
/* _object_link_boySegmentStart     = 0x06000000; DebugAddr */

/* bump_texture_static */
/* _bump_texture_staticSegmentDataStart = 0x030098F0; DebugAddr */
/* _binary_baserom_bump_texture_static_start = 0x030098F0; DebugAddr */
/* _binary_baserom_bump_texture_static_end = 0x03009CF0; DebugAddr */
/* _bump_texture_staticSegmentDataEnd = 0x03009CF0; DebugAddr */
/* _bump_texture_staticSegmentDataSize = 0x00000400; DebugAddr */
/* _bump_texture_staticSegmentRomEnd = 0x035C1400; DebugAddr */

/* bump_texture_static.bss */
/* _bump_texture_staticSegmentEnd   = 0x03009CF0; DebugAddr */
/* _anime_model_1_staticSegmentRomStart = 0x035C2000; DebugAddr */

/* anime_model_1_static */
/* _anime_model_1_staticSegmentStart = 0x03009CF0; DebugAddr */
/* _anime_model_1_staticSegmentDataStart = 0x03009CF0; DebugAddr */
/* _binary_baserom_anime_model_1_static_start = 0x03009CF0; DebugAddr */
/* _binary_baserom_anime_model_1_static_end = 0x03009D00; DebugAddr */
/* _anime_model_1_staticSegmentDataEnd = 0x03009D00; DebugAddr */
/* _anime_model_1_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_model_1_staticSegmentRomEnd = 0x035C2010; DebugAddr */

/* anime_model_1_static.bss */
/* _anime_model_1_staticSegmentEnd  = 0x03009D00; DebugAddr */
/* _anime_model_2_staticSegmentRomStart = 0x035C3000; DebugAddr */

/* anime_model_2_static */
/* _anime_model_2_staticSegmentStart = 0x03009D00; DebugAddr */
/* _anime_model_2_staticSegmentDataStart = 0x03009D00; DebugAddr */
/* _binary_baserom_anime_model_2_static_start = 0x03009D00; DebugAddr */
/* _binary_baserom_anime_model_2_static_end = 0x03009D10; DebugAddr */
/* _anime_model_2_staticSegmentDataEnd = 0x03009D10; DebugAddr */
/* _anime_model_2_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_model_2_staticSegmentRomEnd = 0x035C3010; DebugAddr */

/* anime_model_2_static.bss */
/* _anime_model_2_staticSegmentEnd  = 0x03009D10; DebugAddr */
/* _anime_model_3_staticSegmentRomStart = 0x035C4000; DebugAddr */

/* anime_model_3_static */
/* _anime_model_3_staticSegmentStart = 0x03009D10; DebugAddr */
/* _anime_model_3_staticSegmentDataStart = 0x03009D10; DebugAddr */
/* _binary_baserom_anime_model_3_static_start = 0x03009D10; DebugAddr */
/* _binary_baserom_anime_model_3_static_end = 0x03009D20; DebugAddr */
/* _anime_model_3_staticSegmentDataEnd = 0x03009D20; DebugAddr */
/* _anime_model_3_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_model_3_staticSegmentRomEnd = 0x035C4010; DebugAddr */

/* anime_model_3_static.bss */
/* _anime_model_3_staticSegmentEnd  = 0x03009D20; DebugAddr */
/* _anime_model_4_staticSegmentRomStart = 0x035C5000; DebugAddr */

/* anime_model_4_static */
/* _anime_model_4_staticSegmentStart = 0x03009D20; DebugAddr */
/* _anime_model_4_staticSegmentDataStart = 0x03009D20; DebugAddr */
/* _binary_baserom_anime_model_4_static_start = 0x03009D20; DebugAddr */
/* _binary_baserom_anime_model_4_static_end = 0x03009D30; DebugAddr */
/* _anime_model_4_staticSegmentDataEnd = 0x03009D30; DebugAddr */
/* _anime_model_4_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_model_4_staticSegmentRomEnd = 0x035C5010; DebugAddr */

/* anime_model_4_static.bss */
/* _anime_model_4_staticSegmentEnd  = 0x03009D30; DebugAddr */
/* _anime_model_5_staticSegmentRomStart = 0x035C6000; DebugAddr */

/* anime_model_5_static */
/* _anime_model_5_staticSegmentStart = 0x03009D30; DebugAddr */
/* _anime_model_5_staticSegmentDataStart = 0x03009D30; DebugAddr */
/* _binary_baserom_anime_model_5_static_start = 0x03009D30; DebugAddr */
/* _binary_baserom_anime_model_5_static_end = 0x03009D40; DebugAddr */
/* _anime_model_5_staticSegmentDataEnd = 0x03009D40; DebugAddr */
/* _anime_model_5_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_model_5_staticSegmentRomEnd = 0x035C6010; DebugAddr */

/* anime_model_5_static.bss */
/* _anime_model_5_staticSegmentEnd  = 0x03009D40; DebugAddr */
/* _anime_model_6_staticSegmentRomStart = 0x035C7000; DebugAddr */

/* anime_model_6_static */
/* _anime_model_6_staticSegmentStart = 0x03009D40; DebugAddr */
/* _anime_model_6_staticSegmentDataStart = 0x03009D40; DebugAddr */
/* _binary_baserom_anime_model_6_static_start = 0x03009D40; DebugAddr */
/* _binary_baserom_anime_model_6_static_end = 0x03009D50; DebugAddr */
/* _anime_model_6_staticSegmentDataEnd = 0x03009D50; DebugAddr */
/* _anime_model_6_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_model_6_staticSegmentRomEnd = 0x035C7010; DebugAddr */

/* anime_model_6_static.bss */
/* _anime_model_6_staticSegmentEnd  = 0x03009D50; DebugAddr */
/* _anime_texture_1_staticSegmentRomStart = 0x035C8000; DebugAddr */

/* anime_texture_1_static */
/* _anime_texture_1_staticSegmentStart = 0x03009D50; DebugAddr */
/* _anime_texture_1_staticSegmentDataStart = 0x03009D50; DebugAddr */
/* _binary_baserom_anime_texture_1_static_start = 0x03009D50; DebugAddr */
/* _binary_baserom_anime_texture_1_static_end = 0x03009D60; DebugAddr */
/* _anime_texture_1_staticSegmentDataEnd = 0x03009D60; DebugAddr */
/* _anime_texture_1_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_texture_1_staticSegmentRomEnd = 0x035C8010; DebugAddr */

/* anime_texture_1_static.bss */
/* _anime_texture_1_staticSegmentEnd = 0x03009D60; DebugAddr */
/* _anime_texture_2_staticSegmentRomStart = 0x035C9000; DebugAddr */

/* anime_texture_2_static */
/* _anime_texture_2_staticSegmentStart = 0x03009D60; DebugAddr */
/* _anime_texture_2_staticSegmentDataStart = 0x03009D60; DebugAddr */
/* _binary_baserom_anime_texture_2_static_start = 0x03009D60; DebugAddr */
/* _binary_baserom_anime_texture_2_static_end = 0x03009D70; DebugAddr */
/* _anime_texture_2_staticSegmentDataEnd = 0x03009D70; DebugAddr */
/* _anime_texture_2_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_texture_2_staticSegmentRomEnd = 0x035C9010; DebugAddr */

/* anime_texture_2_static.bss */
/* _anime_texture_2_staticSegmentEnd = 0x03009D70; DebugAddr */
/* _anime_texture_3_staticSegmentRomStart = 0x035CA000; DebugAddr */

/* anime_texture_3_static */
/* _anime_texture_3_staticSegmentStart = 0x03009D70; DebugAddr */
/* _anime_texture_3_staticSegmentDataStart = 0x03009D70; DebugAddr */
/* _binary_baserom_anime_texture_3_static_start = 0x03009D70; DebugAddr */
/* _binary_baserom_anime_texture_3_static_end = 0x03009D80; DebugAddr */
/* _anime_texture_3_staticSegmentDataEnd = 0x03009D80; DebugAddr */
/* _anime_texture_3_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_texture_3_staticSegmentRomEnd = 0x035CA010; DebugAddr */

/* anime_texture_3_static.bss */
/* _anime_texture_3_staticSegmentEnd = 0x03009D80; DebugAddr */
/* _anime_texture_4_staticSegmentRomStart = 0x035CB000; DebugAddr */

/* anime_texture_4_static */
/* _anime_texture_4_staticSegmentStart = 0x03009D80; DebugAddr */
/* _anime_texture_4_staticSegmentDataStart = 0x03009D80; DebugAddr */
/* _binary_baserom_anime_texture_4_static_start = 0x03009D80; DebugAddr */
/* _binary_baserom_anime_texture_4_static_end = 0x03009D90; DebugAddr */
/* _anime_texture_4_staticSegmentDataEnd = 0x03009D90; DebugAddr */
/* _anime_texture_4_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_texture_4_staticSegmentRomEnd = 0x035CB010; DebugAddr */

/* anime_texture_4_static.bss */
/* _anime_texture_4_staticSegmentEnd = 0x03009D90; DebugAddr */
/* _anime_texture_5_staticSegmentRomStart = 0x035CC000; DebugAddr */

/* anime_texture_5_static */
/* _anime_texture_5_staticSegmentStart = 0x03009D90; DebugAddr */
/* _anime_texture_5_staticSegmentDataStart = 0x03009D90; DebugAddr */
/* _binary_baserom_anime_texture_5_static_start = 0x03009D90; DebugAddr */
/* _binary_baserom_anime_texture_5_static_end = 0x03009DA0; DebugAddr */
/* _anime_texture_5_staticSegmentDataEnd = 0x03009DA0; DebugAddr */
/* _anime_texture_5_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_texture_5_staticSegmentRomEnd = 0x035CC010; DebugAddr */

/* anime_texture_5_static.bss */
/* _anime_texture_5_staticSegmentEnd = 0x03009DA0; DebugAddr */
/* _anime_texture_6_staticSegmentRomStart = 0x035CD000; DebugAddr */

/* anime_texture_6_static */
/* _anime_texture_6_staticSegmentStart = 0x03009DA0; DebugAddr */
/* _anime_texture_6_staticSegmentDataStart = 0x03009DA0; DebugAddr */
/* _binary_baserom_anime_texture_6_static_start = 0x03009DA0; DebugAddr */
/* _binary_baserom_anime_texture_6_static_end = 0x03009DB0; DebugAddr */
/* _anime_texture_6_staticSegmentDataEnd = 0x03009DB0; DebugAddr */
/* _anime_texture_6_staticSegmentDataSize = 0x00000010; DebugAddr */
/* _anime_texture_6_staticSegmentRomEnd = 0x035CD010; DebugAddr */

/* anime_texture_6_static.bss */
/* _anime_texture_6_staticSegmentEnd = 0x03009DB0; DebugAddr */
/* _softsprite_matrix_staticSegmentRomStart = 0x035CE000; DebugAddr */

/* softsprite_matrix_static */
/* _softsprite_matrix_staticSegmentStart = 0x03009DB0; DebugAddr */
/* _softsprite_matrix_staticSegmentDataStart = 0x03009DB0; DebugAddr */
/* _binary_baserom_softsprite_matrix_static_start = 0x03009DB0; DebugAddr */
/* _binary_baserom_softsprite_matrix_static_end = 0x03009DF0; DebugAddr */
/* _softsprite_matrix_staticSegmentDataEnd = 0x03009DF0; DebugAddr */
/* _softsprite_matrix_staticSegmentDataSize = 0x00000040; DebugAddr */
/* _softsprite_matrix_staticSegmentRomEnd = 0x035CE040; DebugAddr */

/* softsprite_matrix_static.bss */
/* _softsprite_matrix_staticSegmentEnd = 0x03009DF0; DebugAddr */
/* _RomEnd                          = 0x035CF000; DebugAddr */
