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

/* vr_fine0_static */
		_vr_fine0_staticSegmentDataStart = 0x02003B00; /* ROM:0x01AF0000 */
		_binary_baserom_vr_fine0_static_start = 0x02003B00; /* ROM:0x01AF0000 */
		_binary_baserom_vr_fine0_static_end = 0x0200FB00; /* ROM:0x01AFC000 */
		_vr_fine0_staticSegmentDataEnd   = 0x0200FB00; /* ROM:0x01AFC000 */
		_vr_fine0_staticSegmentDataSize  = 0x0000C000; /* ROM:0xFFAF8500 */
		_vr_fine0_staticSegmentRomEnd    = 0x01AFC000; /* ROM:0x015E8500 */

/* vr_fine0_static.bss */
		_vr_fine0_staticSegmentEnd       = 0x0200FB00; /* ROM:0x01AFC000 */
		_vr_fine0_pal_staticSegmentRomStart = 0x01AFC000; /* ROM:0x015E8500 */

/* vr_fine0_pal_static */
		_vr_fine0_pal_staticSegmentStart = 0x0200FB00; /* ROM:0x01AFC000 */
		_vr_fine0_pal_staticSegmentDataStart = 0x0200FB00; /* ROM:0x01AFC000 */
		_binary_baserom_vr_fine0_pal_static_start = 0x0200FB00; /* ROM:0x01AFC000 */
		_binary_baserom_vr_fine0_pal_static_end = 0x0200FC00; /* ROM:0x01AFC100 */
		_vr_fine0_pal_staticSegmentDataEnd = 0x0200FC00; /* ROM:0x01AFC100 */
		_vr_fine0_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAEC600 */
		_vr_fine0_pal_staticSegmentRomEnd = 0x01AFC100; /* ROM:0x015E8600 */

/* vr_fine0_pal_static.bss */
		_vr_fine0_pal_staticSegmentEnd   = 0x0200FC00; /* ROM:0x01AFC100 */
		_vr_fine1_staticSegmentRomStart  = 0x01AFD000; /* ROM:0x015E9500 */

/* vr_fine1_static */
		_vr_fine1_staticSegmentStart     = 0x0200FC00; /* ROM:0x01AFD000 */
		_vr_fine1_staticSegmentDataStart = 0x0200FC00; /* ROM:0x01AFD000 */
		_binary_baserom_vr_fine1_static_start = 0x0200FC00; /* ROM:0x01AFD000 */
		_binary_baserom_vr_fine1_static_end = 0x0201BC00; /* ROM:0x01B09000 */
		_vr_fine1_staticSegmentDataEnd   = 0x0201BC00; /* ROM:0x01B09000 */
		_vr_fine1_staticSegmentDataSize  = 0x0000C000; /* ROM:0xFFAF9400 */
		_vr_fine1_staticSegmentRomEnd    = 0x01B09000; /* ROM:0x015F6400 */

/* vr_fine1_static.bss */
		_vr_fine1_staticSegmentEnd       = 0x0201BC00; /* ROM:0x01B09000 */
		_vr_fine1_pal_staticSegmentRomStart = 0x01B09000; /* ROM:0x015F6400 */

/* vr_fine1_pal_static */
		_vr_fine1_pal_staticSegmentStart = 0x0201BC00; /* ROM:0x01B09000 */
		_vr_fine1_pal_staticSegmentDataStart = 0x0201BC00; /* ROM:0x01B09000 */
		_binary_baserom_vr_fine1_pal_static_start = 0x0201BC00; /* ROM:0x01B09000 */
		_binary_baserom_vr_fine1_pal_static_end = 0x0201BD00; /* ROM:0x01B09100 */
		_vr_fine1_pal_staticSegmentDataEnd = 0x0201BD00; /* ROM:0x01B09100 */
		_vr_fine1_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAED500 */
		_vr_fine1_pal_staticSegmentRomEnd = 0x01B09100; /* ROM:0x015F6500 */

/* vr_fine1_pal_static.bss */
		_vr_fine1_pal_staticSegmentEnd   = 0x0201BD00; /* ROM:0x01B09100 */
		_vr_fine2_staticSegmentRomStart  = 0x01B0A000; /* ROM:0x015F7400 */

/* vr_fine2_static */
		_vr_fine2_staticSegmentStart     = 0x0201BD00; /* ROM:0x01B0A000 */
		_vr_fine2_staticSegmentDataStart = 0x0201BD00; /* ROM:0x01B0A000 */
		_binary_baserom_vr_fine2_static_start = 0x0201BD00; /* ROM:0x01B0A000 */
		_binary_baserom_vr_fine2_static_end = 0x02027D00; /* ROM:0x01B16000 */
		_vr_fine2_staticSegmentDataEnd   = 0x02027D00; /* ROM:0x01B16000 */
		_vr_fine2_staticSegmentDataSize  = 0x0000C000; /* ROM:0xFFAFA300 */
		_vr_fine2_staticSegmentRomEnd    = 0x01B16000; /* ROM:0x01604300 */

/* vr_fine2_static.bss */
		_vr_fine2_staticSegmentEnd       = 0x02027D00; /* ROM:0x01B16000 */
		_vr_fine2_pal_staticSegmentRomStart = 0x01B16000; /* ROM:0x01604300 */

/* vr_fine2_pal_static */
		_vr_fine2_pal_staticSegmentStart = 0x02027D00; /* ROM:0x01B16000 */
		_vr_fine2_pal_staticSegmentDataStart = 0x02027D00; /* ROM:0x01B16000 */
		_binary_baserom_vr_fine2_pal_static_start = 0x02027D00; /* ROM:0x01B16000 */
		_binary_baserom_vr_fine2_pal_static_end = 0x02027E00; /* ROM:0x01B16100 */
		_vr_fine2_pal_staticSegmentDataEnd = 0x02027E00; /* ROM:0x01B16100 */
		_vr_fine2_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAEE400 */
		_vr_fine2_pal_staticSegmentRomEnd = 0x01B16100; /* ROM:0x01604400 */

/* vr_fine2_pal_static.bss */
		_vr_fine2_pal_staticSegmentEnd   = 0x02027E00; /* ROM:0x01B16100 */
		_vr_fine3_staticSegmentRomStart  = 0x01B17000; /* ROM:0x01605300 */

/* vr_fine3_static */
		_vr_fine3_staticSegmentStart     = 0x02027E00; /* ROM:0x01B17000 */
		_vr_fine3_staticSegmentDataStart = 0x02027E00; /* ROM:0x01B17000 */
		_binary_baserom_vr_fine3_static_start = 0x02027E00; /* ROM:0x01B17000 */
		_binary_baserom_vr_fine3_static_end = 0x02033E00; /* ROM:0x01B23000 */
		_vr_fine3_staticSegmentDataEnd   = 0x02033E00; /* ROM:0x01B23000 */
		_vr_fine3_staticSegmentDataSize  = 0x0000C000; /* ROM:0xFFAFB200 */
		_vr_fine3_staticSegmentRomEnd    = 0x01B23000; /* ROM:0x01612200 */

/* vr_fine3_static.bss */
		_vr_fine3_staticSegmentEnd       = 0x02033E00; /* ROM:0x01B23000 */
		_vr_fine3_pal_staticSegmentRomStart = 0x01B23000; /* ROM:0x01612200 */

/* vr_fine3_pal_static */
		_vr_fine3_pal_staticSegmentStart = 0x02033E00; /* ROM:0x01B23000 */
		_vr_fine3_pal_staticSegmentDataStart = 0x02033E00; /* ROM:0x01B23000 */
		_binary_baserom_vr_fine3_pal_static_start = 0x02033E00; /* ROM:0x01B23000 */
		_binary_baserom_vr_fine3_pal_static_end = 0x02033F00; /* ROM:0x01B23100 */
		_vr_fine3_pal_staticSegmentDataEnd = 0x02033F00; /* ROM:0x01B23100 */
		_vr_fine3_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAEF300 */
		_vr_fine3_pal_staticSegmentRomEnd = 0x01B23100; /* ROM:0x01612300 */

/* vr_fine3_pal_static.bss */
		_vr_fine3_pal_staticSegmentEnd   = 0x02033F00; /* ROM:0x01B23100 */
		_vr_cloud0_staticSegmentRomStart = 0x01B24000; /* ROM:0x01613200 */

/* vr_cloud0_static */
		_vr_cloud0_staticSegmentStart    = 0x02033F00; /* ROM:0x01B24000 */
		_vr_cloud0_staticSegmentDataStart = 0x02033F00; /* ROM:0x01B24000 */
		_binary_baserom_vr_cloud0_static_start = 0x02033F00; /* ROM:0x01B24000 */
		_binary_baserom_vr_cloud0_static_end = 0x0203FF00; /* ROM:0x01B30000 */
		_vr_cloud0_staticSegmentDataEnd  = 0x0203FF00; /* ROM:0x01B30000 */
		_vr_cloud0_staticSegmentDataSize = 0x0000C000; /* ROM:0xFFAFC100 */
		_vr_cloud0_staticSegmentRomEnd   = 0x01B30000; /* ROM:0x01620100 */

/* vr_cloud0_static.bss */
		_vr_cloud0_staticSegmentEnd      = 0x0203FF00; /* ROM:0x01B30000 */
		_vr_cloud0_pal_staticSegmentRomStart = 0x01B30000; /* ROM:0x01620100 */

/* vr_cloud0_pal_static */
		_vr_cloud0_pal_staticSegmentStart = 0x0203FF00; /* ROM:0x01B30000 */
		_vr_cloud0_pal_staticSegmentDataStart = 0x0203FF00; /* ROM:0x01B30000 */
		_binary_baserom_vr_cloud0_pal_static_start = 0x0203FF00; /* ROM:0x01B30000 */
		_binary_baserom_vr_cloud0_pal_static_end = 0x02040000; /* ROM:0x01B30100 */
		_vr_cloud0_pal_staticSegmentDataEnd = 0x02040000; /* ROM:0x01B30100 */
		_vr_cloud0_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAF0200 */
		_vr_cloud0_pal_staticSegmentRomEnd = 0x01B30100; /* ROM:0x01620200 */

/* vr_cloud0_pal_static.bss */
		_vr_cloud0_pal_staticSegmentEnd  = 0x02040000; /* ROM:0x01B30100 */
		_vr_cloud1_staticSegmentRomStart = 0x01B31000; /* ROM:0x01621100 */

/* vr_cloud1_static */
		_vr_cloud1_staticSegmentStart    = 0x02040000; /* ROM:0x01B31000 */
		_vr_cloud1_staticSegmentDataStart = 0x02040000; /* ROM:0x01B31000 */
		_binary_baserom_vr_cloud1_static_start = 0x02040000; /* ROM:0x01B31000 */
		_binary_baserom_vr_cloud1_static_end = 0x0204C000; /* ROM:0x01B3D000 */
		_vr_cloud1_staticSegmentDataEnd  = 0x0204C000; /* ROM:0x01B3D000 */
		_vr_cloud1_staticSegmentDataSize = 0x0000C000; /* ROM:0xFFAFD000 */
		_vr_cloud1_staticSegmentRomEnd   = 0x01B3D000; /* ROM:0x0162E000 */

/* vr_cloud1_static.bss */
		_vr_cloud1_staticSegmentEnd      = 0x0204C000; /* ROM:0x01B3D000 */
		_vr_cloud1_pal_staticSegmentRomStart = 0x01B3D000; /* ROM:0x0162E000 */

/* vr_cloud1_pal_static */
		_vr_cloud1_pal_staticSegmentStart = 0x0204C000; /* ROM:0x01B3D000 */
		_vr_cloud1_pal_staticSegmentDataStart = 0x0204C000; /* ROM:0x01B3D000 */
		_binary_baserom_vr_cloud1_pal_static_start = 0x0204C000; /* ROM:0x01B3D000 */
		_binary_baserom_vr_cloud1_pal_static_end = 0x0204C100; /* ROM:0x01B3D100 */
		_vr_cloud1_pal_staticSegmentDataEnd = 0x0204C100; /* ROM:0x01B3D100 */
		_vr_cloud1_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAF1100 */
		_vr_cloud1_pal_staticSegmentRomEnd = 0x01B3D100; /* ROM:0x0162E100 */

/* vr_cloud1_pal_static.bss */
		_vr_cloud1_pal_staticSegmentEnd  = 0x0204C100; /* ROM:0x01B3D100 */
		_vr_cloud2_staticSegmentRomStart = 0x01B3E000; /* ROM:0x0162F000 */

/* vr_cloud2_static */
		_vr_cloud2_staticSegmentStart    = 0x0204C100; /* ROM:0x01B3E000 */
		_vr_cloud2_staticSegmentDataStart = 0x0204C100; /* ROM:0x01B3E000 */
		_binary_baserom_vr_cloud2_static_start = 0x0204C100; /* ROM:0x01B3E000 */
		_binary_baserom_vr_cloud2_static_end = 0x02058100; /* ROM:0x01B4A000 */
		_vr_cloud2_staticSegmentDataEnd  = 0x02058100; /* ROM:0x01B4A000 */
		_vr_cloud2_staticSegmentDataSize = 0x0000C000; /* ROM:0xFFAFDF00 */
		_vr_cloud2_staticSegmentRomEnd   = 0x01B4A000; /* ROM:0x0163BF00 */

/* vr_cloud2_static.bss */
		_vr_cloud2_staticSegmentEnd      = 0x02058100; /* ROM:0x01B4A000 */
		_vr_cloud2_pal_staticSegmentRomStart = 0x01B4A000; /* ROM:0x0163BF00 */

/* vr_cloud2_pal_static */
		_vr_cloud2_pal_staticSegmentStart = 0x02058100; /* ROM:0x01B4A000 */
		_vr_cloud2_pal_staticSegmentDataStart = 0x02058100; /* ROM:0x01B4A000 */
		_binary_baserom_vr_cloud2_pal_static_start = 0x02058100; /* ROM:0x01B4A000 */
		_binary_baserom_vr_cloud2_pal_static_end = 0x02058200; /* ROM:0x01B4A100 */
		_vr_cloud2_pal_staticSegmentDataEnd = 0x02058200; /* ROM:0x01B4A100 */
		_vr_cloud2_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAF2000 */
		_vr_cloud2_pal_staticSegmentRomEnd = 0x01B4A100; /* ROM:0x0163C000 */

/* vr_cloud2_pal_static.bss */
		_vr_cloud2_pal_staticSegmentEnd  = 0x02058200; /* ROM:0x01B4A100 */
		_vr_cloud3_staticSegmentRomStart = 0x01B4B000; /* ROM:0x0163CF00 */

/* vr_cloud3_static */
		_vr_cloud3_staticSegmentStart    = 0x02058200; /* ROM:0x01B4B000 */
		_vr_cloud3_staticSegmentDataStart = 0x02058200; /* ROM:0x01B4B000 */
		_binary_baserom_vr_cloud3_static_start = 0x02058200; /* ROM:0x01B4B000 */
		_binary_baserom_vr_cloud3_static_end = 0x02064200; /* ROM:0x01B57000 */
		_vr_cloud3_staticSegmentDataEnd  = 0x02064200; /* ROM:0x01B57000 */
		_vr_cloud3_staticSegmentDataSize = 0x0000C000; /* ROM:0xFFAFEE00 */
		_vr_cloud3_staticSegmentRomEnd   = 0x01B57000; /* ROM:0x01649E00 */

/* vr_cloud3_static.bss */
		_vr_cloud3_staticSegmentEnd      = 0x02064200; /* ROM:0x01B57000 */
		_vr_cloud3_pal_staticSegmentRomStart = 0x01B57000; /* ROM:0x01649E00 */

/* vr_cloud3_pal_static */
		_vr_cloud3_pal_staticSegmentStart = 0x02064200; /* ROM:0x01B57000 */
		_vr_cloud3_pal_staticSegmentDataStart = 0x02064200; /* ROM:0x01B57000 */
		_binary_baserom_vr_cloud3_pal_static_start = 0x02064200; /* ROM:0x01B57000 */
		_binary_baserom_vr_cloud3_pal_static_end = 0x02064300; /* ROM:0x01B57100 */
		_vr_cloud3_pal_staticSegmentDataEnd = 0x02064300; /* ROM:0x01B57100 */
		_vr_cloud3_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAF2F00 */
		_vr_cloud3_pal_staticSegmentRomEnd = 0x01B57100; /* ROM:0x01649F00 */

/* vr_cloud3_pal_static.bss */
		_vr_cloud3_pal_staticSegmentEnd  = 0x02064300; /* ROM:0x01B57100 */
		_vr_holy0_staticSegmentRomStart  = 0x01B58000; /* ROM:0x0164AE00 */

/* vr_holy0_static */
		_vr_holy0_staticSegmentStart     = 0x02064300; /* ROM:0x01B58000 */
		_vr_holy0_staticSegmentDataStart = 0x02064300; /* ROM:0x01B58000 */
		_binary_baserom_vr_holy0_static_start = 0x02064300; /* ROM:0x01B58000 */
		_binary_baserom_vr_holy0_static_end = 0x02074300; /* ROM:0x01B68000 */
		_vr_holy0_staticSegmentDataEnd   = 0x02074300; /* ROM:0x01B68000 */
		_vr_holy0_staticSegmentDataSize  = 0x00010000; /* ROM:0xFFB03D00 */
		_vr_holy0_staticSegmentRomEnd    = 0x01B68000; /* ROM:0x0165BD00 */

/* vr_holy0_static.bss */
		_vr_holy0_staticSegmentEnd       = 0x02074300; /* ROM:0x01B68000 */
		_vr_holy0_pal_staticSegmentRomStart = 0x01B68000; /* ROM:0x0165BD00 */

/* vr_holy0_pal_static */
		_vr_holy0_pal_staticSegmentStart = 0x02074300; /* ROM:0x01B68000 */
		_vr_holy0_pal_staticSegmentDataStart = 0x02074300; /* ROM:0x01B68000 */
		_binary_baserom_vr_holy0_pal_static_start = 0x02074300; /* ROM:0x01B68000 */
		_binary_baserom_vr_holy0_pal_static_end = 0x02074400; /* ROM:0x01B68100 */
		_vr_holy0_pal_staticSegmentDataEnd = 0x02074400; /* ROM:0x01B68100 */
		_vr_holy0_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAF3E00 */
		_vr_holy0_pal_staticSegmentRomEnd = 0x01B68100; /* ROM:0x0165BE00 */

/* vr_holy0_pal_static.bss */
		_vr_holy0_pal_staticSegmentEnd   = 0x02074400; /* ROM:0x01B68100 */
		_vr_holy1_staticSegmentRomStart  = 0x01B69000; /* ROM:0x0165CD00 */

/* vr_holy1_static */
		_vr_holy1_staticSegmentStart     = 0x02074400; /* ROM:0x01B69000 */
		_vr_holy1_staticSegmentDataStart = 0x02074400; /* ROM:0x01B69000 */
		_binary_baserom_vr_holy1_static_start = 0x02074400; /* ROM:0x01B69000 */
		_binary_baserom_vr_holy1_static_end = 0x02084400; /* ROM:0x01B79000 */
		_vr_holy1_staticSegmentDataEnd   = 0x02084400; /* ROM:0x01B79000 */
		_vr_holy1_staticSegmentDataSize  = 0x00010000; /* ROM:0xFFB04C00 */
		_vr_holy1_staticSegmentRomEnd    = 0x01B79000; /* ROM:0x0166DC00 */

/* vr_holy1_static.bss */
		_vr_holy1_staticSegmentEnd       = 0x02084400; /* ROM:0x01B79000 */
		_vr_holy1_pal_staticSegmentRomStart = 0x01B79000; /* ROM:0x0166DC00 */

/* vr_holy1_pal_static */
		_vr_holy1_pal_staticSegmentStart = 0x02084400; /* ROM:0x01B79000 */
		_vr_holy1_pal_staticSegmentDataStart = 0x02084400; /* ROM:0x01B79000 */
		_binary_baserom_vr_holy1_pal_static_start = 0x02084400; /* ROM:0x01B79000 */
		_binary_baserom_vr_holy1_pal_static_end = 0x02084500; /* ROM:0x01B79100 */
		_vr_holy1_pal_staticSegmentDataEnd = 0x02084500; /* ROM:0x01B79100 */
		_vr_holy1_pal_staticSegmentDataSize = 0x00000100; /* ROM:0xFFAF4D00 */
		_vr_holy1_pal_staticSegmentRomEnd = 0x01B79100; /* ROM:0x0166DD00 */

/* vr_holy1_pal_static.bss */
		_vr_holy1_pal_staticSegmentEnd   = 0x02084500; /* ROM:0x01B79100 */
		_vr_MDVR_staticSegmentRomStart   = 0x01B7A000; /* ROM:0x0166EC00 */

/* vr_MDVR_static */
		_vr_MDVR_staticSegmentStart      = 0x02084500; /* ROM:0x01B7A000 */
		_vr_MDVR_staticSegmentDataStart  = 0x02084500; /* ROM:0x01B7A000 */
		_binary_baserom_vr_MDVR_static_start = 0x02084500; /* ROM:0x01B7A000 */
		_binary_baserom_vr_MDVR_static_end = 0x020C4500; /* ROM:0x01BBA000 */
		_vr_MDVR_staticSegmentDataEnd    = 0x020C4500; /* ROM:0x01BBA000 */
		_vr_MDVR_staticSegmentDataSize   = 0x00040000; /* ROM:0xFFB35B00 */
		_vr_MDVR_staticSegmentRomEnd     = 0x01BBA000; /* ROM:0x016AFB00 */

/* vr_MDVR_static.bss */
		_vr_MDVR_staticSegmentEnd        = 0x020C4500; /* ROM:0x01BBA000 */
		_vr_MDVR_pal_staticSegmentRomStart = 0x01BBA000; /* ROM:0x016AFB00 */

/* vr_MDVR_pal_static */
		_vr_MDVR_pal_staticSegmentStart  = 0x020C4500; /* ROM:0x01BBA000 */
		_vr_MDVR_pal_staticSegmentDataStart = 0x020C4500; /* ROM:0x01BBA000 */
		_binary_baserom_vr_MDVR_pal_static_start = 0x020C4500; /* ROM:0x01BBA000 */
		_binary_baserom_vr_MDVR_pal_static_end = 0x020C4D00; /* ROM:0x01BBA800 */
		_vr_MDVR_pal_staticSegmentDataEnd = 0x020C4D00; /* ROM:0x01BBA800 */
		_vr_MDVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFAF6300 */
		_vr_MDVR_pal_staticSegmentRomEnd = 0x01BBA800; /* ROM:0x016B0300 */

/* vr_MDVR_pal_static.bss */
		_vr_MDVR_pal_staticSegmentEnd    = 0x020C4D00; /* ROM:0x01BBA800 */
		_vr_MNVR_staticSegmentRomStart   = 0x01BBB000; /* ROM:0x016B0B00 */

/* vr_MNVR_static */
		_vr_MNVR_staticSegmentStart      = 0x020C4D00; /* ROM:0x01BBB000 */
		_vr_MNVR_staticSegmentDataStart  = 0x020C4D00; /* ROM:0x01BBB000 */
		_binary_baserom_vr_MNVR_static_start = 0x020C4D00; /* ROM:0x01BBB000 */
		_binary_baserom_vr_MNVR_static_end = 0x02104D00; /* ROM:0x01BFB000 */
		_vr_MNVR_staticSegmentDataEnd    = 0x02104D00; /* ROM:0x01BFB000 */
		_vr_MNVR_staticSegmentDataSize   = 0x00040000; /* ROM:0xFFB36300 */
		_vr_MNVR_staticSegmentRomEnd     = 0x01BFB000; /* ROM:0x016F1300 */

/* vr_MNVR_static.bss */
		_vr_MNVR_staticSegmentEnd        = 0x02104D00; /* ROM:0x01BFB000 */
		_vr_MNVR_pal_staticSegmentRomStart = 0x01BFB000; /* ROM:0x016F1300 */

/* vr_MNVR_pal_static */
		_vr_MNVR_pal_staticSegmentStart  = 0x02104D00; /* ROM:0x01BFB000 */
		_vr_MNVR_pal_staticSegmentDataStart = 0x02104D00; /* ROM:0x01BFB000 */
		_binary_baserom_vr_MNVR_pal_static_start = 0x02104D00; /* ROM:0x01BFB000 */
		_binary_baserom_vr_MNVR_pal_static_end = 0x02105500; /* ROM:0x01BFB800 */
		_vr_MNVR_pal_staticSegmentDataEnd = 0x02105500; /* ROM:0x01BFB800 */
		_vr_MNVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFAF6B00 */
		_vr_MNVR_pal_staticSegmentRomEnd = 0x01BFB800; /* ROM:0x016F1B00 */

/* vr_MNVR_pal_static.bss */
		_vr_MNVR_pal_staticSegmentEnd    = 0x02105500; /* ROM:0x01BFB800 */
		_vr_RUVR_staticSegmentRomStart   = 0x01BFC000; /* ROM:0x016F2300 */

/* vr_RUVR_static */
		_vr_RUVR_staticSegmentStart      = 0x02105500; /* ROM:0x01BFC000 */
		_vr_RUVR_staticSegmentDataStart  = 0x02105500; /* ROM:0x01BFC000 */
		_binary_baserom_vr_RUVR_static_start = 0x02105500; /* ROM:0x01BFC000 */
		_binary_baserom_vr_RUVR_static_end = 0x02145500; /* ROM:0x01C3C000 */
		_vr_RUVR_staticSegmentDataEnd    = 0x02145500; /* ROM:0x01C3C000 */
		_vr_RUVR_staticSegmentDataSize   = 0x00040000; /* ROM:0xFFB36B00 */
		_vr_RUVR_staticSegmentRomEnd     = 0x01C3C000; /* ROM:0x01732B00 */

/* vr_RUVR_static.bss */
		_vr_RUVR_staticSegmentEnd        = 0x02145500; /* ROM:0x01C3C000 */
		_vr_RUVR_pal_staticSegmentRomStart = 0x01C3C000; /* ROM:0x01732B00 */

/* vr_RUVR_pal_static */
		_vr_RUVR_pal_staticSegmentStart  = 0x02145500; /* ROM:0x01C3C000 */
		_vr_RUVR_pal_staticSegmentDataStart = 0x02145500; /* ROM:0x01C3C000 */
		_binary_baserom_vr_RUVR_pal_static_start = 0x02145500; /* ROM:0x01C3C000 */
		_binary_baserom_vr_RUVR_pal_static_end = 0x02145D00; /* ROM:0x01C3C800 */
		_vr_RUVR_pal_staticSegmentDataEnd = 0x02145D00; /* ROM:0x01C3C800 */
		_vr_RUVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFAF7300 */
		_vr_RUVR_pal_staticSegmentRomEnd = 0x01C3C800; /* ROM:0x01733300 */

/* vr_RUVR_pal_static.bss */
		_vr_RUVR_pal_staticSegmentEnd    = 0x02145D00; /* ROM:0x01C3C800 */
		_vr_LHVR_staticSegmentRomStart   = 0x01C3D000; /* ROM:0x01733B00 */

/* vr_LHVR_static */
		_vr_LHVR_staticSegmentStart      = 0x02145D00; /* ROM:0x01C3D000 */
		_vr_LHVR_staticSegmentDataStart  = 0x02145D00; /* ROM:0x01C3D000 */
		_binary_baserom_vr_LHVR_static_start = 0x02145D00; /* ROM:0x01C3D000 */
		_binary_baserom_vr_LHVR_static_end = 0x02185D00; /* ROM:0x01C7D000 */
		_vr_LHVR_staticSegmentDataEnd    = 0x02185D00; /* ROM:0x01C7D000 */
		_vr_LHVR_staticSegmentDataSize   = 0x00040000; /* ROM:0xFFB37300 */
		_vr_LHVR_staticSegmentRomEnd     = 0x01C7D000; /* ROM:0x01774300 */

/* vr_LHVR_static.bss */
		_vr_LHVR_staticSegmentEnd        = 0x02185D00; /* ROM:0x01C7D000 */
		_vr_LHVR_pal_staticSegmentRomStart = 0x01C7D000; /* ROM:0x01774300 */

/* vr_LHVR_pal_static */
		_vr_LHVR_pal_staticSegmentStart  = 0x02185D00; /* ROM:0x01C7D000 */
		_vr_LHVR_pal_staticSegmentDataStart = 0x02185D00; /* ROM:0x01C7D000 */
		_binary_baserom_vr_LHVR_pal_static_start = 0x02185D00; /* ROM:0x01C7D000 */
		_binary_baserom_vr_LHVR_pal_static_end = 0x02186500; /* ROM:0x01C7D800 */
		_vr_LHVR_pal_staticSegmentDataEnd = 0x02186500; /* ROM:0x01C7D800 */
		_vr_LHVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFAF7B00 */
		_vr_LHVR_pal_staticSegmentRomEnd = 0x01C7D800; /* ROM:0x01774B00 */

/* vr_LHVR_pal_static.bss */
		_vr_LHVR_pal_staticSegmentEnd    = 0x02186500; /* ROM:0x01C7D800 */
		_vr_KHVR_staticSegmentRomStart   = 0x01C7E000; /* ROM:0x01775300 */

/* vr_KHVR_static */
		_vr_KHVR_staticSegmentStart      = 0x02186500; /* ROM:0x01C7E000 */
		_vr_KHVR_staticSegmentDataStart  = 0x02186500; /* ROM:0x01C7E000 */
		_binary_baserom_vr_KHVR_static_start = 0x02186500; /* ROM:0x01C7E000 */
		_binary_baserom_vr_KHVR_static_end = 0x021C6500; /* ROM:0x01CBE000 */
		_vr_KHVR_staticSegmentDataEnd    = 0x021C6500; /* ROM:0x01CBE000 */
		_vr_KHVR_staticSegmentDataSize   = 0x00040000; /* ROM:0xFFB37B00 */
		_vr_KHVR_staticSegmentRomEnd     = 0x01CBE000; /* ROM:0x017B5B00 */

/* vr_KHVR_static.bss */
		_vr_KHVR_staticSegmentEnd        = 0x021C6500; /* ROM:0x01CBE000 */
		_vr_KHVR_pal_staticSegmentRomStart = 0x01CBE000; /* ROM:0x017B5B00 */

/* vr_KHVR_pal_static */
		_vr_KHVR_pal_staticSegmentStart  = 0x021C6500; /* ROM:0x01CBE000 */
		_vr_KHVR_pal_staticSegmentDataStart = 0x021C6500; /* ROM:0x01CBE000 */
		_binary_baserom_vr_KHVR_pal_static_start = 0x021C6500; /* ROM:0x01CBE000 */
		_binary_baserom_vr_KHVR_pal_static_end = 0x021C6D00; /* ROM:0x01CBE800 */
		_vr_KHVR_pal_staticSegmentDataEnd = 0x021C6D00; /* ROM:0x01CBE800 */
		_vr_KHVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFAF8300 */
		_vr_KHVR_pal_staticSegmentRomEnd = 0x01CBE800; /* ROM:0x017B6300 */

/* vr_KHVR_pal_static.bss */
		_vr_KHVR_pal_staticSegmentEnd    = 0x021C6D00; /* ROM:0x01CBE800 */
		_vr_K3VR_staticSegmentRomStart   = 0x01CBF000; /* ROM:0x017B6B00 */

/* vr_K3VR_static */
		_vr_K3VR_staticSegmentStart      = 0x021C6D00; /* ROM:0x01CBF000 */
		_vr_K3VR_staticSegmentDataStart  = 0x021C6D00; /* ROM:0x01CBF000 */
		_binary_baserom_vr_K3VR_static_start = 0x021C6D00; /* ROM:0x01CBF000 */
		_binary_baserom_vr_K3VR_static_end = 0x021F6D00; /* ROM:0x01CEF000 */
		_vr_K3VR_staticSegmentDataEnd    = 0x021F6D00; /* ROM:0x01CEF000 */
		_vr_K3VR_staticSegmentDataSize   = 0x00030000; /* ROM:0xFFB28300 */
		_vr_K3VR_staticSegmentRomEnd     = 0x01CEF000; /* ROM:0x017E7300 */

/* vr_K3VR_static.bss */
		_vr_K3VR_staticSegmentEnd        = 0x021F6D00; /* ROM:0x01CEF000 */
		_vr_K3VR_pal_staticSegmentRomStart = 0x01CEF000; /* ROM:0x017E7300 */

/* vr_K3VR_pal_static */
		_vr_K3VR_pal_staticSegmentStart  = 0x021F6D00; /* ROM:0x01CEF000 */
		_vr_K3VR_pal_staticSegmentDataStart = 0x021F6D00; /* ROM:0x01CEF000 */
		_binary_baserom_vr_K3VR_pal_static_start = 0x021F6D00; /* ROM:0x01CEF000 */
		_binary_baserom_vr_K3VR_pal_static_end = 0x021F7300; /* ROM:0x01CEF600 */
		_vr_K3VR_pal_staticSegmentDataEnd = 0x021F7300; /* ROM:0x01CEF600 */
		_vr_K3VR_pal_staticSegmentDataSize = 0x00000600; /* ROM:0xFFAF8900 */
		_vr_K3VR_pal_staticSegmentRomEnd = 0x01CEF600; /* ROM:0x017E7900 */

/* vr_K3VR_pal_static.bss */
		_vr_K3VR_pal_staticSegmentEnd    = 0x021F7300; /* ROM:0x01CEF600 */
		_vr_K4VR_staticSegmentRomStart   = 0x01CF0000; /* ROM:0x017E8300 */

/* vr_K4VR_static */
		_vr_K4VR_staticSegmentStart      = 0x021F7300; /* ROM:0x01CF0000 */
		_vr_K4VR_staticSegmentDataStart  = 0x021F7300; /* ROM:0x01CF0000 */
		_binary_baserom_vr_K4VR_static_start = 0x021F7300; /* ROM:0x01CF0000 */
		_binary_baserom_vr_K4VR_static_end = 0x02227300; /* ROM:0x01D20000 */
		_vr_K4VR_staticSegmentDataEnd    = 0x02227300; /* ROM:0x01D20000 */
		_vr_K4VR_staticSegmentDataSize   = 0x00030000; /* ROM:0xFFB28D00 */
		_vr_K4VR_staticSegmentRomEnd     = 0x01D20000; /* ROM:0x01818D00 */

/* vr_K4VR_static.bss */
		_vr_K4VR_staticSegmentEnd        = 0x02227300; /* ROM:0x01D20000 */
		_vr_K4VR_pal_staticSegmentRomStart = 0x01D20000; /* ROM:0x01818D00 */

/* vr_K4VR_pal_static */
		_vr_K4VR_pal_staticSegmentStart  = 0x02227300; /* ROM:0x01D20000 */
		_vr_K4VR_pal_staticSegmentDataStart = 0x02227300; /* ROM:0x01D20000 */
		_binary_baserom_vr_K4VR_pal_static_start = 0x02227300; /* ROM:0x01D20000 */
		_binary_baserom_vr_K4VR_pal_static_end = 0x02227900; /* ROM:0x01D20600 */
		_vr_K4VR_pal_staticSegmentDataEnd = 0x02227900; /* ROM:0x01D20600 */
		_vr_K4VR_pal_staticSegmentDataSize = 0x00000600; /* ROM:0xFFAF9300 */
		_vr_K4VR_pal_staticSegmentRomEnd = 0x01D20600; /* ROM:0x01819300 */

/* vr_K4VR_pal_static.bss */
		_vr_K4VR_pal_staticSegmentEnd    = 0x02227900; /* ROM:0x01D20600 */
		_vr_K5VR_staticSegmentRomStart   = 0x01D21000; /* ROM:0x01819D00 */

/* vr_K5VR_static */
		_vr_K5VR_staticSegmentStart      = 0x02227900; /* ROM:0x01D21000 */
		_vr_K5VR_staticSegmentDataStart  = 0x02227900; /* ROM:0x01D21000 */
		_binary_baserom_vr_K5VR_static_start = 0x02227900; /* ROM:0x01D21000 */
		_binary_baserom_vr_K5VR_static_end = 0x02257900; /* ROM:0x01D51000 */
		_vr_K5VR_staticSegmentDataEnd    = 0x02257900; /* ROM:0x01D51000 */
		_vr_K5VR_staticSegmentDataSize   = 0x00030000; /* ROM:0xFFB29700 */
		_vr_K5VR_staticSegmentRomEnd     = 0x01D51000; /* ROM:0x0184A700 */

/* vr_K5VR_static.bss */
		_vr_K5VR_staticSegmentEnd        = 0x02257900; /* ROM:0x01D51000 */
		_vr_K5VR_pal_staticSegmentRomStart = 0x01D51000; /* ROM:0x0184A700 */

/* vr_K5VR_pal_static */
		_vr_K5VR_pal_staticSegmentStart  = 0x02257900; /* ROM:0x01D51000 */
		_vr_K5VR_pal_staticSegmentDataStart = 0x02257900; /* ROM:0x01D51000 */
		_binary_baserom_vr_K5VR_pal_static_start = 0x02257900; /* ROM:0x01D51000 */
		_binary_baserom_vr_K5VR_pal_static_end = 0x02257F00; /* ROM:0x01D51600 */
		_vr_K5VR_pal_staticSegmentDataEnd = 0x02257F00; /* ROM:0x01D51600 */
		_vr_K5VR_pal_staticSegmentDataSize = 0x00000600; /* ROM:0xFFAF9D00 */
		_vr_K5VR_pal_staticSegmentRomEnd = 0x01D51600; /* ROM:0x0184AD00 */

/* vr_K5VR_pal_static.bss */
		_vr_K5VR_pal_staticSegmentEnd    = 0x02257F00; /* ROM:0x01D51600 */
		_vr_SP1a_staticSegmentRomStart   = 0x01D52000; /* ROM:0x0184B700 */

/* vr_SP1a_static */
		_vr_SP1a_staticSegmentStart      = 0x02257F00; /* ROM:0x01D52000 */
		_vr_SP1a_staticSegmentDataStart  = 0x02257F00; /* ROM:0x01D52000 */
		_binary_baserom_vr_SP1a_static_start = 0x02257F00; /* ROM:0x01D52000 */
		_binary_baserom_vr_SP1a_static_end = 0x02277F00; /* ROM:0x01D72000 */
		_vr_SP1a_staticSegmentDataEnd    = 0x02277F00; /* ROM:0x01D72000 */
		_vr_SP1a_staticSegmentDataSize   = 0x00020000; /* ROM:0xFFB1A100 */
		_vr_SP1a_staticSegmentRomEnd     = 0x01D72000; /* ROM:0x0186C100 */

/* vr_SP1a_static.bss */
		_vr_SP1a_staticSegmentEnd        = 0x02277F00; /* ROM:0x01D72000 */
		_vr_SP1a_pal_staticSegmentRomStart = 0x01D72000; /* ROM:0x0186C100 */

/* vr_SP1a_pal_static */
		_vr_SP1a_pal_staticSegmentStart  = 0x02277F00; /* ROM:0x01D72000 */
		_vr_SP1a_pal_staticSegmentDataStart = 0x02277F00; /* ROM:0x01D72000 */
		_binary_baserom_vr_SP1a_pal_static_start = 0x02277F00; /* ROM:0x01D72000 */
		_binary_baserom_vr_SP1a_pal_static_end = 0x02278300; /* ROM:0x01D72400 */
		_vr_SP1a_pal_staticSegmentDataEnd = 0x02278300; /* ROM:0x01D72400 */
		_vr_SP1a_pal_staticSegmentDataSize = 0x00000400; /* ROM:0xFFAFA500 */
		_vr_SP1a_pal_staticSegmentRomEnd = 0x01D72400; /* ROM:0x0186C500 */

/* vr_SP1a_pal_static.bss */
		_vr_SP1a_pal_staticSegmentEnd    = 0x02278300; /* ROM:0x01D72400 */
		_vr_MLVR_staticSegmentRomStart   = 0x01D73000; /* ROM:0x0186D100 */

/* vr_MLVR_static */
		_vr_MLVR_staticSegmentStart      = 0x02278300; /* ROM:0x01D73000 */
		_vr_MLVR_staticSegmentDataStart  = 0x02278300; /* ROM:0x01D73000 */
		_binary_baserom_vr_MLVR_static_start = 0x02278300; /* ROM:0x01D73000 */
		_binary_baserom_vr_MLVR_static_end = 0x022B8300; /* ROM:0x01DB3000 */
		_vr_MLVR_staticSegmentDataEnd    = 0x022B8300; /* ROM:0x01DB3000 */
		_vr_MLVR_staticSegmentDataSize   = 0x00040000; /* ROM:0xFFB3AD00 */
		_vr_MLVR_staticSegmentRomEnd     = 0x01DB3000; /* ROM:0x018ADD00 */

/* vr_MLVR_static.bss */
		_vr_MLVR_staticSegmentEnd        = 0x022B8300; /* ROM:0x01DB3000 */
		_vr_MLVR_pal_staticSegmentRomStart = 0x01DB3000; /* ROM:0x018ADD00 */

/* vr_MLVR_pal_static */
		_vr_MLVR_pal_staticSegmentStart  = 0x022B8300; /* ROM:0x01DB3000 */
		_vr_MLVR_pal_staticSegmentDataStart = 0x022B8300; /* ROM:0x01DB3000 */
		_binary_baserom_vr_MLVR_pal_static_start = 0x022B8300; /* ROM:0x01DB3000 */
		_binary_baserom_vr_MLVR_pal_static_end = 0x022B8B00; /* ROM:0x01DB3800 */
		_vr_MLVR_pal_staticSegmentDataEnd = 0x022B8B00; /* ROM:0x01DB3800 */
		_vr_MLVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFAFB500 */
		_vr_MLVR_pal_staticSegmentRomEnd = 0x01DB3800; /* ROM:0x018AE500 */

/* vr_MLVR_pal_static.bss */
		_vr_MLVR_pal_staticSegmentEnd    = 0x022B8B00; /* ROM:0x01DB3800 */
		_vr_KKRVR_staticSegmentRomStart  = 0x01DB4000; /* ROM:0x018AED00 */

/* vr_KKRVR_static */
		_vr_KKRVR_staticSegmentStart     = 0x022B8B00; /* ROM:0x01DB4000 */
		_vr_KKRVR_staticSegmentDataStart = 0x022B8B00; /* ROM:0x01DB4000 */
		_binary_baserom_vr_KKRVR_static_start = 0x022B8B00; /* ROM:0x01DB4000 */
		_binary_baserom_vr_KKRVR_static_end = 0x022F8B00; /* ROM:0x01DF4000 */
		_vr_KKRVR_staticSegmentDataEnd   = 0x022F8B00; /* ROM:0x01DF4000 */
		_vr_KKRVR_staticSegmentDataSize  = 0x00040000; /* ROM:0xFFB3B500 */
		_vr_KKRVR_staticSegmentRomEnd    = 0x01DF4000; /* ROM:0x018EF500 */

/* vr_KKRVR_static.bss */
		_vr_KKRVR_staticSegmentEnd       = 0x022F8B00; /* ROM:0x01DF4000 */
		_vr_KKRVR_pal_staticSegmentRomStart = 0x01DF4000; /* ROM:0x018EF500 */

/* vr_KKRVR_pal_static */
		_vr_KKRVR_pal_staticSegmentStart = 0x022F8B00; /* ROM:0x01DF4000 */
		_vr_KKRVR_pal_staticSegmentDataStart = 0x022F8B00; /* ROM:0x01DF4000 */
		_binary_baserom_vr_KKRVR_pal_static_start = 0x022F8B00; /* ROM:0x01DF4000 */
		_binary_baserom_vr_KKRVR_pal_static_end = 0x022F9300; /* ROM:0x01DF4800 */
		_vr_KKRVR_pal_staticSegmentDataEnd = 0x022F9300; /* ROM:0x01DF4800 */
		_vr_KKRVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFAFBD00 */
		_vr_KKRVR_pal_staticSegmentRomEnd = 0x01DF4800; /* ROM:0x018EFD00 */

/* vr_KKRVR_pal_static.bss */
		_vr_KKRVR_pal_staticSegmentEnd   = 0x022F9300; /* ROM:0x01DF4800 */
		_vr_KR3VR_staticSegmentRomStart  = 0x01DF5000; /* ROM:0x018F0500 */

/* vr_KR3VR_static */
		_vr_KR3VR_staticSegmentStart     = 0x022F9300; /* ROM:0x01DF5000 */
		_vr_KR3VR_staticSegmentDataStart = 0x022F9300; /* ROM:0x01DF5000 */
		_binary_baserom_vr_KR3VR_static_start = 0x022F9300; /* ROM:0x01DF5000 */
		_binary_baserom_vr_KR3VR_static_end = 0x02329300; /* ROM:0x01E25000 */
		_vr_KR3VR_staticSegmentDataEnd   = 0x02329300; /* ROM:0x01E25000 */
		_vr_KR3VR_staticSegmentDataSize  = 0x00030000; /* ROM:0xFFB2BD00 */
		_vr_KR3VR_staticSegmentRomEnd    = 0x01E25000; /* ROM:0x01920D00 */

/* vr_KR3VR_static.bss */
		_vr_KR3VR_staticSegmentEnd       = 0x02329300; /* ROM:0x01E25000 */
		_vr_KR3VR_pal_staticSegmentRomStart = 0x01E25000; /* ROM:0x01920D00 */

/* vr_KR3VR_pal_static */
		_vr_KR3VR_pal_staticSegmentStart = 0x02329300; /* ROM:0x01E25000 */
		_vr_KR3VR_pal_staticSegmentDataStart = 0x02329300; /* ROM:0x01E25000 */
		_binary_baserom_vr_KR3VR_pal_static_start = 0x02329300; /* ROM:0x01E25000 */
		_binary_baserom_vr_KR3VR_pal_static_end = 0x02329900; /* ROM:0x01E25600 */
		_vr_KR3VR_pal_staticSegmentDataEnd = 0x02329900; /* ROM:0x01E25600 */
		_vr_KR3VR_pal_staticSegmentDataSize = 0x00000600; /* ROM:0xFFAFC300 */
		_vr_KR3VR_pal_staticSegmentRomEnd = 0x01E25600; /* ROM:0x01921300 */

/* vr_KR3VR_pal_static.bss */
		_vr_KR3VR_pal_staticSegmentEnd   = 0x02329900; /* ROM:0x01E25600 */
		_vr_IPVR_staticSegmentRomStart   = 0x01E26000; /* ROM:0x01921D00 */

/* vr_IPVR_static */
		_vr_IPVR_staticSegmentStart      = 0x02329900; /* ROM:0x01E26000 */
		_vr_IPVR_staticSegmentDataStart  = 0x02329900; /* ROM:0x01E26000 */
		_binary_baserom_vr_IPVR_static_start = 0x02329900; /* ROM:0x01E26000 */
		_binary_baserom_vr_IPVR_static_end = 0x02369900; /* ROM:0x01E66000 */
		_vr_IPVR_staticSegmentDataEnd    = 0x02369900; /* ROM:0x01E66000 */
		_vr_IPVR_staticSegmentDataSize   = 0x00040000; /* ROM:0xFFB3C700 */
		_vr_IPVR_staticSegmentRomEnd     = 0x01E66000; /* ROM:0x01962700 */

/* vr_IPVR_static.bss */
		_vr_IPVR_staticSegmentEnd        = 0x02369900; /* ROM:0x01E66000 */
		_vr_IPVR_pal_staticSegmentRomStart = 0x01E66000; /* ROM:0x01962700 */

/* vr_IPVR_pal_static */
		_vr_IPVR_pal_staticSegmentStart  = 0x02369900; /* ROM:0x01E66000 */
		_vr_IPVR_pal_staticSegmentDataStart = 0x02369900; /* ROM:0x01E66000 */
		_binary_baserom_vr_IPVR_pal_static_start = 0x02369900; /* ROM:0x01E66000 */
		_binary_baserom_vr_IPVR_pal_static_end = 0x0236A100; /* ROM:0x01E66800 */
		_vr_IPVR_pal_staticSegmentDataEnd = 0x0236A100; /* ROM:0x01E66800 */
		_vr_IPVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFAFCF00 */
		_vr_IPVR_pal_staticSegmentRomEnd = 0x01E66800; /* ROM:0x01962F00 */

/* vr_IPVR_pal_static.bss */
		_vr_IPVR_pal_staticSegmentEnd    = 0x0236A100; /* ROM:0x01E66800 */
		_vr_KSVR_staticSegmentRomStart   = 0x01E67000; /* ROM:0x01963700 */

/* vr_KSVR_static */
		_vr_KSVR_staticSegmentStart      = 0x0236A100; /* ROM:0x01E67000 */
		_vr_KSVR_staticSegmentDataStart  = 0x0236A100; /* ROM:0x01E67000 */
		_binary_baserom_vr_KSVR_static_start = 0x0236A100; /* ROM:0x01E67000 */
		_binary_baserom_vr_KSVR_static_end = 0x0238A100; /* ROM:0x01E87000 */
		_vr_KSVR_staticSegmentDataEnd    = 0x0238A100; /* ROM:0x01E87000 */
		_vr_KSVR_staticSegmentDataSize   = 0x00020000; /* ROM:0xFFB1CF00 */
		_vr_KSVR_staticSegmentRomEnd     = 0x01E87000; /* ROM:0x01983F00 */

/* vr_KSVR_static.bss */
		_vr_KSVR_staticSegmentEnd        = 0x0238A100; /* ROM:0x01E87000 */
		_vr_KSVR_pal_staticSegmentRomStart = 0x01E87000; /* ROM:0x01983F00 */

/* vr_KSVR_pal_static */
		_vr_KSVR_pal_staticSegmentStart  = 0x0238A100; /* ROM:0x01E87000 */
		_vr_KSVR_pal_staticSegmentDataStart = 0x0238A100; /* ROM:0x01E87000 */
		_binary_baserom_vr_KSVR_pal_static_start = 0x0238A100; /* ROM:0x01E87000 */
		_binary_baserom_vr_KSVR_pal_static_end = 0x0238A500; /* ROM:0x01E87400 */
		_vr_KSVR_pal_staticSegmentDataEnd = 0x0238A500; /* ROM:0x01E87400 */
		_vr_KSVR_pal_staticSegmentDataSize = 0x00000400; /* ROM:0xFFAFD300 */
		_vr_KSVR_pal_staticSegmentRomEnd = 0x01E87400; /* ROM:0x01984300 */

/* vr_KSVR_pal_static.bss */
		_vr_KSVR_pal_staticSegmentEnd    = 0x0238A500; /* ROM:0x01E87400 */
		_vr_GLVR_staticSegmentRomStart   = 0x01E88000; /* ROM:0x01984F00 */

/* vr_GLVR_static */
		_vr_GLVR_staticSegmentStart      = 0x0238A500; /* ROM:0x01E88000 */
		_vr_GLVR_staticSegmentDataStart  = 0x0238A500; /* ROM:0x01E88000 */
		_binary_baserom_vr_GLVR_static_start = 0x0238A500; /* ROM:0x01E88000 */
		_binary_baserom_vr_GLVR_static_end = 0x023AA500; /* ROM:0x01EA8000 */
		_vr_GLVR_staticSegmentDataEnd    = 0x023AA500; /* ROM:0x01EA8000 */
		_vr_GLVR_staticSegmentDataSize   = 0x00020000; /* ROM:0xFFB1DB00 */
		_vr_GLVR_staticSegmentRomEnd     = 0x01EA8000; /* ROM:0x019A5B00 */

/* vr_GLVR_static.bss */
		_vr_GLVR_staticSegmentEnd        = 0x023AA500; /* ROM:0x01EA8000 */
		_vr_GLVR_pal_staticSegmentRomStart = 0x01EA8000; /* ROM:0x019A5B00 */

/* vr_GLVR_pal_static */
		_vr_GLVR_pal_staticSegmentStart  = 0x023AA500; /* ROM:0x01EA8000 */
		_vr_GLVR_pal_staticSegmentDataStart = 0x023AA500; /* ROM:0x01EA8000 */
		_binary_baserom_vr_GLVR_pal_static_start = 0x023AA500; /* ROM:0x01EA8000 */
		_binary_baserom_vr_GLVR_pal_static_end = 0x023AA900; /* ROM:0x01EA8400 */
		_vr_GLVR_pal_staticSegmentDataEnd = 0x023AA900; /* ROM:0x01EA8400 */
		_vr_GLVR_pal_staticSegmentDataSize = 0x00000400; /* ROM:0xFFAFDF00 */
		_vr_GLVR_pal_staticSegmentRomEnd = 0x01EA8400; /* ROM:0x019A5F00 */

/* vr_GLVR_pal_static.bss */
		_vr_GLVR_pal_staticSegmentEnd    = 0x023AA900; /* ROM:0x01EA8400 */
		_vr_ZRVR_staticSegmentRomStart   = 0x01EA9000; /* ROM:0x019A6B00 */

/* vr_ZRVR_static */
		_vr_ZRVR_staticSegmentStart      = 0x023AA900; /* ROM:0x01EA9000 */
		_vr_ZRVR_staticSegmentDataStart  = 0x023AA900; /* ROM:0x01EA9000 */
		_binary_baserom_vr_ZRVR_static_start = 0x023AA900; /* ROM:0x01EA9000 */
		_binary_baserom_vr_ZRVR_static_end = 0x023CA900; /* ROM:0x01EC9000 */
		_vr_ZRVR_staticSegmentDataEnd    = 0x023CA900; /* ROM:0x01EC9000 */
		_vr_ZRVR_staticSegmentDataSize   = 0x00020000; /* ROM:0xFFB1E700 */
		_vr_ZRVR_staticSegmentRomEnd     = 0x01EC9000; /* ROM:0x019C7700 */

/* vr_ZRVR_static.bss */
		_vr_ZRVR_staticSegmentEnd        = 0x023CA900; /* ROM:0x01EC9000 */
		_vr_ZRVR_pal_staticSegmentRomStart = 0x01EC9000; /* ROM:0x019C7700 */

/* vr_ZRVR_pal_static */
		_vr_ZRVR_pal_staticSegmentStart  = 0x023CA900; /* ROM:0x01EC9000 */
		_vr_ZRVR_pal_staticSegmentDataStart = 0x023CA900; /* ROM:0x01EC9000 */
		_binary_baserom_vr_ZRVR_pal_static_start = 0x023CA900; /* ROM:0x01EC9000 */
		_binary_baserom_vr_ZRVR_pal_static_end = 0x023CAD00; /* ROM:0x01EC9400 */
		_vr_ZRVR_pal_staticSegmentDataEnd = 0x023CAD00; /* ROM:0x01EC9400 */
		_vr_ZRVR_pal_staticSegmentDataSize = 0x00000400; /* ROM:0xFFAFEB00 */
		_vr_ZRVR_pal_staticSegmentRomEnd = 0x01EC9400; /* ROM:0x019C7B00 */

/* vr_ZRVR_pal_static.bss */
		_vr_ZRVR_pal_staticSegmentEnd    = 0x023CAD00; /* ROM:0x01EC9400 */
		_vr_DGVR_staticSegmentRomStart   = 0x01ECA000; /* ROM:0x019C8700 */

/* vr_DGVR_static */
		_vr_DGVR_staticSegmentStart      = 0x023CAD00; /* ROM:0x01ECA000 */
		_vr_DGVR_staticSegmentDataStart  = 0x023CAD00; /* ROM:0x01ECA000 */
		_binary_baserom_vr_DGVR_static_start = 0x023CAD00; /* ROM:0x01ECA000 */
		_binary_baserom_vr_DGVR_static_end = 0x023EAD00; /* ROM:0x01EEA000 */
		_vr_DGVR_staticSegmentDataEnd    = 0x023EAD00; /* ROM:0x01EEA000 */
		_vr_DGVR_staticSegmentDataSize   = 0x00020000; /* ROM:0xFFB1F300 */
		_vr_DGVR_staticSegmentRomEnd     = 0x01EEA000; /* ROM:0x019E9300 */

/* vr_DGVR_static.bss */
		_vr_DGVR_staticSegmentEnd        = 0x023EAD00; /* ROM:0x01EEA000 */
		_vr_DGVR_pal_staticSegmentRomStart = 0x01EEA000; /* ROM:0x019E9300 */

/* vr_DGVR_pal_static */
		_vr_DGVR_pal_staticSegmentStart  = 0x023EAD00; /* ROM:0x01EEA000 */
		_vr_DGVR_pal_staticSegmentDataStart = 0x023EAD00; /* ROM:0x01EEA000 */
		_binary_baserom_vr_DGVR_pal_static_start = 0x023EAD00; /* ROM:0x01EEA000 */
		_binary_baserom_vr_DGVR_pal_static_end = 0x023EB100; /* ROM:0x01EEA400 */
		_vr_DGVR_pal_staticSegmentDataEnd = 0x023EB100; /* ROM:0x01EEA400 */
		_vr_DGVR_pal_staticSegmentDataSize = 0x00000400; /* ROM:0xFFAFF700 */
		_vr_DGVR_pal_staticSegmentRomEnd = 0x01EEA400; /* ROM:0x019E9700 */

/* vr_DGVR_pal_static.bss */
		_vr_DGVR_pal_staticSegmentEnd    = 0x023EB100; /* ROM:0x01EEA400 */
		_vr_ALVR_staticSegmentRomStart   = 0x01EEB000; /* ROM:0x019EA300 */

/* vr_ALVR_static */
		_vr_ALVR_staticSegmentStart      = 0x023EB100; /* ROM:0x01EEB000 */
		_vr_ALVR_staticSegmentDataStart  = 0x023EB100; /* ROM:0x01EEB000 */
		_binary_baserom_vr_ALVR_static_start = 0x023EB100; /* ROM:0x01EEB000 */
		_binary_baserom_vr_ALVR_static_end = 0x0240B100; /* ROM:0x01F0B000 */
		_vr_ALVR_staticSegmentDataEnd    = 0x0240B100; /* ROM:0x01F0B000 */
		_vr_ALVR_staticSegmentDataSize   = 0x00020000; /* ROM:0xFFB1FF00 */
		_vr_ALVR_staticSegmentRomEnd     = 0x01F0B000; /* ROM:0x01A0AF00 */

/* vr_ALVR_static.bss */
		_vr_ALVR_staticSegmentEnd        = 0x0240B100; /* ROM:0x01F0B000 */
		_vr_ALVR_pal_staticSegmentRomStart = 0x01F0B000; /* ROM:0x01A0AF00 */

/* vr_ALVR_pal_static */
		_vr_ALVR_pal_staticSegmentStart  = 0x0240B100; /* ROM:0x01F0B000 */
		_vr_ALVR_pal_staticSegmentDataStart = 0x0240B100; /* ROM:0x01F0B000 */
		_binary_baserom_vr_ALVR_pal_static_start = 0x0240B100; /* ROM:0x01F0B000 */
		_binary_baserom_vr_ALVR_pal_static_end = 0x0240B500; /* ROM:0x01F0B400 */
		_vr_ALVR_pal_staticSegmentDataEnd = 0x0240B500; /* ROM:0x01F0B400 */
		_vr_ALVR_pal_staticSegmentDataSize = 0x00000400; /* ROM:0xFFB00300 */
		_vr_ALVR_pal_staticSegmentRomEnd = 0x01F0B400; /* ROM:0x01A0B300 */

/* vr_ALVR_pal_static.bss */
		_vr_ALVR_pal_staticSegmentEnd    = 0x0240B500; /* ROM:0x01F0B400 */
		_vr_NSVR_staticSegmentRomStart   = 0x01F0C000; /* ROM:0x01A0BF00 */

/* vr_NSVR_static */
		_vr_NSVR_staticSegmentStart      = 0x0240B500; /* ROM:0x01F0C000 */
		_vr_NSVR_staticSegmentDataStart  = 0x0240B500; /* ROM:0x01F0C000 */
		_binary_baserom_vr_NSVR_static_start = 0x0240B500; /* ROM:0x01F0C000 */
		_binary_baserom_vr_NSVR_static_end = 0x0242B500; /* ROM:0x01F2C000 */
		_vr_NSVR_staticSegmentDataEnd    = 0x0242B500; /* ROM:0x01F2C000 */
		_vr_NSVR_staticSegmentDataSize   = 0x00020000; /* ROM:0xFFB20B00 */
		_vr_NSVR_staticSegmentRomEnd     = 0x01F2C000; /* ROM:0x01A2CB00 */

/* vr_NSVR_static.bss */
		_vr_NSVR_staticSegmentEnd        = 0x0242B500; /* ROM:0x01F2C000 */
		_vr_NSVR_pal_staticSegmentRomStart = 0x01F2C000; /* ROM:0x01A2CB00 */

/* vr_NSVR_pal_static */
		_vr_NSVR_pal_staticSegmentStart  = 0x0242B500; /* ROM:0x01F2C000 */
		_vr_NSVR_pal_staticSegmentDataStart = 0x0242B500; /* ROM:0x01F2C000 */
		_binary_baserom_vr_NSVR_pal_static_start = 0x0242B500; /* ROM:0x01F2C000 */
		_binary_baserom_vr_NSVR_pal_static_end = 0x0242B900; /* ROM:0x01F2C400 */
		_vr_NSVR_pal_staticSegmentDataEnd = 0x0242B900; /* ROM:0x01F2C400 */
		_vr_NSVR_pal_staticSegmentDataSize = 0x00000400; /* ROM:0xFFB00F00 */
		_vr_NSVR_pal_staticSegmentRomEnd = 0x01F2C400; /* ROM:0x01A2CF00 */

/* vr_NSVR_pal_static.bss */
		_vr_NSVR_pal_staticSegmentEnd    = 0x0242B900; /* ROM:0x01F2C400 */
		_vr_LBVR_staticSegmentRomStart   = 0x01F2D000; /* ROM:0x01A2DB00 */

/* vr_LBVR_static */
		_vr_LBVR_staticSegmentStart      = 0x0242B900; /* ROM:0x01F2D000 */
		_vr_LBVR_staticSegmentDataStart  = 0x0242B900; /* ROM:0x01F2D000 */
		_binary_baserom_vr_LBVR_static_start = 0x0242B900; /* ROM:0x01F2D000 */
		_binary_baserom_vr_LBVR_static_end = 0x0246B900; /* ROM:0x01F6D000 */
		_vr_LBVR_staticSegmentDataEnd    = 0x0246B900; /* ROM:0x01F6D000 */
		_vr_LBVR_staticSegmentDataSize   = 0x00040000; /* ROM:0xFFB41700 */
		_vr_LBVR_staticSegmentRomEnd     = 0x01F6D000; /* ROM:0x01A6E700 */

/* vr_LBVR_static.bss */
		_vr_LBVR_staticSegmentEnd        = 0x0246B900; /* ROM:0x01F6D000 */
		_vr_LBVR_pal_staticSegmentRomStart = 0x01F6D000; /* ROM:0x01A6E700 */

/* vr_LBVR_pal_static */
		_vr_LBVR_pal_staticSegmentStart  = 0x0246B900; /* ROM:0x01F6D000 */
		_vr_LBVR_pal_staticSegmentDataStart = 0x0246B900; /* ROM:0x01F6D000 */
		_binary_baserom_vr_LBVR_pal_static_start = 0x0246B900; /* ROM:0x01F6D000 */
		_binary_baserom_vr_LBVR_pal_static_end = 0x0246C100; /* ROM:0x01F6D800 */
		_vr_LBVR_pal_staticSegmentDataEnd = 0x0246C100; /* ROM:0x01F6D800 */
		_vr_LBVR_pal_staticSegmentDataSize = 0x00000800; /* ROM:0xFFB01F00 */
		_vr_LBVR_pal_staticSegmentRomEnd = 0x01F6D800; /* ROM:0x01A6EF00 */

/* vr_LBVR_pal_static.bss */
		_vr_LBVR_pal_staticSegmentEnd    = 0x0246C100; /* ROM:0x01F6D800 */
		_vr_TTVR_staticSegmentRomStart   = 0x01F6E000; /* ROM:0x01A6F700 */

/* vr_TTVR_static */
		_vr_TTVR_staticSegmentStart      = 0x0246C100; /* ROM:0x01F6E000 */
		_vr_TTVR_staticSegmentDataStart  = 0x0246C100; /* ROM:0x01F6E000 */
		_binary_baserom_vr_TTVR_static_start = 0x0246C100; /* ROM:0x01F6E000 */
		_binary_baserom_vr_TTVR_static_end = 0x0249C100; /* ROM:0x01F9E000 */
		_vr_TTVR_staticSegmentDataEnd    = 0x0249C100; /* ROM:0x01F9E000 */
		_vr_TTVR_staticSegmentDataSize   = 0x00030000; /* ROM:0xFFB31F00 */
		_vr_TTVR_staticSegmentRomEnd     = 0x01F9E000; /* ROM:0x01A9FF00 */

/* vr_TTVR_static.bss */
		_vr_TTVR_staticSegmentEnd        = 0x0249C100; /* ROM:0x01F9E000 */
		_vr_TTVR_pal_staticSegmentRomStart = 0x01F9E000; /* ROM:0x01A9FF00 */

/* vr_TTVR_pal_static */
		_vr_TTVR_pal_staticSegmentStart  = 0x0249C100; /* ROM:0x01F9E000 */
		_vr_TTVR_pal_staticSegmentDataStart = 0x0249C100; /* ROM:0x01F9E000 */
		_binary_baserom_vr_TTVR_pal_static_start = 0x0249C100; /* ROM:0x01F9E000 */
		_binary_baserom_vr_TTVR_pal_static_end = 0x0249C700; /* ROM:0x01F9E600 */
		_vr_TTVR_pal_staticSegmentDataEnd = 0x0249C700; /* ROM:0x01F9E600 */
		_vr_TTVR_pal_staticSegmentDataSize = 0x00000600; /* ROM:0xFFB02500 */
		_vr_TTVR_pal_staticSegmentRomEnd = 0x01F9E600; /* ROM:0x01AA0500 */

/* vr_TTVR_pal_static.bss */
		_vr_TTVR_pal_staticSegmentEnd    = 0x0249C700; /* ROM:0x01F9E600 */
		_vr_FCVR_staticSegmentRomStart   = 0x01F9F000; /* ROM:0x01AA0F00 */

/* vr_FCVR_static */
		_vr_FCVR_staticSegmentStart      = 0x0249C700; /* ROM:0x01F9F000 */
		_vr_FCVR_staticSegmentDataStart  = 0x0249C700; /* ROM:0x01F9F000 */
		_binary_baserom_vr_FCVR_static_start = 0x0249C700; /* ROM:0x01F9F000 */
		_binary_baserom_vr_FCVR_static_end = 0x024BC700; /* ROM:0x01FBF000 */
		_vr_FCVR_staticSegmentDataEnd    = 0x024BC700; /* ROM:0x01FBF000 */
		_vr_FCVR_staticSegmentDataSize   = 0x00020000; /* ROM:0xFFB22900 */
		_vr_FCVR_staticSegmentRomEnd     = 0x01FBF000; /* ROM:0x01AC1900 */

/* vr_FCVR_static.bss */
		_vr_FCVR_staticSegmentEnd        = 0x024BC700; /* ROM:0x01FBF000 */
		_vr_FCVR_pal_staticSegmentRomStart = 0x01FBF000; /* ROM:0x01AC1900 */

/* vr_FCVR_pal_static */
		_vr_FCVR_pal_staticSegmentStart  = 0x024BC700; /* ROM:0x01FBF000 */
		_vr_FCVR_pal_staticSegmentDataStart = 0x024BC700; /* ROM:0x01FBF000 */
		_binary_baserom_vr_FCVR_pal_static_start = 0x024BC700; /* ROM:0x01FBF000 */
		_binary_baserom_vr_FCVR_pal_static_end = 0x024BCB00; /* ROM:0x01FBF400 */
		_vr_FCVR_pal_staticSegmentDataEnd = 0x024BCB00; /* ROM:0x01FBF400 */
		_vr_FCVR_pal_staticSegmentDataSize = 0x00000400; /* ROM:0xFFB02D00 */
		_vr_FCVR_pal_staticSegmentRomEnd = 0x01FBF400; /* ROM:0x01AC1D00 */

/* vr_FCVR_pal_static.bss */
		_vr_FCVR_pal_staticSegmentEnd    = 0x024BCB00; /* ROM:0x01FBF400 */
		_elf_message_fieldSegmentRomStart = 0x01FC0000; /* ROM:0x01AC2900 */

/* elf_message_field */
		_elf_message_fieldSegmentStart   = 0x00000000; /* ROM:0x01FC0000 */

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
