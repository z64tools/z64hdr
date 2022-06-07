/* build/data/rsp_boot.text.o */
 /* .text */
  rspbootTextStart = 0x80009320;  /* ROM: 0x00009F20 */
  rspbootTextEnd   = 0x800093F0;  /* ROM: 0x00009FF0 */

/* build/data/unk_800093F0.data.o */
 /* .data */
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

/* build/data/rsp.text.o */
 /* .text */
  aspMainTextStart         = 0x801120C0;  /* ROM: 0x00B89260 */
  aspMainTextEnd           = 0x80113070;  /* ROM: 0x00B8A210 */
  gspS2DEX2d_fifoTextStart = 0x80113070;  /* ROM: 0x00B8A210 */
  njpgdspMainTextStart     = 0x80114930;  /* ROM: 0x00B8BAD0 */
  gspS2DEX2d_fifoTextEnd   = 0x80114930;  /* ROM: 0x00B8BAD0 */
  njpgdspMainTextEnd       = 0x80115420;  /* ROM: 0x00B8C5C0 */

/* build/data/z_text.data.o */
 /* .data */
  gMojiFontTLUTs = 0x8012A740;  /* ROM: 0x00BA18E0 */
  gMojiFontTex   = 0x8012A7C0;  /* ROM: 0x00BA1960 */

/* build/data/unk_8012ABC0.data.o */
 /* .data */
  D_8012ABC0 = 0x8012ABC0;  /* ROM: 0x00BA1D60 */

/* build/data/audio_tables.rodata.o */
 /* .rodata */
  gSoundFontTable    = 0x801550D0;  /* ROM: 0x00BCC270 */
  gSequenceFontTable = 0x80155340;  /* ROM: 0x00BCC4E0 */
  gSequenceTable     = 0x80155500;  /* ROM: 0x00BCC6A0 */
  gSampleBankTable   = 0x80155BF0;  /* ROM: 0x00BCCD90 */

/* build/data/rsp.rodata.o */
 /* .rodata */
  aspMainDataStart                      = 0x80155C70;  /* ROM: 0x00BCCE10 */
  gspF3DZEX2_NoN_PosLight_fifoTextStart = 0x80155F50;  /* ROM: 0x00BCD0F0 */
  aspMainDataEnd                        = 0x80155F50;  /* ROM: 0x00BCD0F0 */
  gspF3DZEX2_NoN_PosLight_fifoDataStart = 0x80157580;  /* ROM: 0x00BCE720 */
  gspF3DZEX2_NoN_PosLight_fifoTextEnd   = 0x80157580;  /* ROM: 0x00BCE720 */
  gspS2DEX2d_fifoDataStart              = 0x801579A0;  /* ROM: 0x00BCEB40 */
  gspF3DZEX2_NoN_PosLight_fifoDataEnd   = 0x801579A0;  /* ROM: 0x00BCEB40 */
  njpgdspMainDataStart                  = 0x80157D30;  /* ROM: 0x00BCEED0 */
  gspS2DEX2d_fifoDataEnd                = 0x80157D30;  /* ROM: 0x00BCEED0 */
  njpgdspMainDataEnd                    = 0x80157D90;  /* ROM: 0x00BCEF30 */

/* build/data/fault.bss.o */
 /* .bss */
  sFaultInstance      = 0x8016A800;
  sFaultAwaitingInput = 0x8016A804;
  sFaultStack         = 0x8016A808;
  sFaultThreadInfo    = 0x8016AE08;
  gFaultMgr           = 0x8016AE28;

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

