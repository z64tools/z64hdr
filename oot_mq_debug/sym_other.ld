/* makerom */
		_makeromSegmentStart             = 0x00000000;

/* boot */
		rspbootTextStart                 = 0x80009320;
		rspbootTextEnd                   = 0x800093F0;
		_bootSegmentDataStart            = 0x800093F0;
		D_800093F0                       = 0x800093F0;
		D_80009410                       = 0x80009410;
		_bootSegmentDataEnd              = 0x8000AFC0;
		_bootSegmentDataSize             = 0x00001BD0;
		_bootSegmentRomEnd               = 0x00012F70;

/* boot.bss */
		_bootSegmentEnd                  = 0x80016DA0;
		_dmadataSegmentRomStart          = 0x00012F70;

/* dmadata */
		_dmadataSegmentStart             = 0x80016DA0;

/* Audiobank */
		_AudiobankSegmentDataStart       = 0x00000010;
		_binary_baserom_Audiobank_start  = 0x00000010;
		_binary_baserom_Audiobank_end    = 0x0002BDD0;
		_AudiobankSegmentDataEnd         = 0x0002BDD0;
		_AudiobankSegmentDataSize        = 0x0002BDC0;
		_AudiobankSegmentRomEnd          = 0x00044DF0;

/* Audiobank.bss */
		_AudiobankSegmentEnd             = 0x0002BDD0;
		_AudioseqSegmentRomStart         = 0x00044DF0;

/* Audioseq */
		_AudioseqSegmentStart            = 0x0002BDD0;
		_AudioseqSegmentDataStart        = 0x0002BDD0;
		_binary_baserom_Audioseq_start   = 0x0002BDD0;
		_binary_baserom_Audioseq_end     = 0x0007B850;
		_AudioseqSegmentDataEnd          = 0x0007B850;
		_AudioseqSegmentDataSize         = 0x0004FA80;
		_AudioseqSegmentRomEnd           = 0x00094870;

/* Audioseq.bss */
		_AudioseqSegmentEnd              = 0x0007B850;
		_AudiotableSegmentRomStart       = 0x00094870;

/* Audiotable */
		_AudiotableSegmentStart          = 0x0007B850;
		_AudiotableSegmentDataStart      = 0x0007B850;
		_binary_baserom_Audiotable_start = 0x0007B850;
		_binary_baserom_Audiotable_end   = 0x004CCBE0;
		_AudiotableSegmentDataEnd        = 0x004CCBE0;
		_AudiotableSegmentDataSize       = 0x00451390;
		_AudiotableSegmentRomEnd         = 0x004E5C00;

/* Audiotable.bss */
		_AudiotableSegmentEnd            = 0x004CCBE0;
		_link_animetionSegmentRomStart   = 0x004E5C00;

/* link_animetion */
		_link_animetionSegmentStart      = 0x07000000;

/* code */
		aspMainTextStart                 = 0x801120C0;
		aspMainTextEnd                   = 0x80113070;
		gspS2DEX2d_fifoTextStart         = 0x80113070;
		njpgdspMainTextStart             = 0x80114930;
		gspS2DEX2d_fifoTextEnd           = 0x80114930;
		njpgdspMainTextEnd               = 0x80115420;
		_codeSegmentDataStart            = 0x80115420;
		gMojiFontTLUTs                   = 0x8012A740;
		gMojiFontTex                     = 0x8012A7C0;
		D_8012ABC0                       = 0x8012ABC0;
		_codeSegmentDataEnd              = 0x80134D30;
		_codeSegmentDataSize             = 0x0001F910;
		gSoundFontTable                  = 0x801550D0;
		gSequenceFontTable               = 0x80155340;
		gSequenceTable                   = 0x80155500;
		gSampleBankTable                 = 0x80155BF0;
		aspMainDataStart                 = 0x80155C70;
		gspF3DZEX2_NoN_PosLight_fifoTextStart = 0x80155F50;
		aspMainDataEnd                   = 0x80155F50;
		gspF3DZEX2_NoN_PosLight_fifoDataStart = 0x80157580;
		gspF3DZEX2_NoN_PosLight_fifoTextEnd = 0x80157580;
		gspS2DEX2d_fifoDataStart         = 0x801579A0;
		gspF3DZEX2_NoN_PosLight_fifoDataEnd = 0x801579A0;
		njpgdspMainDataStart             = 0x80157D30;
		gspS2DEX2d_fifoDataEnd           = 0x80157D30;
		njpgdspMainDataEnd               = 0x80157D90;
		_codeSegmentRomEnd               = 0x00BCEF30;

/* code.bss */
		sFaultInstance                   = 0x8016A800;
		sFaultAwaitingInput              = 0x8016A804;
		sFaultStack                      = 0x8016A808;
		sFaultThreadInfo                 = 0x8016AE08;
		gFaultMgr                        = 0x8016AE28;
		_codeSegmentEnd                  = 0x801759C0;
		_buffersSegmentRomStart          = 0x00BCEF30;

/* buffers */
		_buffersSegmentStart             = 0x801759C0;

/* gameplay_object_exchange_static */
		_gameplay_object_exchange_staticSegmentDataStart = 0x05017AF0;
		_binary_baserom_gameplay_object_exchange_static_start = 0x05017AF0;
		_binary_baserom_gameplay_object_exchange_static_end = 0x05017B00;
		_gameplay_object_exchange_staticSegmentDataEnd = 0x05017B00;
		_gameplay_object_exchange_staticSegmentDataSize = 0x00000010;
		_gameplay_object_exchange_staticSegmentRomEnd = 0x00FDB010;

/* gameplay_object_exchange_static.bss */
		_gameplay_object_exchange_staticSegmentEnd = 0x05017B00;
		_object_link_boySegmentRomStart  = 0x00FDC000;

/* object_link_boy */
		_object_link_boySegmentStart     = 0x06000000;

/* vr_fine0_static */
		_vr_fine0_staticSegmentDataStart = 0x02003B00;
		_binary_baserom_vr_fine0_static_start = 0x02003B00;
		_binary_baserom_vr_fine0_static_end = 0x0200FB00;
		_vr_fine0_staticSegmentDataEnd   = 0x0200FB00;
		_vr_fine0_staticSegmentDataSize  = 0x0000C000;
		_vr_fine0_staticSegmentRomEnd    = 0x01AFC000;

/* vr_fine0_static.bss */
		_vr_fine0_staticSegmentEnd       = 0x0200FB00;
		_vr_fine0_pal_staticSegmentRomStart = 0x01AFC000;

/* vr_fine0_pal_static */
		_vr_fine0_pal_staticSegmentStart = 0x0200FB00;
		_vr_fine0_pal_staticSegmentDataStart = 0x0200FB00;
		_binary_baserom_vr_fine0_pal_static_start = 0x0200FB00;
		_binary_baserom_vr_fine0_pal_static_end = 0x0200FC00;
		_vr_fine0_pal_staticSegmentDataEnd = 0x0200FC00;
		_vr_fine0_pal_staticSegmentDataSize = 0x00000100;
		_vr_fine0_pal_staticSegmentRomEnd = 0x01AFC100;

/* vr_fine0_pal_static.bss */
		_vr_fine0_pal_staticSegmentEnd   = 0x0200FC00;
		_vr_fine1_staticSegmentRomStart  = 0x01AFD000;

/* vr_fine1_static */
		_vr_fine1_staticSegmentStart     = 0x0200FC00;
		_vr_fine1_staticSegmentDataStart = 0x0200FC00;
		_binary_baserom_vr_fine1_static_start = 0x0200FC00;
		_binary_baserom_vr_fine1_static_end = 0x0201BC00;
		_vr_fine1_staticSegmentDataEnd   = 0x0201BC00;
		_vr_fine1_staticSegmentDataSize  = 0x0000C000;
		_vr_fine1_staticSegmentRomEnd    = 0x01B09000;

/* vr_fine1_static.bss */
		_vr_fine1_staticSegmentEnd       = 0x0201BC00;
		_vr_fine1_pal_staticSegmentRomStart = 0x01B09000;

/* vr_fine1_pal_static */
		_vr_fine1_pal_staticSegmentStart = 0x0201BC00;
		_vr_fine1_pal_staticSegmentDataStart = 0x0201BC00;
		_binary_baserom_vr_fine1_pal_static_start = 0x0201BC00;
		_binary_baserom_vr_fine1_pal_static_end = 0x0201BD00;
		_vr_fine1_pal_staticSegmentDataEnd = 0x0201BD00;
		_vr_fine1_pal_staticSegmentDataSize = 0x00000100;
		_vr_fine1_pal_staticSegmentRomEnd = 0x01B09100;

/* vr_fine1_pal_static.bss */
		_vr_fine1_pal_staticSegmentEnd   = 0x0201BD00;
		_vr_fine2_staticSegmentRomStart  = 0x01B0A000;

/* vr_fine2_static */
		_vr_fine2_staticSegmentStart     = 0x0201BD00;
		_vr_fine2_staticSegmentDataStart = 0x0201BD00;
		_binary_baserom_vr_fine2_static_start = 0x0201BD00;
		_binary_baserom_vr_fine2_static_end = 0x02027D00;
		_vr_fine2_staticSegmentDataEnd   = 0x02027D00;
		_vr_fine2_staticSegmentDataSize  = 0x0000C000;
		_vr_fine2_staticSegmentRomEnd    = 0x01B16000;

/* vr_fine2_static.bss */
		_vr_fine2_staticSegmentEnd       = 0x02027D00;
		_vr_fine2_pal_staticSegmentRomStart = 0x01B16000;

/* vr_fine2_pal_static */
		_vr_fine2_pal_staticSegmentStart = 0x02027D00;
		_vr_fine2_pal_staticSegmentDataStart = 0x02027D00;
		_binary_baserom_vr_fine2_pal_static_start = 0x02027D00;
		_binary_baserom_vr_fine2_pal_static_end = 0x02027E00;
		_vr_fine2_pal_staticSegmentDataEnd = 0x02027E00;
		_vr_fine2_pal_staticSegmentDataSize = 0x00000100;
		_vr_fine2_pal_staticSegmentRomEnd = 0x01B16100;

/* vr_fine2_pal_static.bss */
		_vr_fine2_pal_staticSegmentEnd   = 0x02027E00;
		_vr_fine3_staticSegmentRomStart  = 0x01B17000;

/* vr_fine3_static */
		_vr_fine3_staticSegmentStart     = 0x02027E00;
		_vr_fine3_staticSegmentDataStart = 0x02027E00;
		_binary_baserom_vr_fine3_static_start = 0x02027E00;
		_binary_baserom_vr_fine3_static_end = 0x02033E00;
		_vr_fine3_staticSegmentDataEnd   = 0x02033E00;
		_vr_fine3_staticSegmentDataSize  = 0x0000C000;
		_vr_fine3_staticSegmentRomEnd    = 0x01B23000;

/* vr_fine3_static.bss */
		_vr_fine3_staticSegmentEnd       = 0x02033E00;
		_vr_fine3_pal_staticSegmentRomStart = 0x01B23000;

/* vr_fine3_pal_static */
		_vr_fine3_pal_staticSegmentStart = 0x02033E00;
		_vr_fine3_pal_staticSegmentDataStart = 0x02033E00;
		_binary_baserom_vr_fine3_pal_static_start = 0x02033E00;
		_binary_baserom_vr_fine3_pal_static_end = 0x02033F00;
		_vr_fine3_pal_staticSegmentDataEnd = 0x02033F00;
		_vr_fine3_pal_staticSegmentDataSize = 0x00000100;
		_vr_fine3_pal_staticSegmentRomEnd = 0x01B23100;

/* vr_fine3_pal_static.bss */
		_vr_fine3_pal_staticSegmentEnd   = 0x02033F00;
		_vr_cloud0_staticSegmentRomStart = 0x01B24000;

/* vr_cloud0_static */
		_vr_cloud0_staticSegmentStart    = 0x02033F00;
		_vr_cloud0_staticSegmentDataStart = 0x02033F00;
		_binary_baserom_vr_cloud0_static_start = 0x02033F00;
		_binary_baserom_vr_cloud0_static_end = 0x0203FF00;
		_vr_cloud0_staticSegmentDataEnd  = 0x0203FF00;
		_vr_cloud0_staticSegmentDataSize = 0x0000C000;
		_vr_cloud0_staticSegmentRomEnd   = 0x01B30000;

/* vr_cloud0_static.bss */
		_vr_cloud0_staticSegmentEnd      = 0x0203FF00;
		_vr_cloud0_pal_staticSegmentRomStart = 0x01B30000;

/* vr_cloud0_pal_static */
		_vr_cloud0_pal_staticSegmentStart = 0x0203FF00;
		_vr_cloud0_pal_staticSegmentDataStart = 0x0203FF00;
		_binary_baserom_vr_cloud0_pal_static_start = 0x0203FF00;
		_binary_baserom_vr_cloud0_pal_static_end = 0x02040000;
		_vr_cloud0_pal_staticSegmentDataEnd = 0x02040000;
		_vr_cloud0_pal_staticSegmentDataSize = 0x00000100;
		_vr_cloud0_pal_staticSegmentRomEnd = 0x01B30100;

/* vr_cloud0_pal_static.bss */
		_vr_cloud0_pal_staticSegmentEnd  = 0x02040000;
		_vr_cloud1_staticSegmentRomStart = 0x01B31000;

/* vr_cloud1_static */
		_vr_cloud1_staticSegmentStart    = 0x02040000;
		_vr_cloud1_staticSegmentDataStart = 0x02040000;
		_binary_baserom_vr_cloud1_static_start = 0x02040000;
		_binary_baserom_vr_cloud1_static_end = 0x0204C000;
		_vr_cloud1_staticSegmentDataEnd  = 0x0204C000;
		_vr_cloud1_staticSegmentDataSize = 0x0000C000;
		_vr_cloud1_staticSegmentRomEnd   = 0x01B3D000;

/* vr_cloud1_static.bss */
		_vr_cloud1_staticSegmentEnd      = 0x0204C000;
		_vr_cloud1_pal_staticSegmentRomStart = 0x01B3D000;

/* vr_cloud1_pal_static */
		_vr_cloud1_pal_staticSegmentStart = 0x0204C000;
		_vr_cloud1_pal_staticSegmentDataStart = 0x0204C000;
		_binary_baserom_vr_cloud1_pal_static_start = 0x0204C000;
		_binary_baserom_vr_cloud1_pal_static_end = 0x0204C100;
		_vr_cloud1_pal_staticSegmentDataEnd = 0x0204C100;
		_vr_cloud1_pal_staticSegmentDataSize = 0x00000100;
		_vr_cloud1_pal_staticSegmentRomEnd = 0x01B3D100;

/* vr_cloud1_pal_static.bss */
		_vr_cloud1_pal_staticSegmentEnd  = 0x0204C100;
		_vr_cloud2_staticSegmentRomStart = 0x01B3E000;

/* vr_cloud2_static */
		_vr_cloud2_staticSegmentStart    = 0x0204C100;
		_vr_cloud2_staticSegmentDataStart = 0x0204C100;
		_binary_baserom_vr_cloud2_static_start = 0x0204C100;
		_binary_baserom_vr_cloud2_static_end = 0x02058100;
		_vr_cloud2_staticSegmentDataEnd  = 0x02058100;
		_vr_cloud2_staticSegmentDataSize = 0x0000C000;
		_vr_cloud2_staticSegmentRomEnd   = 0x01B4A000;

/* vr_cloud2_static.bss */
		_vr_cloud2_staticSegmentEnd      = 0x02058100;
		_vr_cloud2_pal_staticSegmentRomStart = 0x01B4A000;

/* vr_cloud2_pal_static */
		_vr_cloud2_pal_staticSegmentStart = 0x02058100;
		_vr_cloud2_pal_staticSegmentDataStart = 0x02058100;
		_binary_baserom_vr_cloud2_pal_static_start = 0x02058100;
		_binary_baserom_vr_cloud2_pal_static_end = 0x02058200;
		_vr_cloud2_pal_staticSegmentDataEnd = 0x02058200;
		_vr_cloud2_pal_staticSegmentDataSize = 0x00000100;
		_vr_cloud2_pal_staticSegmentRomEnd = 0x01B4A100;

/* vr_cloud2_pal_static.bss */
		_vr_cloud2_pal_staticSegmentEnd  = 0x02058200;
		_vr_cloud3_staticSegmentRomStart = 0x01B4B000;

/* vr_cloud3_static */
		_vr_cloud3_staticSegmentStart    = 0x02058200;
		_vr_cloud3_staticSegmentDataStart = 0x02058200;
		_binary_baserom_vr_cloud3_static_start = 0x02058200;
		_binary_baserom_vr_cloud3_static_end = 0x02064200;
		_vr_cloud3_staticSegmentDataEnd  = 0x02064200;
		_vr_cloud3_staticSegmentDataSize = 0x0000C000;
		_vr_cloud3_staticSegmentRomEnd   = 0x01B57000;

/* vr_cloud3_static.bss */
		_vr_cloud3_staticSegmentEnd      = 0x02064200;
		_vr_cloud3_pal_staticSegmentRomStart = 0x01B57000;

/* vr_cloud3_pal_static */
		_vr_cloud3_pal_staticSegmentStart = 0x02064200;
		_vr_cloud3_pal_staticSegmentDataStart = 0x02064200;
		_binary_baserom_vr_cloud3_pal_static_start = 0x02064200;
		_binary_baserom_vr_cloud3_pal_static_end = 0x02064300;
		_vr_cloud3_pal_staticSegmentDataEnd = 0x02064300;
		_vr_cloud3_pal_staticSegmentDataSize = 0x00000100;
		_vr_cloud3_pal_staticSegmentRomEnd = 0x01B57100;

/* vr_cloud3_pal_static.bss */
		_vr_cloud3_pal_staticSegmentEnd  = 0x02064300;
		_vr_holy0_staticSegmentRomStart  = 0x01B58000;

/* vr_holy0_static */
		_vr_holy0_staticSegmentStart     = 0x02064300;
		_vr_holy0_staticSegmentDataStart = 0x02064300;
		_binary_baserom_vr_holy0_static_start = 0x02064300;
		_binary_baserom_vr_holy0_static_end = 0x02074300;
		_vr_holy0_staticSegmentDataEnd   = 0x02074300;
		_vr_holy0_staticSegmentDataSize  = 0x00010000;
		_vr_holy0_staticSegmentRomEnd    = 0x01B68000;

/* vr_holy0_static.bss */
		_vr_holy0_staticSegmentEnd       = 0x02074300;
		_vr_holy0_pal_staticSegmentRomStart = 0x01B68000;

/* vr_holy0_pal_static */
		_vr_holy0_pal_staticSegmentStart = 0x02074300;
		_vr_holy0_pal_staticSegmentDataStart = 0x02074300;
		_binary_baserom_vr_holy0_pal_static_start = 0x02074300;
		_binary_baserom_vr_holy0_pal_static_end = 0x02074400;
		_vr_holy0_pal_staticSegmentDataEnd = 0x02074400;
		_vr_holy0_pal_staticSegmentDataSize = 0x00000100;
		_vr_holy0_pal_staticSegmentRomEnd = 0x01B68100;

/* vr_holy0_pal_static.bss */
		_vr_holy0_pal_staticSegmentEnd   = 0x02074400;
		_vr_holy1_staticSegmentRomStart  = 0x01B69000;

/* vr_holy1_static */
		_vr_holy1_staticSegmentStart     = 0x02074400;
		_vr_holy1_staticSegmentDataStart = 0x02074400;
		_binary_baserom_vr_holy1_static_start = 0x02074400;
		_binary_baserom_vr_holy1_static_end = 0x02084400;
		_vr_holy1_staticSegmentDataEnd   = 0x02084400;
		_vr_holy1_staticSegmentDataSize  = 0x00010000;
		_vr_holy1_staticSegmentRomEnd    = 0x01B79000;

/* vr_holy1_static.bss */
		_vr_holy1_staticSegmentEnd       = 0x02084400;
		_vr_holy1_pal_staticSegmentRomStart = 0x01B79000;

/* vr_holy1_pal_static */
		_vr_holy1_pal_staticSegmentStart = 0x02084400;
		_vr_holy1_pal_staticSegmentDataStart = 0x02084400;
		_binary_baserom_vr_holy1_pal_static_start = 0x02084400;
		_binary_baserom_vr_holy1_pal_static_end = 0x02084500;
		_vr_holy1_pal_staticSegmentDataEnd = 0x02084500;
		_vr_holy1_pal_staticSegmentDataSize = 0x00000100;
		_vr_holy1_pal_staticSegmentRomEnd = 0x01B79100;

/* vr_holy1_pal_static.bss */
		_vr_holy1_pal_staticSegmentEnd   = 0x02084500;
		_vr_MDVR_staticSegmentRomStart   = 0x01B7A000;

/* vr_MDVR_static */
		_vr_MDVR_staticSegmentStart      = 0x02084500;
		_vr_MDVR_staticSegmentDataStart  = 0x02084500;
		_binary_baserom_vr_MDVR_static_start = 0x02084500;
		_binary_baserom_vr_MDVR_static_end = 0x020C4500;
		_vr_MDVR_staticSegmentDataEnd    = 0x020C4500;
		_vr_MDVR_staticSegmentDataSize   = 0x00040000;
		_vr_MDVR_staticSegmentRomEnd     = 0x01BBA000;

/* vr_MDVR_static.bss */
		_vr_MDVR_staticSegmentEnd        = 0x020C4500;
		_vr_MDVR_pal_staticSegmentRomStart = 0x01BBA000;

/* vr_MDVR_pal_static */
		_vr_MDVR_pal_staticSegmentStart  = 0x020C4500;
		_vr_MDVR_pal_staticSegmentDataStart = 0x020C4500;
		_binary_baserom_vr_MDVR_pal_static_start = 0x020C4500;
		_binary_baserom_vr_MDVR_pal_static_end = 0x020C4D00;
		_vr_MDVR_pal_staticSegmentDataEnd = 0x020C4D00;
		_vr_MDVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_MDVR_pal_staticSegmentRomEnd = 0x01BBA800;

/* vr_MDVR_pal_static.bss */
		_vr_MDVR_pal_staticSegmentEnd    = 0x020C4D00;
		_vr_MNVR_staticSegmentRomStart   = 0x01BBB000;

/* vr_MNVR_static */
		_vr_MNVR_staticSegmentStart      = 0x020C4D00;
		_vr_MNVR_staticSegmentDataStart  = 0x020C4D00;
		_binary_baserom_vr_MNVR_static_start = 0x020C4D00;
		_binary_baserom_vr_MNVR_static_end = 0x02104D00;
		_vr_MNVR_staticSegmentDataEnd    = 0x02104D00;
		_vr_MNVR_staticSegmentDataSize   = 0x00040000;
		_vr_MNVR_staticSegmentRomEnd     = 0x01BFB000;

/* vr_MNVR_static.bss */
		_vr_MNVR_staticSegmentEnd        = 0x02104D00;
		_vr_MNVR_pal_staticSegmentRomStart = 0x01BFB000;

/* vr_MNVR_pal_static */
		_vr_MNVR_pal_staticSegmentStart  = 0x02104D00;
		_vr_MNVR_pal_staticSegmentDataStart = 0x02104D00;
		_binary_baserom_vr_MNVR_pal_static_start = 0x02104D00;
		_binary_baserom_vr_MNVR_pal_static_end = 0x02105500;
		_vr_MNVR_pal_staticSegmentDataEnd = 0x02105500;
		_vr_MNVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_MNVR_pal_staticSegmentRomEnd = 0x01BFB800;

/* vr_MNVR_pal_static.bss */
		_vr_MNVR_pal_staticSegmentEnd    = 0x02105500;
		_vr_RUVR_staticSegmentRomStart   = 0x01BFC000;

/* vr_RUVR_static */
		_vr_RUVR_staticSegmentStart      = 0x02105500;
		_vr_RUVR_staticSegmentDataStart  = 0x02105500;
		_binary_baserom_vr_RUVR_static_start = 0x02105500;
		_binary_baserom_vr_RUVR_static_end = 0x02145500;
		_vr_RUVR_staticSegmentDataEnd    = 0x02145500;
		_vr_RUVR_staticSegmentDataSize   = 0x00040000;
		_vr_RUVR_staticSegmentRomEnd     = 0x01C3C000;

/* vr_RUVR_static.bss */
		_vr_RUVR_staticSegmentEnd        = 0x02145500;
		_vr_RUVR_pal_staticSegmentRomStart = 0x01C3C000;

/* vr_RUVR_pal_static */
		_vr_RUVR_pal_staticSegmentStart  = 0x02145500;
		_vr_RUVR_pal_staticSegmentDataStart = 0x02145500;
		_binary_baserom_vr_RUVR_pal_static_start = 0x02145500;
		_binary_baserom_vr_RUVR_pal_static_end = 0x02145D00;
		_vr_RUVR_pal_staticSegmentDataEnd = 0x02145D00;
		_vr_RUVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_RUVR_pal_staticSegmentRomEnd = 0x01C3C800;

/* vr_RUVR_pal_static.bss */
		_vr_RUVR_pal_staticSegmentEnd    = 0x02145D00;
		_vr_LHVR_staticSegmentRomStart   = 0x01C3D000;

/* vr_LHVR_static */
		_vr_LHVR_staticSegmentStart      = 0x02145D00;
		_vr_LHVR_staticSegmentDataStart  = 0x02145D00;
		_binary_baserom_vr_LHVR_static_start = 0x02145D00;
		_binary_baserom_vr_LHVR_static_end = 0x02185D00;
		_vr_LHVR_staticSegmentDataEnd    = 0x02185D00;
		_vr_LHVR_staticSegmentDataSize   = 0x00040000;
		_vr_LHVR_staticSegmentRomEnd     = 0x01C7D000;

/* vr_LHVR_static.bss */
		_vr_LHVR_staticSegmentEnd        = 0x02185D00;
		_vr_LHVR_pal_staticSegmentRomStart = 0x01C7D000;

/* vr_LHVR_pal_static */
		_vr_LHVR_pal_staticSegmentStart  = 0x02185D00;
		_vr_LHVR_pal_staticSegmentDataStart = 0x02185D00;
		_binary_baserom_vr_LHVR_pal_static_start = 0x02185D00;
		_binary_baserom_vr_LHVR_pal_static_end = 0x02186500;
		_vr_LHVR_pal_staticSegmentDataEnd = 0x02186500;
		_vr_LHVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_LHVR_pal_staticSegmentRomEnd = 0x01C7D800;

/* vr_LHVR_pal_static.bss */
		_vr_LHVR_pal_staticSegmentEnd    = 0x02186500;
		_vr_KHVR_staticSegmentRomStart   = 0x01C7E000;

/* vr_KHVR_static */
		_vr_KHVR_staticSegmentStart      = 0x02186500;
		_vr_KHVR_staticSegmentDataStart  = 0x02186500;
		_binary_baserom_vr_KHVR_static_start = 0x02186500;
		_binary_baserom_vr_KHVR_static_end = 0x021C6500;
		_vr_KHVR_staticSegmentDataEnd    = 0x021C6500;
		_vr_KHVR_staticSegmentDataSize   = 0x00040000;
		_vr_KHVR_staticSegmentRomEnd     = 0x01CBE000;

/* vr_KHVR_static.bss */
		_vr_KHVR_staticSegmentEnd        = 0x021C6500;
		_vr_KHVR_pal_staticSegmentRomStart = 0x01CBE000;

/* vr_KHVR_pal_static */
		_vr_KHVR_pal_staticSegmentStart  = 0x021C6500;
		_vr_KHVR_pal_staticSegmentDataStart = 0x021C6500;
		_binary_baserom_vr_KHVR_pal_static_start = 0x021C6500;
		_binary_baserom_vr_KHVR_pal_static_end = 0x021C6D00;
		_vr_KHVR_pal_staticSegmentDataEnd = 0x021C6D00;
		_vr_KHVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_KHVR_pal_staticSegmentRomEnd = 0x01CBE800;

/* vr_KHVR_pal_static.bss */
		_vr_KHVR_pal_staticSegmentEnd    = 0x021C6D00;
		_vr_K3VR_staticSegmentRomStart   = 0x01CBF000;

/* vr_K3VR_static */
		_vr_K3VR_staticSegmentStart      = 0x021C6D00;
		_vr_K3VR_staticSegmentDataStart  = 0x021C6D00;
		_binary_baserom_vr_K3VR_static_start = 0x021C6D00;
		_binary_baserom_vr_K3VR_static_end = 0x021F6D00;
		_vr_K3VR_staticSegmentDataEnd    = 0x021F6D00;
		_vr_K3VR_staticSegmentDataSize   = 0x00030000;
		_vr_K3VR_staticSegmentRomEnd     = 0x01CEF000;

/* vr_K3VR_static.bss */
		_vr_K3VR_staticSegmentEnd        = 0x021F6D00;
		_vr_K3VR_pal_staticSegmentRomStart = 0x01CEF000;

/* vr_K3VR_pal_static */
		_vr_K3VR_pal_staticSegmentStart  = 0x021F6D00;
		_vr_K3VR_pal_staticSegmentDataStart = 0x021F6D00;
		_binary_baserom_vr_K3VR_pal_static_start = 0x021F6D00;
		_binary_baserom_vr_K3VR_pal_static_end = 0x021F7300;
		_vr_K3VR_pal_staticSegmentDataEnd = 0x021F7300;
		_vr_K3VR_pal_staticSegmentDataSize = 0x00000600;
		_vr_K3VR_pal_staticSegmentRomEnd = 0x01CEF600;

/* vr_K3VR_pal_static.bss */
		_vr_K3VR_pal_staticSegmentEnd    = 0x021F7300;
		_vr_K4VR_staticSegmentRomStart   = 0x01CF0000;

/* vr_K4VR_static */
		_vr_K4VR_staticSegmentStart      = 0x021F7300;
		_vr_K4VR_staticSegmentDataStart  = 0x021F7300;
		_binary_baserom_vr_K4VR_static_start = 0x021F7300;
		_binary_baserom_vr_K4VR_static_end = 0x02227300;
		_vr_K4VR_staticSegmentDataEnd    = 0x02227300;
		_vr_K4VR_staticSegmentDataSize   = 0x00030000;
		_vr_K4VR_staticSegmentRomEnd     = 0x01D20000;

/* vr_K4VR_static.bss */
		_vr_K4VR_staticSegmentEnd        = 0x02227300;
		_vr_K4VR_pal_staticSegmentRomStart = 0x01D20000;

/* vr_K4VR_pal_static */
		_vr_K4VR_pal_staticSegmentStart  = 0x02227300;
		_vr_K4VR_pal_staticSegmentDataStart = 0x02227300;
		_binary_baserom_vr_K4VR_pal_static_start = 0x02227300;
		_binary_baserom_vr_K4VR_pal_static_end = 0x02227900;
		_vr_K4VR_pal_staticSegmentDataEnd = 0x02227900;
		_vr_K4VR_pal_staticSegmentDataSize = 0x00000600;
		_vr_K4VR_pal_staticSegmentRomEnd = 0x01D20600;

/* vr_K4VR_pal_static.bss */
		_vr_K4VR_pal_staticSegmentEnd    = 0x02227900;
		_vr_K5VR_staticSegmentRomStart   = 0x01D21000;

/* vr_K5VR_static */
		_vr_K5VR_staticSegmentStart      = 0x02227900;
		_vr_K5VR_staticSegmentDataStart  = 0x02227900;
		_binary_baserom_vr_K5VR_static_start = 0x02227900;
		_binary_baserom_vr_K5VR_static_end = 0x02257900;
		_vr_K5VR_staticSegmentDataEnd    = 0x02257900;
		_vr_K5VR_staticSegmentDataSize   = 0x00030000;
		_vr_K5VR_staticSegmentRomEnd     = 0x01D51000;

/* vr_K5VR_static.bss */
		_vr_K5VR_staticSegmentEnd        = 0x02257900;
		_vr_K5VR_pal_staticSegmentRomStart = 0x01D51000;

/* vr_K5VR_pal_static */
		_vr_K5VR_pal_staticSegmentStart  = 0x02257900;
		_vr_K5VR_pal_staticSegmentDataStart = 0x02257900;
		_binary_baserom_vr_K5VR_pal_static_start = 0x02257900;
		_binary_baserom_vr_K5VR_pal_static_end = 0x02257F00;
		_vr_K5VR_pal_staticSegmentDataEnd = 0x02257F00;
		_vr_K5VR_pal_staticSegmentDataSize = 0x00000600;
		_vr_K5VR_pal_staticSegmentRomEnd = 0x01D51600;

/* vr_K5VR_pal_static.bss */
		_vr_K5VR_pal_staticSegmentEnd    = 0x02257F00;
		_vr_SP1a_staticSegmentRomStart   = 0x01D52000;

/* vr_SP1a_static */
		_vr_SP1a_staticSegmentStart      = 0x02257F00;
		_vr_SP1a_staticSegmentDataStart  = 0x02257F00;
		_binary_baserom_vr_SP1a_static_start = 0x02257F00;
		_binary_baserom_vr_SP1a_static_end = 0x02277F00;
		_vr_SP1a_staticSegmentDataEnd    = 0x02277F00;
		_vr_SP1a_staticSegmentDataSize   = 0x00020000;
		_vr_SP1a_staticSegmentRomEnd     = 0x01D72000;

/* vr_SP1a_static.bss */
		_vr_SP1a_staticSegmentEnd        = 0x02277F00;
		_vr_SP1a_pal_staticSegmentRomStart = 0x01D72000;

/* vr_SP1a_pal_static */
		_vr_SP1a_pal_staticSegmentStart  = 0x02277F00;
		_vr_SP1a_pal_staticSegmentDataStart = 0x02277F00;
		_binary_baserom_vr_SP1a_pal_static_start = 0x02277F00;
		_binary_baserom_vr_SP1a_pal_static_end = 0x02278300;
		_vr_SP1a_pal_staticSegmentDataEnd = 0x02278300;
		_vr_SP1a_pal_staticSegmentDataSize = 0x00000400;
		_vr_SP1a_pal_staticSegmentRomEnd = 0x01D72400;

/* vr_SP1a_pal_static.bss */
		_vr_SP1a_pal_staticSegmentEnd    = 0x02278300;
		_vr_MLVR_staticSegmentRomStart   = 0x01D73000;

/* vr_MLVR_static */
		_vr_MLVR_staticSegmentStart      = 0x02278300;
		_vr_MLVR_staticSegmentDataStart  = 0x02278300;
		_binary_baserom_vr_MLVR_static_start = 0x02278300;
		_binary_baserom_vr_MLVR_static_end = 0x022B8300;
		_vr_MLVR_staticSegmentDataEnd    = 0x022B8300;
		_vr_MLVR_staticSegmentDataSize   = 0x00040000;
		_vr_MLVR_staticSegmentRomEnd     = 0x01DB3000;

/* vr_MLVR_static.bss */
		_vr_MLVR_staticSegmentEnd        = 0x022B8300;
		_vr_MLVR_pal_staticSegmentRomStart = 0x01DB3000;

/* vr_MLVR_pal_static */
		_vr_MLVR_pal_staticSegmentStart  = 0x022B8300;
		_vr_MLVR_pal_staticSegmentDataStart = 0x022B8300;
		_binary_baserom_vr_MLVR_pal_static_start = 0x022B8300;
		_binary_baserom_vr_MLVR_pal_static_end = 0x022B8B00;
		_vr_MLVR_pal_staticSegmentDataEnd = 0x022B8B00;
		_vr_MLVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_MLVR_pal_staticSegmentRomEnd = 0x01DB3800;

/* vr_MLVR_pal_static.bss */
		_vr_MLVR_pal_staticSegmentEnd    = 0x022B8B00;
		_vr_KKRVR_staticSegmentRomStart  = 0x01DB4000;

/* vr_KKRVR_static */
		_vr_KKRVR_staticSegmentStart     = 0x022B8B00;
		_vr_KKRVR_staticSegmentDataStart = 0x022B8B00;
		_binary_baserom_vr_KKRVR_static_start = 0x022B8B00;
		_binary_baserom_vr_KKRVR_static_end = 0x022F8B00;
		_vr_KKRVR_staticSegmentDataEnd   = 0x022F8B00;
		_vr_KKRVR_staticSegmentDataSize  = 0x00040000;
		_vr_KKRVR_staticSegmentRomEnd    = 0x01DF4000;

/* vr_KKRVR_static.bss */
		_vr_KKRVR_staticSegmentEnd       = 0x022F8B00;
		_vr_KKRVR_pal_staticSegmentRomStart = 0x01DF4000;

/* vr_KKRVR_pal_static */
		_vr_KKRVR_pal_staticSegmentStart = 0x022F8B00;
		_vr_KKRVR_pal_staticSegmentDataStart = 0x022F8B00;
		_binary_baserom_vr_KKRVR_pal_static_start = 0x022F8B00;
		_binary_baserom_vr_KKRVR_pal_static_end = 0x022F9300;
		_vr_KKRVR_pal_staticSegmentDataEnd = 0x022F9300;
		_vr_KKRVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_KKRVR_pal_staticSegmentRomEnd = 0x01DF4800;

/* vr_KKRVR_pal_static.bss */
		_vr_KKRVR_pal_staticSegmentEnd   = 0x022F9300;
		_vr_KR3VR_staticSegmentRomStart  = 0x01DF5000;

/* vr_KR3VR_static */
		_vr_KR3VR_staticSegmentStart     = 0x022F9300;
		_vr_KR3VR_staticSegmentDataStart = 0x022F9300;
		_binary_baserom_vr_KR3VR_static_start = 0x022F9300;
		_binary_baserom_vr_KR3VR_static_end = 0x02329300;
		_vr_KR3VR_staticSegmentDataEnd   = 0x02329300;
		_vr_KR3VR_staticSegmentDataSize  = 0x00030000;
		_vr_KR3VR_staticSegmentRomEnd    = 0x01E25000;

/* vr_KR3VR_static.bss */
		_vr_KR3VR_staticSegmentEnd       = 0x02329300;
		_vr_KR3VR_pal_staticSegmentRomStart = 0x01E25000;

/* vr_KR3VR_pal_static */
		_vr_KR3VR_pal_staticSegmentStart = 0x02329300;
		_vr_KR3VR_pal_staticSegmentDataStart = 0x02329300;
		_binary_baserom_vr_KR3VR_pal_static_start = 0x02329300;
		_binary_baserom_vr_KR3VR_pal_static_end = 0x02329900;
		_vr_KR3VR_pal_staticSegmentDataEnd = 0x02329900;
		_vr_KR3VR_pal_staticSegmentDataSize = 0x00000600;
		_vr_KR3VR_pal_staticSegmentRomEnd = 0x01E25600;

/* vr_KR3VR_pal_static.bss */
		_vr_KR3VR_pal_staticSegmentEnd   = 0x02329900;
		_vr_IPVR_staticSegmentRomStart   = 0x01E26000;

/* vr_IPVR_static */
		_vr_IPVR_staticSegmentStart      = 0x02329900;
		_vr_IPVR_staticSegmentDataStart  = 0x02329900;
		_binary_baserom_vr_IPVR_static_start = 0x02329900;
		_binary_baserom_vr_IPVR_static_end = 0x02369900;
		_vr_IPVR_staticSegmentDataEnd    = 0x02369900;
		_vr_IPVR_staticSegmentDataSize   = 0x00040000;
		_vr_IPVR_staticSegmentRomEnd     = 0x01E66000;

/* vr_IPVR_static.bss */
		_vr_IPVR_staticSegmentEnd        = 0x02369900;
		_vr_IPVR_pal_staticSegmentRomStart = 0x01E66000;

/* vr_IPVR_pal_static */
		_vr_IPVR_pal_staticSegmentStart  = 0x02369900;
		_vr_IPVR_pal_staticSegmentDataStart = 0x02369900;
		_binary_baserom_vr_IPVR_pal_static_start = 0x02369900;
		_binary_baserom_vr_IPVR_pal_static_end = 0x0236A100;
		_vr_IPVR_pal_staticSegmentDataEnd = 0x0236A100;
		_vr_IPVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_IPVR_pal_staticSegmentRomEnd = 0x01E66800;

/* vr_IPVR_pal_static.bss */
		_vr_IPVR_pal_staticSegmentEnd    = 0x0236A100;
		_vr_KSVR_staticSegmentRomStart   = 0x01E67000;

/* vr_KSVR_static */
		_vr_KSVR_staticSegmentStart      = 0x0236A100;
		_vr_KSVR_staticSegmentDataStart  = 0x0236A100;
		_binary_baserom_vr_KSVR_static_start = 0x0236A100;
		_binary_baserom_vr_KSVR_static_end = 0x0238A100;
		_vr_KSVR_staticSegmentDataEnd    = 0x0238A100;
		_vr_KSVR_staticSegmentDataSize   = 0x00020000;
		_vr_KSVR_staticSegmentRomEnd     = 0x01E87000;

/* vr_KSVR_static.bss */
		_vr_KSVR_staticSegmentEnd        = 0x0238A100;
		_vr_KSVR_pal_staticSegmentRomStart = 0x01E87000;

/* vr_KSVR_pal_static */
		_vr_KSVR_pal_staticSegmentStart  = 0x0238A100;
		_vr_KSVR_pal_staticSegmentDataStart = 0x0238A100;
		_binary_baserom_vr_KSVR_pal_static_start = 0x0238A100;
		_binary_baserom_vr_KSVR_pal_static_end = 0x0238A500;
		_vr_KSVR_pal_staticSegmentDataEnd = 0x0238A500;
		_vr_KSVR_pal_staticSegmentDataSize = 0x00000400;
		_vr_KSVR_pal_staticSegmentRomEnd = 0x01E87400;

/* vr_KSVR_pal_static.bss */
		_vr_KSVR_pal_staticSegmentEnd    = 0x0238A500;
		_vr_GLVR_staticSegmentRomStart   = 0x01E88000;

/* vr_GLVR_static */
		_vr_GLVR_staticSegmentStart      = 0x0238A500;
		_vr_GLVR_staticSegmentDataStart  = 0x0238A500;
		_binary_baserom_vr_GLVR_static_start = 0x0238A500;
		_binary_baserom_vr_GLVR_static_end = 0x023AA500;
		_vr_GLVR_staticSegmentDataEnd    = 0x023AA500;
		_vr_GLVR_staticSegmentDataSize   = 0x00020000;
		_vr_GLVR_staticSegmentRomEnd     = 0x01EA8000;

/* vr_GLVR_static.bss */
		_vr_GLVR_staticSegmentEnd        = 0x023AA500;
		_vr_GLVR_pal_staticSegmentRomStart = 0x01EA8000;

/* vr_GLVR_pal_static */
		_vr_GLVR_pal_staticSegmentStart  = 0x023AA500;
		_vr_GLVR_pal_staticSegmentDataStart = 0x023AA500;
		_binary_baserom_vr_GLVR_pal_static_start = 0x023AA500;
		_binary_baserom_vr_GLVR_pal_static_end = 0x023AA900;
		_vr_GLVR_pal_staticSegmentDataEnd = 0x023AA900;
		_vr_GLVR_pal_staticSegmentDataSize = 0x00000400;
		_vr_GLVR_pal_staticSegmentRomEnd = 0x01EA8400;

/* vr_GLVR_pal_static.bss */
		_vr_GLVR_pal_staticSegmentEnd    = 0x023AA900;
		_vr_ZRVR_staticSegmentRomStart   = 0x01EA9000;

/* vr_ZRVR_static */
		_vr_ZRVR_staticSegmentStart      = 0x023AA900;
		_vr_ZRVR_staticSegmentDataStart  = 0x023AA900;
		_binary_baserom_vr_ZRVR_static_start = 0x023AA900;
		_binary_baserom_vr_ZRVR_static_end = 0x023CA900;
		_vr_ZRVR_staticSegmentDataEnd    = 0x023CA900;
		_vr_ZRVR_staticSegmentDataSize   = 0x00020000;
		_vr_ZRVR_staticSegmentRomEnd     = 0x01EC9000;

/* vr_ZRVR_static.bss */
		_vr_ZRVR_staticSegmentEnd        = 0x023CA900;
		_vr_ZRVR_pal_staticSegmentRomStart = 0x01EC9000;

/* vr_ZRVR_pal_static */
		_vr_ZRVR_pal_staticSegmentStart  = 0x023CA900;
		_vr_ZRVR_pal_staticSegmentDataStart = 0x023CA900;
		_binary_baserom_vr_ZRVR_pal_static_start = 0x023CA900;
		_binary_baserom_vr_ZRVR_pal_static_end = 0x023CAD00;
		_vr_ZRVR_pal_staticSegmentDataEnd = 0x023CAD00;
		_vr_ZRVR_pal_staticSegmentDataSize = 0x00000400;
		_vr_ZRVR_pal_staticSegmentRomEnd = 0x01EC9400;

/* vr_ZRVR_pal_static.bss */
		_vr_ZRVR_pal_staticSegmentEnd    = 0x023CAD00;
		_vr_DGVR_staticSegmentRomStart   = 0x01ECA000;

/* vr_DGVR_static */
		_vr_DGVR_staticSegmentStart      = 0x023CAD00;
		_vr_DGVR_staticSegmentDataStart  = 0x023CAD00;
		_binary_baserom_vr_DGVR_static_start = 0x023CAD00;
		_binary_baserom_vr_DGVR_static_end = 0x023EAD00;
		_vr_DGVR_staticSegmentDataEnd    = 0x023EAD00;
		_vr_DGVR_staticSegmentDataSize   = 0x00020000;
		_vr_DGVR_staticSegmentRomEnd     = 0x01EEA000;

/* vr_DGVR_static.bss */
		_vr_DGVR_staticSegmentEnd        = 0x023EAD00;
		_vr_DGVR_pal_staticSegmentRomStart = 0x01EEA000;

/* vr_DGVR_pal_static */
		_vr_DGVR_pal_staticSegmentStart  = 0x023EAD00;
		_vr_DGVR_pal_staticSegmentDataStart = 0x023EAD00;
		_binary_baserom_vr_DGVR_pal_static_start = 0x023EAD00;
		_binary_baserom_vr_DGVR_pal_static_end = 0x023EB100;
		_vr_DGVR_pal_staticSegmentDataEnd = 0x023EB100;
		_vr_DGVR_pal_staticSegmentDataSize = 0x00000400;
		_vr_DGVR_pal_staticSegmentRomEnd = 0x01EEA400;

/* vr_DGVR_pal_static.bss */
		_vr_DGVR_pal_staticSegmentEnd    = 0x023EB100;
		_vr_ALVR_staticSegmentRomStart   = 0x01EEB000;

/* vr_ALVR_static */
		_vr_ALVR_staticSegmentStart      = 0x023EB100;
		_vr_ALVR_staticSegmentDataStart  = 0x023EB100;
		_binary_baserom_vr_ALVR_static_start = 0x023EB100;
		_binary_baserom_vr_ALVR_static_end = 0x0240B100;
		_vr_ALVR_staticSegmentDataEnd    = 0x0240B100;
		_vr_ALVR_staticSegmentDataSize   = 0x00020000;
		_vr_ALVR_staticSegmentRomEnd     = 0x01F0B000;

/* vr_ALVR_static.bss */
		_vr_ALVR_staticSegmentEnd        = 0x0240B100;
		_vr_ALVR_pal_staticSegmentRomStart = 0x01F0B000;

/* vr_ALVR_pal_static */
		_vr_ALVR_pal_staticSegmentStart  = 0x0240B100;
		_vr_ALVR_pal_staticSegmentDataStart = 0x0240B100;
		_binary_baserom_vr_ALVR_pal_static_start = 0x0240B100;
		_binary_baserom_vr_ALVR_pal_static_end = 0x0240B500;
		_vr_ALVR_pal_staticSegmentDataEnd = 0x0240B500;
		_vr_ALVR_pal_staticSegmentDataSize = 0x00000400;
		_vr_ALVR_pal_staticSegmentRomEnd = 0x01F0B400;

/* vr_ALVR_pal_static.bss */
		_vr_ALVR_pal_staticSegmentEnd    = 0x0240B500;
		_vr_NSVR_staticSegmentRomStart   = 0x01F0C000;

/* vr_NSVR_static */
		_vr_NSVR_staticSegmentStart      = 0x0240B500;
		_vr_NSVR_staticSegmentDataStart  = 0x0240B500;
		_binary_baserom_vr_NSVR_static_start = 0x0240B500;
		_binary_baserom_vr_NSVR_static_end = 0x0242B500;
		_vr_NSVR_staticSegmentDataEnd    = 0x0242B500;
		_vr_NSVR_staticSegmentDataSize   = 0x00020000;
		_vr_NSVR_staticSegmentRomEnd     = 0x01F2C000;

/* vr_NSVR_static.bss */
		_vr_NSVR_staticSegmentEnd        = 0x0242B500;
		_vr_NSVR_pal_staticSegmentRomStart = 0x01F2C000;

/* vr_NSVR_pal_static */
		_vr_NSVR_pal_staticSegmentStart  = 0x0242B500;
		_vr_NSVR_pal_staticSegmentDataStart = 0x0242B500;
		_binary_baserom_vr_NSVR_pal_static_start = 0x0242B500;
		_binary_baserom_vr_NSVR_pal_static_end = 0x0242B900;
		_vr_NSVR_pal_staticSegmentDataEnd = 0x0242B900;
		_vr_NSVR_pal_staticSegmentDataSize = 0x00000400;
		_vr_NSVR_pal_staticSegmentRomEnd = 0x01F2C400;

/* vr_NSVR_pal_static.bss */
		_vr_NSVR_pal_staticSegmentEnd    = 0x0242B900;
		_vr_LBVR_staticSegmentRomStart   = 0x01F2D000;

/* vr_LBVR_static */
		_vr_LBVR_staticSegmentStart      = 0x0242B900;
		_vr_LBVR_staticSegmentDataStart  = 0x0242B900;
		_binary_baserom_vr_LBVR_static_start = 0x0242B900;
		_binary_baserom_vr_LBVR_static_end = 0x0246B900;
		_vr_LBVR_staticSegmentDataEnd    = 0x0246B900;
		_vr_LBVR_staticSegmentDataSize   = 0x00040000;
		_vr_LBVR_staticSegmentRomEnd     = 0x01F6D000;

/* vr_LBVR_static.bss */
		_vr_LBVR_staticSegmentEnd        = 0x0246B900;
		_vr_LBVR_pal_staticSegmentRomStart = 0x01F6D000;

/* vr_LBVR_pal_static */
		_vr_LBVR_pal_staticSegmentStart  = 0x0246B900;
		_vr_LBVR_pal_staticSegmentDataStart = 0x0246B900;
		_binary_baserom_vr_LBVR_pal_static_start = 0x0246B900;
		_binary_baserom_vr_LBVR_pal_static_end = 0x0246C100;
		_vr_LBVR_pal_staticSegmentDataEnd = 0x0246C100;
		_vr_LBVR_pal_staticSegmentDataSize = 0x00000800;
		_vr_LBVR_pal_staticSegmentRomEnd = 0x01F6D800;

/* vr_LBVR_pal_static.bss */
		_vr_LBVR_pal_staticSegmentEnd    = 0x0246C100;
		_vr_TTVR_staticSegmentRomStart   = 0x01F6E000;

/* vr_TTVR_static */
		_vr_TTVR_staticSegmentStart      = 0x0246C100;
		_vr_TTVR_staticSegmentDataStart  = 0x0246C100;
		_binary_baserom_vr_TTVR_static_start = 0x0246C100;
		_binary_baserom_vr_TTVR_static_end = 0x0249C100;
		_vr_TTVR_staticSegmentDataEnd    = 0x0249C100;
		_vr_TTVR_staticSegmentDataSize   = 0x00030000;
		_vr_TTVR_staticSegmentRomEnd     = 0x01F9E000;

/* vr_TTVR_static.bss */
		_vr_TTVR_staticSegmentEnd        = 0x0249C100;
		_vr_TTVR_pal_staticSegmentRomStart = 0x01F9E000;

/* vr_TTVR_pal_static */
		_vr_TTVR_pal_staticSegmentStart  = 0x0249C100;
		_vr_TTVR_pal_staticSegmentDataStart = 0x0249C100;
		_binary_baserom_vr_TTVR_pal_static_start = 0x0249C100;
		_binary_baserom_vr_TTVR_pal_static_end = 0x0249C700;
		_vr_TTVR_pal_staticSegmentDataEnd = 0x0249C700;
		_vr_TTVR_pal_staticSegmentDataSize = 0x00000600;
		_vr_TTVR_pal_staticSegmentRomEnd = 0x01F9E600;

/* vr_TTVR_pal_static.bss */
		_vr_TTVR_pal_staticSegmentEnd    = 0x0249C700;
		_vr_FCVR_staticSegmentRomStart   = 0x01F9F000;

/* vr_FCVR_static */
		_vr_FCVR_staticSegmentStart      = 0x0249C700;
		_vr_FCVR_staticSegmentDataStart  = 0x0249C700;
		_binary_baserom_vr_FCVR_static_start = 0x0249C700;
		_binary_baserom_vr_FCVR_static_end = 0x024BC700;
		_vr_FCVR_staticSegmentDataEnd    = 0x024BC700;
		_vr_FCVR_staticSegmentDataSize   = 0x00020000;
		_vr_FCVR_staticSegmentRomEnd     = 0x01FBF000;

/* vr_FCVR_static.bss */
		_vr_FCVR_staticSegmentEnd        = 0x024BC700;
		_vr_FCVR_pal_staticSegmentRomStart = 0x01FBF000;

/* vr_FCVR_pal_static */
		_vr_FCVR_pal_staticSegmentStart  = 0x024BC700;
		_vr_FCVR_pal_staticSegmentDataStart = 0x024BC700;
		_binary_baserom_vr_FCVR_pal_static_start = 0x024BC700;
		_binary_baserom_vr_FCVR_pal_static_end = 0x024BCB00;
		_vr_FCVR_pal_staticSegmentDataEnd = 0x024BCB00;
		_vr_FCVR_pal_staticSegmentDataSize = 0x00000400;
		_vr_FCVR_pal_staticSegmentRomEnd = 0x01FBF400;

/* vr_FCVR_pal_static.bss */
		_vr_FCVR_pal_staticSegmentEnd    = 0x024BCB00;
		_elf_message_fieldSegmentRomStart = 0x01FC0000;

/* elf_message_field */
		_elf_message_fieldSegmentStart   = 0x00000000;

/* bump_texture_static */
		_bump_texture_staticSegmentDataStart = 0x030098F0;
		_binary_baserom_bump_texture_static_start = 0x030098F0;
		_binary_baserom_bump_texture_static_end = 0x03009CF0;
		_bump_texture_staticSegmentDataEnd = 0x03009CF0;
		_bump_texture_staticSegmentDataSize = 0x00000400;
		_bump_texture_staticSegmentRomEnd = 0x035C1400;

/* bump_texture_static.bss */
		_bump_texture_staticSegmentEnd   = 0x03009CF0;
		_anime_model_1_staticSegmentRomStart = 0x035C2000;

/* anime_model_1_static */
		_anime_model_1_staticSegmentStart = 0x03009CF0;
		_anime_model_1_staticSegmentDataStart = 0x03009CF0;
		_binary_baserom_anime_model_1_static_start = 0x03009CF0;
		_binary_baserom_anime_model_1_static_end = 0x03009D00;
		_anime_model_1_staticSegmentDataEnd = 0x03009D00;
		_anime_model_1_staticSegmentDataSize = 0x00000010;
		_anime_model_1_staticSegmentRomEnd = 0x035C2010;

/* anime_model_1_static.bss */
		_anime_model_1_staticSegmentEnd  = 0x03009D00;
		_anime_model_2_staticSegmentRomStart = 0x035C3000;

/* anime_model_2_static */
		_anime_model_2_staticSegmentStart = 0x03009D00;
		_anime_model_2_staticSegmentDataStart = 0x03009D00;
		_binary_baserom_anime_model_2_static_start = 0x03009D00;
		_binary_baserom_anime_model_2_static_end = 0x03009D10;
		_anime_model_2_staticSegmentDataEnd = 0x03009D10;
		_anime_model_2_staticSegmentDataSize = 0x00000010;
		_anime_model_2_staticSegmentRomEnd = 0x035C3010;

/* anime_model_2_static.bss */
		_anime_model_2_staticSegmentEnd  = 0x03009D10;
		_anime_model_3_staticSegmentRomStart = 0x035C4000;

/* anime_model_3_static */
		_anime_model_3_staticSegmentStart = 0x03009D10;
		_anime_model_3_staticSegmentDataStart = 0x03009D10;
		_binary_baserom_anime_model_3_static_start = 0x03009D10;
		_binary_baserom_anime_model_3_static_end = 0x03009D20;
		_anime_model_3_staticSegmentDataEnd = 0x03009D20;
		_anime_model_3_staticSegmentDataSize = 0x00000010;
		_anime_model_3_staticSegmentRomEnd = 0x035C4010;

/* anime_model_3_static.bss */
		_anime_model_3_staticSegmentEnd  = 0x03009D20;
		_anime_model_4_staticSegmentRomStart = 0x035C5000;

/* anime_model_4_static */
		_anime_model_4_staticSegmentStart = 0x03009D20;
		_anime_model_4_staticSegmentDataStart = 0x03009D20;
		_binary_baserom_anime_model_4_static_start = 0x03009D20;
		_binary_baserom_anime_model_4_static_end = 0x03009D30;
		_anime_model_4_staticSegmentDataEnd = 0x03009D30;
		_anime_model_4_staticSegmentDataSize = 0x00000010;
		_anime_model_4_staticSegmentRomEnd = 0x035C5010;

/* anime_model_4_static.bss */
		_anime_model_4_staticSegmentEnd  = 0x03009D30;
		_anime_model_5_staticSegmentRomStart = 0x035C6000;

/* anime_model_5_static */
		_anime_model_5_staticSegmentStart = 0x03009D30;
		_anime_model_5_staticSegmentDataStart = 0x03009D30;
		_binary_baserom_anime_model_5_static_start = 0x03009D30;
		_binary_baserom_anime_model_5_static_end = 0x03009D40;
		_anime_model_5_staticSegmentDataEnd = 0x03009D40;
		_anime_model_5_staticSegmentDataSize = 0x00000010;
		_anime_model_5_staticSegmentRomEnd = 0x035C6010;

/* anime_model_5_static.bss */
		_anime_model_5_staticSegmentEnd  = 0x03009D40;
		_anime_model_6_staticSegmentRomStart = 0x035C7000;

/* anime_model_6_static */
		_anime_model_6_staticSegmentStart = 0x03009D40;
		_anime_model_6_staticSegmentDataStart = 0x03009D40;
		_binary_baserom_anime_model_6_static_start = 0x03009D40;
		_binary_baserom_anime_model_6_static_end = 0x03009D50;
		_anime_model_6_staticSegmentDataEnd = 0x03009D50;
		_anime_model_6_staticSegmentDataSize = 0x00000010;
		_anime_model_6_staticSegmentRomEnd = 0x035C7010;

/* anime_model_6_static.bss */
		_anime_model_6_staticSegmentEnd  = 0x03009D50;
		_anime_texture_1_staticSegmentRomStart = 0x035C8000;

/* anime_texture_1_static */
		_anime_texture_1_staticSegmentStart = 0x03009D50;
		_anime_texture_1_staticSegmentDataStart = 0x03009D50;
		_binary_baserom_anime_texture_1_static_start = 0x03009D50;
		_binary_baserom_anime_texture_1_static_end = 0x03009D60;
		_anime_texture_1_staticSegmentDataEnd = 0x03009D60;
		_anime_texture_1_staticSegmentDataSize = 0x00000010;
		_anime_texture_1_staticSegmentRomEnd = 0x035C8010;

/* anime_texture_1_static.bss */
		_anime_texture_1_staticSegmentEnd = 0x03009D60;
		_anime_texture_2_staticSegmentRomStart = 0x035C9000;

/* anime_texture_2_static */
		_anime_texture_2_staticSegmentStart = 0x03009D60;
		_anime_texture_2_staticSegmentDataStart = 0x03009D60;
		_binary_baserom_anime_texture_2_static_start = 0x03009D60;
		_binary_baserom_anime_texture_2_static_end = 0x03009D70;
		_anime_texture_2_staticSegmentDataEnd = 0x03009D70;
		_anime_texture_2_staticSegmentDataSize = 0x00000010;
		_anime_texture_2_staticSegmentRomEnd = 0x035C9010;

/* anime_texture_2_static.bss */
		_anime_texture_2_staticSegmentEnd = 0x03009D70;
		_anime_texture_3_staticSegmentRomStart = 0x035CA000;

/* anime_texture_3_static */
		_anime_texture_3_staticSegmentStart = 0x03009D70;
		_anime_texture_3_staticSegmentDataStart = 0x03009D70;
		_binary_baserom_anime_texture_3_static_start = 0x03009D70;
		_binary_baserom_anime_texture_3_static_end = 0x03009D80;
		_anime_texture_3_staticSegmentDataEnd = 0x03009D80;
		_anime_texture_3_staticSegmentDataSize = 0x00000010;
		_anime_texture_3_staticSegmentRomEnd = 0x035CA010;

/* anime_texture_3_static.bss */
		_anime_texture_3_staticSegmentEnd = 0x03009D80;
		_anime_texture_4_staticSegmentRomStart = 0x035CB000;

/* anime_texture_4_static */
		_anime_texture_4_staticSegmentStart = 0x03009D80;
		_anime_texture_4_staticSegmentDataStart = 0x03009D80;
		_binary_baserom_anime_texture_4_static_start = 0x03009D80;
		_binary_baserom_anime_texture_4_static_end = 0x03009D90;
		_anime_texture_4_staticSegmentDataEnd = 0x03009D90;
		_anime_texture_4_staticSegmentDataSize = 0x00000010;
		_anime_texture_4_staticSegmentRomEnd = 0x035CB010;

/* anime_texture_4_static.bss */
		_anime_texture_4_staticSegmentEnd = 0x03009D90;
		_anime_texture_5_staticSegmentRomStart = 0x035CC000;

/* anime_texture_5_static */
		_anime_texture_5_staticSegmentStart = 0x03009D90;
		_anime_texture_5_staticSegmentDataStart = 0x03009D90;
		_binary_baserom_anime_texture_5_static_start = 0x03009D90;
		_binary_baserom_anime_texture_5_static_end = 0x03009DA0;
		_anime_texture_5_staticSegmentDataEnd = 0x03009DA0;
		_anime_texture_5_staticSegmentDataSize = 0x00000010;
		_anime_texture_5_staticSegmentRomEnd = 0x035CC010;

/* anime_texture_5_static.bss */
		_anime_texture_5_staticSegmentEnd = 0x03009DA0;
		_anime_texture_6_staticSegmentRomStart = 0x035CD000;

/* anime_texture_6_static */
		_anime_texture_6_staticSegmentStart = 0x03009DA0;
		_anime_texture_6_staticSegmentDataStart = 0x03009DA0;
		_binary_baserom_anime_texture_6_static_start = 0x03009DA0;
		_binary_baserom_anime_texture_6_static_end = 0x03009DB0;
		_anime_texture_6_staticSegmentDataEnd = 0x03009DB0;
		_anime_texture_6_staticSegmentDataSize = 0x00000010;
		_anime_texture_6_staticSegmentRomEnd = 0x035CD010;

/* anime_texture_6_static.bss */
		_anime_texture_6_staticSegmentEnd = 0x03009DB0;
		_softsprite_matrix_staticSegmentRomStart = 0x035CE000;

/* softsprite_matrix_static */
		_softsprite_matrix_staticSegmentStart = 0x03009DB0;
		_softsprite_matrix_staticSegmentDataStart = 0x03009DB0;
		_binary_baserom_softsprite_matrix_static_start = 0x03009DB0;
		_binary_baserom_softsprite_matrix_static_end = 0x03009DF0;
		_softsprite_matrix_staticSegmentDataEnd = 0x03009DF0;
		_softsprite_matrix_staticSegmentDataSize = 0x00000040;
		_softsprite_matrix_staticSegmentRomEnd = 0x035CE040;

/* softsprite_matrix_static.bss */
		_softsprite_matrix_staticSegmentEnd = 0x03009DF0;
		_RomEnd                          = 0x035CF000;
