/* makerom */
		_makeromSegmentStart             = 0x00000000; /* ROM:0x00000000 */

/* boot */
		rspbootTextStart                 = 0x80009320; /* ROM:0x00009F20 */
		rspbootTextEnd                   = 0x800093F0; /* ROM:0x00009FF0 */
		_bootSegmentDataStart            = 0x800093F0; /* ROM:0x00009FF0 */
		D_800093F0                       = 0x800093F0; /* ROM:0x00009FF0 */
		D_80009410                       = 0x80009410; /* ROM:0x0000A010 */
		_bootSegmentDataEnd              = 0x8000AFC0; /* ROM:0x0000BBC0 */
		_bootSegmentDataSize             = 0x00001BD0; /* ROM:0x800027D0 */
		_bootSegmentRomEnd               = 0x00012F70; /* ROM:0x80013B70 */

/* boot.bss */
		_bootSegmentEnd                  = 0x80016DA0; /* ROM:0x000179A0 */
		_dmadataSegmentRomStart          = 0x00012F70; /* ROM:0x80013B70 */

/* dmadata */
		_dmadataSegmentStart             = 0x80016DA0; /* ROM:0x00012F70 */

/* Audiobank */
		_AudiobankSegmentDataStart       = 0x00000010; /* ROM:0x00019030 */
		_binary_baserom_Audiobank_start  = 0x00000010; /* ROM:0x00019030 */
		_binary_baserom_Audiobank_end    = 0x0002BDD0; /* ROM:0x00044DF0 */
		_AudiobankSegmentDataEnd         = 0x0002BDD0; /* ROM:0x00044DF0 */
		_AudiobankSegmentDataSize        = 0x0002BDC0; /* ROM:0x00044DE0 */
		_AudiobankSegmentRomEnd          = 0x00044DF0; /* ROM:0x0005DE10 */

/* Audiobank.bss */
		_AudiobankSegmentEnd             = 0x0002BDD0; /* ROM:0x00044DF0 */
		_AudioseqSegmentRomStart         = 0x00044DF0; /* ROM:0x0005DE10 */

/* Audioseq */
		_AudioseqSegmentStart            = 0x0002BDD0; /* ROM:0x00044DF0 */
		_AudioseqSegmentDataStart        = 0x0002BDD0; /* ROM:0x00044DF0 */
		_binary_baserom_Audioseq_start   = 0x0002BDD0; /* ROM:0x00044DF0 */
		_binary_baserom_Audioseq_end     = 0x0007B850; /* ROM:0x00094870 */
		_AudioseqSegmentDataEnd          = 0x0007B850; /* ROM:0x00094870 */
		_AudioseqSegmentDataSize         = 0x0004FA80; /* ROM:0x00068AA0 */
		_AudioseqSegmentRomEnd           = 0x00094870; /* ROM:0x000AD890 */

/* Audioseq.bss */
		_AudioseqSegmentEnd              = 0x0007B850; /* ROM:0x00094870 */
		_AudiotableSegmentRomStart       = 0x00094870; /* ROM:0x000AD890 */

/* Audiotable */
		_AudiotableSegmentStart          = 0x0007B850; /* ROM:0x00094870 */
		_AudiotableSegmentDataStart      = 0x0007B850; /* ROM:0x00094870 */
		_binary_baserom_Audiotable_start = 0x0007B850; /* ROM:0x00094870 */
		_binary_baserom_Audiotable_end   = 0x004CCBE0; /* ROM:0x004E5C00 */
		_AudiotableSegmentDataEnd        = 0x004CCBE0; /* ROM:0x004E5C00 */
		_AudiotableSegmentDataSize       = 0x00451390; /* ROM:0x0046A3B0 */
		_AudiotableSegmentRomEnd         = 0x004E5C00; /* ROM:0x004FEC20 */

/* Audiotable.bss */
		_AudiotableSegmentEnd            = 0x004CCBE0; /* ROM:0x004E5C00 */
		_link_animetionSegmentRomStart   = 0x004E5C00; /* ROM:0x004FEC20 */

/* link_animetion */
		_link_animetionSegmentStart      = 0x07000000; /* ROM:0x004E5C00 */

/* code */
		aspMainTextStart                 = 0x801120C0; /* ROM:0x00B89260 */
		aspMainTextEnd                   = 0x80113070; /* ROM:0x00B8A210 */
		gspS2DEX2d_fifoTextStart         = 0x80113070; /* ROM:0x00B8A210 */
		njpgdspMainTextStart             = 0x80114930; /* ROM:0x00B8BAD0 */
		gspS2DEX2d_fifoTextEnd           = 0x80114930; /* ROM:0x00B8BAD0 */
		njpgdspMainTextEnd               = 0x80115420; /* ROM:0x00B8C5C0 */
		_codeSegmentDataStart            = 0x80115420; /* ROM:0x00B8C5C0 */
		gMojiFontTLUTs                   = 0x8012A740; /* ROM:0x00BA18E0 */
		gMojiFontTex                     = 0x8012A7C0; /* ROM:0x00BA1960 */
		D_8012ABC0                       = 0x8012ABC0; /* ROM:0x00BA1D60 */
		_codeSegmentDataEnd              = 0x80134D30; /* ROM:0x00BABED0 */
		_codeSegmentDataSize             = 0x0001F910; /* ROM:0x80A96AB0 */
		gSoundFontTable                  = 0x801550D0; /* ROM:0x00BCC270 */
		gSequenceFontTable               = 0x80155340; /* ROM:0x00BCC4E0 */
		gSequenceTable                   = 0x80155500; /* ROM:0x00BCC6A0 */
		gSampleBankTable                 = 0x80155BF0; /* ROM:0x00BCCD90 */
		aspMainDataStart                 = 0x80155C70; /* ROM:0x00BCCE10 */
		gspF3DZEX2_NoN_PosLight_fifoTextStart = 0x80155F50; /* ROM:0x00BCD0F0 */
		aspMainDataEnd                   = 0x80155F50; /* ROM:0x00BCD0F0 */
		gspF3DZEX2_NoN_PosLight_fifoDataStart = 0x80157580; /* ROM:0x00BCE720 */
		gspF3DZEX2_NoN_PosLight_fifoTextEnd = 0x80157580; /* ROM:0x00BCE720 */
		gspS2DEX2d_fifoDataStart         = 0x801579A0; /* ROM:0x00BCEB40 */
		gspF3DZEX2_NoN_PosLight_fifoDataEnd = 0x801579A0; /* ROM:0x00BCEB40 */
		njpgdspMainDataStart             = 0x80157D30; /* ROM:0x00BCEED0 */
		gspS2DEX2d_fifoDataEnd           = 0x80157D30; /* ROM:0x00BCEED0 */
		njpgdspMainDataEnd               = 0x80157D90; /* ROM:0x00BCEF30 */
		_codeSegmentRomEnd               = 0x00BCEF30; /* ROM:0x816460D0 */

/* code.bss */
		sFaultInstance                   = 0x8016A800; /* ROM:0x00BE19A0 */
		sFaultAwaitingInput              = 0x8016A804; /* ROM:0x00BE19A4 */
		sFaultStack                      = 0x8016A808; /* ROM:0x00BE19A8 */
		sFaultThreadInfo                 = 0x8016AE08; /* ROM:0x00BE1FA8 */
		gFaultMgr                        = 0x8016AE28; /* ROM:0x00BE1FC8 */
		sFaultDrawer                     = 0x8016B680; /* ROM:0x00BE2820 */
		D_8016B6C0                       = 0x8016B6BC; /* ROM:0x00BE285C */
		_codeSegmentEnd                  = 0x801759C0; /* ROM:0x00BECB60 */
		_buffersSegmentRomStart          = 0x00BCEF30; /* ROM:0x816460D0 */

/* buffers */
		_buffersSegmentStart             = 0x801759C0; /* ROM:0x00BCEF30 */

/* gameplay_object_exchange_static */
		_gameplay_object_exchange_staticSegmentDataStart = 0x05017AF0; /* ROM:0x00FDB000 */
		_binary_baserom_gameplay_object_exchange_static_start = 0x05017AF0; /* ROM:0x00FDB000 */
		_binary_baserom_gameplay_object_exchange_static_end = 0x05017B00; /* ROM:0x00FDB010 */
		_gameplay_object_exchange_staticSegmentDataEnd = 0x05017B00; /* ROM:0x00FDB010 */
		_gameplay_object_exchange_staticSegmentDataSize = 0x00000010; /* ROM:0xFBFC3520 */
		_gameplay_object_exchange_staticSegmentRomEnd = 0x00FDB010; /* ROM:0xFCF9E520 */

/* gameplay_object_exchange_static.bss */
		_gameplay_object_exchange_staticSegmentEnd = 0x05017B00; /* ROM:0x00FDB010 */
		_object_link_boySegmentRomStart  = 0x00FDC000; /* ROM:0xFCF9F510 */

/* object_link_boy */
		_object_link_boySegmentStart     = 0x06000000; /* ROM:0x00FDC000 */

/* bump_texture_static */
		_bump_texture_staticSegmentDataStart = 0x030098F0; /* ROM:0x035C1000 */
		_binary_baserom_bump_texture_static_start = 0x030098F0; /* ROM:0x035C1000 */
		_binary_baserom_bump_texture_static_end = 0x03009CF0; /* ROM:0x035C1400 */
		_bump_texture_staticSegmentDataEnd = 0x03009CF0; /* ROM:0x035C1400 */
		_bump_texture_staticSegmentDataSize = 0x00000400; /* ROM:0x005B7B10 */
		_bump_texture_staticSegmentRomEnd = 0x035C1400; /* ROM:0x03B78B10 */

/* bump_texture_static.bss */
		_bump_texture_staticSegmentEnd   = 0x03009CF0; /* ROM:0x035C1400 */
		_anime_model_1_staticSegmentRomStart = 0x035C2000; /* ROM:0x03B79710 */

/* anime_model_1_static */
		_anime_model_1_staticSegmentStart = 0x03009CF0; /* ROM:0x035C2000 */
		_anime_model_1_staticSegmentDataStart = 0x03009CF0; /* ROM:0x035C2000 */
		_binary_baserom_anime_model_1_static_start = 0x03009CF0; /* ROM:0x035C2000 */
		_binary_baserom_anime_model_1_static_end = 0x03009D00; /* ROM:0x035C2010 */
		_anime_model_1_staticSegmentDataEnd = 0x03009D00; /* ROM:0x035C2010 */
		_anime_model_1_staticSegmentDataSize = 0x00000010; /* ROM:0x005B8320 */
		_anime_model_1_staticSegmentRomEnd = 0x035C2010; /* ROM:0x03B7A320 */

/* anime_model_1_static.bss */
		_anime_model_1_staticSegmentEnd  = 0x03009D00; /* ROM:0x035C2010 */
		_anime_model_2_staticSegmentRomStart = 0x035C3000; /* ROM:0x03B7B310 */

/* anime_model_2_static */
		_anime_model_2_staticSegmentStart = 0x03009D00; /* ROM:0x035C3000 */
		_anime_model_2_staticSegmentDataStart = 0x03009D00; /* ROM:0x035C3000 */
		_binary_baserom_anime_model_2_static_start = 0x03009D00; /* ROM:0x035C3000 */
		_binary_baserom_anime_model_2_static_end = 0x03009D10; /* ROM:0x035C3010 */
		_anime_model_2_staticSegmentDataEnd = 0x03009D10; /* ROM:0x035C3010 */
		_anime_model_2_staticSegmentDataSize = 0x00000010; /* ROM:0x005B9310 */
		_anime_model_2_staticSegmentRomEnd = 0x035C3010; /* ROM:0x03B7C310 */

/* anime_model_2_static.bss */
		_anime_model_2_staticSegmentEnd  = 0x03009D10; /* ROM:0x035C3010 */
		_anime_model_3_staticSegmentRomStart = 0x035C4000; /* ROM:0x03B7D300 */

/* anime_model_3_static */
		_anime_model_3_staticSegmentStart = 0x03009D10; /* ROM:0x035C4000 */
		_anime_model_3_staticSegmentDataStart = 0x03009D10; /* ROM:0x035C4000 */
		_binary_baserom_anime_model_3_static_start = 0x03009D10; /* ROM:0x035C4000 */
		_binary_baserom_anime_model_3_static_end = 0x03009D20; /* ROM:0x035C4010 */
		_anime_model_3_staticSegmentDataEnd = 0x03009D20; /* ROM:0x035C4010 */
		_anime_model_3_staticSegmentDataSize = 0x00000010; /* ROM:0x005BA300 */
		_anime_model_3_staticSegmentRomEnd = 0x035C4010; /* ROM:0x03B7E300 */

/* anime_model_3_static.bss */
		_anime_model_3_staticSegmentEnd  = 0x03009D20; /* ROM:0x035C4010 */
		_anime_model_4_staticSegmentRomStart = 0x035C5000; /* ROM:0x03B7F2F0 */

/* anime_model_4_static */
		_anime_model_4_staticSegmentStart = 0x03009D20; /* ROM:0x035C5000 */
		_anime_model_4_staticSegmentDataStart = 0x03009D20; /* ROM:0x035C5000 */
		_binary_baserom_anime_model_4_static_start = 0x03009D20; /* ROM:0x035C5000 */
		_binary_baserom_anime_model_4_static_end = 0x03009D30; /* ROM:0x035C5010 */
		_anime_model_4_staticSegmentDataEnd = 0x03009D30; /* ROM:0x035C5010 */
		_anime_model_4_staticSegmentDataSize = 0x00000010; /* ROM:0x005BB2F0 */
		_anime_model_4_staticSegmentRomEnd = 0x035C5010; /* ROM:0x03B802F0 */

/* anime_model_4_static.bss */
		_anime_model_4_staticSegmentEnd  = 0x03009D30; /* ROM:0x035C5010 */
		_anime_model_5_staticSegmentRomStart = 0x035C6000; /* ROM:0x03B812E0 */

/* anime_model_5_static */
		_anime_model_5_staticSegmentStart = 0x03009D30; /* ROM:0x035C6000 */
		_anime_model_5_staticSegmentDataStart = 0x03009D30; /* ROM:0x035C6000 */
		_binary_baserom_anime_model_5_static_start = 0x03009D30; /* ROM:0x035C6000 */
		_binary_baserom_anime_model_5_static_end = 0x03009D40; /* ROM:0x035C6010 */
		_anime_model_5_staticSegmentDataEnd = 0x03009D40; /* ROM:0x035C6010 */
		_anime_model_5_staticSegmentDataSize = 0x00000010; /* ROM:0x005BC2E0 */
		_anime_model_5_staticSegmentRomEnd = 0x035C6010; /* ROM:0x03B822E0 */

/* anime_model_5_static.bss */
		_anime_model_5_staticSegmentEnd  = 0x03009D40; /* ROM:0x035C6010 */
		_anime_model_6_staticSegmentRomStart = 0x035C7000; /* ROM:0x03B832D0 */

/* anime_model_6_static */
		_anime_model_6_staticSegmentStart = 0x03009D40; /* ROM:0x035C7000 */
		_anime_model_6_staticSegmentDataStart = 0x03009D40; /* ROM:0x035C7000 */
		_binary_baserom_anime_model_6_static_start = 0x03009D40; /* ROM:0x035C7000 */
		_binary_baserom_anime_model_6_static_end = 0x03009D50; /* ROM:0x035C7010 */
		_anime_model_6_staticSegmentDataEnd = 0x03009D50; /* ROM:0x035C7010 */
		_anime_model_6_staticSegmentDataSize = 0x00000010; /* ROM:0x005BD2D0 */
		_anime_model_6_staticSegmentRomEnd = 0x035C7010; /* ROM:0x03B842D0 */

/* anime_model_6_static.bss */
		_anime_model_6_staticSegmentEnd  = 0x03009D50; /* ROM:0x035C7010 */
		_anime_texture_1_staticSegmentRomStart = 0x035C8000; /* ROM:0x03B852C0 */

/* anime_texture_1_static */
		_anime_texture_1_staticSegmentStart = 0x03009D50; /* ROM:0x035C8000 */
		_anime_texture_1_staticSegmentDataStart = 0x03009D50; /* ROM:0x035C8000 */
		_binary_baserom_anime_texture_1_static_start = 0x03009D50; /* ROM:0x035C8000 */
		_binary_baserom_anime_texture_1_static_end = 0x03009D60; /* ROM:0x035C8010 */
		_anime_texture_1_staticSegmentDataEnd = 0x03009D60; /* ROM:0x035C8010 */
		_anime_texture_1_staticSegmentDataSize = 0x00000010; /* ROM:0x005BE2C0 */
		_anime_texture_1_staticSegmentRomEnd = 0x035C8010; /* ROM:0x03B862C0 */

/* anime_texture_1_static.bss */
		_anime_texture_1_staticSegmentEnd = 0x03009D60; /* ROM:0x035C8010 */
		_anime_texture_2_staticSegmentRomStart = 0x035C9000; /* ROM:0x03B872B0 */

/* anime_texture_2_static */
		_anime_texture_2_staticSegmentStart = 0x03009D60; /* ROM:0x035C9000 */
		_anime_texture_2_staticSegmentDataStart = 0x03009D60; /* ROM:0x035C9000 */
		_binary_baserom_anime_texture_2_static_start = 0x03009D60; /* ROM:0x035C9000 */
		_binary_baserom_anime_texture_2_static_end = 0x03009D70; /* ROM:0x035C9010 */
		_anime_texture_2_staticSegmentDataEnd = 0x03009D70; /* ROM:0x035C9010 */
		_anime_texture_2_staticSegmentDataSize = 0x00000010; /* ROM:0x005BF2B0 */
		_anime_texture_2_staticSegmentRomEnd = 0x035C9010; /* ROM:0x03B882B0 */

/* anime_texture_2_static.bss */
		_anime_texture_2_staticSegmentEnd = 0x03009D70; /* ROM:0x035C9010 */
		_anime_texture_3_staticSegmentRomStart = 0x035CA000; /* ROM:0x03B892A0 */

/* anime_texture_3_static */
		_anime_texture_3_staticSegmentStart = 0x03009D70; /* ROM:0x035CA000 */
		_anime_texture_3_staticSegmentDataStart = 0x03009D70; /* ROM:0x035CA000 */
		_binary_baserom_anime_texture_3_static_start = 0x03009D70; /* ROM:0x035CA000 */
		_binary_baserom_anime_texture_3_static_end = 0x03009D80; /* ROM:0x035CA010 */
		_anime_texture_3_staticSegmentDataEnd = 0x03009D80; /* ROM:0x035CA010 */
		_anime_texture_3_staticSegmentDataSize = 0x00000010; /* ROM:0x005C02A0 */
		_anime_texture_3_staticSegmentRomEnd = 0x035CA010; /* ROM:0x03B8A2A0 */

/* anime_texture_3_static.bss */
		_anime_texture_3_staticSegmentEnd = 0x03009D80; /* ROM:0x035CA010 */
		_anime_texture_4_staticSegmentRomStart = 0x035CB000; /* ROM:0x03B8B290 */

/* anime_texture_4_static */
		_anime_texture_4_staticSegmentStart = 0x03009D80; /* ROM:0x035CB000 */
		_anime_texture_4_staticSegmentDataStart = 0x03009D80; /* ROM:0x035CB000 */
		_binary_baserom_anime_texture_4_static_start = 0x03009D80; /* ROM:0x035CB000 */
		_binary_baserom_anime_texture_4_static_end = 0x03009D90; /* ROM:0x035CB010 */
		_anime_texture_4_staticSegmentDataEnd = 0x03009D90; /* ROM:0x035CB010 */
		_anime_texture_4_staticSegmentDataSize = 0x00000010; /* ROM:0x005C1290 */
		_anime_texture_4_staticSegmentRomEnd = 0x035CB010; /* ROM:0x03B8C290 */

/* anime_texture_4_static.bss */
		_anime_texture_4_staticSegmentEnd = 0x03009D90; /* ROM:0x035CB010 */
		_anime_texture_5_staticSegmentRomStart = 0x035CC000; /* ROM:0x03B8D280 */

/* anime_texture_5_static */
		_anime_texture_5_staticSegmentStart = 0x03009D90; /* ROM:0x035CC000 */
		_anime_texture_5_staticSegmentDataStart = 0x03009D90; /* ROM:0x035CC000 */
		_binary_baserom_anime_texture_5_static_start = 0x03009D90; /* ROM:0x035CC000 */
		_binary_baserom_anime_texture_5_static_end = 0x03009DA0; /* ROM:0x035CC010 */
		_anime_texture_5_staticSegmentDataEnd = 0x03009DA0; /* ROM:0x035CC010 */
		_anime_texture_5_staticSegmentDataSize = 0x00000010; /* ROM:0x005C2280 */
		_anime_texture_5_staticSegmentRomEnd = 0x035CC010; /* ROM:0x03B8E280 */

/* anime_texture_5_static.bss */
		_anime_texture_5_staticSegmentEnd = 0x03009DA0; /* ROM:0x035CC010 */
		_anime_texture_6_staticSegmentRomStart = 0x035CD000; /* ROM:0x03B8F270 */

/* anime_texture_6_static */
		_anime_texture_6_staticSegmentStart = 0x03009DA0; /* ROM:0x035CD000 */
		_anime_texture_6_staticSegmentDataStart = 0x03009DA0; /* ROM:0x035CD000 */
		_binary_baserom_anime_texture_6_static_start = 0x03009DA0; /* ROM:0x035CD000 */
		_binary_baserom_anime_texture_6_static_end = 0x03009DB0; /* ROM:0x035CD010 */
		_anime_texture_6_staticSegmentDataEnd = 0x03009DB0; /* ROM:0x035CD010 */
		_anime_texture_6_staticSegmentDataSize = 0x00000010; /* ROM:0x005C3270 */
		_anime_texture_6_staticSegmentRomEnd = 0x035CD010; /* ROM:0x03B90270 */

/* anime_texture_6_static.bss */
		_anime_texture_6_staticSegmentEnd = 0x03009DB0; /* ROM:0x035CD010 */
		_softsprite_matrix_staticSegmentRomStart = 0x035CE000; /* ROM:0x03B91260 */

/* softsprite_matrix_static */
		_softsprite_matrix_staticSegmentStart = 0x03009DB0; /* ROM:0x035CE000 */
		_softsprite_matrix_staticSegmentDataStart = 0x03009DB0; /* ROM:0x035CE000 */
		_binary_baserom_softsprite_matrix_static_start = 0x03009DB0; /* ROM:0x035CE000 */
		_binary_baserom_softsprite_matrix_static_end = 0x03009DF0; /* ROM:0x035CE040 */
		_softsprite_matrix_staticSegmentDataEnd = 0x03009DF0; /* ROM:0x035CE040 */
		_softsprite_matrix_staticSegmentDataSize = 0x00000040; /* ROM:0x005C4290 */
		_softsprite_matrix_staticSegmentRomEnd = 0x035CE040; /* ROM:0x03B92290 */

/* softsprite_matrix_static.bss */
		_softsprite_matrix_staticSegmentEnd = 0x03009DF0; /* ROM:0x035CE040 */
		_RomEnd                          = 0x035CF000; /* ROM:0x03B93250 */
