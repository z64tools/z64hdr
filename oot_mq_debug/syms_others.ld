/* build/asm/mio0.o */
 /* .text */
  Mio0_Decompress = 0x800025B0;  /* ROM: 0x000031B0 */

/* build/asm/exceptasm.o */
 /* .text */
  __osExceptionPreamble = 0x800039D0;  /* ROM: 0x000045D0 */
  __osException         = 0x800039E0;  /* ROM: 0x000045E0 */
  send_mesg             = 0x80003F2C;  /* ROM: 0x00004B2C */
  func_80004000         = 0x80004000;  /* ROM: 0x00004C00 */
  __osEnqueueAndYield   = 0x80004014;  /* ROM: 0x00004C14 */
  __osEnqueueThread     = 0x80004114;  /* ROM: 0x00004D14 */
  __osPopThread         = 0x8000415C;  /* ROM: 0x00004D5C */
  __osNop               = 0x8000416C;  /* ROM: 0x00004D6C */
  __osDispatchThread    = 0x80004174;  /* ROM: 0x00004D74 */
  __osCleanupThread     = 0x800042F0;  /* ROM: 0x00004EF0 */
 /* .data */
  __osHwIntTable = 0x8000AD10;  /* ROM: 0x0000B910 */
  __osPiIntTable = 0x8000AD38;  /* ROM: 0x0000B938 */
 /* .rodata */
  __osIntOffTable = 0x800120F0;  /* ROM: 0x00012CF0 */
  __osIntTable    = 0x80012110;  /* ROM: 0x00012D10 */

/* build/asm/bzero.o */
 /* .text */
  bzero = 0x80004450;  /* ROM: 0x00005050 */

/* build/asm/__osSetSR.o */
 /* .text */
  __osSetSR = 0x800046A0;  /* ROM: 0x000052A0 */

/* build/asm/__osGetSR.o */
 /* .text */
  __osGetSR = 0x800046B0;  /* ROM: 0x000052B0 */

/* build/asm/osWritebackDCache.o */
 /* .text */
  osWritebackDCache = 0x800046C0;  /* ROM: 0x000052C0 */

/* build/asm/osSetIntMask.o */
 /* .text */
  osSetIntMask = 0x80004F40;  /* ROM: 0x00005B40 */
 /* .rodata */
  __osRcpImTable = 0x80012160;  /* ROM: 0x00012D60 */

/* build/asm/__osProbeTLB.o */
 /* .text */
  __osProbeTLB = 0x80005040;  /* ROM: 0x00005C40 */

/* build/asm/osUnmapTLBAll.o */
 /* .text */
  osUnmapTLBAll = 0x80005FC0;  /* ROM: 0x00006BC0 */

/* build/asm/osInvalICache.o */
 /* .text */
  osInvalICache = 0x80006150;  /* ROM: 0x00006D50 */

/* build/asm/osInvalDCache.o */
 /* .text */
  osInvalDCache = 0x80006200;  /* ROM: 0x00006E00 */

/* build/asm/bcmp.o */
 /* .text */
  bcmp = 0x800068C0;  /* ROM: 0x000074C0 */

/* build/asm/osGetCount.o */
 /* .text */
  osGetCount = 0x80006EA0;  /* ROM: 0x00007AA0 */

/* build/asm/__osSetCompare.o */
 /* .text */
  __osSetCompare = 0x80006F00;  /* ROM: 0x00007B00 */

/* build/asm/bcopy.o */
 /* .text */
  bcopy = 0x80006F10;  /* ROM: 0x00007B10 */

/* build/asm/__osDisableInt.o */
 /* .text */
  __osDisableInt = 0x80007280;  /* ROM: 0x00007E80 */

/* build/asm/__osRestoreInt.o */
 /* .text */
  __osRestoreInt = 0x800072F0;  /* ROM: 0x00007EF0 */

/* build/asm/__osSetFpcCsr.o */
 /* .text */
  __osSetFpcCsr = 0x80007A70;  /* ROM: 0x00008670 */

/* build/asm/__osGetFpcCsr.o */
 /* .text */
  __osGetFpcCsr = 0x80007A80;  /* ROM: 0x00008680 */

/* build/asm/osMapTLBRdb.o */
 /* .text */
  osMapTLBRdb = 0x80007AE0;  /* ROM: 0x000086E0 */

/* build/asm/__osGetCause.o */
 /* .text */
  __osGetCause = 0x80007B90;  /* ROM: 0x00008790 */

/* build/asm/__osSetWatchLo.o */
 /* .text */
  __osSetWatchLo = 0x80009310;  /* ROM: 0x00009F10 */

/* build/data/rsp_boot.text.o */
 /* .text */
  D_80009320 = 0x80009320;  /* ROM: 0x00009F20 */
  D_800093F0 = 0x800093F0;  /* ROM: 0x00009FF0 */

/* build/data/unk_80009410.data.o */
 /* .data */
  D_80009410 = 0x80009410;  /* ROM: 0x0000A010 */

/* build/baserom/Audiobank.o */
 /* .data */
  _binary_baserom_Audiobank_start = 0x00000010;  /* ROM: 0x00019030 */
  _binary_baserom_Audiobank_end   = 0x0002BDD0;  /* ROM: 0x00044DF0 */

/* build/baserom/Audioseq.o */
 /* .data */
  _binary_baserom_Audioseq_start = 0x0002BDD0;  /* ROM: 0x00044DF0 */
  _binary_baserom_Audioseq_end   = 0x0007B850;  /* ROM: 0x00094870 */

/* build/baserom/Audiotable.o */
 /* .data */
  _binary_baserom_Audiotable_start = 0x0007B850;  /* ROM: 0x00094870 */
  _binary_baserom_Audiotable_end   = 0x004CCBE0;  /* ROM: 0x004E5C00 */

/* build/asm/code_800D71F0.o */
 /* .text */
  func_800D71F0 = 0x800D71F0;  /* ROM: 0x00B4E390 */
  D_800D7288    = 0x800D7288;  /* ROM: 0x00B4E428 */

/* build/asm/fp.o */
 /* .text */
  floorf      = 0x800FD390;  /* ROM: 0x00B74530 */
  floor       = 0x800FD39C;  /* ROM: 0x00B7453C */
  lfloorf     = 0x800FD3A8;  /* ROM: 0x00B74548 */
  lfloor      = 0x800FD3B8;  /* ROM: 0x00B74558 */
  ceilf       = 0x800FD3C8;  /* ROM: 0x00B74568 */
  ceil        = 0x800FD3D4;  /* ROM: 0x00B74574 */
  lceilf      = 0x800FD3E0;  /* ROM: 0x00B74580 */
  lceil       = 0x800FD3F0;  /* ROM: 0x00B74590 */
  truncf      = 0x800FD400;  /* ROM: 0x00B745A0 */
  trunc       = 0x800FD40C;  /* ROM: 0x00B745AC */
  ltruncf     = 0x800FD418;  /* ROM: 0x00B745B8 */
  ltrunc      = 0x800FD428;  /* ROM: 0x00B745C8 */
  nearbyintf  = 0x800FD438;  /* ROM: 0x00B745D8 */
  nearbyint   = 0x800FD444;  /* ROM: 0x00B745E4 */
  lnearbyintf = 0x800FD450;  /* ROM: 0x00B745F0 */
  lnearbyint  = 0x800FD460;  /* ROM: 0x00B74600 */
  roundf      = 0x800FD470;  /* ROM: 0x00B74610 */
  round       = 0x800FD48C;  /* ROM: 0x00B7462C */
  lroundf     = 0x800FD4AC;  /* ROM: 0x00B7464C */
  lround      = 0x800FD4CC;  /* ROM: 0x00B7466C */
 /* .data */
  qNaN0x3FFFFF = 0x801344A0;  /* ROM: 0x00BAB640 */
  qNaN0x10000  = 0x801344A4;  /* ROM: 0x00BAB644 */
  sNaN0x3FFFFF = 0x801344A8;  /* ROM: 0x00BAB648 */

/* build/asm/guScale.o */
 /* .text */
  guScale = 0x801001E0;  /* ROM: 0x00B77380 */

/* build/asm/guMtxIdentF.o */
 /* .text */
  guMtxIdentF = 0x80101B40;  /* ROM: 0x00B78CE0 */

/* build/asm/guMtxL2F.o */
 /* .text */
  guMtxL2F = 0x80102FA0;  /* ROM: 0x00B7A140 */

/* build/asm/guMtxIdent.o */
 /* .text */
  guMtxIdent = 0x80103B60;  /* ROM: 0x00B7AD00 */

/* build/asm/guNormalize.o */
 /* .text */
  guNormalize = 0x80104160;  /* ROM: 0x00B7B300 */

/* build/asm/guTranslate.o */
 /* .text */
  guTranslate = 0x80105C20;  /* ROM: 0x00B7CDC0 */

/* build/asm/osWritebackDCacheAll.o */
 /* .text */
  osWritebackDCacheAll = 0x80106490;  /* ROM: 0x00B7D630 */

/* build/asm/guMtxF2L.o */
 /* .text */
  guMtxF2L = 0x801064E0;  /* ROM: 0x00B7D680 */

/* build/data/rsp.text.o */
 /* .text */
  D_801120C0 = 0x801120C0;  /* ROM: 0x00B89260 */
  D_80113070 = 0x80113070;  /* ROM: 0x00B8A210 */
  gJpegUCode = 0x80114930;  /* ROM: 0x00B8BAD0 */

/* build/data/z_text.data.o */
 /* .data */
  gMojiFontTLUTs = 0x8012A740;  /* ROM: 0x00BA18E0 */
  gMojiFontTex   = 0x8012A7C0;  /* ROM: 0x00BA1960 */

/* build/data/unk_8012ABC0.data.o */
 /* .data */
  D_8012ABC0 = 0x8012ABC0;  /* ROM: 0x00BA1D60 */

/* build/asm/libm_vals.o */
 /* .rodata */
  __libm_qnan_f = 0x8014B2D0;  /* ROM: 0x00BC2470 */

/* build/data/rsp.rodata.o */
 /* .rodata */
  gSoundFontTable     = 0x801550D0;  /* ROM: 0x00BCC270 */
  gSequenceFontTable  = 0x80155340;  /* ROM: 0x00BCC4E0 */
  gSequenceTable      = 0x80155500;  /* ROM: 0x00BCC6A0 */
  gSampleBankTable    = 0x80155BF0;  /* ROM: 0x00BCCD90 */
  rspAspMainDataStart = 0x80155C70;  /* ROM: 0x00BCCE10 */
  rspAspMainDataEnd   = 0x80155F50;  /* ROM: 0x00BCD0F0 */
  D_80155F50          = 0x80155F50;  /* ROM: 0x00BCD0F0 */
  D_80157580          = 0x80157580;  /* ROM: 0x00BCE720 */
  D_801579A0          = 0x801579A0;  /* ROM: 0x00BCEB40 */
  gJpegUCodeData      = 0x80157D30;  /* ROM: 0x00BCEED0 */

/* build/data/fault.bss.o */
 /* .bss */
  sFaultInstance      = 0x8016A800;  /* ROM: 0x00BE19A0 */
  sFaultAwaitingInput = 0x8016A804;  /* ROM: 0x00BE19A4 */
  sFaultStack         = 0x8016A808;  /* ROM: 0x00BE19A8 */
  sFaultThreadInfo    = 0x8016AE08;  /* ROM: 0x00BE1FA8 */
  gFaultMgr           = 0x8016AE28;  /* ROM: 0x00BE1FC8 */

/* build/baserom/gameplay_object_exchange_static.o */
 /* .data */
  _binary_baserom_gameplay_object_exchange_static_start = 0x05017AF0;  /* ROM: 0x00FDB000 */
  _binary_baserom_gameplay_object_exchange_static_end   = 0x05017B00;  /* ROM: 0x00FDB010 */

/* build/baserom/vr_fine0_static.o */
 /* .data */
  _binary_baserom_vr_fine0_static_start = 0x02003B00;  /* ROM: 0x01AF0000 */
  _binary_baserom_vr_fine0_static_end   = 0x0200FB00;  /* ROM: 0x01AFC000 */

/* build/baserom/vr_fine0_pal_static.o */
 /* .data */
  _binary_baserom_vr_fine0_pal_static_start = 0x0200FB00;  /* ROM: 0x01AFC000 */
  _binary_baserom_vr_fine0_pal_static_end   = 0x0200FC00;  /* ROM: 0x01AFC100 */

/* build/baserom/vr_fine1_static.o */
 /* .data */
  _binary_baserom_vr_fine1_static_start = 0x0200FC00;  /* ROM: 0x01AFD000 */
  _binary_baserom_vr_fine1_static_end   = 0x0201BC00;  /* ROM: 0x01B09000 */

/* build/baserom/vr_fine1_pal_static.o */
 /* .data */
  _binary_baserom_vr_fine1_pal_static_start = 0x0201BC00;  /* ROM: 0x01B09000 */
  _binary_baserom_vr_fine1_pal_static_end   = 0x0201BD00;  /* ROM: 0x01B09100 */

/* build/baserom/vr_fine2_static.o */
 /* .data */
  _binary_baserom_vr_fine2_static_start = 0x0201BD00;  /* ROM: 0x01B0A000 */
  _binary_baserom_vr_fine2_static_end   = 0x02027D00;  /* ROM: 0x01B16000 */

/* build/baserom/vr_fine2_pal_static.o */
 /* .data */
  _binary_baserom_vr_fine2_pal_static_start = 0x02027D00;  /* ROM: 0x01B16000 */
  _binary_baserom_vr_fine2_pal_static_end   = 0x02027E00;  /* ROM: 0x01B16100 */

/* build/baserom/vr_fine3_static.o */
 /* .data */
  _binary_baserom_vr_fine3_static_start = 0x02027E00;  /* ROM: 0x01B17000 */
  _binary_baserom_vr_fine3_static_end   = 0x02033E00;  /* ROM: 0x01B23000 */

/* build/baserom/vr_fine3_pal_static.o */
 /* .data */
  _binary_baserom_vr_fine3_pal_static_start = 0x02033E00;  /* ROM: 0x01B23000 */
  _binary_baserom_vr_fine3_pal_static_end   = 0x02033F00;  /* ROM: 0x01B23100 */

/* build/baserom/vr_cloud0_static.o */
 /* .data */
  _binary_baserom_vr_cloud0_static_start = 0x02033F00;  /* ROM: 0x01B24000 */
  _binary_baserom_vr_cloud0_static_end   = 0x0203FF00;  /* ROM: 0x01B30000 */

/* build/baserom/vr_cloud0_pal_static.o */
 /* .data */
  _binary_baserom_vr_cloud0_pal_static_start = 0x0203FF00;  /* ROM: 0x01B30000 */
  _binary_baserom_vr_cloud0_pal_static_end   = 0x02040000;  /* ROM: 0x01B30100 */

/* build/baserom/vr_cloud1_static.o */
 /* .data */
  _binary_baserom_vr_cloud1_static_start = 0x02040000;  /* ROM: 0x01B31000 */
  _binary_baserom_vr_cloud1_static_end   = 0x0204C000;  /* ROM: 0x01B3D000 */

/* build/baserom/vr_cloud1_pal_static.o */
 /* .data */
  _binary_baserom_vr_cloud1_pal_static_start = 0x0204C000;  /* ROM: 0x01B3D000 */
  _binary_baserom_vr_cloud1_pal_static_end   = 0x0204C100;  /* ROM: 0x01B3D100 */

/* build/baserom/vr_cloud2_static.o */
 /* .data */
  _binary_baserom_vr_cloud2_static_start = 0x0204C100;  /* ROM: 0x01B3E000 */
  _binary_baserom_vr_cloud2_static_end   = 0x02058100;  /* ROM: 0x01B4A000 */

/* build/baserom/vr_cloud2_pal_static.o */
 /* .data */
  _binary_baserom_vr_cloud2_pal_static_start = 0x02058100;  /* ROM: 0x01B4A000 */
  _binary_baserom_vr_cloud2_pal_static_end   = 0x02058200;  /* ROM: 0x01B4A100 */

/* build/baserom/vr_cloud3_static.o */
 /* .data */
  _binary_baserom_vr_cloud3_static_start = 0x02058200;  /* ROM: 0x01B4B000 */
  _binary_baserom_vr_cloud3_static_end   = 0x02064200;  /* ROM: 0x01B57000 */

/* build/baserom/vr_cloud3_pal_static.o */
 /* .data */
  _binary_baserom_vr_cloud3_pal_static_start = 0x02064200;  /* ROM: 0x01B57000 */
  _binary_baserom_vr_cloud3_pal_static_end   = 0x02064300;  /* ROM: 0x01B57100 */

/* build/baserom/vr_holy0_static.o */
 /* .data */
  _binary_baserom_vr_holy0_static_start = 0x02064300;  /* ROM: 0x01B58000 */
  _binary_baserom_vr_holy0_static_end   = 0x02074300;  /* ROM: 0x01B68000 */

/* build/baserom/vr_holy0_pal_static.o */
 /* .data */
  _binary_baserom_vr_holy0_pal_static_start = 0x02074300;  /* ROM: 0x01B68000 */
  _binary_baserom_vr_holy0_pal_static_end   = 0x02074400;  /* ROM: 0x01B68100 */

/* build/baserom/vr_holy1_static.o */
 /* .data */
  _binary_baserom_vr_holy1_static_start = 0x02074400;  /* ROM: 0x01B69000 */
  _binary_baserom_vr_holy1_static_end   = 0x02084400;  /* ROM: 0x01B79000 */

/* build/baserom/vr_holy1_pal_static.o */
 /* .data */
  _binary_baserom_vr_holy1_pal_static_start = 0x02084400;  /* ROM: 0x01B79000 */
  _binary_baserom_vr_holy1_pal_static_end   = 0x02084500;  /* ROM: 0x01B79100 */

/* build/baserom/vr_MDVR_static.o */
 /* .data */
  _binary_baserom_vr_MDVR_static_start = 0x02084500;  /* ROM: 0x01B7A000 */
  _binary_baserom_vr_MDVR_static_end   = 0x020C4500;  /* ROM: 0x01BBA000 */

/* build/baserom/vr_MDVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_MDVR_pal_static_start = 0x020C4500;  /* ROM: 0x01BBA000 */
  _binary_baserom_vr_MDVR_pal_static_end   = 0x020C4D00;  /* ROM: 0x01BBA800 */

/* build/baserom/vr_MNVR_static.o */
 /* .data */
  _binary_baserom_vr_MNVR_static_start = 0x020C4D00;  /* ROM: 0x01BBB000 */
  _binary_baserom_vr_MNVR_static_end   = 0x02104D00;  /* ROM: 0x01BFB000 */

/* build/baserom/vr_MNVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_MNVR_pal_static_start = 0x02104D00;  /* ROM: 0x01BFB000 */
  _binary_baserom_vr_MNVR_pal_static_end   = 0x02105500;  /* ROM: 0x01BFB800 */

/* build/baserom/vr_RUVR_static.o */
 /* .data */
  _binary_baserom_vr_RUVR_static_start = 0x02105500;  /* ROM: 0x01BFC000 */
  _binary_baserom_vr_RUVR_static_end   = 0x02145500;  /* ROM: 0x01C3C000 */

/* build/baserom/vr_RUVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_RUVR_pal_static_start = 0x02145500;  /* ROM: 0x01C3C000 */
  _binary_baserom_vr_RUVR_pal_static_end   = 0x02145D00;  /* ROM: 0x01C3C800 */

/* build/baserom/vr_LHVR_static.o */
 /* .data */
  _binary_baserom_vr_LHVR_static_start = 0x02145D00;  /* ROM: 0x01C3D000 */
  _binary_baserom_vr_LHVR_static_end   = 0x02185D00;  /* ROM: 0x01C7D000 */

/* build/baserom/vr_LHVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_LHVR_pal_static_start = 0x02185D00;  /* ROM: 0x01C7D000 */
  _binary_baserom_vr_LHVR_pal_static_end   = 0x02186500;  /* ROM: 0x01C7D800 */

/* build/baserom/vr_KHVR_static.o */
 /* .data */
  _binary_baserom_vr_KHVR_static_start = 0x02186500;  /* ROM: 0x01C7E000 */
  _binary_baserom_vr_KHVR_static_end   = 0x021C6500;  /* ROM: 0x01CBE000 */

/* build/baserom/vr_KHVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_KHVR_pal_static_start = 0x021C6500;  /* ROM: 0x01CBE000 */
  _binary_baserom_vr_KHVR_pal_static_end   = 0x021C6D00;  /* ROM: 0x01CBE800 */

/* build/baserom/vr_K3VR_static.o */
 /* .data */
  _binary_baserom_vr_K3VR_static_start = 0x021C6D00;  /* ROM: 0x01CBF000 */
  _binary_baserom_vr_K3VR_static_end   = 0x021F6D00;  /* ROM: 0x01CEF000 */

/* build/baserom/vr_K3VR_pal_static.o */
 /* .data */
  _binary_baserom_vr_K3VR_pal_static_start = 0x021F6D00;  /* ROM: 0x01CEF000 */
  _binary_baserom_vr_K3VR_pal_static_end   = 0x021F7300;  /* ROM: 0x01CEF600 */

/* build/baserom/vr_K4VR_static.o */
 /* .data */
  _binary_baserom_vr_K4VR_static_start = 0x021F7300;  /* ROM: 0x01CF0000 */
  _binary_baserom_vr_K4VR_static_end   = 0x02227300;  /* ROM: 0x01D20000 */

/* build/baserom/vr_K4VR_pal_static.o */
 /* .data */
  _binary_baserom_vr_K4VR_pal_static_start = 0x02227300;  /* ROM: 0x01D20000 */
  _binary_baserom_vr_K4VR_pal_static_end   = 0x02227900;  /* ROM: 0x01D20600 */

/* build/baserom/vr_K5VR_static.o */
 /* .data */
  _binary_baserom_vr_K5VR_static_start = 0x02227900;  /* ROM: 0x01D21000 */
  _binary_baserom_vr_K5VR_static_end   = 0x02257900;  /* ROM: 0x01D51000 */

/* build/baserom/vr_K5VR_pal_static.o */
 /* .data */
  _binary_baserom_vr_K5VR_pal_static_start = 0x02257900;  /* ROM: 0x01D51000 */
  _binary_baserom_vr_K5VR_pal_static_end   = 0x02257F00;  /* ROM: 0x01D51600 */

/* build/baserom/vr_SP1a_static.o */
 /* .data */
  _binary_baserom_vr_SP1a_static_start = 0x02257F00;  /* ROM: 0x01D52000 */
  _binary_baserom_vr_SP1a_static_end   = 0x02277F00;  /* ROM: 0x01D72000 */

/* build/baserom/vr_SP1a_pal_static.o */
 /* .data */
  _binary_baserom_vr_SP1a_pal_static_start = 0x02277F00;  /* ROM: 0x01D72000 */
  _binary_baserom_vr_SP1a_pal_static_end   = 0x02278300;  /* ROM: 0x01D72400 */

/* build/baserom/vr_MLVR_static.o */
 /* .data */
  _binary_baserom_vr_MLVR_static_start = 0x02278300;  /* ROM: 0x01D73000 */
  _binary_baserom_vr_MLVR_static_end   = 0x022B8300;  /* ROM: 0x01DB3000 */

/* build/baserom/vr_MLVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_MLVR_pal_static_start = 0x022B8300;  /* ROM: 0x01DB3000 */
  _binary_baserom_vr_MLVR_pal_static_end   = 0x022B8B00;  /* ROM: 0x01DB3800 */

/* build/baserom/vr_KKRVR_static.o */
 /* .data */
  _binary_baserom_vr_KKRVR_static_start = 0x022B8B00;  /* ROM: 0x01DB4000 */
  _binary_baserom_vr_KKRVR_static_end   = 0x022F8B00;  /* ROM: 0x01DF4000 */

/* build/baserom/vr_KKRVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_KKRVR_pal_static_start = 0x022F8B00;  /* ROM: 0x01DF4000 */
  _binary_baserom_vr_KKRVR_pal_static_end   = 0x022F9300;  /* ROM: 0x01DF4800 */

/* build/baserom/vr_KR3VR_static.o */
 /* .data */
  _binary_baserom_vr_KR3VR_static_start = 0x022F9300;  /* ROM: 0x01DF5000 */
  _binary_baserom_vr_KR3VR_static_end   = 0x02329300;  /* ROM: 0x01E25000 */

/* build/baserom/vr_KR3VR_pal_static.o */
 /* .data */
  _binary_baserom_vr_KR3VR_pal_static_start = 0x02329300;  /* ROM: 0x01E25000 */
  _binary_baserom_vr_KR3VR_pal_static_end   = 0x02329900;  /* ROM: 0x01E25600 */

/* build/baserom/vr_IPVR_static.o */
 /* .data */
  _binary_baserom_vr_IPVR_static_start = 0x02329900;  /* ROM: 0x01E26000 */
  _binary_baserom_vr_IPVR_static_end   = 0x02369900;  /* ROM: 0x01E66000 */

/* build/baserom/vr_IPVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_IPVR_pal_static_start = 0x02369900;  /* ROM: 0x01E66000 */
  _binary_baserom_vr_IPVR_pal_static_end   = 0x0236A100;  /* ROM: 0x01E66800 */

/* build/baserom/vr_KSVR_static.o */
 /* .data */
  _binary_baserom_vr_KSVR_static_start = 0x0236A100;  /* ROM: 0x01E67000 */
  _binary_baserom_vr_KSVR_static_end   = 0x0238A100;  /* ROM: 0x01E87000 */

/* build/baserom/vr_KSVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_KSVR_pal_static_start = 0x0238A100;  /* ROM: 0x01E87000 */
  _binary_baserom_vr_KSVR_pal_static_end   = 0x0238A500;  /* ROM: 0x01E87400 */

/* build/baserom/vr_GLVR_static.o */
 /* .data */
  _binary_baserom_vr_GLVR_static_start = 0x0238A500;  /* ROM: 0x01E88000 */
  _binary_baserom_vr_GLVR_static_end   = 0x023AA500;  /* ROM: 0x01EA8000 */

/* build/baserom/vr_GLVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_GLVR_pal_static_start = 0x023AA500;  /* ROM: 0x01EA8000 */
  _binary_baserom_vr_GLVR_pal_static_end   = 0x023AA900;  /* ROM: 0x01EA8400 */

/* build/baserom/vr_ZRVR_static.o */
 /* .data */
  _binary_baserom_vr_ZRVR_static_start = 0x023AA900;  /* ROM: 0x01EA9000 */
  _binary_baserom_vr_ZRVR_static_end   = 0x023CA900;  /* ROM: 0x01EC9000 */

/* build/baserom/vr_ZRVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_ZRVR_pal_static_start = 0x023CA900;  /* ROM: 0x01EC9000 */
  _binary_baserom_vr_ZRVR_pal_static_end   = 0x023CAD00;  /* ROM: 0x01EC9400 */

/* build/baserom/vr_DGVR_static.o */
 /* .data */
  _binary_baserom_vr_DGVR_static_start = 0x023CAD00;  /* ROM: 0x01ECA000 */
  _binary_baserom_vr_DGVR_static_end   = 0x023EAD00;  /* ROM: 0x01EEA000 */

/* build/baserom/vr_DGVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_DGVR_pal_static_start = 0x023EAD00;  /* ROM: 0x01EEA000 */
  _binary_baserom_vr_DGVR_pal_static_end   = 0x023EB100;  /* ROM: 0x01EEA400 */

/* build/baserom/vr_ALVR_static.o */
 /* .data */
  _binary_baserom_vr_ALVR_static_start = 0x023EB100;  /* ROM: 0x01EEB000 */
  _binary_baserom_vr_ALVR_static_end   = 0x0240B100;  /* ROM: 0x01F0B000 */

/* build/baserom/vr_ALVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_ALVR_pal_static_start = 0x0240B100;  /* ROM: 0x01F0B000 */
  _binary_baserom_vr_ALVR_pal_static_end   = 0x0240B500;  /* ROM: 0x01F0B400 */

/* build/baserom/vr_NSVR_static.o */
 /* .data */
  _binary_baserom_vr_NSVR_static_start = 0x0240B500;  /* ROM: 0x01F0C000 */
  _binary_baserom_vr_NSVR_static_end   = 0x0242B500;  /* ROM: 0x01F2C000 */

/* build/baserom/vr_NSVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_NSVR_pal_static_start = 0x0242B500;  /* ROM: 0x01F2C000 */
  _binary_baserom_vr_NSVR_pal_static_end   = 0x0242B900;  /* ROM: 0x01F2C400 */

/* build/baserom/vr_LBVR_static.o */
 /* .data */
  _binary_baserom_vr_LBVR_static_start = 0x0242B900;  /* ROM: 0x01F2D000 */
  _binary_baserom_vr_LBVR_static_end   = 0x0246B900;  /* ROM: 0x01F6D000 */

/* build/baserom/vr_LBVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_LBVR_pal_static_start = 0x0246B900;  /* ROM: 0x01F6D000 */
  _binary_baserom_vr_LBVR_pal_static_end   = 0x0246C100;  /* ROM: 0x01F6D800 */

/* build/baserom/vr_TTVR_static.o */
 /* .data */
  _binary_baserom_vr_TTVR_static_start = 0x0246C100;  /* ROM: 0x01F6E000 */
  _binary_baserom_vr_TTVR_static_end   = 0x0249C100;  /* ROM: 0x01F9E000 */

/* build/baserom/vr_TTVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_TTVR_pal_static_start = 0x0249C100;  /* ROM: 0x01F9E000 */
  _binary_baserom_vr_TTVR_pal_static_end   = 0x0249C700;  /* ROM: 0x01F9E600 */

/* build/baserom/vr_FCVR_static.o */
 /* .data */
  _binary_baserom_vr_FCVR_static_start = 0x0249C700;  /* ROM: 0x01F9F000 */
  _binary_baserom_vr_FCVR_static_end   = 0x024BC700;  /* ROM: 0x01FBF000 */

/* build/baserom/vr_FCVR_pal_static.o */
 /* .data */
  _binary_baserom_vr_FCVR_pal_static_start = 0x024BC700;  /* ROM: 0x01FBF000 */
  _binary_baserom_vr_FCVR_pal_static_end   = 0x024BCB00;  /* ROM: 0x01FBF400 */

/* build/baserom/bump_texture_static.o */
 /* .data */
  _binary_baserom_bump_texture_static_start = 0x030098F0;  /* ROM: 0x035C1000 */
  _binary_baserom_bump_texture_static_end   = 0x03009CF0;  /* ROM: 0x035C1400 */

/* build/baserom/anime_model_1_static.o */
 /* .data */
  _binary_baserom_anime_model_1_static_start = 0x03009CF0;  /* ROM: 0x035C2000 */
  _binary_baserom_anime_model_1_static_end   = 0x03009D00;  /* ROM: 0x035C2010 */

/* build/baserom/anime_model_2_static.o */
 /* .data */
  _binary_baserom_anime_model_2_static_start = 0x03009D00;  /* ROM: 0x035C3000 */
  _binary_baserom_anime_model_2_static_end   = 0x03009D10;  /* ROM: 0x035C3010 */

/* build/baserom/anime_model_3_static.o */
 /* .data */
  _binary_baserom_anime_model_3_static_start = 0x03009D10;  /* ROM: 0x035C4000 */
  _binary_baserom_anime_model_3_static_end   = 0x03009D20;  /* ROM: 0x035C4010 */

/* build/baserom/anime_model_4_static.o */
 /* .data */
  _binary_baserom_anime_model_4_static_start = 0x03009D20;  /* ROM: 0x035C5000 */
  _binary_baserom_anime_model_4_static_end   = 0x03009D30;  /* ROM: 0x035C5010 */

/* build/baserom/anime_model_5_static.o */
 /* .data */
  _binary_baserom_anime_model_5_static_start = 0x03009D30;  /* ROM: 0x035C6000 */
  _binary_baserom_anime_model_5_static_end   = 0x03009D40;  /* ROM: 0x035C6010 */

/* build/baserom/anime_model_6_static.o */
 /* .data */
  _binary_baserom_anime_model_6_static_start = 0x03009D40;  /* ROM: 0x035C7000 */
  _binary_baserom_anime_model_6_static_end   = 0x03009D50;  /* ROM: 0x035C7010 */

/* build/baserom/anime_texture_1_static.o */
 /* .data */
  _binary_baserom_anime_texture_1_static_start = 0x03009D50;  /* ROM: 0x035C8000 */
  _binary_baserom_anime_texture_1_static_end   = 0x03009D60;  /* ROM: 0x035C8010 */

/* build/baserom/anime_texture_2_static.o */
 /* .data */
  _binary_baserom_anime_texture_2_static_start = 0x03009D60;  /* ROM: 0x035C9000 */
  _binary_baserom_anime_texture_2_static_end   = 0x03009D70;  /* ROM: 0x035C9010 */

/* build/baserom/anime_texture_3_static.o */
 /* .data */
  _binary_baserom_anime_texture_3_static_start = 0x03009D70;  /* ROM: 0x035CA000 */
  _binary_baserom_anime_texture_3_static_end   = 0x03009D80;  /* ROM: 0x035CA010 */

/* build/baserom/anime_texture_4_static.o */
 /* .data */
  _binary_baserom_anime_texture_4_static_start = 0x03009D80;  /* ROM: 0x035CB000 */
  _binary_baserom_anime_texture_4_static_end   = 0x03009D90;  /* ROM: 0x035CB010 */

/* build/baserom/anime_texture_5_static.o */
 /* .data */
  _binary_baserom_anime_texture_5_static_start = 0x03009D90;  /* ROM: 0x035CC000 */
  _binary_baserom_anime_texture_5_static_end   = 0x03009DA0;  /* ROM: 0x035CC010 */

/* build/baserom/anime_texture_6_static.o */
 /* .data */
  _binary_baserom_anime_texture_6_static_start = 0x03009DA0;  /* ROM: 0x035CD000 */
  _binary_baserom_anime_texture_6_static_end   = 0x03009DB0;  /* ROM: 0x035CD010 */

/* build/baserom/softsprite_matrix_static.o */
 /* .data */
  _binary_baserom_softsprite_matrix_static_start = 0x03009DB0;  /* ROM: 0x035CE000 */
  _binary_baserom_softsprite_matrix_static_end   = 0x03009DF0;  /* ROM: 0x035CE040 */

