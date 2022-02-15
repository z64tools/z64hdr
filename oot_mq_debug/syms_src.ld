/* build/src/boot/boot_main.o */
 /* .text */
  cleararena = 0x80000460;  /* ROM: 0x00001060 */
  bootproc   = 0x80000498;  /* ROM: 0x00001098 */
 /* .bss */
  sBootThreadInfo  = 0x80012370;  /* ROM: 0x00012F70 */
  sIdleThread      = 0x80012390;  /* ROM: 0x00012F90 */
  sIdleThreadStack = 0x80012540;  /* ROM: 0x00013140 */
  sIdleThreadInfo  = 0x80012940;  /* ROM: 0x00013540 */
  sBootThreadStack = 0x80012960;  /* ROM: 0x00013560 */

/* build/src/boot/idle.o */
 /* .text */
  Main_ThreadEntry = 0x800005A0;  /* ROM: 0x000011A0 */
  Idle_ThreadEntry = 0x80000694;  /* ROM: 0x00001294 */
 /* .data */
  D_80009430                   = 0x80009430;  /* ROM: 0x0000A030 */
  gViConfigUseDefault          = 0x80009434;  /* ROM: 0x0000A034 */
  gViConfigAdditionalScanLines = 0x80009438;  /* ROM: 0x0000A038 */
  gViConfigFeatures            = 0x8000943C;  /* ROM: 0x0000A03C */
  gViConfigXScale              = 0x80009440;  /* ROM: 0x0000A040 */
  gViConfigYScale              = 0x80009444;  /* ROM: 0x0000A044 */
 /* .bss */
  gMainThread    = 0x80012D60;  /* ROM: 0x00013960 */
  sMainStack     = 0x80012F10;  /* ROM: 0x00013B10 */
  sMainStackInfo = 0x80013810;  /* ROM: 0x00014410 */
  sPiMgrCmdBuff  = 0x80013830;  /* ROM: 0x00014430 */
  gPiMgrCmdQ     = 0x800138F8;  /* ROM: 0x000144F8 */
  gViConfigMode  = 0x80013910;  /* ROM: 0x00014510 */
  D_80013960     = 0x80013960;  /* ROM: 0x00014560 */

/* build/src/boot/viconfig.o */
 /* .text */
  ViConfig_UpdateVi    = 0x80000A10;  /* ROM: 0x00001610 */
  ViConfig_UpdateBlack = 0x80000B48;  /* ROM: 0x00001748 */
 /* .data */
  gCartHandle = 0x80009450;  /* ROM: 0x0000A050 */

/* build/src/boot/z_std_dma.o */
 /* .text */
  DmaMgr_CompareName     = 0x80000B90;  /* ROM: 0x00001790 */
  DmaMgr_DmaRomToRam     = 0x80000BFC;  /* ROM: 0x000017FC */
  DmaMgr_DmaHandler      = 0x80000F68;  /* ROM: 0x00001B68 */
  DmaMgr_DmaFromDriveRom = 0x800010A0;  /* ROM: 0x00001CA0 */
  DmaMgr_Error           = 0x80001140;  /* ROM: 0x00001D40 */
  DmaMgr_GetFileNameImpl = 0x80001330;  /* ROM: 0x00001F30 */
  DmaMgr_GetFileName     = 0x80001390;  /* ROM: 0x00001F90 */
  DmaMgr_ProcessMsg      = 0x800013FC;  /* ROM: 0x00001FFC */
  DmaMgr_ThreadEntry     = 0x800015CC;  /* ROM: 0x000021CC */
  DmaMgr_SendRequestImpl = 0x80001664;  /* ROM: 0x00002264 */
  DmaMgr_SendRequest0    = 0x800017C0;  /* ROM: 0x000023C0 */
  DmaMgr_Init            = 0x8000183C;  /* ROM: 0x0000243C */
  DmaMgr_SendRequest2    = 0x80001A5C;  /* ROM: 0x0000265C */
  DmaMgr_SendRequest1    = 0x80001AA0;  /* ROM: 0x000026A0 */
 /* .data */
  D_80009460             = 0x80009460;  /* ROM: 0x0000A060 */
  gDmaMgrDmaBuffSize     = 0x80009464;  /* ROM: 0x0000A064 */
  sDmaMgrIsRomCompressed = 0x80009468;  /* ROM: 0x0000A068 */
  sDmaMgrFileNames       = 0x8000946C;  /* ROM: 0x0000A06C */
 /* .bss */
  sDmaMgrStackInfo   = 0x80013970;  /* ROM: 0x00014570 */
  sDmaMgrMsgQueue    = 0x80013990;  /* ROM: 0x00014590 */
  sDmaMgrMsgs        = 0x800139A8;  /* ROM: 0x000145A8 */
  sDmaMgrThread      = 0x80013A28;  /* ROM: 0x00014628 */
  sDmaMgrStack       = 0x80013BD8;  /* ROM: 0x000147D8 */
  sDmaMgrCurFileName = 0x800140D8;  /* ROM: 0x00014CD8 */
  sDmaMgrCurFileLine = 0x800140DC;  /* ROM: 0x00014CDC */

/* build/src/boot/yaz0.o */
 /* .text */
  Yaz0_FirstDMA       = 0x80001B30;  /* ROM: 0x00002730 */
  Yaz0_NextDMA        = 0x80001BC8;  /* ROM: 0x000027C8 */
  Yaz0_DecompressImpl = 0x80001CB0;  /* ROM: 0x000028B0 */
  Yaz0_Decompress     = 0x80001E14;  /* ROM: 0x00002A14 */
 /* .bss */
  sYaz0DataBuffer  = 0x800140E0;  /* ROM: 0x00014CE0 */
  sYaz0CurDataEnd  = 0x800144E0;  /* ROM: 0x000150E0 */
  sYaz0CurRomStart = 0x800144E4;  /* ROM: 0x000150E4 */
  sYaz0CurSize     = 0x800144E8;  /* ROM: 0x000150E8 */
  sYaz0MaxPtr      = 0x800144EC;  /* ROM: 0x000150EC */

/* build/src/boot/z_locale.o */
 /* .text */
  Locale_Init           = 0x80001E60;  /* ROM: 0x00002A60 */
  Locale_ResetRegion    = 0x80001F3C;  /* ROM: 0x00002B3C */
  func_80001F48         = 0x80001F48;  /* ROM: 0x00002B48 */
  func_80001F8C         = 0x80001F8C;  /* ROM: 0x00002B8C */
  Locale_IsRegionNative = 0x80001FD0;  /* ROM: 0x00002BD0 */
 /* .data */
  gCurrentRegion = 0x8000AC60;  /* ROM: 0x0000B860 */
 /* .bss */
  sCartInfo = 0x800144F0;  /* ROM: 0x000150F0 */

/* build/src/boot/assert.o */
 /* .text */
  __assert = 0x80001FF0;  /* ROM: 0x00002BF0 */

/* build/src/boot/is_debug.o */
 /* .text */
  isPrintfInit       = 0x80002080;  /* ROM: 0x00002C80 */
  osSyncPrintfUnused = 0x800020F0;  /* ROM: 0x00002CF0 */
  osSyncPrintf       = 0x80002130;  /* ROM: 0x00002D30 */
  rmonPrintf         = 0x80002170;  /* ROM: 0x00002D70 */
  is_proutSyncPrintf = 0x800021B0;  /* ROM: 0x00002DB0 */
  func_80002384      = 0x80002384;  /* ROM: 0x00002F84 */
 /* .bss */
  sISVHandle = 0x80014510;  /* ROM: 0x00015110 */

/* build/src/libultra/io/driverominit.o */
 /* .text */
  osDriveRomInit = 0x800023D0;  /* ROM: 0x00002FD0 */
 /* .bss */
  __DriveRomHandle = 0x80014520;  /* ROM: 0x00015120 */

/* build/src/boot/stackcheck.o */
 /* .text */
  StackCheck_Init     = 0x80002660;  /* ROM: 0x00003260 */
  StackCheck_Cleanup  = 0x8000276C;  /* ROM: 0x0000336C */
  StackCheck_GetState = 0x80002808;  /* ROM: 0x00003408 */
  StackCheck_CheckAll = 0x8000295C;  /* ROM: 0x0000355C */
  StackCheck_Check    = 0x800029B4;  /* ROM: 0x000035B4 */
 /* .data */
  sStackInfoListStart = 0x8000AC80;  /* ROM: 0x0000B880 */
  sStackInfoListEnd   = 0x8000AC84;  /* ROM: 0x0000B884 */

/* build/src/boot/logutils.o */
 /* .text */
  LogUtils_CheckFloatRange   = 0x800029F0;  /* ROM: 0x000035F0 */
  LogUtils_CheckIntRange     = 0x80002A88;  /* ROM: 0x00003688 */
  LogUtils_LogHexDump        = 0x80002B10;  /* ROM: 0x00003710 */
  LogUtils_LogPointer        = 0x80002CB4;  /* ROM: 0x000038B4 */
  LogUtils_CheckBoundary     = 0x80002D04;  /* ROM: 0x00003904 */
  LogUtils_CheckNullPointer  = 0x80002D60;  /* ROM: 0x00003960 */
  LogUtils_CheckValidPointer = 0x80002DA0;  /* ROM: 0x000039A0 */
  LogUtils_LogThreadId       = 0x80002E10;  /* ROM: 0x00003A10 */
  LogUtils_HungupThread      = 0x80002E50;  /* ROM: 0x00003A50 */
  LogUtils_ResetHungup       = 0x80002E9C;  /* ROM: 0x00003A9C */

/* build/src/libultra/rmon/sprintf.o */
 /* .text */
  proutSprintf = 0x80002ED0;  /* ROM: 0x00003AD0 */
  vsprintf     = 0x80002EF4;  /* ROM: 0x00003AF4 */
  sprintf      = 0x80002F44;  /* ROM: 0x00003B44 */

/* build/src/libultra/io/piacs.o */
 /* .text */
  __osPiCreateAccessQueue = 0x80002FA0;  /* ROM: 0x00003BA0 */
  __osPiGetAccess         = 0x80002FF0;  /* ROM: 0x00003BF0 */
  __osPiRelAccess         = 0x80003034;  /* ROM: 0x00003C34 */
 /* .data */
  __osPiAccessQueueEnabled = 0x8000AC90;  /* ROM: 0x0000B890 */
 /* .bss */
  piAccessBuf       = 0x800145A0;  /* ROM: 0x000151A0 */
  __osPiAccessQueue = 0x800145A8;  /* ROM: 0x000151A8 */

/* build/src/libultra/os/sendmesg.o */
 /* .text */
  osSendMesg = 0x80003060;  /* ROM: 0x00003C60 */

/* build/src/libultra/os/stopthread.o */
 /* .text */
  osStopThread = 0x800031B0;  /* ROM: 0x00003DB0 */

/* build/src/libultra/io/viextend.o */
 /* .text */
  osViExtendVStart = 0x80003270;  /* ROM: 0x00003E70 */

/* build/src/libultra/os/recvmesg.o */
 /* .text */
  osRecvMesg = 0x80003280;  /* ROM: 0x00003E80 */

/* build/src/libultra/os/initialize.o */
 /* .text */
  __createSpeedParam        = 0x800033C0;  /* ROM: 0x00003FC0 */
  __osInitialize_common     = 0x8000345C;  /* ROM: 0x0000405C */
  __osInitialize_autodetect = 0x80003708;  /* ROM: 0x00004308 */
 /* .data */
  osClockRate       = 0x8000ACF0;  /* ROM: 0x0000B8F0 */
  osViClock         = 0x8000ACF8;  /* ROM: 0x0000B8F8 */
  __osShutdown      = 0x8000ACFC;  /* ROM: 0x0000B8FC */
  __OSGlobalIntMask = 0x8000AD00;  /* ROM: 0x0000B900 */
 /* .bss */
  D_800145C0 = 0x800145C0;  /* ROM: 0x000151C0 */

/* build/src/libultra/libc/ll.o */
 /* .text */
  __ull_rshift  = 0x80003710;  /* ROM: 0x00004310 */
  __ull_rem     = 0x8000373C;  /* ROM: 0x0000433C */
  __ull_div     = 0x80003778;  /* ROM: 0x00004378 */
  __ll_lshift   = 0x800037B4;  /* ROM: 0x000043B4 */
  __ll_rem      = 0x800037E0;  /* ROM: 0x000043E0 */
  __ll_div      = 0x8000381C;  /* ROM: 0x0000441C */
  __ll_mul      = 0x80003878;  /* ROM: 0x00004478 */
  __ull_divremi = 0x800038A8;  /* ROM: 0x000044A8 */
  __ll_mod      = 0x80003908;  /* ROM: 0x00004508 */
  __ll_rshift   = 0x800039A4;  /* ROM: 0x000045A4 */

/* build/src/libultra/os/dequeuethread.o */
 /* .text */
  __osDequeueThread = 0x80004300;  /* ROM: 0x00004F00 */

/* build/src/libultra/os/destroythread.o */
 /* .text */
  osDestroyThread = 0x80004340;  /* ROM: 0x00004F40 */

/* build/src/libultra/os/createthread.o */
 /* .text */
  osCreateThread = 0x80004550;  /* ROM: 0x00005150 */
 /* .data */
  __osThreadTail    = 0x8000AD40;  /* ROM: 0x0000B940 */
  __osRunQueue      = 0x8000AD48;  /* ROM: 0x0000B948 */
  __osActiveQueue   = 0x8000AD4C;  /* ROM: 0x0000B94C */
  __osRunningThread = 0x8000AD50;  /* ROM: 0x0000B950 */
  __osFaultedThread = 0x8000AD54;  /* ROM: 0x0000B954 */

/* build/src/libultra/io/vigetnextframebuf.o */
 /* .text */
  osViGetNextFramebuffer = 0x80004740;  /* ROM: 0x00005340 */

/* build/src/libultra/io/pimgr.o */
 /* .text */
  osCreatePiManager = 0x80004780;  /* ROM: 0x00005380 */
 /* .data */
  __osPiDevMgr      = 0x8000AD60;  /* ROM: 0x0000B960 */
  __osPiTable       = 0x8000AD7C;  /* ROM: 0x0000B97C */
  __osCurrentHandle = 0x8000AD80;  /* ROM: 0x0000B980 */
 /* .bss */
  __Dom1SpeedParam = 0x800145D0;  /* ROM: 0x000151D0 */
  __Dom2SpeedParam = 0x80014648;  /* ROM: 0x00015248 */
  piThread         = 0x800146C0;  /* ROM: 0x000152C0 */
  piStackThread    = 0x80014870;  /* ROM: 0x00015470 */
  piEventQueue     = 0x80015870;  /* ROM: 0x00016470 */
  piEventBuf       = 0x80015888;  /* ROM: 0x00016488 */
  __osThreadSave   = 0x80015890;  /* ROM: 0x00016490 */

/* build/src/libultra/io/devmgr.o */
 /* .text */
  __osDevMgrMain = 0x80004900;  /* ROM: 0x00005500 */

/* build/src/libultra/io/pirawdma.o */
 /* .text */
  __osPiRawStartDma = 0x80004D10;  /* ROM: 0x00005910 */

/* build/src/libultra/os/virtualtophysical.o */
 /* .text */
  osVirtualToPhysical = 0x80004DE0;  /* ROM: 0x000059E0 */

/* build/src/libultra/io/viblack.o */
 /* .text */
  osViBlack = 0x80004E60;  /* ROM: 0x00005A60 */

/* build/src/libultra/io/sirawread.o */
 /* .text */
  __osSiRawReadIo = 0x80004ED0;  /* ROM: 0x00005AD0 */

/* build/src/libultra/os/getthreadid.o */
 /* .text */
  osGetThreadId = 0x80004F20;  /* ROM: 0x00005B20 */

/* build/src/libultra/io/visetmode.o */
 /* .text */
  osViSetMode = 0x80004FE0;  /* ROM: 0x00005BE0 */

/* build/src/libultra/os/getmemsize.o */
 /* .text */
  osGetMemSize = 0x80005100;  /* ROM: 0x00005D00 */

/* build/src/libultra/os/seteventmesg.o */
 /* .text */
  osSetEventMesg = 0x80005220;  /* ROM: 0x00005E20 */
 /* .data */
  __osPreNMI = 0x8000AD90;  /* ROM: 0x0000B990 */
 /* .bss */
  __osEventStateTab = 0x80015A40;  /* ROM: 0x00016640 */

/* build/src/libultra/rmon/xprintf.o */
 /* .text */
  _Printf = 0x800052E0;  /* ROM: 0x00005EE0 */
  _Putfld = 0x80005928;  /* ROM: 0x00006528 */
 /* .data */
  spaces = 0x8000ADA0;  /* ROM: 0x0000B9A0 */
  zeroes = 0x8000ADC4;  /* ROM: 0x0000B9C4 */

/* build/src/libultra/io/epidma.o */
 /* .text */
  osEPiStartDma = 0x80006010;  /* ROM: 0x00006C10 */

/* build/src/libultra/libc/string.o */
 /* .text */
  strchr = 0x800060B0;  /* ROM: 0x00006CB0 */
  strlen = 0x800060F0;  /* ROM: 0x00006CF0 */
  memcpy = 0x80006118;  /* ROM: 0x00006D18 */

/* build/src/libultra/os/createmesgqueue.o */
 /* .text */
  osCreateMesgQueue = 0x800061D0;  /* ROM: 0x00006DD0 */

/* build/src/libultra/io/si.o */
 /* .text */
  __osSiDeviceBusy = 0x800062B0;  /* ROM: 0x00006EB0 */

/* build/src/libultra/os/jammesg.o */
 /* .text */
  osJamMesg = 0x800062E0;  /* ROM: 0x00006EE0 */

/* build/src/libultra/os/setthreadpri.o */
 /* .text */
  osSetThreadPri = 0x80006430;  /* ROM: 0x00007030 */

/* build/src/libultra/os/getthreadpri.o */
 /* .text */
  osGetThreadPri = 0x80006510;  /* ROM: 0x00007110 */

/* build/src/libultra/io/epirawread.o */
 /* .text */
  __osEPiRawReadIo = 0x80006530;  /* ROM: 0x00007130 */

/* build/src/libultra/io/viswapbuf.o */
 /* .text */
  osViSwapBuffer = 0x80006690;  /* ROM: 0x00007290 */

/* build/src/libultra/io/epirawdma.o */
 /* .text */
  __osEPiRawStartDma = 0x800066E0;  /* ROM: 0x000072E0 */

/* build/src/libultra/os/gettime.o */
 /* .text */
  osGetTime = 0x800069E0;  /* ROM: 0x000075E0 */

/* build/src/libultra/os/timerintr.o */
 /* .text */
  __osTimerServicesInit = 0x80006A70;  /* ROM: 0x00007670 */
  __osTimerInterrupt    = 0x80006AFC;  /* ROM: 0x000076FC */
  __osSetTimerIntr      = 0x80006C74;  /* ROM: 0x00007874 */
  __osInsertTimer       = 0x80006D14;  /* ROM: 0x00007914 */
 /* .data */
  __osTimerList = 0x8000ADF0;  /* ROM: 0x0000B9F0 */
 /* .bss */
  __osBaseTimer    = 0x80015AC0;  /* ROM: 0x000166C0 */
  __osCurrentTime  = 0x80015AE0;  /* ROM: 0x000166E0 */
  __osBaseCounter  = 0x80015AE8;  /* ROM: 0x000166E8 */
  __osViIntrCount  = 0x80015AEC;  /* ROM: 0x000166EC */
  __osTimerCounter = 0x80015AF0;  /* ROM: 0x000166F0 */

/* build/src/libultra/os/setglobalintmask.o */
 /* .text */
  __osSetGlobalIntMask = 0x80006EB0;  /* ROM: 0x00007AB0 */

/* build/src/libultra/os/resetglobalintmask.o */
 /* .text */
  __osResetGlobalIntMask = 0x80007220;  /* ROM: 0x00007E20 */

/* build/src/libultra/io/vi.o */
 /* .text */
  __osViInit = 0x80007310;  /* ROM: 0x00007F10 */
 /* .data */
  vi         = 0x8000AEA0;  /* ROM: 0x0000BAA0 */
  __osViCurr = 0x8000AF00;  /* ROM: 0x0000BB00 */
  __osViNext = 0x8000AF04;  /* ROM: 0x0000BB04 */

/* build/src/libultra/io/viswapcontext.o */
 /* .text */
  __osViSwapContext = 0x80007430;  /* ROM: 0x00008030 */

/* build/src/libultra/io/pigetcmdq.o */
 /* .text */
  osPiGetCmdQueue = 0x80007730;  /* ROM: 0x00008330 */

/* build/src/libultra/io/epiread.o */
 /* .text */
  osEPiReadIo = 0x80007760;  /* ROM: 0x00008360 */

/* build/src/libultra/io/visetspecial.o */
 /* .text */
  osViSetSpecialFeatures = 0x800077B0;  /* ROM: 0x000083B0 */

/* build/src/libultra/io/cartrominit.o */
 /* .text */
  osCartRomInit = 0x80007910;  /* ROM: 0x00008510 */
 /* .bss */
  __CartRomHandle = 0x80015B00;  /* ROM: 0x00016700 */

/* build/src/libultra/io/epiwrite.o */
 /* .text */
  osEPiWriteIo = 0x80007A90;  /* ROM: 0x00008690 */

/* build/src/libultra/os/yieldthread.o */
 /* .text */
  osYieldThread = 0x80007B40;  /* ROM: 0x00008740 */

/* build/src/libultra/io/epirawwrite.o */
 /* .text */
  __osEPiRawWriteIo = 0x80007BA0;  /* ROM: 0x000087A0 */

/* build/src/libultra/rmon/xlitob.o */
 /* .text */
  _Litob = 0x80007D00;  /* ROM: 0x00008900 */
 /* .data */
  D_8000AF70 = 0x8000AF70;  /* ROM: 0x0000BB70 */
  D_8000AF84 = 0x8000AF84;  /* ROM: 0x0000BB84 */

/* build/src/libultra/libc/ldiv.o */
 /* .text */
  ldiv  = 0x80007FA0;  /* ROM: 0x00008BA0 */
  lldiv = 0x80008024;  /* ROM: 0x00008C24 */

/* build/src/libultra/rmon/xldtob.o */
 /* .text */
  _Ldtob     = 0x80008130;  /* ROM: 0x00008D30 */
  _Ldunscale = 0x800085C0;  /* ROM: 0x000091C0 */
  _Genld     = 0x80008678;  /* ROM: 0x00009278 */
 /* .rodata */
  D_800122E0 = 0x800122E0;  /* ROM: 0x00012EE0 */

/* build/src/libultra/io/sirawwrite.o */
 /* .text */
  __osSiRawWriteIo = 0x80008C40;  /* ROM: 0x00009840 */

/* build/src/libultra/io/vimgr.o */
 /* .text */
  osCreateViManager = 0x80008CA0;  /* ROM: 0x000098A0 */
  viMgrMain         = 0x80008E20;  /* ROM: 0x00009A20 */
 /* .data */
  __osViDevMgr          = 0x8000AFA0;  /* ROM: 0x0000BBA0 */
  __additional_scanline = 0x8000AFBC;  /* ROM: 0x0000BBBC */
 /* .bss */
  viThread      = 0x80015B80;  /* ROM: 0x00016780 */
  viThreadStack = 0x80015D30;  /* ROM: 0x00016930 */
  viEventQueue  = 0x80016D30;  /* ROM: 0x00017930 */
  viEventBuf    = 0x80016D48;  /* ROM: 0x00017948 */
  viRetraceMsg  = 0x80016D60;  /* ROM: 0x00017960 */
  viCounterMsg  = 0x80016D78;  /* ROM: 0x00017978 */

/* build/src/libultra/io/vigetcurrcontext.o */
 /* .text */
  __osViGetCurrentContext = 0x80008FB0;  /* ROM: 0x00009BB0 */

/* build/src/libultra/os/startthread.o */
 /* .text */
  osStartThread = 0x80008FC0;  /* ROM: 0x00009BC0 */

/* build/src/libultra/io/visetyscale.o */
 /* .text */
  osViSetYScale = 0x80009110;  /* ROM: 0x00009D10 */

/* build/src/libultra/io/visetxscale.o */
 /* .text */
  osViSetXScale = 0x80009160;  /* ROM: 0x00009D60 */

/* build/src/libultra/os/sethwintrroutine.o */
 /* .text */
  __osSetHWIntrRoutine = 0x80009270;  /* ROM: 0x00009E70 */

/* build/src/libultra/os/gethwintrroutine.o */
 /* .text */
  __osGetHWIntrRoutine = 0x800092E0;  /* ROM: 0x00009EE0 */

/* build/src/libultra/io/vimodepallan1.o */
 /* .data */
  osViModePalLan1 = 0x8000ACA0;  /* ROM: 0x0000B8A0 */

/* build/src/libultra/io/vimodentsclan1.o */
 /* .data */
  osViModeNtscLan1 = 0x8000AE00;  /* ROM: 0x0000BA00 */

/* build/src/libultra/io/vimodempallan1.o */
 /* .data */
  osViModeMpalLan1 = 0x8000AE50;  /* ROM: 0x0000BA50 */

/* build/src/libultra/io/vimodefpallan1.o */
 /* .data */
  osViModeFpalLan1 = 0x8000AF20;  /* ROM: 0x0000BB20 */

/* build/src/boot/build.o */
 /* .rodata */
  gBuildTeam       = 0x80012340;  /* ROM: 0x00012F40 */
  gBuildDate       = 0x80012350;  /* ROM: 0x00012F50 */
  gBuildMakeOption = 0x80012364;  /* ROM: 0x00012F64 */

/* build/src/dmadata/dmadata.o */
 /* .data */
  gDmaDataTable   = 0x80016DA0;  /* ROM: 0x00012F70 */
  sDmaDataPadding = 0x8001CD70;  /* ROM: 0x00018F40 */

/* build/src/code/z_en_a_keep.o */
 /* .text */
  EnAObj_SetupAction          = 0x8001CE60;  /* ROM: 0x00A94000 */
  EnAObj_Init                 = 0x8001CE68;  /* ROM: 0x00A94008 */
  EnAObj_Destroy              = 0x8001D1A8;  /* ROM: 0x00A94348 */
  EnAObj_WaitFinishedTalking  = 0x8001D204;  /* ROM: 0x00A943A4 */
  EnAObj_SetupWaitTalk        = 0x8001D234;  /* ROM: 0x00A943D4 */
  EnAObj_WaitTalk             = 0x8001D25C;  /* ROM: 0x00A943FC */
  EnAObj_SetupBlockRot        = 0x8001D310;  /* ROM: 0x00A944B0 */
  EnAObj_BlockRot             = 0x8001D360;  /* ROM: 0x00A94500 */
  EnAObj_SetupBoulderFragment = 0x8001D480;  /* ROM: 0x00A94620 */
  EnAObj_BoulderFragment      = 0x8001D4A8;  /* ROM: 0x00A94648 */
  EnAObj_SetupBlock           = 0x8001D5C8;  /* ROM: 0x00A94768 */
  EnAObj_Block                = 0x8001D608;  /* ROM: 0x00A947A8 */
  EnAObj_Update               = 0x8001D6F0;  /* ROM: 0x00A94890 */
  EnAObj_Draw                 = 0x8001D804;  /* ROM: 0x00A949A4 */
 /* .data */
  En_A_Obj_InitVars = 0x80115420;  /* ROM: 0x00B8C5C0 */

/* build/src/code/z_en_item00.o */
 /* .text */
  EnItem00_SetupAction        = 0x8001D930;  /* ROM: 0x00A94AD0 */
  EnItem00_Init               = 0x8001D938;  /* ROM: 0x00A94AD8 */
  EnItem00_Destroy            = 0x8001DFA0;  /* ROM: 0x00A95140 */
  func_8001DFC8               = 0x8001DFC8;  /* ROM: 0x00A95168 */
  func_8001E1C8               = 0x8001E1C8;  /* ROM: 0x00A95368 */
  func_8001E304               = 0x8001E304;  /* ROM: 0x00A954A4 */
  func_8001E5C8               = 0x8001E5C8;  /* ROM: 0x00A95768 */
  EnItem00_Update             = 0x8001E71C;  /* ROM: 0x00A958BC */
  EnItem00_Draw               = 0x8001ED9C;  /* ROM: 0x00A95F3C */
  EnItem00_DrawRupee          = 0x8001EF30;  /* ROM: 0x00A960D0 */
  EnItem00_DrawCollectible    = 0x8001F080;  /* ROM: 0x00A96220 */
  EnItem00_DrawHeartContainer = 0x8001F1F4;  /* ROM: 0x00A96394 */
  EnItem00_DrawHeartPiece     = 0x8001F334;  /* ROM: 0x00A964D4 */
  func_8001F404               = 0x8001F404;  /* ROM: 0x00A965A4 */
  Item_DropCollectible        = 0x8001F548;  /* ROM: 0x00A966E8 */
  Item_DropCollectible2       = 0x8001F77C;  /* ROM: 0x00A9691C */
  Item_DropCollectibleRandom  = 0x8001F940;  /* ROM: 0x00A96AE0 */
 /* .data */
  En_Item00_InitVars = 0x801154C0;  /* ROM: 0x00B8C660 */

/* build/src/code/z_eff_blure.o */
 /* .text */
  EffectBlure_AddVertex                    = 0x8001FDF0;  /* ROM: 0x00A96F90 */
  EffectBlure_AddSpace                     = 0x80020120;  /* ROM: 0x00A972C0 */
  EffectBlure_InitElements                 = 0x80020184;  /* ROM: 0x00A97324 */
  EffectBlure_Init1                        = 0x8002023C;  /* ROM: 0x00A973DC */
  EffectBlure_Init2                        = 0x80020348;  /* ROM: 0x00A974E8 */
  EffectBlure_Destroy                      = 0x80020478;  /* ROM: 0x00A97618 */
  EffectBlure_Update                       = 0x80020480;  /* ROM: 0x00A97620 */
  EffectBlure_UpdateFlags                  = 0x800208E0;  /* ROM: 0x00A97A80 */
  EffectBlure_GetComputedValues            = 0x80020A50;  /* ROM: 0x00A97BF0 */
  EffectBlure_SetupSmooth                  = 0x80020F60;  /* ROM: 0x00A98100 */
  EffectBlure_DrawElemNoInterpolation      = 0x80020FC0;  /* ROM: 0x00A98160 */
  EffectBlure_DrawElemHermiteInterpolation = 0x800214D0;  /* ROM: 0x00A98670 */
  EffectBlure_DrawSmooth                   = 0x80021F00;  /* ROM: 0x00A990A0 */
  EffectBlure_SetupSimple                  = 0x800221FC;  /* ROM: 0x00A9939C */
  EffectBlure_SetupSimpleAlt               = 0x80022264;  /* ROM: 0x00A99404 */
  EffectBlure_DrawSimpleVertices           = 0x800224F4;  /* ROM: 0x00A99694 */
  EffectBlure_DrawSimple                   = 0x80022A10;  /* ROM: 0x00A99BB0 */
  EffectBlure_Draw                         = 0x80022F20;  /* ROM: 0x00A9A0C0 */
 /* .data */
  sSetupHandlers = 0x80115780;  /* ROM: 0x00B8C920 */
  D_80115788     = 0x80115788;  /* ROM: 0x00B8C928 */
  D_8011578C     = 0x8011578C;  /* ROM: 0x00B8C92C */
  D_801157CC     = 0x801157CC;  /* ROM: 0x00B8C96C */

/* build/src/code/z_eff_shield_particle.o */
 /* .text */
  EffectShieldParticle_Init      = 0x80023450;  /* ROM: 0x00A9A5F0 */
  EffectShieldParticle_Destroy   = 0x800236B4;  /* ROM: 0x00A9A854 */
  EffectShieldParticle_Update    = 0x80023738;  /* ROM: 0x00A9A8D8 */
  EffectShieldParticle_GetColors = 0x8002389C;  /* ROM: 0x00A9AA3C */
  EffectShieldParticle_Draw      = 0x800245BC;  /* ROM: 0x00A9B75C */

/* build/src/code/z_eff_spark.o */
 /* .text */
  EffectSpark_Init    = 0x80024B00;  /* ROM: 0x00A9BCA0 */
  EffectSpark_Destroy = 0x80024F0C;  /* ROM: 0x00A9C0AC */
  EffectSpark_Update  = 0x80024F14;  /* ROM: 0x00A9C0B4 */
  EffectSpark_Draw    = 0x80025000;  /* ROM: 0x00A9C1A0 */

/* build/src/code/z_eff_ss_dead.o */
 /* .text */
  func_80026230 = 0x80026230;  /* ROM: 0x00A9D3D0 */
  func_80026400 = 0x80026400;  /* ROM: 0x00A9D5A0 */
  func_80026608 = 0x80026608;  /* ROM: 0x00A9D7A8 */
  func_80026690 = 0x80026690;  /* ROM: 0x00A9D830 */
  func_80026860 = 0x80026860;  /* ROM: 0x00A9DA00 */
  func_80026A6C = 0x80026A6C;  /* ROM: 0x00A9DC0C */

/* build/src/code/z_effect.o */
 /* .text */
  Effect_GetGlobalCtx = 0x80026B00;  /* ROM: 0x00A9DCA0 */
  Effect_GetByIndex   = 0x80026B0C;  /* ROM: 0x00A9DCAC */
  Effect_InitStatus   = 0x80026C1C;  /* ROM: 0x00A9DDBC */
  Effect_InitContext  = 0x80026C2C;  /* ROM: 0x00A9DDCC */
  Effect_Add          = 0x80026CD4;  /* ROM: 0x00A9DE74 */
  Effect_DrawAll      = 0x80026E74;  /* ROM: 0x00A9E014 */
  Effect_UpdateAll    = 0x80026F70;  /* ROM: 0x00A9E110 */
  Effect_Delete       = 0x8002709C;  /* ROM: 0x00A9E23C */
  Effect_DeleteAll    = 0x800271A8;  /* ROM: 0x00A9E348 */
 /* .data */
  sEffectInfoTable = 0x80115860;  /* ROM: 0x00B8CA00 */
 /* .bss */
  sEffectContext = 0x80157DA0;  /* ROM: 0x00BCEF40 */

/* build/src/code/z_effect_soft_sprite.o */
 /* .text */
  EffectSs_InitInfo  = 0x800272B0;  /* ROM: 0x00A9E450 */
  EffectSs_ClearAll  = 0x80027410;  /* ROM: 0x00A9E5B0 */
  EffectSs_Delete    = 0x800274E0;  /* ROM: 0x00A9E680 */
  EffectSs_Reset     = 0x8002753C;  /* ROM: 0x00A9E6DC */
  EffectSs_FindSlot  = 0x800275D0;  /* ROM: 0x00A9E770 */
  EffectSs_Insert    = 0x80027704;  /* ROM: 0x00A9E8A4 */
  EffectSs_Spawn     = 0x80027798;  /* ROM: 0x00A9E938 */
  EffectSs_Update    = 0x80027A40;  /* ROM: 0x00A9EBE0 */
  EffectSs_UpdateAll = 0x80027AE0;  /* ROM: 0x00A9EC80 */
  EffectSs_Draw      = 0x80027B98;  /* ROM: 0x00A9ED38 */
  EffectSs_DrawAll   = 0x80027BDC;  /* ROM: 0x00A9ED7C */
  func_80027DD4      = 0x80027DD4;  /* ROM: 0x00A9EF74 */
  func_80027E34      = 0x80027E34;  /* ROM: 0x00A9EFD4 */
  func_80027E84      = 0x80027E84;  /* ROM: 0x00A9F024 */
 /* .data */
  sEffectSsInfo = 0x801158B0;  /* ROM: 0x00B8CA50 */

/* build/src/code/z_effect_soft_sprite_old_init.o */
 /* .text */
  EffectSs_DrawGEffect                = 0x80027F80;  /* ROM: 0x00A9F120 */
  EffectSsDust_Spawn                  = 0x800281E8;  /* ROM: 0x00A9F388 */
  func_8002829C                       = 0x8002829C;  /* ROM: 0x00A9F43C */
  func_80028304                       = 0x80028304;  /* ROM: 0x00A9F4A4 */
  func_8002836C                       = 0x8002836C;  /* ROM: 0x00A9F50C */
  func_800283D4                       = 0x800283D4;  /* ROM: 0x00A9F574 */
  func_8002843C                       = 0x8002843C;  /* ROM: 0x00A9F5DC */
  func_800284A4                       = 0x800284A4;  /* ROM: 0x00A9F644 */
  func_80028510                       = 0x80028510;  /* ROM: 0x00A9F6B0 */
  func_8002857C                       = 0x8002857C;  /* ROM: 0x00A9F71C */
  func_800285EC                       = 0x800285EC;  /* ROM: 0x00A9F78C */
  func_8002865C                       = 0x8002865C;  /* ROM: 0x00A9F7FC */
  func_800286CC                       = 0x800286CC;  /* ROM: 0x00A9F86C */
  func_8002873C                       = 0x8002873C;  /* ROM: 0x00A9F8DC */
  func_800287AC                       = 0x800287AC;  /* ROM: 0x00A9F94C */
  func_8002881C                       = 0x8002881C;  /* ROM: 0x00A9F9BC */
  func_80028858                       = 0x80028858;  /* ROM: 0x00A9F9F8 */
  func_80028894                       = 0x80028894;  /* ROM: 0x00A9FA34 */
  func_80028990                       = 0x80028990;  /* ROM: 0x00A9FB30 */
  func_80028A54                       = 0x80028A54;  /* ROM: 0x00A9FBF4 */
  EffectSsKiraKira_SpawnSmallYellow   = 0x80028B18;  /* ROM: 0x00A9FCB8 */
  EffectSsKiraKira_SpawnSmall         = 0x80028B74;  /* ROM: 0x00A9FD14 */
  EffectSsKiraKira_SpawnDispersed     = 0x80028BB0;  /* ROM: 0x00A9FD50 */
  EffectSsKiraKira_SpawnFocused       = 0x80028CEC;  /* ROM: 0x00A9FE8C */
  EffectSsBomb_Spawn                  = 0x80028DC4;  /* ROM: 0x00A9FF64 */
  EffectSsBomb2_SpawnFade             = 0x80028E1C;  /* ROM: 0x00A9FFBC */
  EffectSsBomb2_SpawnLayered          = 0x80028E84;  /* ROM: 0x00AA0024 */
  EffectSsBlast_Spawn                 = 0x80028EF4;  /* ROM: 0x00AA0094 */
  EffectSsBlast_SpawnWhiteCustomScale = 0x80028F84;  /* ROM: 0x00AA0124 */
  EffectSsBlast_SpawnShockwave        = 0x80028FD8;  /* ROM: 0x00AA0178 */
  EffectSsBlast_SpawnWhiteShockwave   = 0x80029024;  /* ROM: 0x00AA01C4 */
  EffectSsGSpk_SpawnAccel             = 0x80029060;  /* ROM: 0x00AA0200 */
  EffectSsGSpk_SpawnNoAccel           = 0x800290F0;  /* ROM: 0x00AA0290 */
  EffectSsGSpk_SpawnFuse              = 0x80029184;  /* ROM: 0x00AA0324 */
  EffectSsGSpk_SpawnRandColor         = 0x800291D8;  /* ROM: 0x00AA0378 */
  EffectSsGSpk_SpawnSmall             = 0x800292DC;  /* ROM: 0x00AA047C */
  EffectSsDFire_Spawn                 = 0x80029320;  /* ROM: 0x00AA04C0 */
  EffectSsDFire_SpawnFixedScale       = 0x800293A0;  /* ROM: 0x00AA0540 */
  EffectSsBubble_Spawn                = 0x800293E4;  /* ROM: 0x00AA0584 */
  EffectSsGRipple_Spawn               = 0x80029444;  /* ROM: 0x00AA05E4 */
  EffectSsGSplash_Spawn               = 0x8002949C;  /* ROM: 0x00AA063C */
  EffectSsGMagma_Spawn                = 0x80029530;  /* ROM: 0x00AA06D0 */
  EffectSsGFire_Spawn                 = 0x80029568;  /* ROM: 0x00AA0708 */
  EffectSsLightning_Spawn             = 0x800295A0;  /* ROM: 0x00AA0740 */
  EffectSsDtBubble_SpawnColorProfile  = 0x80029618;  /* ROM: 0x00AA07B8 */
  EffectSsDtBubble_SpawnCustomColor   = 0x80029694;  /* ROM: 0x00AA0834 */
  EffectSsHahen_Spawn                 = 0x80029724;  /* ROM: 0x00AA08C4 */
  EffectSsHahen_SpawnBurst            = 0x800297A4;  /* ROM: 0x00AA0944 */
  EffectSsStick_Spawn                 = 0x800298EC;  /* ROM: 0x00AA0A8C */
  EffectSsSibuki_Spawn                = 0x8002993C;  /* ROM: 0x00AA0ADC */
  EffectSsSibuki_SpawnBurst           = 0x800299AC;  /* ROM: 0x00AA0B4C */
  EffectSsSibuki2_Spawn               = 0x80029B30;  /* ROM: 0x00AA0CD0 */
  EffectSsGMagma2_Spawn               = 0x80029B90;  /* ROM: 0x00AA0D30 */
  EffectSsStone1_Spawn                = 0x80029C00;  /* ROM: 0x00AA0DA0 */
  EffectSsHitMark_Spawn               = 0x80029C50;  /* ROM: 0x00AA0DF0 */
  EffectSsHitMark_SpawnFixedScale     = 0x80029CA4;  /* ROM: 0x00AA0E44 */
  EffectSsHitMark_SpawnCustomScale    = 0x80029CC8;  /* ROM: 0x00AA0E68 */
  EffectSsFhgFlash_SpawnLightBall     = 0x80029CF0;  /* ROM: 0x00AA0E90 */
  EffectSsFhgFlash_SpawnShock         = 0x80029D5C;  /* ROM: 0x00AA0EFC */
  EffectSsKFire_Spawn                 = 0x80029DBC;  /* ROM: 0x00AA0F5C */
  EffectSsSolderSrchBall_Spawn        = 0x80029E24;  /* ROM: 0x00AA0FC4 */
  EffectSsKakera_Spawn                = 0x80029E8C;  /* ROM: 0x00AA102C */
  EffectSsIcePiece_Spawn              = 0x80029F44;  /* ROM: 0x00AA10E4 */
  EffectSsIcePiece_SpawnBurst         = 0x80029FAC;  /* ROM: 0x00AA114C */
  EffectSsEnIce_SpawnFlyingVec3f      = 0x8002A140;  /* ROM: 0x00AA12E0 */
  EffectSsEnIce_SpawnFlyingVec3s      = 0x8002A1DC;  /* ROM: 0x00AA137C */
  EffectSsEnIce_Spawn                 = 0x8002A2A4;  /* ROM: 0x00AA1444 */
  EffectSsFireTail_Spawn              = 0x8002A32C;  /* ROM: 0x00AA14CC */
  EffectSsFireTail_SpawnFlame         = 0x8002A3C4;  /* ROM: 0x00AA1564 */
  EffectSsFireTail_SpawnFlameOnPlayer = 0x8002A484;  /* ROM: 0x00AA1624 */
  EffectSsEnFire_SpawnVec3f           = 0x8002A4D4;  /* ROM: 0x00AA1674 */
  EffectSsEnFire_SpawnVec3s           = 0x8002A54C;  /* ROM: 0x00AA16EC */
  EffectSsExtra_Spawn                 = 0x8002A5F4;  /* ROM: 0x00AA1794 */
  EffectSsFCircle_Spawn               = 0x8002A65C;  /* ROM: 0x00AA17FC */
  EffectSsDeadDb_Spawn                = 0x8002A6B8;  /* ROM: 0x00AA1858 */
  EffectSsDeadDd_Spawn                = 0x8002A770;  /* ROM: 0x00AA1910 */
  EffectSsDeadDd_SpawnRandYellow      = 0x8002A824;  /* ROM: 0x00AA19C4 */
  EffectSsDeadDs_Spawn                = 0x8002A894;  /* ROM: 0x00AA1A34 */
  EffectSsDeadDs_SpawnStationary      = 0x8002A90C;  /* ROM: 0x00AA1AAC */
  EffectSsDeadSound_Spawn             = 0x8002A95C;  /* ROM: 0x00AA1AFC */
  EffectSsDeadSound_SpawnStationary   = 0x8002A9F4;  /* ROM: 0x00AA1B94 */
  EffectSsIceSmoke_Spawn              = 0x8002AA44;  /* ROM: 0x00AA1BE4 */

/* build/src/code/flg_set.o */
 /* .text */
  FlagSet_Update = 0x8002AAB0;  /* ROM: 0x00AA1C50 */

/* build/src/code/z_DLF.o */
 /* .text */
  Overlay_LoadGameState = 0x8002AF00;  /* ROM: 0x00AA20A0 */
  Overlay_FreeGameState = 0x8002B0A8;  /* ROM: 0x00AA2248 */

/* build/src/code/z_actor.o */
 /* .text */
  ActorShape_Init                   = 0x8002B1E0;  /* ROM: 0x00AA2380 */
  ActorShadow_Draw                  = 0x8002B200;  /* ROM: 0x00AA23A0 */
  ActorShadow_DrawCircle            = 0x8002B5EC;  /* ROM: 0x00AA278C */
  ActorShadow_DrawWhiteCircle       = 0x8002B614;  /* ROM: 0x00AA27B4 */
  ActorShadow_DrawHorse             = 0x8002B644;  /* ROM: 0x00AA27E4 */
  ActorShadow_DrawFoot              = 0x8002B66C;  /* ROM: 0x00AA280C */
  ActorShadow_DrawFeet              = 0x8002B8C4;  /* ROM: 0x00AA2A64 */
  Actor_SetFeetPos                  = 0x8002BDB0;  /* ROM: 0x00AA2F50 */
  Actor_ProjectPos                  = 0x8002BE04;  /* ROM: 0x00AA2FA4 */
  func_8002BE64                     = 0x8002BE64;  /* ROM: 0x00AA3004 */
  func_8002BE98                     = 0x8002BE98;  /* ROM: 0x00AA3038 */
  Actor_SetNaviToActor              = 0x8002BF60;  /* ROM: 0x00AA3100 */
  func_8002C0C0                     = 0x8002C0C0;  /* ROM: 0x00AA3260 */
  func_8002C124                     = 0x8002C124;  /* ROM: 0x00AA32C4 */
  func_8002C7BC                     = 0x8002C7BC;  /* ROM: 0x00AA395C */
  Flags_GetSwitch                   = 0x8002CB40;  /* ROM: 0x00AA3CE0 */
  Flags_SetSwitch                   = 0x8002CB74;  /* ROM: 0x00AA3D14 */
  Flags_UnsetSwitch                 = 0x8002CBB4;  /* ROM: 0x00AA3D54 */
  Flags_GetUnknown                  = 0x8002CBF8;  /* ROM: 0x00AA3D98 */
  Flags_SetUnknown                  = 0x8002CC2C;  /* ROM: 0x00AA3DCC */
  Flags_UnsetUnknown                = 0x8002CC6C;  /* ROM: 0x00AA3E0C */
  Flags_GetTreasure                 = 0x8002CCB0;  /* ROM: 0x00AA3E50 */
  Flags_SetTreasure                 = 0x8002CCC4;  /* ROM: 0x00AA3E64 */
  Flags_GetClear                    = 0x8002CCDC;  /* ROM: 0x00AA3E7C */
  Flags_SetClear                    = 0x8002CCF0;  /* ROM: 0x00AA3E90 */
  Flags_UnsetClear                  = 0x8002CD08;  /* ROM: 0x00AA3EA8 */
  Flags_GetTempClear                = 0x8002CD24;  /* ROM: 0x00AA3EC4 */
  Flags_SetTempClear                = 0x8002CD38;  /* ROM: 0x00AA3ED8 */
  Flags_UnsetTempClear              = 0x8002CD50;  /* ROM: 0x00AA3EF0 */
  Flags_GetCollectible              = 0x8002CD6C;  /* ROM: 0x00AA3F0C */
  Flags_SetCollectible              = 0x8002CDA0;  /* ROM: 0x00AA3F40 */
  TitleCard_Init                    = 0x8002CDE4;  /* ROM: 0x00AA3F84 */
  TitleCard_InitBossName            = 0x8002CE00;  /* ROM: 0x00AA3FA0 */
  TitleCard_InitPlaceName           = 0x8002CE40;  /* ROM: 0x00AA3FE0 */
  TitleCard_Update                  = 0x8002CEF0;  /* ROM: 0x00AA4090 */
  TitleCard_Draw                    = 0x8002CFAC;  /* ROM: 0x00AA414C */
  TitleCard_Clear                   = 0x8002D53C;  /* ROM: 0x00AA46DC */
  Actor_Kill                        = 0x8002D570;  /* ROM: 0x00AA4710 */
  Actor_SetWorldToHome              = 0x8002D58C;  /* ROM: 0x00AA472C */
  Actor_SetFocus                    = 0x8002D5B8;  /* ROM: 0x00AA4758 */
  Actor_SetWorldRotToShape          = 0x8002D5F4;  /* ROM: 0x00AA4794 */
  Actor_SetShapeRotToWorld          = 0x8002D610;  /* ROM: 0x00AA47B0 */
  Actor_SetScale                    = 0x8002D62C;  /* ROM: 0x00AA47CC */
  Actor_SetObjectDependency         = 0x8002D644;  /* ROM: 0x00AA47E4 */
  Actor_Init                        = 0x8002D678;  /* ROM: 0x00AA4818 */
  Actor_Destroy                     = 0x8002D788;  /* ROM: 0x00AA4928 */
  func_8002D7EC                     = 0x8002D7EC;  /* ROM: 0x00AA498C */
  func_8002D868                     = 0x8002D868;  /* ROM: 0x00AA4A08 */
  Actor_MoveForward                 = 0x8002D8E0;  /* ROM: 0x00AA4A80 */
  func_8002D908                     = 0x8002D908;  /* ROM: 0x00AA4AA8 */
  func_8002D97C                     = 0x8002D97C;  /* ROM: 0x00AA4B1C */
  func_8002D9A4                     = 0x8002D9A4;  /* ROM: 0x00AA4B44 */
  func_8002D9F8                     = 0x8002D9F8;  /* ROM: 0x00AA4B98 */
  Actor_WorldYawTowardActor         = 0x8002DA78;  /* ROM: 0x00AA4C18 */
  Actor_FocusYawTowardActor         = 0x8002DA9C;  /* ROM: 0x00AA4C3C */
  Actor_WorldYawTowardPoint         = 0x8002DAC0;  /* ROM: 0x00AA4C60 */
  Actor_WorldPitchTowardActor       = 0x8002DAE0;  /* ROM: 0x00AA4C80 */
  Actor_FocusPitchTowardActor       = 0x8002DB04;  /* ROM: 0x00AA4CA4 */
  Actor_WorldPitchTowardPoint       = 0x8002DB28;  /* ROM: 0x00AA4CC8 */
  Actor_WorldDistXYZToActor         = 0x8002DB48;  /* ROM: 0x00AA4CE8 */
  Actor_WorldDistXYZToPoint         = 0x8002DB6C;  /* ROM: 0x00AA4D0C */
  Actor_WorldDistXZToActor          = 0x8002DB8C;  /* ROM: 0x00AA4D2C */
  Actor_WorldDistXZToPoint          = 0x8002DBB0;  /* ROM: 0x00AA4D50 */
  func_8002DBD0                     = 0x8002DBD0;  /* ROM: 0x00AA4D70 */
  Actor_HeightDiff                  = 0x8002DC74;  /* ROM: 0x00AA4E14 */
  Player_GetHeight                  = 0x8002DC84;  /* ROM: 0x00AA4E24 */
  func_8002DCE4                     = 0x8002DCE4;  /* ROM: 0x00AA4E84 */
  func_8002DD6C                     = 0x8002DD6C;  /* ROM: 0x00AA4F0C */
  func_8002DD78                     = 0x8002DD78;  /* ROM: 0x00AA4F18 */
  func_8002DDA8                     = 0x8002DDA8;  /* ROM: 0x00AA4F48 */
  func_8002DDE4                     = 0x8002DDE4;  /* ROM: 0x00AA4F84 */
  func_8002DDF4                     = 0x8002DDF4;  /* ROM: 0x00AA4F94 */
  func_8002DE04                     = 0x8002DE04;  /* ROM: 0x00AA4FA4 */
  func_8002DE74                     = 0x8002DE74;  /* ROM: 0x00AA5014 */
  Actor_MountHorse                  = 0x8002DECC;  /* ROM: 0x00AA506C */
  func_8002DEEC                     = 0x8002DEEC;  /* ROM: 0x00AA508C */
  func_8002DF18                     = 0x8002DF18;  /* ROM: 0x00AA50B8 */
  func_8002DF38                     = 0x8002DF38;  /* ROM: 0x00AA50D8 */
  func_8002DF54                     = 0x8002DF54;  /* ROM: 0x00AA50F4 */
  func_8002DF90                     = 0x8002DF90;  /* ROM: 0x00AA5130 */
  func_8002DFA4                     = 0x8002DFA4;  /* ROM: 0x00AA5144 */
  Player_IsFacingActor              = 0x8002DFC8;  /* ROM: 0x00AA5168 */
  Actor_ActorBIsFacingActorA        = 0x8002E020;  /* ROM: 0x00AA51C0 */
  Actor_IsFacingPlayer              = 0x8002E084;  /* ROM: 0x00AA5224 */
  Actor_ActorAIsFacingActorB        = 0x8002E0D0;  /* ROM: 0x00AA5270 */
  Actor_IsFacingAndNearPlayer       = 0x8002E12C;  /* ROM: 0x00AA52CC */
  Actor_ActorAIsFacingAndNearActorB = 0x8002E1A8;  /* ROM: 0x00AA5348 */
  func_8002E234                     = 0x8002E234;  /* ROM: 0x00AA53D4 */
  func_8002E2AC                     = 0x8002E2AC;  /* ROM: 0x00AA544C */
  Actor_UpdateBgCheckInfo           = 0x8002E4B4;  /* ROM: 0x00AA5654 */
  func_8002E830                     = 0x8002E830;  /* ROM: 0x00AA59D0 */
  func_8002EABC                     = 0x8002EABC;  /* ROM: 0x00AA5C5C */
  func_8002EB44                     = 0x8002EB44;  /* ROM: 0x00AA5CE4 */
  func_8002EBCC                     = 0x8002EBCC;  /* ROM: 0x00AA5D6C */
  func_8002ED80                     = 0x8002ED80;  /* ROM: 0x00AA5F20 */
  Actor_GetFocus                    = 0x8002EEE4;  /* ROM: 0x00AA6084 */
  Actor_GetWorld                    = 0x8002EF14;  /* ROM: 0x00AA60B4 */
  Actor_GetWorldPosShapeRot         = 0x8002EF44;  /* ROM: 0x00AA60E4 */
  func_8002EFC0                     = 0x8002EFC0;  /* ROM: 0x00AA6160 */
  func_8002F090                     = 0x8002F090;  /* ROM: 0x00AA6230 */
  func_8002F0C8                     = 0x8002F0C8;  /* ROM: 0x00AA6268 */
  Actor_ProcessTalkRequest          = 0x8002F194;  /* ROM: 0x00AA6334 */
  func_8002F1C4                     = 0x8002F1C4;  /* ROM: 0x00AA6364 */
  func_8002F298                     = 0x8002F298;  /* ROM: 0x00AA6438 */
  func_8002F2CC                     = 0x8002F2CC;  /* ROM: 0x00AA646C */
  func_8002F2F4                     = 0x8002F2F4;  /* ROM: 0x00AA6494 */
  Actor_TextboxIsClosing            = 0x8002F334;  /* ROM: 0x00AA64D4 */
  func_8002F368                     = 0x8002F368;  /* ROM: 0x00AA6508 */
  Actor_GetScreenPos                = 0x8002F374;  /* ROM: 0x00AA6514 */
  Actor_HasParent                   = 0x8002F410;  /* ROM: 0x00AA65B0 */
  func_8002F434                     = 0x8002F434;  /* ROM: 0x00AA65D4 */
  func_8002F554                     = 0x8002F554;  /* ROM: 0x00AA66F4 */
  func_8002F580                     = 0x8002F580;  /* ROM: 0x00AA6720 */
  Actor_HasNoParent                 = 0x8002F5A0;  /* ROM: 0x00AA6740 */
  func_8002F5C4                     = 0x8002F5C4;  /* ROM: 0x00AA6764 */
  func_8002F5F0                     = 0x8002F5F0;  /* ROM: 0x00AA6790 */
  Actor_IsMounted                   = 0x8002F618;  /* ROM: 0x00AA67B8 */
  Actor_SetRideActor                = 0x8002F63C;  /* ROM: 0x00AA67DC */
  Actor_NotMounted                  = 0x8002F674;  /* ROM: 0x00AA6814 */
  func_8002F698                     = 0x8002F698;  /* ROM: 0x00AA6838 */
  func_8002F6D4                     = 0x8002F6D4;  /* ROM: 0x00AA6874 */
  func_8002F71C                     = 0x8002F71C;  /* ROM: 0x00AA68BC */
  func_8002F758                     = 0x8002F758;  /* ROM: 0x00AA68F8 */
  func_8002F7A0                     = 0x8002F7A0;  /* ROM: 0x00AA6940 */
  func_8002F7DC                     = 0x8002F7DC;  /* ROM: 0x00AA697C */
  Audio_PlayActorSound2             = 0x8002F828;  /* ROM: 0x00AA69C8 */
  func_8002F850                     = 0x8002F850;  /* ROM: 0x00AA69F0 */
  func_8002F8F0                     = 0x8002F8F0;  /* ROM: 0x00AA6A90 */
  func_8002F91C                     = 0x8002F91C;  /* ROM: 0x00AA6ABC */
  func_8002F948                     = 0x8002F948;  /* ROM: 0x00AA6AE8 */
  func_8002F974                     = 0x8002F974;  /* ROM: 0x00AA6B14 */
  func_8002F994                     = 0x8002F994;  /* ROM: 0x00AA6B34 */
  func_8002F9EC                     = 0x8002F9EC;  /* ROM: 0x00AA6B8C */
  func_8002FA60                     = 0x8002FA60;  /* ROM: 0x00AA6C00 */
  Actor_DrawFaroresWindPointer      = 0x8002FBAC;  /* ROM: 0x00AA6D4C */
  func_80030488                     = 0x80030488;  /* ROM: 0x00AA7628 */
  Actor_DisableLens                 = 0x800304B0;  /* ROM: 0x00AA7650 */
  func_800304DC                     = 0x800304DC;  /* ROM: 0x00AA767C */
  Actor_UpdateAll                   = 0x80030630;  /* ROM: 0x00AA77D0 */
  Actor_FaultPrint                  = 0x80030B2C;  /* ROM: 0x00AA7CCC */
  Actor_Draw                        = 0x80030BE8;  /* ROM: 0x00AA7D88 */
  func_80030ED8                     = 0x80030ED8;  /* ROM: 0x00AA8078 */
  Actor_DrawLensOverlay             = 0x80030FA8;  /* ROM: 0x00AA8148 */
  Actor_DrawLensActors              = 0x8003115C;  /* ROM: 0x00AA82FC */
  func_800314B0                     = 0x800314B0;  /* ROM: 0x00AA8650 */
  func_800314D4                     = 0x800314D4;  /* ROM: 0x00AA8674 */
  func_800315AC                     = 0x800315AC;  /* ROM: 0x00AA874C */
  func_80031A28                     = 0x80031A28;  /* ROM: 0x00AA8BC8 */
  Actor_FreezeAllEnemies            = 0x80031AC4;  /* ROM: 0x00AA8C64 */
  func_80031B14                     = 0x80031B14;  /* ROM: 0x00AA8CB4 */
  func_80031C3C                     = 0x80031C3C;  /* ROM: 0x00AA8DDC */
  Actor_AddToCategory               = 0x80031D1C;  /* ROM: 0x00AA8EBC */
  Actor_RemoveFromCategory          = 0x80031D60;  /* ROM: 0x00AA8F00 */
  Actor_FreeOverlay                 = 0x80031E2C;  /* ROM: 0x00AA8FCC */
  Actor_Spawn                       = 0x80031F50;  /* ROM: 0x00AA90F0 */
  Actor_SpawnAsChild                = 0x80032458;  /* ROM: 0x00AA95F8 */
  Actor_SpawnTransitionActors       = 0x800324F0;  /* ROM: 0x00AA9690 */
  Actor_SpawnEntry                  = 0x80032628;  /* ROM: 0x00AA97C8 */
  Actor_Delete                      = 0x800326AC;  /* ROM: 0x00AA984C */
  func_80032880                     = 0x80032880;  /* ROM: 0x00AA9A20 */
  func_800328D4                     = 0x800328D4;  /* ROM: 0x00AA9A74 */
  func_80032AF0                     = 0x80032AF0;  /* ROM: 0x00AA9C90 */
  Actor_Find                        = 0x80032C3C;  /* ROM: 0x00AA9DDC */
  Enemy_StartFinishingBlow          = 0x80032C7C;  /* ROM: 0x00AA9E1C */
  func_80032CB4                     = 0x80032CB4;  /* ROM: 0x00AA9E54 */
  func_80032D60                     = 0x80032D60;  /* ROM: 0x00AA9F00 */
  BodyBreak_Alloc                   = 0x80032E24;  /* ROM: 0x00AA9FC4 */
  BodyBreak_SetInfo                 = 0x80032F54;  /* ROM: 0x00AAA0F4 */
  BodyBreak_SpawnParts              = 0x8003305C;  /* ROM: 0x00AAA1FC */
  Actor_SpawnFloorDustRing          = 0x80033260;  /* ROM: 0x00AAA400 */
  func_80033480                     = 0x80033480;  /* ROM: 0x00AAA620 */
  Actor_GetCollidedExplosive        = 0x80033640;  /* ROM: 0x00AAA7E0 */
  func_80033684                     = 0x80033684;  /* ROM: 0x00AAA824 */
  Actor_ChangeCategory              = 0x80033748;  /* ROM: 0x00AAA8E8 */
  Actor_GetProjectileActor          = 0x80033780;  /* ROM: 0x00AAA920 */
  Actor_SetTextWithPrefix           = 0x80033940;  /* ROM: 0x00AAAAE0 */
  Actor_TestFloorInDirection        = 0x800339B8;  /* ROM: 0x00AAAB58 */
  Actor_IsTargeted                  = 0x80033A84;  /* ROM: 0x00AAAC24 */
  Actor_OtherIsTargeted             = 0x80033AB8;  /* ROM: 0x00AAAC58 */
  func_80033AEC                     = 0x80033AEC;  /* ROM: 0x00AAAC8C */
  func_80033C30                     = 0x80033C30;  /* ROM: 0x00AAADD0 */
  func_80033DB8                     = 0x80033DB8;  /* ROM: 0x00AAAF58 */
  func_80033E1C                     = 0x80033E1C;  /* ROM: 0x00AAAFBC */
  func_80033E88                     = 0x80033E88;  /* ROM: 0x00AAB028 */
  Rand_ZeroFloat                    = 0x80033EF8;  /* ROM: 0x00AAB098 */
  Rand_CenteredFloat                = 0x80033F20;  /* ROM: 0x00AAB0C0 */
  Actor_DrawDoorLock                = 0x80033F54;  /* ROM: 0x00AAB0F4 */
  func_8003424C                     = 0x8003424C;  /* ROM: 0x00AAB3EC */
  Actor_SetColorFilter              = 0x8003426C;  /* ROM: 0x00AAB40C */
  func_800342EC                     = 0x800342EC;  /* ROM: 0x00AAB48C */
  func_8003435C                     = 0x8003435C;  /* ROM: 0x00AAB4FC */
  func_800343CC                     = 0x800343CC;  /* ROM: 0x00AAB56C */
  func_800344BC                     = 0x800344BC;  /* ROM: 0x00AAB65C */
  func_800347E8                     = 0x800347E8;  /* ROM: 0x00AAB988 */
  func_80034810                     = 0x80034810;  /* ROM: 0x00AAB9B0 */
  func_80034A14                     = 0x80034A14;  /* ROM: 0x00AABBB4 */
  func_80034B28                     = 0x80034B28;  /* ROM: 0x00AABCC8 */
  func_80034B54                     = 0x80034B54;  /* ROM: 0x00AABCF4 */
  func_80034BA0                     = 0x80034BA0;  /* ROM: 0x00AABD40 */
  func_80034CC4                     = 0x80034CC4;  /* ROM: 0x00AABE64 */
  func_80034DD4                     = 0x80034DD4;  /* ROM: 0x00AABF74 */
  Animation_ChangeByInfo            = 0x80034EC0;  /* ROM: 0x00AAC060 */
  func_80034F54                     = 0x80034F54;  /* ROM: 0x00AAC0F4 */
  Actor_Noop                        = 0x80035118;  /* ROM: 0x00AAC2B8 */
  func_80035124                     = 0x80035124;  /* ROM: 0x00AAC2C4 */
  Gfx_DrawDListOpa                  = 0x80035260;  /* ROM: 0x00AAC400 */
  Gfx_DrawDListXlu                  = 0x80035324;  /* ROM: 0x00AAC4C4 */
  func_800353E8                     = 0x800353E8;  /* ROM: 0x00AAC588 */
  Actor_FindNearby                  = 0x800353F4;  /* ROM: 0x00AAC594 */
  func_800354B4                     = 0x800354B4;  /* ROM: 0x00AAC654 */
  func_8003555C                     = 0x8003555C;  /* ROM: 0x00AAC6FC */
  func_800355B8                     = 0x800355B8;  /* ROM: 0x00AAC758 */
  func_800355E4                     = 0x800355E4;  /* ROM: 0x00AAC784 */
  Actor_ApplyDamage                 = 0x80035628;  /* ROM: 0x00AAC7C8 */
  Actor_SetDropFlag                 = 0x80035650;  /* ROM: 0x00AAC7F0 */
  Actor_SetDropFlagJntSph           = 0x8003573C;  /* ROM: 0x00AAC8DC */
  func_80035844                     = 0x80035844;  /* ROM: 0x00AAC9E4 */
  func_800358DC                     = 0x800358DC;  /* ROM: 0x00AACA7C */
  func_800359B8                     = 0x800359B8;  /* ROM: 0x00AACB58 */
  func_80035B18                     = 0x80035B18;  /* ROM: 0x00AACCB8 */
  Flags_GetEventChkInf              = 0x80035B4C;  /* ROM: 0x00AACCEC */
  Flags_SetEventChkInf              = 0x80035B74;  /* ROM: 0x00AACD14 */
  Flags_GetInfTable                 = 0x80035BA4;  /* ROM: 0x00AACD44 */
  Flags_SetInfTable                 = 0x80035BCC;  /* ROM: 0x00AACD6C */
  func_80035BFC                     = 0x80035BFC;  /* ROM: 0x00AACD9C */
  func_80036E50                     = 0x80036E50;  /* ROM: 0x00AADFF0 */
  func_800374E0                     = 0x800374E0;  /* ROM: 0x00AAE680 */
  func_80037C30                     = 0x80037C30;  /* ROM: 0x00AAEDD0 */
  func_80037C5C                     = 0x80037C5C;  /* ROM: 0x00AAEDFC */
  func_80037C94                     = 0x80037C94;  /* ROM: 0x00AAEE34 */
  func_80037CB8                     = 0x80037CB8;  /* ROM: 0x00AAEE58 */
  func_80037D98                     = 0x80037D98;  /* ROM: 0x00AAEF38 */
  func_80037F30                     = 0x80037F30;  /* ROM: 0x00AAF0D0 */
  func_80037FC8                     = 0x80037FC8;  /* ROM: 0x00AAF168 */
  func_80038154                     = 0x80038154;  /* ROM: 0x00AAF2F4 */
  func_80038290                     = 0x80038290;  /* ROM: 0x00AAF430 */
 /* .data */
  sNaviColorList        = 0x80115F84;  /* ROM: 0x00B8D124 */
  D_80115FF0            = 0x80115FF0;  /* ROM: 0x00B8D190 */
  D_80115FF8            = 0x80115FF8;  /* ROM: 0x00B8D198 */
  D_80116068            = 0x80116068;  /* ROM: 0x00B8D208 */
  sEnemyActorCategories = 0x8011609C;  /* ROM: 0x00B8D23C */
  D_801160A0            = 0x801160A0;  /* ROM: 0x00B8D240 */
  D_80116268            = 0x80116268;  /* ROM: 0x00B8D408 */
  D_80116274            = 0x80116274;  /* ROM: 0x00B8D414 */
  D_80116280            = 0x80116280;  /* ROM: 0x00B8D420 */
 /* .bss */
  D_8015BBA8      = 0x8015BBA8;  /* ROM: 0x00BD2D48 */
  D_8015BBE8      = 0x8015BBE8;  /* ROM: 0x00BD2D88 */
  D_8015BBEC      = 0x8015BBEC;  /* ROM: 0x00BD2D8C */
  D_8015BBF0      = 0x8015BBF0;  /* ROM: 0x00BD2D90 */
  sbgmEnemyDistSq = 0x8015BBF4;  /* ROM: 0x00BD2D94 */
  D_8015BBF8      = 0x8015BBF8;  /* ROM: 0x00BD2D98 */
  D_8015BBFC      = 0x8015BBFC;  /* ROM: 0x00BD2D9C */
  D_8015BC00      = 0x8015BC00;  /* ROM: 0x00BD2DA0 */
  D_8015BC10      = 0x8015BC10;  /* ROM: 0x00BD2DB0 */
  D_8015BC14      = 0x8015BC14;  /* ROM: 0x00BD2DB4 */
  D_8015BC18      = 0x8015BC18;  /* ROM: 0x00BD2DB8 */

/* build/src/code/z_actor_dlftbls.o */
 /* .text */
  ActorOverlayTable_LogPrint   = 0x800383C0;  /* ROM: 0x00AAF560 */
  ActorOverlayTable_FaultPrint = 0x800384A4;  /* ROM: 0x00AAF644 */
  ActorOverlayTable_Init       = 0x80038590;  /* ROM: 0x00AAF730 */
  ActorOverlayTable_Cleanup    = 0x800385D0;  /* ROM: 0x00AAF770 */
 /* .data */
  gActorOverlayTable = 0x801162A0;  /* ROM: 0x00B8D440 */
  gMaxActorId        = 0x80119D80;  /* ROM: 0x00B90F20 */

/* build/src/code/z_bgcheck.o */
 /* .text */
  BgCheck_PosErrorCheck                   = 0x80038600;  /* ROM: 0x00AAF7A0 */
  SSNode_SetValue                         = 0x80038708;  /* ROM: 0x00AAF8A8 */
  SSList_SetNull                          = 0x8003871C;  /* ROM: 0x00AAF8BC */
  SSNodeList_SetSSListHead                = 0x80038728;  /* ROM: 0x00AAF8C8 */
  DynaSSNodeList_SetSSListHead            = 0x80038780;  /* ROM: 0x00AAF920 */
  DynaSSNodeList_Initialize               = 0x800387FC;  /* ROM: 0x00AAF99C */
  DynaSSNodeList_Alloc                    = 0x8003880C;  /* ROM: 0x00AAF9AC */
  DynaSSNodeList_ResetCount               = 0x80038870;  /* ROM: 0x00AAFA10 */
  DynaSSNodeList_GetNextNodeIdx           = 0x80038878;  /* ROM: 0x00AAFA18 */
  BgCheck_Vec3sToVec3f                    = 0x800388A8;  /* ROM: 0x00AAFA48 */
  BgCheck_Vec3fToVec3s                    = 0x800388E8;  /* ROM: 0x00AAFA88 */
  CollisionPoly_GetMinY                   = 0x80038924;  /* ROM: 0x00AAFAC4 */
  CollisionPoly_GetNormalF                = 0x800389D4;  /* ROM: 0x00AAFB74 */
  func_80038A28                           = 0x80038A28;  /* ROM: 0x00AAFBC8 */
  CollisionPoly_GetPointDistanceFromPlane = 0x80038B7C;  /* ROM: 0x00AAFD1C */
  CollisionPoly_GetVertices               = 0x80038BE0;  /* ROM: 0x00AAFD80 */
  CollisionPoly_GetVerticesByBgId         = 0x80038C78;  /* ROM: 0x00AAFE18 */
  CollisionPoly_CheckYIntersectApprox1    = 0x80038D48;  /* ROM: 0x00AAFEE8 */
  CollisionPoly_CheckYIntersect           = 0x80038E78;  /* ROM: 0x00AB0018 */
  CollisionPoly_CheckYIntersectApprox2    = 0x80038F20;  /* ROM: 0x00AB00C0 */
  CollisionPoly_CheckXIntersectApprox     = 0x80038F60;  /* ROM: 0x00AB0100 */
  CollisionPoly_CheckZIntersectApprox     = 0x80039000;  /* ROM: 0x00AB01A0 */
  CollisionPoly_LineVsPoly                = 0x800390A0;  /* ROM: 0x00AB0240 */
  CollisionPoly_SphVsPoly                 = 0x8003937C;  /* ROM: 0x00AB051C */
  StaticLookup_AddPolyToSSList            = 0x80039448;  /* ROM: 0x00AB05E8 */
  StaticLookup_AddPoly                    = 0x8003965C;  /* ROM: 0x00AB07FC */
  BgCheck_RaycastFloorStaticList          = 0x800396F0;  /* ROM: 0x00AB0890 */
  BgCheck_RaycastFloorStatic              = 0x8003992C;  /* ROM: 0x00AB0ACC */
  BgCheck_ComputeWallDisplacement         = 0x80039A3C;  /* ROM: 0x00AB0BDC */
  BgCheck_SphVsStaticWall                 = 0x80039AEC;  /* ROM: 0x00AB0C8C */
  BgCheck_CheckStaticCeiling              = 0x8003A3E0;  /* ROM: 0x00AB1580 */
  BgCheck_CheckLineAgainstSSList          = 0x8003A5B8;  /* ROM: 0x00AB1758 */
  BgCheck_CheckLineInSubdivision          = 0x8003A7D8;  /* ROM: 0x00AB1978 */
  BgCheck_SphVsFirstStaticPolyList        = 0x8003A95C;  /* ROM: 0x00AB1AFC */
  BgCheck_SphVsFirstStaticPoly            = 0x8003AB28;  /* ROM: 0x00AB1CC8 */
  BgCheck_GetNearestStaticLookup          = 0x8003AC54;  /* ROM: 0x00AB1DF4 */
  BgCheck_GetStaticLookup                 = 0x8003AD00;  /* ROM: 0x00AB1EA0 */
  BgCheck_GetStaticLookupIndicesFromPos   = 0x8003ADC8;  /* ROM: 0x00AB1F68 */
  BgCheck_GetSubdivisionMinBounds         = 0x8003AEA8;  /* ROM: 0x00AB2048 */
  BgCheck_GetSubdivisionMaxBounds         = 0x8003B04C;  /* ROM: 0x00AB21EC */
  BgCheck_GetPolySubdivisionBounds        = 0x8003B218;  /* ROM: 0x00AB23B8 */
  BgCheck_PolyIntersectsSubdivision       = 0x8003B3C8;  /* ROM: 0x00AB2568 */
  BgCheck_InitializeStaticLookup          = 0x8003BB18;  /* ROM: 0x00AB2CB8 */
  BgCheck_IsSpotScene                     = 0x8003BF18;  /* ROM: 0x00AB30B8 */
  BgCheck_TryGetCustomMemsize             = 0x8003BF5C;  /* ROM: 0x00AB30FC */
  BgCheck_SetSubdivisionDimension         = 0x8003BFF4;  /* ROM: 0x00AB3194 */
  BgCheck_Allocate                        = 0x8003C078;  /* ROM: 0x00AB3218 */
  BgCheck_GetCollisionHeader              = 0x8003C4C4;  /* ROM: 0x00AB3664 */
  BgCheck_PosInStaticBoundingBox          = 0x8003C55C;  /* ROM: 0x00AB36FC */
  BgCheck_RaycastFloorImpl                = 0x8003C614;  /* ROM: 0x00AB37B4 */
  BgCheck_CameraRaycastFloor1             = 0x8003C834;  /* ROM: 0x00AB39D4 */
  BgCheck_EntityRaycastFloor1             = 0x8003C890;  /* ROM: 0x00AB3A30 */
  BgCheck_EntityRaycastFloor2             = 0x8003C8EC;  /* ROM: 0x00AB3A8C */
  BgCheck_EntityRaycastFloor3             = 0x8003C940;  /* ROM: 0x00AB3AE0 */
  BgCheck_EntityRaycastFloor4             = 0x8003C9A4;  /* ROM: 0x00AB3B44 */
  BgCheck_EntityRaycastFloor5             = 0x8003CA0C;  /* ROM: 0x00AB3BAC */
  BgCheck_EntityRaycastFloor6             = 0x8003CA64;  /* ROM: 0x00AB3C04 */
  BgCheck_EntityRaycastFloor7             = 0x8003CAC8;  /* ROM: 0x00AB3C68 */
  BgCheck_AnyRaycastFloor1                = 0x8003CB30;  /* ROM: 0x00AB3CD0 */
  BgCheck_AnyRaycastFloor2                = 0x8003CBE8;  /* ROM: 0x00AB3D88 */
  BgCheck_CameraRaycastFloor2             = 0x8003CCA4;  /* ROM: 0x00AB3E44 */
  BgCheck_EntityRaycastFloor8             = 0x8003CD08;  /* ROM: 0x00AB3EA8 */
  BgCheck_EntityRaycastFloor9             = 0x8003CD70;  /* ROM: 0x00AB3F10 */
  BgCheck_CheckWallImpl                   = 0x8003CDD4;  /* ROM: 0x00AB3F74 */
  BgCheck_EntitySphVsWall1                = 0x8003D464;  /* ROM: 0x00AB4604 */
  BgCheck_EntitySphVsWall2                = 0x8003D4C8;  /* ROM: 0x00AB4668 */
  BgCheck_EntitySphVsWall3                = 0x8003D52C;  /* ROM: 0x00AB46CC */
  BgCheck_EntitySphVsWall4                = 0x8003D594;  /* ROM: 0x00AB4734 */
  BgCheck_CheckCeilingImpl                = 0x8003D600;  /* ROM: 0x00AB47A0 */
  BgCheck_AnyCheckCeiling                 = 0x8003D754;  /* ROM: 0x00AB48F4 */
  BgCheck_EntityCheckCeiling              = 0x8003D7A0;  /* ROM: 0x00AB4940 */
  BgCheck_CheckLineImpl                   = 0x8003D7F0;  /* ROM: 0x00AB4990 */
  BgCheck_GetBccFlags                     = 0x8003DD28;  /* ROM: 0x00AB4EC8 */
  BgCheck_CameraLineTest1                 = 0x8003DD6C;  /* ROM: 0x00AB4F0C */
  BgCheck_CameraLineTest2                 = 0x8003DDF8;  /* ROM: 0x00AB4F98 */
  BgCheck_EntityLineTest1                 = 0x8003DE84;  /* ROM: 0x00AB5024 */
  BgCheck_EntityLineTest2                 = 0x8003DF10;  /* ROM: 0x00AB50B0 */
  BgCheck_EntityLineTest3                 = 0x8003DFA0;  /* ROM: 0x00AB5140 */
  BgCheck_ProjectileLineTest              = 0x8003E02C;  /* ROM: 0x00AB51CC */
  BgCheck_AnyLineTest1                    = 0x8003E0B8;  /* ROM: 0x00AB5258 */
  BgCheck_AnyLineTest2                    = 0x8003E0FC;  /* ROM: 0x00AB529C */
  BgCheck_AnyLineTest3                    = 0x8003E188;  /* ROM: 0x00AB5328 */
  BgCheck_SphVsFirstPolyImpl              = 0x8003E214;  /* ROM: 0x00AB53B4 */
  BgCheck_SphVsFirstPoly                  = 0x8003E30C;  /* ROM: 0x00AB54AC */
  BgCheck_SphVsFirstWall                  = 0x8003E350;  /* ROM: 0x00AB54F0 */
  SSNodeList_Initialize                   = 0x8003E398;  /* ROM: 0x00AB5538 */
  SSNodeList_Alloc                        = 0x8003E3AC;  /* ROM: 0x00AB554C */
  SSNodeList_GetNextNode                  = 0x8003E458;  /* ROM: 0x00AB55F8 */
  SSNodeList_GetNextNodeIdx               = 0x8003E4DC;  /* ROM: 0x00AB567C */
  ScaleRotPos_Initialize                  = 0x8003E530;  /* ROM: 0x00AB56D0 */
  ScaleRotPos_SetValue                    = 0x8003E568;  /* ROM: 0x00AB5708 */
  ScaleRotPos_Equals                      = 0x8003E5B4;  /* ROM: 0x00AB5754 */
  DynaLookup_ResetLists                   = 0x8003E688;  /* ROM: 0x00AB5828 */
  DynaLookup_Reset                        = 0x8003E6C4;  /* ROM: 0x00AB5864 */
  DynaLookup_ResetVtxStartIndex           = 0x8003E6E4;  /* ROM: 0x00AB5884 */
  BgActor_Initialize                      = 0x8003E6EC;  /* ROM: 0x00AB588C */
  BgActor_SetActor                        = 0x8003E750;  /* ROM: 0x00AB58F0 */
  BgActor_IsTransformUnchanged            = 0x8003E804;  /* ROM: 0x00AB59A4 */
  DynaPoly_NullPolyList                   = 0x8003E82C;  /* ROM: 0x00AB59CC */
  DynaPoly_AllocPolyList                  = 0x8003E834;  /* ROM: 0x00AB59D4 */
  DynaPoly_NullVtxList                    = 0x8003E888;  /* ROM: 0x00AB5A28 */
  DynaPoly_AllocVtxList                   = 0x8003E890;  /* ROM: 0x00AB5A30 */
  DynaPoly_SetBgActorPrevTransform        = 0x8003E8EC;  /* ROM: 0x00AB5A8C */
  DynaPoly_IsBgIdBgActor                  = 0x8003E934;  /* ROM: 0x00AB5AD4 */
  DynaPoly_Init                           = 0x8003E954;  /* ROM: 0x00AB5AF4 */
  DynaPoly_Alloc                          = 0x8003E9A0;  /* ROM: 0x00AB5B40 */
  DynaPoly_SetBgActor                     = 0x8003EA74;  /* ROM: 0x00AB5C14 */
  DynaPoly_GetActor                       = 0x8003EB84;  /* ROM: 0x00AB5D24 */
  func_8003EBF8                           = 0x8003EBF8;  /* ROM: 0x00AB5D98 */
  func_8003EC50                           = 0x8003EC50;  /* ROM: 0x00AB5DF0 */
  func_8003ECA8                           = 0x8003ECA8;  /* ROM: 0x00AB5E48 */
  func_8003ED00                           = 0x8003ED00;  /* ROM: 0x00AB5EA0 */
  DynaPoly_DeleteBgActor                  = 0x8003ED58;  /* ROM: 0x00AB5EF8 */
  func_8003EE6C                           = 0x8003EE6C;  /* ROM: 0x00AB600C */
  DynaPoly_ExpandSRT                      = 0x8003EE80;  /* ROM: 0x00AB6020 */
  func_8003F8EC                           = 0x8003F8EC;  /* ROM: 0x00AB6A8C */
  DynaPoly_Setup                          = 0x8003F984;  /* ROM: 0x00AB6B24 */
  DynaPoly_UpdateBgActorTransforms        = 0x8003FB64;  /* ROM: 0x00AB6D04 */
  BgCheck_RaycastFloorDynaList            = 0x8003FBF4;  /* ROM: 0x00AB6D94 */
  BgCheck_RaycastFloorDyna                = 0x8003FDDC;  /* ROM: 0x00AB6F7C */
  BgCheck_SphVsDynaWallInBgActor          = 0x80040284;  /* ROM: 0x00AB7424 */
  BgCheck_SphVsDynaWall                   = 0x800409A8;  /* ROM: 0x00AB7B48 */
  BgCheck_CheckDynaCeilingList            = 0x80040BE4;  /* ROM: 0x00AB7D84 */
  BgCheck_CheckDynaCeiling                = 0x80040E40;  /* ROM: 0x00AB7FE0 */
  BgCheck_CheckLineAgainstBgActorSSList   = 0x80040FA4;  /* ROM: 0x00AB8144 */
  BgCheck_CheckLineAgainstBgActor         = 0x80041128;  /* ROM: 0x00AB82C8 */
  BgCheck_CheckLineAgainstDyna            = 0x80041240;  /* ROM: 0x00AB83E0 */
  BgCheck_SphVsFirstDynaPolyList          = 0x800413F8;  /* ROM: 0x00AB8598 */
  BgCheck_SphVsFirstDynaPolyInBgActor     = 0x80041510;  /* ROM: 0x00AB86B0 */
  BgCheck_SphVsFirstDynaPoly              = 0x80041648;  /* ROM: 0x00AB87E8 */
  CollisionHeader_SegmentedToVirtual      = 0x800417A0;  /* ROM: 0x00AB8940 */
  CollisionHeader_GetVirtual              = 0x80041880;  /* ROM: 0x00AB8A20 */
  func_800418D0                           = 0x800418D0;  /* ROM: 0x00AB8A70 */
  BgCheck_ResetPolyCheckTbl               = 0x80041978;  /* ROM: 0x00AB8B18 */
  SurfaceType_GetData                     = 0x800419B0;  /* ROM: 0x00AB8B50 */
  SurfaceType_GetCamDataIndex             = 0x80041A28;  /* ROM: 0x00AB8BC8 */
  func_80041A4C                           = 0x80041A4C;  /* ROM: 0x00AB8BEC */
  SurfaceType_GetCameraSType              = 0x80041A94;  /* ROM: 0x00AB8C34 */
  func_80041B24                           = 0x80041B24;  /* ROM: 0x00AB8CC4 */
  SurfaceType_GetNumCameras               = 0x80041B80;  /* ROM: 0x00AB8D20 */
  func_80041C10                           = 0x80041C10;  /* ROM: 0x00AB8DB0 */
  SurfaceType_GetCamPosData               = 0x80041C98;  /* ROM: 0x00AB8E38 */
  SurfaceType_GetSceneExitIndex           = 0x80041D28;  /* ROM: 0x00AB8EC8 */
  func_80041D4C                           = 0x80041D4C;  /* ROM: 0x00AB8EEC */
  func_80041D70                           = 0x80041D70;  /* ROM: 0x00AB8F10 */
  func_80041D94                           = 0x80041D94;  /* ROM: 0x00AB8F34 */
  func_80041DB8                           = 0x80041DB8;  /* ROM: 0x00AB8F58 */
  func_80041DE4                           = 0x80041DE4;  /* ROM: 0x00AB8F84 */
  func_80041E18                           = 0x80041E18;  /* ROM: 0x00AB8FB8 */
  func_80041E4C                           = 0x80041E4C;  /* ROM: 0x00AB8FEC */
  func_80041E80                           = 0x80041E80;  /* ROM: 0x00AB9020 */
  func_80041EA4                           = 0x80041EA4;  /* ROM: 0x00AB9044 */
  func_80041EC8                           = 0x80041EC8;  /* ROM: 0x00AB9068 */
  SurfaceType_IsHorseBlocked              = 0x80041EEC;  /* ROM: 0x00AB908C */
  func_80041F10                           = 0x80041F10;  /* ROM: 0x00AB90B0 */
  SurfaceType_GetSfx                      = 0x80041F34;  /* ROM: 0x00AB90D4 */
  SurfaceType_GetSlope                    = 0x80041F7C;  /* ROM: 0x00AB911C */
  SurfaceType_GetLightSettingIndex        = 0x80041FA0;  /* ROM: 0x00AB9140 */
  SurfaceType_GetEcho                     = 0x80041FC4;  /* ROM: 0x00AB9164 */
  SurfaceType_IsHookshotSurface           = 0x80041FE8;  /* ROM: 0x00AB9188 */
  SurfaceType_IsIgnoredByEntities         = 0x8004200C;  /* ROM: 0x00AB91AC */
  SurfaceType_IsIgnoredByProjectiles      = 0x80042048;  /* ROM: 0x00AB91E8 */
  SurfaceType_IsConveyor                  = 0x80042084;  /* ROM: 0x00AB9224 */
  SurfaceType_GetConveyorSpeed            = 0x800420C0;  /* ROM: 0x00AB9260 */
  SurfaceType_GetConveyorDirection        = 0x800420E4;  /* ROM: 0x00AB9284 */
  SurfaceType_IsWallDamage                = 0x80042108;  /* ROM: 0x00AB92A8 */
  WaterBox_GetSurface1                    = 0x8004213C;  /* ROM: 0x00AB92DC */
  WaterBox_GetSurfaceImpl                 = 0x80042244;  /* ROM: 0x00AB93E4 */
  WaterBox_GetSurface2                    = 0x8004239C;  /* ROM: 0x00AB953C */
  WaterBox_GetCamDataIndex                = 0x80042538;  /* ROM: 0x00AB96D8 */
  WaterBox_GetCameraSType                 = 0x80042548;  /* ROM: 0x00AB96E8 */
  WaterBox_GetLightSettingIndex           = 0x8004259C;  /* ROM: 0x00AB973C */
  func_800425B0                           = 0x800425B0;  /* ROM: 0x00AB9750 */
  func_80042708                           = 0x80042708;  /* ROM: 0x00AB98A8 */
  func_800427B4                           = 0x800427B4;  /* ROM: 0x00AB9954 */
  BgCheck_DrawDynaPolyList                = 0x80042868;  /* ROM: 0x00AB9A08 */
  BgCheck_DrawBgActor                     = 0x80042B2C;  /* ROM: 0x00AB9CCC */
  BgCheck_DrawDynaCollision               = 0x80042C3C;  /* ROM: 0x00AB9DDC */
  BgCheck_DrawStaticPoly                  = 0x80042CB8;  /* ROM: 0x00AB9E58 */
  BgCheck_DrawStaticPolyList              = 0x80042EF8;  /* ROM: 0x00ABA098 */
  BgCheck_DrawStaticCollision             = 0x80042FC4;  /* ROM: 0x00ABA164 */
 /* .data */
  D_80119D90     = 0x80119D90;  /* ROM: 0x00B90F30 */
  D_80119E10     = 0x80119E10;  /* ROM: 0x00B90FB0 */
  zdWaterBox     = 0x80119EAC;  /* ROM: 0x00B9104C */
  zdWaterBoxMinX = 0x80119EBC;  /* ROM: 0x00B9105C */
  zdWaterBoxMinY = 0x80119EC0;  /* ROM: 0x00B91060 */
  zdWaterBoxMinZ = 0x80119EC4;  /* ROM: 0x00B91064 */
  zdWaterBoxMaxX = 0x80119EC8;  /* ROM: 0x00B91068 */
  zdWaterBoxMaxY = 0x80119ECC;  /* ROM: 0x00B9106C */
  zdWaterBoxMaxZ = 0x80119ED0;  /* ROM: 0x00B91070 */

/* build/src/code/code_800430A0.o */
 /* .text */
  func_800430A0 = 0x800430A0;  /* ROM: 0x00ABA240 */
  func_800432A0 = 0x800432A0;  /* ROM: 0x00ABA440 */
  func_80043334 = 0x80043334;  /* ROM: 0x00ABA4D4 */
  func_800433A4 = 0x800433A4;  /* ROM: 0x00ABA544 */

/* build/src/code/code_80043480.o */
 /* .text */
  DynaPolyActor_Init = 0x80043480;  /* ROM: 0x00ABA620 */
  func_800434A0      = 0x800434A0;  /* ROM: 0x00ABA640 */
  func_800434A8      = 0x800434A8;  /* ROM: 0x00ABA648 */
  func_800434B8      = 0x800434B8;  /* ROM: 0x00ABA658 */
  func_800434C8      = 0x800434C8;  /* ROM: 0x00ABA668 */
  func_800434F8      = 0x800434F8;  /* ROM: 0x00ABA698 */
  func_80043508      = 0x80043508;  /* ROM: 0x00ABA6A8 */
  func_80043538      = 0x80043538;  /* ROM: 0x00ABA6D8 */
  func_80043548      = 0x80043548;  /* ROM: 0x00ABA6E8 */
  func_8004356C      = 0x8004356C;  /* ROM: 0x00ABA70C */
  func_80043590      = 0x80043590;  /* ROM: 0x00ABA730 */
  func_800435B4      = 0x800435B4;  /* ROM: 0x00ABA754 */
  func_800435D8      = 0x800435D8;  /* ROM: 0x00ABA778 */

/* build/src/code/z_camera.o */
 /* .text */
  Camera_InterpolateCurve           = 0x800437F0;  /* ROM: 0x00ABA990 */
  Camera_LERPCeilF                  = 0x8004389C;  /* ROM: 0x00ABAA3C */
  Camera_LERPFloorF                 = 0x800438DC;  /* ROM: 0x00ABAA7C */
  Camera_LERPCeilS                  = 0x8004391C;  /* ROM: 0x00ABAABC */
  Camera_LERPFloorS                 = 0x800439AC;  /* ROM: 0x00ABAB4C */
  Camera_LERPCeilVec3f              = 0x80043A3C;  /* ROM: 0x00ABABDC */
  func_80043ABC                     = 0x80043ABC;  /* ROM: 0x00ABAC5C */
  func_80043B60                     = 0x80043B60;  /* ROM: 0x00ABAD00 */
  Camera_Vec3sToVec3f               = 0x80043BC4;  /* ROM: 0x00ABAD64 */
  Camera_Vec3fVecSphGeoAdd          = 0x80043C28;  /* ROM: 0x00ABADC8 */
  Camera_Vec3fTranslateByUnitVector = 0x80043CAC;  /* ROM: 0x00ABAE4C */
  Camera_BGCheckInfo                = 0x80043D18;  /* ROM: 0x00ABAEB8 */
  Camera_BGCheck                    = 0x80043F34;  /* ROM: 0x00ABB0D4 */
  func_80043F94                     = 0x80043F94;  /* ROM: 0x00ABB134 */
  func_80044340                     = 0x80044340;  /* ROM: 0x00ABB4E0 */
  Camera_CheckOOB                   = 0x800443A0;  /* ROM: 0x00ABB540 */
  Camera_GetFloorYNorm              = 0x80044434;  /* ROM: 0x00ABB5D4 */
  Camera_GetFloorY                  = 0x80044510;  /* ROM: 0x00ABB6B0 */
  Camera_GetFloorYLayer             = 0x80044568;  /* ROM: 0x00ABB708 */
  Camera_GetCamDataSetting          = 0x80044740;  /* ROM: 0x00ABB8E0 */
  Camera_GetCamBGData               = 0x8004476C;  /* ROM: 0x00ABB90C */
  Camera_GetDataIdxForPoly          = 0x8004479C;  /* ROM: 0x00ABB93C */
  Camera_GetCamBgDataUnderPlayer    = 0x8004481C;  /* ROM: 0x00ABB9BC */
  Camera_GetWaterBoxDataIdx         = 0x800448CC;  /* ROM: 0x00ABBA6C */
  Camera_GetWaterSurface            = 0x800449AC;  /* ROM: 0x00ABBB4C */
  Camera_XZAngle                    = 0x80044A74;  /* ROM: 0x00ABBC14 */
  func_80044ADC                     = 0x80044ADC;  /* ROM: 0x00ABBC7C */
  Camera_CalcUpFromPitchYawRoll     = 0x80044E68;  /* ROM: 0x00ABC008 */
  Camera_ClampLERPScale             = 0x800450A4;  /* ROM: 0x00ABC244 */
  Camera_CopyDataToRegs             = 0x80045128;  /* ROM: 0x00ABC2C8 */
  Camera_CopyPREGToModeValues       = 0x80045254;  /* ROM: 0x00ABC3F4 */
  Camera_UpdateInterface            = 0x80045350;  /* ROM: 0x00ABC4F0 */
  Camera_BGCheckCorner              = 0x8004545C;  /* ROM: 0x00ABC5FC */
  func_80045508                     = 0x80045508;  /* ROM: 0x00ABC6A8 */
  Camera_CalcSlopeYAdj              = 0x80045714;  /* ROM: 0x00ABC8B4 */
  Camera_CalcAtDefault              = 0x800457A8;  /* ROM: 0x00ABC948 */
  func_800458D4                     = 0x800458D4;  /* ROM: 0x00ABCA74 */
  func_80045B08                     = 0x80045B08;  /* ROM: 0x00ABCCA8 */
  Camera_CalcAtForParallel          = 0x80045C74;  /* ROM: 0x00ABCE14 */
  Camera_CalcAtForLockOn            = 0x800460A8;  /* ROM: 0x00ABD248 */
  Camera_CalcAtForHorse             = 0x800466F8;  /* ROM: 0x00ABD898 */
  Camera_LERPClampDist              = 0x800468CC;  /* ROM: 0x00ABDA6C */
  Camera_ClampDist                  = 0x800469C0;  /* ROM: 0x00ABDB60 */
  Camera_CalcDefaultPitch           = 0x80046B44;  /* ROM: 0x00ABDCE4 */
  Camera_CalcDefaultYaw             = 0x80046CB4;  /* ROM: 0x00ABDE54 */
  func_80046E20                     = 0x80046E20;  /* ROM: 0x00ABDFC0 */
  Camera_Noop                       = 0x80047394;  /* ROM: 0x00ABE534 */
  Camera_Normal1                    = 0x800473A0;  /* ROM: 0x00ABE540 */
  Camera_Normal2                    = 0x80047F64;  /* ROM: 0x00ABF104 */
  Camera_Normal3                    = 0x80048804;  /* ROM: 0x00ABF9A4 */
  Camera_Normal4                    = 0x80048FCC;  /* ROM: 0x00AC016C */
  Camera_Normal0                    = 0x80048FEC;  /* ROM: 0x00AC018C */
  Camera_Parallel1                  = 0x8004900C;  /* ROM: 0x00AC01AC */
  Camera_Parallel2                  = 0x80049984;  /* ROM: 0x00AC0B24 */
  Camera_Parallel3                  = 0x800499A4;  /* ROM: 0x00AC0B44 */
  Camera_Parallel4                  = 0x80049A08;  /* ROM: 0x00AC0BA8 */
  Camera_Parallel0                  = 0x80049A28;  /* ROM: 0x00AC0BC8 */
  Camera_Jump1                      = 0x80049A48;  /* ROM: 0x00AC0BE8 */
  Camera_Jump2                      = 0x8004A250;  /* ROM: 0x00AC13F0 */
  Camera_Jump3                      = 0x8004ACE0;  /* ROM: 0x00AC1E80 */
  Camera_Jump4                      = 0x8004B560;  /* ROM: 0x00AC2700 */
  Camera_Jump0                      = 0x8004B580;  /* ROM: 0x00AC2720 */
  Camera_Battle1                    = 0x8004B5A0;  /* ROM: 0x00AC2740 */
  Camera_Battle2                    = 0x8004C5F4;  /* ROM: 0x00AC3794 */
  Camera_Battle3                    = 0x8004C614;  /* ROM: 0x00AC37B4 */
  Camera_Battle4                    = 0x8004C634;  /* ROM: 0x00AC37D4 */
  Camera_Battle0                    = 0x8004CA4C;  /* ROM: 0x00AC3BEC */
  Camera_KeepOn1                    = 0x8004CA6C;  /* ROM: 0x00AC3C0C */
  Camera_KeepOn2                    = 0x8004D9C4;  /* ROM: 0x00AC4B64 */
  Camera_KeepOn3                    = 0x8004D9E4;  /* ROM: 0x00AC4B84 */
  Camera_KeepOn4                    = 0x8004E460;  /* ROM: 0x00AC5600 */
  Camera_KeepOn0                    = 0x8004F3A4;  /* ROM: 0x00AC6544 */
  Camera_Fixed1                     = 0x8004F6A4;  /* ROM: 0x00AC6844 */
  Camera_Fixed2                     = 0x8004F9D8;  /* ROM: 0x00AC6B78 */
  Camera_Fixed3                     = 0x8004FDE4;  /* ROM: 0x00AC6F84 */
  Camera_Fixed4                     = 0x80050068;  /* ROM: 0x00AC7208 */
  Camera_Fixed0                     = 0x8005043C;  /* ROM: 0x00AC75DC */
  Camera_Subj1                      = 0x8005045C;  /* ROM: 0x00AC75FC */
  Camera_Subj2                      = 0x8005047C;  /* ROM: 0x00AC761C */
  Camera_Subj3                      = 0x8005049C;  /* ROM: 0x00AC763C */
  Camera_Subj4                      = 0x80050B24;  /* ROM: 0x00AC7CC4 */
  Camera_Subj0                      = 0x800511A0;  /* ROM: 0x00AC8340 */
  Camera_Data0                      = 0x800511C0;  /* ROM: 0x00AC8360 */
  Camera_Data1                      = 0x800511E0;  /* ROM: 0x00AC8380 */
  Camera_Data2                      = 0x80051210;  /* ROM: 0x00AC83B0 */
  Camera_Data3                      = 0x80051230;  /* ROM: 0x00AC83D0 */
  Camera_Data4                      = 0x80051250;  /* ROM: 0x00AC83F0 */
  Camera_Unique1                    = 0x800515A4;  /* ROM: 0x00AC8744 */
  Camera_Unique2                    = 0x80051B3C;  /* ROM: 0x00AC8CDC */
  Camera_Unique3                    = 0x80051F58;  /* ROM: 0x00AC90F8 */
  Camera_Unique0                    = 0x80052460;  /* ROM: 0x00AC9600 */
  Camera_Unique4                    = 0x800529D8;  /* ROM: 0x00AC9B78 */
  Camera_Unique5                    = 0x800529F8;  /* ROM: 0x00AC9B98 */
  Camera_Unique6                    = 0x80052A18;  /* ROM: 0x00AC9BB8 */
  Camera_Unique7                    = 0x80052B90;  /* ROM: 0x00AC9D30 */
  Camera_Unique8                    = 0x80052DEC;  /* ROM: 0x00AC9F8C */
  Camera_Unique9                    = 0x80052E0C;  /* ROM: 0x00AC9FAC */
  Camera_DebugPrintSplineArray      = 0x80054314;  /* ROM: 0x00ACB4B4 */
  Camera_Vec3fCopy                  = 0x8005445C;  /* ROM: 0x00ACB5FC */
  Camera_RotateAroundPoint          = 0x80054478;  /* ROM: 0x00ACB618 */
  Camera_Demo1                      = 0x800544D0;  /* ROM: 0x00ACB670 */
  Camera_Demo2                      = 0x80054774;  /* ROM: 0x00ACB914 */
  Camera_Demo3                      = 0x80054794;  /* ROM: 0x00ACB934 */
  Camera_Demo4                      = 0x8005527C;  /* ROM: 0x00ACC41C */
  Camera_Demo5                      = 0x8005529C;  /* ROM: 0x00ACC43C */
  Camera_Demo6                      = 0x80055C78;  /* ROM: 0x00ACCE18 */
  Camera_Demo7                      = 0x80055F64;  /* ROM: 0x00ACD104 */
  Camera_Demo8                      = 0x80055F98;  /* ROM: 0x00ACD138 */
  Camera_Demo9                      = 0x80055FB8;  /* ROM: 0x00ACD158 */
  Camera_Demo0                      = 0x80056430;  /* ROM: 0x00ACD5D0 */
  Camera_Special0                   = 0x80056450;  /* ROM: 0x00ACD5F0 */
  Camera_Special1                   = 0x800565F4;  /* ROM: 0x00ACD794 */
  Camera_Special2                   = 0x80056614;  /* ROM: 0x00ACD7B4 */
  Camera_Special3                   = 0x80056634;  /* ROM: 0x00ACD7D4 */
  Camera_Special4                   = 0x80056654;  /* ROM: 0x00ACD7F4 */
  Camera_Special5                   = 0x800567F8;  /* ROM: 0x00ACD998 */
  Camera_Special7                   = 0x80056C20;  /* ROM: 0x00ACDDC0 */
  Camera_Special6                   = 0x80056F6C;  /* ROM: 0x00ACE10C */
  Camera_Special8                   = 0x80057428;  /* ROM: 0x00ACE5C8 */
  Camera_Special9                   = 0x80057448;  /* ROM: 0x00ACE5E8 */
  Camera_Create                     = 0x80057B98;  /* ROM: 0x00ACED38 */
  Camera_Destroy                    = 0x80057C14;  /* ROM: 0x00ACEDB4 */
  Camera_Init                       = 0x80057C6C;  /* ROM: 0x00ACEE0C */
  func_80057FC4                     = 0x80057FC4;  /* ROM: 0x00ACF164 */
  Camera_Stub80058140               = 0x80058140;  /* ROM: 0x00ACF2E0 */
  Camera_InitPlayerSettings         = 0x80058148;  /* ROM: 0x00ACF2E8 */
  Camera_ChangeStatus               = 0x80058354;  /* ROM: 0x00ACF4F4 */
  Camera_PrintSettings              = 0x800584E8;  /* ROM: 0x00ACF688 */
  Camera_CheckWater                 = 0x800588B4;  /* ROM: 0x00ACFA54 */
  Camera_SetRoomHotFlag             = 0x80058CF8;  /* ROM: 0x00ACFE98 */
  Camera_DbgChangeMode              = 0x80058D34;  /* ROM: 0x00ACFED4 */
  func_80058E8C                     = 0x80058E8C;  /* ROM: 0x00AD002C */
  Camera_Update                     = 0x800591EC;  /* ROM: 0x00AD038C */
  Camera_Finish                     = 0x80059EC8;  /* ROM: 0x00AD1068 */
  func_8005A02C                     = 0x8005A02C;  /* ROM: 0x00AD11CC */
  Camera_ChangeModeFlags            = 0x8005A04C;  /* ROM: 0x00AD11EC */
  Camera_ChangeMode                 = 0x8005A444;  /* ROM: 0x00AD15E4 */
  Camera_CheckValidMode             = 0x8005A470;  /* ROM: 0x00AD1610 */
  Camera_ChangeSettingFlags         = 0x8005A548;  /* ROM: 0x00AD16E8 */
  Camera_ChangeSetting              = 0x8005A77C;  /* ROM: 0x00AD191C */
  Camera_ChangeDataIdx              = 0x8005A7A8;  /* ROM: 0x00AD1948 */
  Camera_GetInputDir                = 0x8005A8C4;  /* ROM: 0x00AD1A64 */
  Camera_GetInputDirPitch           = 0x8005A920;  /* ROM: 0x00AD1AC0 */
  Camera_GetInputDirYaw             = 0x8005A948;  /* ROM: 0x00AD1AE8 */
  Camera_GetCamDir                  = 0x8005A970;  /* ROM: 0x00AD1B10 */
  Camera_GetCamDirPitch             = 0x8005A9CC;  /* ROM: 0x00AD1B6C */
  Camera_GetCamDirYaw               = 0x8005A9F4;  /* ROM: 0x00AD1B94 */
  Camera_AddQuake                   = 0x8005AA1C;  /* ROM: 0x00AD1BBC */
  Camera_SetParam                   = 0x8005AA90;  /* ROM: 0x00AD1C30 */
  Camera_UnsetParam                 = 0x8005AC24;  /* ROM: 0x00AD1DC4 */
  func_8005AC48                     = 0x8005AC48;  /* ROM: 0x00AD1DE8 */
  Camera_ResetAnim                  = 0x8005AC60;  /* ROM: 0x00AD1E00 */
  Camera_SetCSParams                = 0x8005AC6C;  /* ROM: 0x00AD1E0C */
  func_8005ACFC                     = 0x8005ACFC;  /* ROM: 0x00AD1E9C */
  func_8005AD1C                     = 0x8005AD1C;  /* ROM: 0x00AD1EBC */
  Camera_ChangeDoorCam              = 0x8005AD40;  /* ROM: 0x00AD1EE0 */
  Camera_Copy                       = 0x8005AE64;  /* ROM: 0x00AD2004 */
  Camera_GetDbgCamEnabled           = 0x8005AFA8;  /* ROM: 0x00AD2148 */
  Camera_GetSkyboxOffset            = 0x8005AFB4;  /* ROM: 0x00AD2154 */
  Camera_SetCameraData              = 0x8005AFD4;  /* ROM: 0x00AD2174 */
  Camera_QRegInit                   = 0x8005B044;  /* ROM: 0x00AD21E4 */
  func_8005B198                     = 0x8005B198;  /* ROM: 0x00AD2338 */
  func_8005B1A4                     = 0x8005B1A4;  /* ROM: 0x00AD2344 */
 /* .data */
  sOREGInit                                 = 0x80119EE0;  /* ROM: 0x00B91080 */
  sOREGInitCnt                              = 0x80119F4C;  /* ROM: 0x00B910EC */
  sCamDataRegsInit                          = 0x80119F50;  /* ROM: 0x00B910F0 */
  sCamDataRegsInitCount                     = 0x80119F88;  /* ROM: 0x00B91128 */
  sCameraSettingNames                       = 0x80119F8C;  /* ROM: 0x00B9112C */
  sCameraModeNames                          = 0x8011A2A4;  /* ROM: 0x00B91444 */
  sSetNormal0ModeNormalData                 = 0x8011A3A0;  /* ROM: 0x00B91540 */
  sSetNormal0ModeTargetData                 = 0x8011A3C8;  /* ROM: 0x00B91568 */
  sSetNormal0ModeFollowTargetData           = 0x8011A3F4;  /* ROM: 0x00B91594 */
  sSetNormal0ModeTalkData                   = 0x8011A428;  /* ROM: 0x00B915C8 */
  sSetNormal0ModeBattleData                 = 0x8011A458;  /* ROM: 0x00B915F8 */
  sSetNormal0ModeClimbData                  = 0x8011A488;  /* ROM: 0x00B91628 */
  sSetNormal0ModeFirstPersonData            = 0x8011A4AC;  /* ROM: 0x00B9164C */
  sSetNormal0ModeBowArrowData               = 0x8011A4D0;  /* ROM: 0x00B91670 */
  sSetNormal0ModeBowArrowZData              = 0x8011A4F4;  /* ROM: 0x00B91694 */
  sSetNormal0ModeHookshotData               = 0x8011A518;  /* ROM: 0x00B916B8 */
  sSetNormal0ModeBoomerangData              = 0x8011A538;  /* ROM: 0x00B916D8 */
  sSetNormal0ModeSlingshotData              = 0x8011A55C;  /* ROM: 0x00B916FC */
  sSetNormal0ModeClimbZData                 = 0x8011A580;  /* ROM: 0x00B91720 */
  sSetNormal0ModeJumpData                   = 0x8011A5A4;  /* ROM: 0x00B91744 */
  sSetNormal0ModeHangData                   = 0x8011A5C4;  /* ROM: 0x00B91764 */
  sSetNormal0ModeHangZData                  = 0x8011A5E0;  /* ROM: 0x00B91780 */
  sSetNormal0ModeFreeFallData               = 0x8011A5FC;  /* ROM: 0x00B9179C */
  sSetNormal0ModeChargeData                 = 0x8011A61C;  /* ROM: 0x00B917BC */
  sSetNormal0ModeStillData                  = 0x8011A638;  /* ROM: 0x00B917D8 */
  sSetNormal0ModePushPullData               = 0x8011A660;  /* ROM: 0x00B91800 */
  sSetNormal0ModeFollowBoomerangData        = 0x8011A68C;  /* ROM: 0x00B9182C */
  sSetNormal1ModeNormalData                 = 0x8011A6C0;  /* ROM: 0x00B91860 */
  sSetNormal1ModeTargetData                 = 0x8011A6E8;  /* ROM: 0x00B91888 */
  sSetNormal1ModeFollowTargetData           = 0x8011A714;  /* ROM: 0x00B918B4 */
  sSetNormal1ModeBattleData                 = 0x8011A748;  /* ROM: 0x00B918E8 */
  sSetNormal1ModeHookshotData               = 0x8011A778;  /* ROM: 0x00B91918 */
  sSetNormal1ModeJumpData                   = 0x8011A798;  /* ROM: 0x00B91938 */
  sSetNormal1ModeFreeFallData               = 0x8011A7B8;  /* ROM: 0x00B91958 */
  sSetNormal1ModeClimbData                  = 0x8011A7D8;  /* ROM: 0x00B91978 */
  sSetNormal1ModeClimbZData                 = 0x8011A7FC;  /* ROM: 0x00B9199C */
  sSetNormal1ModeChargeData                 = 0x8011A820;  /* ROM: 0x00B919C0 */
  sSetNormal1ModeHangData                   = 0x8011A83C;  /* ROM: 0x00B919DC */
  sSetNormal1ModeHangZData                  = 0x8011A858;  /* ROM: 0x00B919F8 */
  sSetNormal1ModeStillData                  = 0x8011A874;  /* ROM: 0x00B91A14 */
  sSetDungeon0ModeNormalData                = 0x8011A89C;  /* ROM: 0x00B91A3C */
  sSetDungeon0ModeTargetData                = 0x8011A8C4;  /* ROM: 0x00B91A64 */
  sSetDungeon0ModeFollowTargetData          = 0x8011A8F0;  /* ROM: 0x00B91A90 */
  sSetDungeon0ModeBattleData                = 0x8011A924;  /* ROM: 0x00B91AC4 */
  sSetDungeon0ModeJumpData                  = 0x8011A954;  /* ROM: 0x00B91AF4 */
  sSetDungeon0ModeFreeFallData              = 0x8011A974;  /* ROM: 0x00B91B14 */
  sSetDungeon0ModeClimbData                 = 0x8011A994;  /* ROM: 0x00B91B34 */
  sSetDungeon0ModeClimbZData                = 0x8011A9B8;  /* ROM: 0x00B91B58 */
  sSetDungeon0ModeChargeData                = 0x8011A9DC;  /* ROM: 0x00B91B7C */
  sSetDungeon0ModeHangData                  = 0x8011A9F8;  /* ROM: 0x00B91B98 */
  sSetDungeon0ModeHangZData                 = 0x8011AA14;  /* ROM: 0x00B91BB4 */
  sSetDungeon0ModeStillData                 = 0x8011AA30;  /* ROM: 0x00B91BD0 */
  sSetDungeon1ModeNormalData                = 0x8011AA58;  /* ROM: 0x00B91BF8 */
  sSetDungeon1ModeTalkData                  = 0x8011AA80;  /* ROM: 0x00B91C20 */
  sSetDungeon1ModeJumpData                  = 0x8011AAB0;  /* ROM: 0x00B91C50 */
  sSetDungeon1ModeFreeFallData              = 0x8011AAD0;  /* ROM: 0x00B91C70 */
  sSetDungeon1ModeClimbData                 = 0x8011AAF0;  /* ROM: 0x00B91C90 */
  sSetDungeon1ModeClimbZData                = 0x8011AB14;  /* ROM: 0x00B91CB4 */
  sSetDungeon1ModeChargeData                = 0x8011AB38;  /* ROM: 0x00B91CD8 */
  sSetDungeon1ModeHangData                  = 0x8011AB54;  /* ROM: 0x00B91CF4 */
  sSetDungeon1ModeHangZData                 = 0x8011AB70;  /* ROM: 0x00B91D10 */
  sSetDungeon1ModeStillData                 = 0x8011AB8C;  /* ROM: 0x00B91D2C */
  sSetDungeon1ModePushPullData              = 0x8011ABB4;  /* ROM: 0x00B91D54 */
  sSetNormal3ModeNormalData                 = 0x8011ABE0;  /* ROM: 0x00B91D80 */
  sSetNormal3ModeTargetData                 = 0x8011AC08;  /* ROM: 0x00B91DA8 */
  sSetNormal3ModeTalkData                   = 0x8011AC34;  /* ROM: 0x00B91DD4 */
  sSetNormal3ModeBoomerangData              = 0x8011AC64;  /* ROM: 0x00B91E04 */
  sSetHorseModeNormalData                   = 0x8011AC8C;  /* ROM: 0x00B91E2C */
  sSetHorseModeTargetData                   = 0x8011ACB0;  /* ROM: 0x00B91E50 */
  sSetHorseModeBowArrowData                 = 0x8011ACD4;  /* ROM: 0x00B91E74 */
  sSetHorseModeFollowTargetData             = 0x8011ACF8;  /* ROM: 0x00B91E98 */
  sSetHorseModeTalkData                     = 0x8011AD2C;  /* ROM: 0x00B91ECC */
  sSetBossGohmaModeNormalData               = 0x8011AD5C;  /* ROM: 0x00B91EFC */
  sSetBossGohmaModeBattleData               = 0x8011AD84;  /* ROM: 0x00B91F24 */
  sSetBossDodongoModeNormalData             = 0x8011ADB4;  /* ROM: 0x00B91F54 */
  sSetBossDodongoModeBattleData             = 0x8011ADDC;  /* ROM: 0x00B91F7C */
  sSetBossBarinadeModeNormalData            = 0x8011AE0C;  /* ROM: 0x00B91FAC */
  sSetBossBarinadeModeBattleData            = 0x8011AE34;  /* ROM: 0x00B91FD4 */
  sSetBossPhantomGanonModeNormalData        = 0x8011AE64;  /* ROM: 0x00B92004 */
  sSetBossPhantomGanonModeBattleData        = 0x8011AE8C;  /* ROM: 0x00B9202C */
  sSetBossVolvagiaModeNormalData            = 0x8011AEBC;  /* ROM: 0x00B9205C */
  sSetBossVolvagiaModeBattleData            = 0x8011AEE4;  /* ROM: 0x00B92084 */
  sSetBossBongoModeNormalData               = 0x8011AF14;  /* ROM: 0x00B920B4 */
  sSetBossBongoModeBattleData               = 0x8011AF3C;  /* ROM: 0x00B920DC */
  sSetBossBongoModeJumpData                 = 0x8011AF6C;  /* ROM: 0x00B9210C */
  sSetBossMorphaModeNormalData              = 0x8011AF94;  /* ROM: 0x00B92134 */
  sSetBossMorphaModeBattleData              = 0x8011AFBC;  /* ROM: 0x00B9215C */
  sSetBossTwinrovaPlatformModeNormalData    = 0x8011AFEC;  /* ROM: 0x00B9218C */
  sSetBossTwinrovaModeBattleData            = 0x8011B014;  /* ROM: 0x00B921B4 */
  sSetBossTwinrovaFloorModeNormalData       = 0x8011B044;  /* ROM: 0x00B921E4 */
  sSetBossGanondorfModeNormalData           = 0x8011B06C;  /* ROM: 0x00B9220C */
  sSetBossGanondorfModeChargeData           = 0x8011B094;  /* ROM: 0x00B92234 */
  sSetBossGanonModeNormalData               = 0x8011B0B0;  /* ROM: 0x00B92250 */
  sSetBossGanonModeBattleData               = 0x8011B0D8;  /* ROM: 0x00B92278 */
  sSetTowerClimbModeNormalData              = 0x8011B108;  /* ROM: 0x00B922A8 */
  sSetTowerClimbModeJumpData                = 0x8011B12C;  /* ROM: 0x00B922CC */
  sSetTowerUnusedModeNormalData             = 0x8011B150;  /* ROM: 0x00B922F0 */
  sSetTowerUnusedModeJumpData               = 0x8011B174;  /* ROM: 0x00B92314 */
  sSetMarketBalconyModeNormalData           = 0x8011B198;  /* ROM: 0x00B92338 */
  sSetMarketBalconyModeFollowTargetData     = 0x8011B1A8;  /* ROM: 0x00B92348 */
  sSetMarketBalconyModeTalkData             = 0x8011B1B8;  /* ROM: 0x00B92358 */
  sSetChuBowlingModeNormalData              = 0x8011B1C8;  /* ROM: 0x00B92368 */
  sSetPivotCrawlspaceModeNormalData         = 0x8011B1D8;  /* ROM: 0x00B92378 */
  sSetPivotShopBrowsingModeNormalData       = 0x8011B1EC;  /* ROM: 0x00B9238C */
  sSetPivotInFrontAndFromSideModeNormalData = 0x8011B1F8;  /* ROM: 0x00B92398 */
  sDataOnlyNullFlags                        = 0x8011B20C;  /* ROM: 0x00B923AC */
  sSetPrerendFixedModeFollowTargetData      = 0x8011B210;  /* ROM: 0x00B923B0 */
  sSetPrerendPivotModeNormalData            = 0x8011B214;  /* ROM: 0x00B923B4 */
  sSetPrerendPivotModeFollowTargetData      = 0x8011B21C;  /* ROM: 0x00B923BC */
  sSetPrerendPivotModeTalkData              = 0x8011B224;  /* ROM: 0x00B923C4 */
  sSetDoor0ModeNormalData                   = 0x8011B234;  /* ROM: 0x00B923D4 */
  sSetDoorCModeNormalData                   = 0x8011B240;  /* ROM: 0x00B923E0 */
  sSetDoorCModeTargetData                   = 0x8011B24C;  /* ROM: 0x00B923EC */
  sSetCrawlspaceModeNormalData              = 0x8011B258;  /* ROM: 0x00B923F8 */
  sSetStart1ModeNormalData                  = 0x8011B270;  /* ROM: 0x00B92410 */
  sSetFree0ModeNormalData                   = 0x8011B274;  /* ROM: 0x00B92414 */
  sSetFree1ModeNormalData                   = 0x8011B278;  /* ROM: 0x00B92418 */
  sSetPivotCornerModeNormalData             = 0x8011B27C;  /* ROM: 0x00B9241C */
  sSetPivotWaterSurfaceModeNormalData       = 0x8011B290;  /* ROM: 0x00B92430 */
  sSetPivotWaterSurfaceModeTargetData       = 0x8011B2A0;  /* ROM: 0x00B92440 */
  sDataOnlyInterfaceFlags                   = 0x8011B2B0;  /* ROM: 0x00B92450 */
  sSetForestBirdsEyeModeNormalData          = 0x8011B2B4;  /* ROM: 0x00B92454 */
  sSetForestBirdsEyeModeTalkData            = 0x8011B2E0;  /* ROM: 0x00B92480 */
  sSetSlowChestCsModeNormalData             = 0x8011B2E4;  /* ROM: 0x00B92484 */
  sSetCs3ModeNormalData                     = 0x8011B2F0;  /* ROM: 0x00B92490 */
  sSetBeanGenericModeNormalData             = 0x8011B2F4;  /* ROM: 0x00B92494 */
  sSetBeanGenericModeTargetData             = 0x8011B31C;  /* ROM: 0x00B924BC */
  sSetBeanGenericModeJumpData               = 0x8011B348;  /* ROM: 0x00B924E8 */
  sSetBeanGenericModeHangData               = 0x8011B368;  /* ROM: 0x00B92508 */
  sSetBeanGenericModeHangZData              = 0x8011B384;  /* ROM: 0x00B92524 */
  sSetBeanGenericModeStillData              = 0x8011B3A0;  /* ROM: 0x00B92540 */
  sSetBeanLostWoodsModeNormalData           = 0x8011B3C8;  /* ROM: 0x00B92568 */
  sSetBeanLostWoodsModeTargetData           = 0x8011B3F0;  /* ROM: 0x00B92590 */
  sSetBeanLostWoodsModeJumpData             = 0x8011B41C;  /* ROM: 0x00B925BC */
  sSetBeanLostWoodsModeHangData             = 0x8011B43C;  /* ROM: 0x00B925DC */
  sSetBeanLostWoodsModeHangZData            = 0x8011B458;  /* ROM: 0x00B925F8 */
  sSetBeanLostWoodsModeStillData            = 0x8011B474;  /* ROM: 0x00B92614 */
  sSetSceneUnusedModeNormalData             = 0x8011B49C;  /* ROM: 0x00B9263C */
  sSetSceneTransitionModeNormalData         = 0x8011B4A8;  /* ROM: 0x00B92648 */
  sSetBigOctoModeNormalData                 = 0x8011B4B8;  /* ROM: 0x00B92658 */
  sSetBigOctoModeBattleData                 = 0x8011B4E0;  /* ROM: 0x00B92680 */
  sSetBigOctoModeStillData                  = 0x8011B510;  /* ROM: 0x00B926B0 */
  sSetMeadowBirdsEyeModeNormalData          = 0x8011B538;  /* ROM: 0x00B926D8 */
  sSetMeadowBirdsEyeModeTargetData          = 0x8011B560;  /* ROM: 0x00B92700 */
  sSetMeadowBirdsEyeModeBattleData          = 0x8011B58C;  /* ROM: 0x00B9272C */
  sSetMeadowBirdsEyeModeClimbData           = 0x8011B5B8;  /* ROM: 0x00B92758 */
  sSetMeadowUnusedModeNormalData            = 0x8011B5E0;  /* ROM: 0x00B92780 */
  sSetMeadowUnusedModeTargetData            = 0x8011B608;  /* ROM: 0x00B927A8 */
  sSetMeadowUnusedModeBattleData            = 0x8011B634;  /* ROM: 0x00B927D4 */
  sSetMeadowUnusedModeClimbData             = 0x8011B660;  /* ROM: 0x00B92800 */
  sSetFireBirdsEyeModeNormalData            = 0x8011B688;  /* ROM: 0x00B92828 */
  sSetFireBirdsEyeModeTargetData            = 0x8011B6B0;  /* ROM: 0x00B92850 */
  sSetFireBirdsEyeModeBattleData            = 0x8011B6DC;  /* ROM: 0x00B9287C */
  sSetFireBirdsEyeModeClimbData             = 0x8011B708;  /* ROM: 0x00B928A8 */
  sSetTurnAroundModeNormalData              = 0x8011B730;  /* ROM: 0x00B928D0 */
  sSetPivotVerticalModeNormalData           = 0x8011B754;  /* ROM: 0x00B928F4 */
  sSetNormal2and4ModeNormalData             = 0x8011B75C;  /* ROM: 0x00B928FC */
  sSetFishingModeNormalData                 = 0x8011B784;  /* ROM: 0x00B92924 */
  sSetFishingModeTargetData                 = 0x8011B7AC;  /* ROM: 0x00B9294C */
  sSetFishingModeFollowTargetData           = 0x8011B7D8;  /* ROM: 0x00B92978 */
  sSetFishingModeTalkData                   = 0x8011B808;  /* ROM: 0x00B929A8 */
  sSetFishingModeFirstPersonData            = 0x8011B838;  /* ROM: 0x00B929D8 */
  sSetFishingModeJumpData                   = 0x8011B85C;  /* ROM: 0x00B929FC */
  sSetFishingModeFreeFallData               = 0x8011B87C;  /* ROM: 0x00B92A1C */
  sSetFishingModeHangData                   = 0x8011B89C;  /* ROM: 0x00B92A3C */
  sSetFishingModeHangZData                  = 0x8011B8B8;  /* ROM: 0x00B92A58 */
  sSetCsCModeNormalData                     = 0x8011B8D4;  /* ROM: 0x00B92A74 */
  sSetJabuTentacleModeNormalData            = 0x8011B8D8;  /* ROM: 0x00B92A78 */
  sSetJabuTentacleModeBattleData            = 0x8011B900;  /* ROM: 0x00B92AA0 */
  sSetDungeon2ModeNormalData                = 0x8011B930;  /* ROM: 0x00B92AD0 */
  sSetDungeon2ModeTargetData                = 0x8011B958;  /* ROM: 0x00B92AF8 */
  sSetDungeon2ModeBattleData                = 0x8011B984;  /* ROM: 0x00B92B24 */
  sSetDungeon2ModeJumpData                  = 0x8011B9B4;  /* ROM: 0x00B92B54 */
  sSetDungeon2ModeFreeFallData              = 0x8011B9D4;  /* ROM: 0x00B92B74 */
  sSetDungeon2ModeClimbData                 = 0x8011B9F4;  /* ROM: 0x00B92B94 */
  sSetDungeon2ModeClimbZData                = 0x8011BA18;  /* ROM: 0x00B92BB8 */
  sSetDungeon2ModeHangData                  = 0x8011BA3C;  /* ROM: 0x00B92BDC */
  sSetDungeon2ModeHangZData                 = 0x8011BA58;  /* ROM: 0x00B92BF8 */
  sSetDungeon2ModeStillData                 = 0x8011BA74;  /* ROM: 0x00B92C14 */
  sSetDungeon2ModePushPullData              = 0x8011BA9C;  /* ROM: 0x00B92C3C */
  sSetDirectedYawModeNormalData             = 0x8011BAC8;  /* ROM: 0x00B92C68 */
  sSetDirectedYawModeFollowTargetData       = 0x8011BAF0;  /* ROM: 0x00B92C90 */
  sSetDirectedYawModeTalkData               = 0x8011BB24;  /* ROM: 0x00B92CC4 */
  sNormal4ModeTalkData                      = 0x8011BB54;  /* ROM: 0x00B92CF4 */
  sCamSetNormal0Modes                       = 0x8011BB84;  /* ROM: 0x00B92D24 */
  sCamSetNormal1Modes                       = 0x8011BC2C;  /* ROM: 0x00B92DCC */
  sCamSetDungeon0Modes                      = 0x8011BCD4;  /* ROM: 0x00B92E74 */
  sCamSetDungeon1Modes                      = 0x8011BD7C;  /* ROM: 0x00B92F1C */
  sCamSetNormal3Modes                       = 0x8011BE24;  /* ROM: 0x00B92FC4 */
  sCamSetHorseModes                         = 0x8011BEC4;  /* ROM: 0x00B93064 */
  sCamSetBossGohmaModes                     = 0x8011BF0C;  /* ROM: 0x00B930AC */
  sCamSetBossDodongoModes                   = 0x8011BFB4;  /* ROM: 0x00B93154 */
  sCamSetBossBarinadeModes                  = 0x8011C05C;  /* ROM: 0x00B931FC */
  sCamSetBossPhantomGanonModes              = 0x8011C104;  /* ROM: 0x00B932A4 */
  sCamSetBossVolvagiaModes                  = 0x8011C1AC;  /* ROM: 0x00B9334C */
  sCamSetBossBongoModes                     = 0x8011C254;  /* ROM: 0x00B933F4 */
  sCamSetBossMorphaModes                    = 0x8011C2FC;  /* ROM: 0x00B9349C */
  sCamSetBossTwinrovaPlatformModes          = 0x8011C3A4;  /* ROM: 0x00B93544 */
  sCamSetBossTwinrovaFloorModes             = 0x8011C44C;  /* ROM: 0x00B935EC */
  sCamSetBossGanondorfModes                 = 0x8011C4F4;  /* ROM: 0x00B93694 */
  sCamSetBossGanonModes                     = 0x8011C59C;  /* ROM: 0x00B9373C */
  sCamSetTowerClimbModes                    = 0x8011C644;  /* ROM: 0x00B937E4 */
  sCamSetTowerUnusedModes                   = 0x8011C6EC;  /* ROM: 0x00B9388C */
  sCamSetMarketBalconyModes                 = 0x8011C794;  /* ROM: 0x00B93934 */
  sCamSetChuBowlingModes                    = 0x8011C7B4;  /* ROM: 0x00B93954 */
  sCamSetPivotCrawlspaceModes               = 0x8011C7BC;  /* ROM: 0x00B9395C */
  sCamSetPivotShopBrowsingModes             = 0x8011C7C4;  /* ROM: 0x00B93964 */
  sCamSetPivotInFrontModes                  = 0x8011C7CC;  /* ROM: 0x00B9396C */
  sCamSetPreRendFixedModes                  = 0x8011C874;  /* ROM: 0x00B93A14 */
  sCamSetPreRendPivotModes                  = 0x8011C894;  /* ROM: 0x00B93A34 */
  sCamSetPreRendSideScrollModes             = 0x8011C8B4;  /* ROM: 0x00B93A54 */
  sCamSetDoor0Modes                         = 0x8011C8BC;  /* ROM: 0x00B93A5C */
  sCamSetDoorCModes                         = 0x8011C8C4;  /* ROM: 0x00B93A64 */
  sCamSetCrawlspaceModes                    = 0x8011C8D4;  /* ROM: 0x00B93A74 */
  sCamSetStart0Modes                        = 0x8011C8DC;  /* ROM: 0x00B93A7C */
  sCamSetStart1Modes                        = 0x8011C8E4;  /* ROM: 0x00B93A84 */
  sCamSetFree0Modes                         = 0x8011C8EC;  /* ROM: 0x00B93A8C */
  sCamSetFree1Modes                         = 0x8011C8F4;  /* ROM: 0x00B93A94 */
  sCamSetPivotCornerModes                   = 0x8011C8FC;  /* ROM: 0x00B93A9C */
  sCamSetPivotDivingModes                   = 0x8011C904;  /* ROM: 0x00B93AA4 */
  sCamSetCs0Modes                           = 0x8011C914;  /* ROM: 0x00B93AB4 */
  sCamSetCsTwistedHallwayModes              = 0x8011C91C;  /* ROM: 0x00B93ABC */
  sCamSetForestBirdsEyeModes                = 0x8011C924;  /* ROM: 0x00B93AC4 */
  sCamSetSlowChestCsModes                   = 0x8011C944;  /* ROM: 0x00B93AE4 */
  sCamSetItemUnusedModes                    = 0x8011C94C;  /* ROM: 0x00B93AEC */
  sCamSetCs3Modes                           = 0x8011C954;  /* ROM: 0x00B93AF4 */
  sCamSetCsAttentionModes                   = 0x8011C95C;  /* ROM: 0x00B93AFC */
  sCamSetBeanGenericModes                   = 0x8011C964;  /* ROM: 0x00B93B04 */
  sCamSetBeanLostWoodsModes                 = 0x8011CA0C;  /* ROM: 0x00B93BAC */
  sCamSetSceneUnusedModes                   = 0x8011CAB4;  /* ROM: 0x00B93C54 */
  sCamSetSceneTransitionModes               = 0x8011CABC;  /* ROM: 0x00B93C5C */
  sCamSetFirePlatformModes                  = 0x8011CAC4;  /* ROM: 0x00B93C64 */
  sCamSetFireStaircaseModes                 = 0x8011CACC;  /* ROM: 0x00B93C6C */
  sCamSetForestUnusedModes                  = 0x8011CAD4;  /* ROM: 0x00B93C74 */
  sCamSetForestDefeatPoeModes               = 0x8011CADC;  /* ROM: 0x00B93C7C */
  sCamSetBigOctoModes                       = 0x8011CAE4;  /* ROM: 0x00B93C84 */
  sCamSetMeadowBirdsEyeModes                = 0x8011CB8C;  /* ROM: 0x00B93D2C */
  sCamSetMeadowUnusedModes                  = 0x8011CBBC;  /* ROM: 0x00B93D5C */
  sCamSetFireBirdsEyeModes                  = 0x8011CBEC;  /* ROM: 0x00B93D8C */
  sCamSetTurnAroundModes                    = 0x8011CC1C;  /* ROM: 0x00B93DBC */
  sCamSetPivotVerticalModes                 = 0x8011CC24;  /* ROM: 0x00B93DC4 */
  sCamSetNorm2Modes                         = 0x8011CC2C;  /* ROM: 0x00B93DCC */
  sCamSetFishingModes                       = 0x8011CCD4;  /* ROM: 0x00B93E74 */
  sCamSetCsCModes                           = 0x8011CD5C;  /* ROM: 0x00B93EFC */
  sCamSetJabuTentacleModes                  = 0x8011CD64;  /* ROM: 0x00B93F04 */
  sCamSetDungeon2Modes                      = 0x8011CE0C;  /* ROM: 0x00B93FAC */
  sCamSetDirectedYawModes                   = 0x8011CEB4;  /* ROM: 0x00B94054 */
  sCamSetPivotFromSideModes                 = 0x8011CF5C;  /* ROM: 0x00B940FC */
  sCamSetNormal4Modes                       = 0x8011CFBC;  /* ROM: 0x00B9415C */
  sCameraSettings                           = 0x8011D064;  /* ROM: 0x00B94204 */
  sCameraFunctions                          = 0x8011D274;  /* ROM: 0x00B94414 */
  sInitRegs                                 = 0x8011D390;  /* ROM: 0x00B94530 */
  gDbgCamEnabled                            = 0x8011D394;  /* ROM: 0x00B94534 */
  sDbgModeIdx                               = 0x8011D398;  /* ROM: 0x00B94538 */
  sNextUID                                  = 0x8011D39C;  /* ROM: 0x00B9453C */
  sCameraInterfaceFlags                     = 0x8011D3A0;  /* ROM: 0x00B94540 */
  sCameraInterfaceAlpha                     = 0x8011D3A4;  /* ROM: 0x00B94544 */
  sCameraShrinkWindowVal                    = 0x8011D3A8;  /* ROM: 0x00B94548 */
  D_8011D3AC                                = 0x8011D3AC;  /* ROM: 0x00B9454C */
  D_8011D3B0                                = 0x8011D3B0;  /* ROM: 0x00B94550 */
  D_8011D3CC                                = 0x8011D3CC;  /* ROM: 0x00B9456C */
  sUpdateCameraDirection                    = 0x8011D3E8;  /* ROM: 0x00B94588 */
  D_8011D3EC                                = 0x8011D3EC;  /* ROM: 0x00B9458C */
  D_8011D3F0                                = 0x8011D3F0;  /* ROM: 0x00B94590 */
  sDemo5PrevAction12Frame                   = 0x8011D3F4;  /* ROM: 0x00B94594 */
  sCameraFunctionNames                      = 0x8011D3F8;  /* ROM: 0x00B94598 */
  D_8011D658                                = 0x8011D658;  /* ROM: 0x00B947F8 */
  D_8011D678                                = 0x8011D678;  /* ROM: 0x00B94818 */
  sDemo5PrevSfxFrame                        = 0x8011D6A8;  /* ROM: 0x00B94848 */
  D_8011D6AC                                = 0x8011D6AC;  /* ROM: 0x00B9484C */
  D_8011D724                                = 0x8011D724;  /* ROM: 0x00B948C4 */
  D_8011D79C                                = 0x8011D79C;  /* ROM: 0x00B9493C */
  D_8011D83C                                = 0x8011D83C;  /* ROM: 0x00B949DC */
  D_8011D88C                                = 0x8011D88C;  /* ROM: 0x00B94A2C */
  D_8011D8DC                                = 0x8011D8DC;  /* ROM: 0x00B94A7C */
  D_8011D954                                = 0x8011D954;  /* ROM: 0x00B94AF4 */
  D_8011D9F4                                = 0x8011D9F4;  /* ROM: 0x00B94B94 */
  D_8011DA6C                                = 0x8011DA6C;  /* ROM: 0x00B94C0C */
  D_8011DA9C                                = 0x8011DA9C;  /* ROM: 0x00B94C3C */
  D_8011DACC                                = 0x8011DACC;  /* ROM: 0x00B94C6C */
  D_8011DADC                                = 0x8011DADC;  /* ROM: 0x00B94C7C */
  D_8011DAEC                                = 0x8011DAEC;  /* ROM: 0x00B94C8C */
  D_8011DAFC                                = 0x8011DAFC;  /* ROM: 0x00B94C9C */
 /* .bss */
  D_8015BD7C      = 0x8015BD7C;  /* ROM: 0x00BD2F1C */
  D_8015BD80      = 0x8015BD80;  /* ROM: 0x00BD2F20 */
  playerFloorPoly = 0x8015CE4C;  /* ROM: 0x00BD3FEC */

/* build/src/code/z_collision_btltbls.o */
 /* .text */
  DamageTable_Get   = 0x8005B200;  /* ROM: 0x00AD23A0 */
  DamageTable_Clear = 0x8005B248;  /* ROM: 0x00AD23E8 */

/* build/src/code/z_collision_check.o */
 /* .text */
  Collider_DrawRedPoly                          = 0x8005B280;  /* ROM: 0x00AD2420 */
  Collider_DrawPoly                             = 0x8005B2AC;  /* ROM: 0x00AD244C */
  Collider_InitBase                             = 0x8005B65C;  /* ROM: 0x00AD27FC */
  Collider_DestroyBase                          = 0x8005B6A0;  /* ROM: 0x00AD2840 */
  Collider_SetBaseToActor                       = 0x8005B6B0;  /* ROM: 0x00AD2850 */
  Collider_SetBaseType1                         = 0x8005B6EC;  /* ROM: 0x00AD288C */
  Collider_SetBase                              = 0x8005B72C;  /* ROM: 0x00AD28CC */
  Collider_ResetATBase                          = 0x8005B76C;  /* ROM: 0x00AD290C */
  Collider_ResetACBase                          = 0x8005B784;  /* ROM: 0x00AD2924 */
  Collider_ResetOCBase                          = 0x8005B79C;  /* ROM: 0x00AD293C */
  Collider_InitTouch                            = 0x8005B7C0;  /* ROM: 0x00AD2960 */
  Collider_DestroyTouch                         = 0x8005B7E4;  /* ROM: 0x00AD2984 */
  Collider_SetTouch                             = 0x8005B7F4;  /* ROM: 0x00AD2994 */
  Collider_ResetATInfo_Unk                      = 0x8005B818;  /* ROM: 0x00AD29B8 */
  Collider_InitBump                             = 0x8005B824;  /* ROM: 0x00AD29C4 */
  Collider_DestroyBump                          = 0x8005B850;  /* ROM: 0x00AD29F0 */
  Collider_SetBump                              = 0x8005B860;  /* ROM: 0x00AD2A00 */
  Collider_InitInfo                             = 0x8005B884;  /* ROM: 0x00AD2A24 */
  Collider_DestroyInfo                          = 0x8005B904;  /* ROM: 0x00AD2AA4 */
  Collider_SetInfo                              = 0x8005B93C;  /* ROM: 0x00AD2ADC */
  Collider_ResetATInfo                          = 0x8005B9B0;  /* ROM: 0x00AD2B50 */
  Collider_ResetACInfo                          = 0x8005B9E8;  /* ROM: 0x00AD2B88 */
  Collider_ResetOCInfo                          = 0x8005BA1C;  /* ROM: 0x00AD2BBC */
  Collider_InitJntSphElementDim                 = 0x8005BA30;  /* ROM: 0x00AD2BD0 */
  Collider_DestroyJntSphElementDim              = 0x8005BA74;  /* ROM: 0x00AD2C14 */
  Collider_SetJntSphElementDim                  = 0x8005BA84;  /* ROM: 0x00AD2C24 */
  Collider_InitJntSphElement                    = 0x8005BAD8;  /* ROM: 0x00AD2C78 */
  Collider_DestroyJntSphElement                 = 0x8005BB10;  /* ROM: 0x00AD2CB0 */
  Collider_SetJntSphElement                     = 0x8005BB48;  /* ROM: 0x00AD2CE8 */
  Collider_ResetJntSphElementAT                 = 0x8005BB8C;  /* ROM: 0x00AD2D2C */
  Collider_ResetJntSphElementAC                 = 0x8005BBB0;  /* ROM: 0x00AD2D50 */
  Collider_ResetJntSphElementOC                 = 0x8005BBD4;  /* ROM: 0x00AD2D74 */
  Collider_InitJntSph                           = 0x8005BBF8;  /* ROM: 0x00AD2D98 */
  Collider_FreeJntSph                           = 0x8005BC28;  /* ROM: 0x00AD2DC8 */
  Collider_DestroyJntSph                        = 0x8005BCC8;  /* ROM: 0x00AD2E68 */
  Collider_SetJntSphToActor                     = 0x8005BD50;  /* ROM: 0x00AD2EF0 */
  Collider_SetJntSphAllocType1                  = 0x8005BE50;  /* ROM: 0x00AD2FF0 */
  Collider_SetJntSphAlloc                       = 0x8005BF50;  /* ROM: 0x00AD30F0 */
  Collider_SetJntSph                            = 0x8005C050;  /* ROM: 0x00AD31F0 */
  Collider_ResetJntSphAT                        = 0x8005C124;  /* ROM: 0x00AD32C4 */
  Collider_ResetJntSphAC                        = 0x8005C1AC;  /* ROM: 0x00AD334C */
  Collider_ResetJntSphOC                        = 0x8005C234;  /* ROM: 0x00AD33D4 */
  Collider_InitCylinderDim                      = 0x8005C2BC;  /* ROM: 0x00AD345C */
  Collider_DestroyCylinderDim                   = 0x8005C318;  /* ROM: 0x00AD34B8 */
  Collider_SetCylinderDim                       = 0x8005C328;  /* ROM: 0x00AD34C8 */
  Collider_InitCylinder                         = 0x8005C364;  /* ROM: 0x00AD3504 */
  Collider_DestroyCylinder                      = 0x8005C3AC;  /* ROM: 0x00AD354C */
  Collider_SetCylinderToActor                   = 0x8005C3F4;  /* ROM: 0x00AD3594 */
  Collider_SetCylinderType1                     = 0x8005C450;  /* ROM: 0x00AD35F0 */
  Collider_SetCylinder                          = 0x8005C4AC;  /* ROM: 0x00AD364C */
  Collider_ResetCylinderAT                      = 0x8005C508;  /* ROM: 0x00AD36A8 */
  Collider_ResetCylinderAC                      = 0x8005C540;  /* ROM: 0x00AD36E0 */
  Collider_ResetCylinderOC                      = 0x8005C578;  /* ROM: 0x00AD3718 */
  Collider_InitTrisElementDim                   = 0x8005C5B0;  /* ROM: 0x00AD3750 */
  Collider_DestroyTrisElementDim                = 0x8005C5F8;  /* ROM: 0x00AD3798 */
  Collider_SetTrisElementDim                    = 0x8005C608;  /* ROM: 0x00AD37A8 */
  Collider_InitTrisElement                      = 0x8005C6C0;  /* ROM: 0x00AD3860 */
  Collider_DestroyTrisElement                   = 0x8005C6F8;  /* ROM: 0x00AD3898 */
  Collider_SetTrisElement                       = 0x8005C730;  /* ROM: 0x00AD38D0 */
  Collider_ResetTrisElementAT                   = 0x8005C774;  /* ROM: 0x00AD3914 */
  Collider_ResetTrisElementAC                   = 0x8005C798;  /* ROM: 0x00AD3938 */
  Collider_ResetTrisElementOC                   = 0x8005C7BC;  /* ROM: 0x00AD395C */
  Collider_InitTris                             = 0x8005C7E0;  /* ROM: 0x00AD3980 */
  Collider_FreeTris                             = 0x8005C810;  /* ROM: 0x00AD39B0 */
  Collider_DestroyTris                          = 0x8005C8C8;  /* ROM: 0x00AD3A68 */
  Collider_SetTrisAllocType1                    = 0x8005C964;  /* ROM: 0x00AD3B04 */
  Collider_SetTrisAlloc                         = 0x8005CA88;  /* ROM: 0x00AD3C28 */
  Collider_SetTris                              = 0x8005CBAC;  /* ROM: 0x00AD3D4C */
  Collider_ResetTrisAT                          = 0x8005CC98;  /* ROM: 0x00AD3E38 */
  Collider_ResetTrisAC                          = 0x8005CD34;  /* ROM: 0x00AD3ED4 */
  Collider_ResetTrisOC                          = 0x8005CDD0;  /* ROM: 0x00AD3F70 */
  Collider_InitQuadDim                          = 0x8005CE6C;  /* ROM: 0x00AD400C */
  Collider_DestroyQuadDim                       = 0x8005CEB4;  /* ROM: 0x00AD4054 */
  Collider_ResetQuadACDist                      = 0x8005CEC4;  /* ROM: 0x00AD4064 */
  Collider_SetQuadMidpoints                     = 0x8005CEDC;  /* ROM: 0x00AD407C */
  Collider_SetQuadDim                           = 0x8005CF90;  /* ROM: 0x00AD4130 */
  Collider_InitQuad                             = 0x8005D018;  /* ROM: 0x00AD41B8 */
  Collider_DestroyQuad                          = 0x8005D060;  /* ROM: 0x00AD4200 */
  Collider_SetQuadType1                         = 0x8005D0A8;  /* ROM: 0x00AD4248 */
  Collider_SetQuad                              = 0x8005D104;  /* ROM: 0x00AD42A4 */
  Collider_ResetQuadAT                          = 0x8005D160;  /* ROM: 0x00AD4300 */
  Collider_ResetQuadAC                          = 0x8005D1A8;  /* ROM: 0x00AD4348 */
  Collider_ResetQuadOC                          = 0x8005D1E0;  /* ROM: 0x00AD4380 */
  Collider_QuadSetNearestAC                     = 0x8005D218;  /* ROM: 0x00AD43B8 */
  Collider_InitLine                             = 0x8005D2C4;  /* ROM: 0x00AD4464 */
  Collider_DestroyLine                          = 0x8005D324;  /* ROM: 0x00AD44C4 */
  Collider_SetLinePoints                        = 0x8005D334;  /* ROM: 0x00AD44D4 */
  Collider_SetLine                              = 0x8005D378;  /* ROM: 0x00AD4518 */
  Collider_ResetLineOC                          = 0x8005D3A4;  /* ROM: 0x00AD4544 */
  CollisionCheck_InitContext                    = 0x8005D3BC;  /* ROM: 0x00AD455C */
  CollisionCheck_DestroyContext                 = 0x8005D400;  /* ROM: 0x00AD45A0 */
  CollisionCheck_ClearContext                   = 0x8005D40C;  /* ROM: 0x00AD45AC */
  CollisionCheck_EnableSAC                      = 0x8005D4B4;  /* ROM: 0x00AD4654 */
  CollisionCheck_DisableSAC                     = 0x8005D4C8;  /* ROM: 0x00AD4668 */
  Collider_Draw                                 = 0x8005D4DC;  /* ROM: 0x00AD467C */
  CollisionCheck_DrawCollision                  = 0x8005D62C;  /* ROM: 0x00AD47CC */
  CollisionCheck_SetAT                          = 0x8005D79C;  /* ROM: 0x00AD493C */
  CollisionCheck_SetAT_SAC                      = 0x8005D8AC;  /* ROM: 0x00AD4A4C */
  CollisionCheck_SetAC                          = 0x8005D9F4;  /* ROM: 0x00AD4B94 */
  CollisionCheck_SetAC_SAC                      = 0x8005DB04;  /* ROM: 0x00AD4CA4 */
  CollisionCheck_SetOC                          = 0x8005DC4C;  /* ROM: 0x00AD4DEC */
  CollisionCheck_SetOC_SAC                      = 0x8005DD5C;  /* ROM: 0x00AD4EFC */
  CollisionCheck_SetOCLine                      = 0x8005DE9C;  /* ROM: 0x00AD503C */
  CollisionCheck_SkipTouch                      = 0x8005DF2C;  /* ROM: 0x00AD50CC */
  CollisionCheck_SkipBump                       = 0x8005DF50;  /* ROM: 0x00AD50F0 */
  CollisionCheck_NoSharedFlags                  = 0x8005DF74;  /* ROM: 0x00AD5114 */
  CollisionCheck_NoBlood                        = 0x8005DF9C;  /* ROM: 0x00AD513C */
  CollisionCheck_BlueBlood                      = 0x8005DFAC;  /* ROM: 0x00AD514C */
  CollisionCheck_GreenBlood                     = 0x8005E10C;  /* ROM: 0x00AD52AC */
  CollisionCheck_WaterBurst                     = 0x8005E26C;  /* ROM: 0x00AD540C */
  CollisionCheck_RedBlood                       = 0x8005E2A4;  /* ROM: 0x00AD5444 */
  CollisionCheck_RedBloodUnused                 = 0x8005E2C8;  /* ROM: 0x00AD5468 */
  CollisionCheck_HitSolid                       = 0x8005E2EC;  /* ROM: 0x00AD548C */
  CollisionCheck_SwordHitAudio                  = 0x8005E4F8;  /* ROM: 0x00AD5698 */
  CollisionCheck_HitEffects                     = 0x8005E604;  /* ROM: 0x00AD57A4 */
  CollisionCheck_SetBounce                      = 0x8005E800;  /* ROM: 0x00AD59A0 */
  CollisionCheck_SetATvsAC                      = 0x8005E81C;  /* ROM: 0x00AD59BC */
  CollisionCheck_AC_JntSphVsJntSph              = 0x8005E9C0;  /* ROM: 0x00AD5B60 */
  CollisionCheck_AC_JntSphVsCyl                 = 0x8005EC6C;  /* ROM: 0x00AD5E0C */
  CollisionCheck_AC_CylVsJntSph                 = 0x8005EEE0;  /* ROM: 0x00AD6080 */
  CollisionCheck_AC_JntSphVsTris                = 0x8005F17C;  /* ROM: 0x00AD631C */
  CollisionCheck_AC_TrisVsJntSph                = 0x8005F39C;  /* ROM: 0x00AD653C */
  CollisionCheck_AC_JntSphVsQuad                = 0x8005F5B0;  /* ROM: 0x00AD6750 */
  CollisionCheck_AC_QuadVsJntSph                = 0x8005F7D0;  /* ROM: 0x00AD6970 */
  CollisionCheck_AC_CylVsCyl                    = 0x8005FA30;  /* ROM: 0x00AD6BD0 */
  CollisionCheck_AC_CylVsTris                   = 0x8005FC04;  /* ROM: 0x00AD6DA4 */
  CollisionCheck_AC_TrisVsCyl                   = 0x8005FDCC;  /* ROM: 0x00AD6F6C */
  CollisionCheck_AC_CylVsQuad                   = 0x8005FF90;  /* ROM: 0x00AD7130 */
  CollisionCheck_AC_QuadVsCyl                   = 0x80060204;  /* ROM: 0x00AD73A4 */
  CollisionCheck_AC_TrisVsTris                  = 0x800604B0;  /* ROM: 0x00AD7650 */
  CollisionCheck_AC_TrisVsQuad                  = 0x80060704;  /* ROM: 0x00AD78A4 */
  CollisionCheck_AC_QuadVsTris                  = 0x80060994;  /* ROM: 0x00AD7B34 */
  CollisionCheck_AC_QuadVsQuad                  = 0x80060C2C;  /* ROM: 0x00AD7DCC */
  CollisionCheck_SetJntSphHitFX                 = 0x80060EBC;  /* ROM: 0x00AD805C */
  CollisionCheck_SetCylHitFX                    = 0x80060F94;  /* ROM: 0x00AD8134 */
  CollisionCheck_SetTrisHitFX                   = 0x80061028;  /* ROM: 0x00AD81C8 */
  CollisionCheck_SetQuadHitFX                   = 0x8006110C;  /* ROM: 0x00AD82AC */
  CollisionCheck_SetHitEffects                  = 0x800611A0;  /* ROM: 0x00AD8340 */
  CollisionCheck_AC                             = 0x80061274;  /* ROM: 0x00AD8414 */
  CollisionCheck_AT                             = 0x8006139C;  /* ROM: 0x00AD853C */
  CollisionCheck_GetMassType                    = 0x8006146C;  /* ROM: 0x00AD860C */
  CollisionCheck_SetOCvsOC                      = 0x800614A4;  /* ROM: 0x00AD8644 */
  CollisionCheck_OC_JntSphVsJntSph              = 0x800617D4;  /* ROM: 0x00AD8974 */
  CollisionCheck_OC_JntSphVsCyl                 = 0x8006199C;  /* ROM: 0x00AD8B3C */
  CollisionCheck_OC_CylVsJntSph                 = 0x80061AF8;  /* ROM: 0x00AD8C98 */
  CollisionCheck_OC_CylVsCyl                    = 0x80061B24;  /* ROM: 0x00AD8CC4 */
  CollisionCheck_SkipOC                         = 0x80061BF4;  /* ROM: 0x00AD8D94 */
  CollisionCheck_Incompatible                   = 0x80061C18;  /* ROM: 0x00AD8DB8 */
  CollisionCheck_OC                             = 0x80061C98;  /* ROM: 0x00AD8E38 */
  CollisionCheck_InitInfo                       = 0x80061E48;  /* ROM: 0x00AD8FE8 */
  CollisionCheck_ResetDamage                    = 0x80061E8C;  /* ROM: 0x00AD902C */
  CollisionCheck_SetInfoNoDamageTable           = 0x80061EB0;  /* ROM: 0x00AD9050 */
  CollisionCheck_SetInfo                        = 0x80061ED4;  /* ROM: 0x00AD9074 */
  CollisionCheck_SetInfo2                       = 0x80061EFC;  /* ROM: 0x00AD909C */
  CollisionCheck_SetInfoGetDamageTable          = 0x80061F2C;  /* ROM: 0x00AD90CC */
  CollisionCheck_ApplyDamage                    = 0x80061F64;  /* ROM: 0x00AD9104 */
  CollisionCheck_ApplyDamageJntSph              = 0x8006216C;  /* ROM: 0x00AD930C */
  CollisionCheck_ApplyDamageCyl                 = 0x80062210;  /* ROM: 0x00AD93B0 */
  CollisionCheck_ApplyDamageTris                = 0x80062230;  /* ROM: 0x00AD93D0 */
  CollisionCheck_ApplyDamageQuad                = 0x800622C4;  /* ROM: 0x00AD9464 */
  CollisionCheck_Damage                         = 0x800622E4;  /* ROM: 0x00AD9484 */
  CollisionCheck_LineOC_JntSph                  = 0x800623A4;  /* ROM: 0x00AD9544 */
  CollisionCheck_LineOC_Cyl                     = 0x800624BC;  /* ROM: 0x00AD965C */
  CollisionCheck_LineOC                         = 0x80062530;  /* ROM: 0x00AD96D0 */
  CollisionCheck_LineOCCheckAll                 = 0x8006268C;  /* ROM: 0x00AD982C */
  CollisionCheck_LineOCCheck                    = 0x800626B0;  /* ROM: 0x00AD9850 */
  Collider_UpdateCylinder                       = 0x800626DC;  /* ROM: 0x00AD987C */
  Collider_SetCylinderPosition                  = 0x80062718;  /* ROM: 0x00AD98B8 */
  Collider_SetQuadVertices                      = 0x80062734;  /* ROM: 0x00AD98D4 */
  Collider_SetTrisVertices                      = 0x800627A0;  /* ROM: 0x00AD9940 */
  Collider_SetTrisDim                           = 0x8006285C;  /* ROM: 0x00AD99FC */
  Collider_UpdateSpheres                        = 0x800628A4;  /* ROM: 0x00AD9A44 */
  CollisionCheck_SpawnRedBlood                  = 0x80062A28;  /* ROM: 0x00AD9BC8 */
  CollisionCheck_SpawnWaterDroplets             = 0x80062B80;  /* ROM: 0x00AD9D20 */
  CollisionCheck_SpawnShieldParticles           = 0x80062CD4;  /* ROM: 0x00AD9E74 */
  CollisionCheck_SpawnShieldParticlesMetal      = 0x80062D60;  /* ROM: 0x00AD9F00 */
  CollisionCheck_SpawnShieldParticlesMetalSound = 0x80062DAC;  /* ROM: 0x00AD9F4C */
  CollisionCheck_SpawnShieldParticlesMetal2     = 0x80062DF4;  /* ROM: 0x00AD9F94 */
  CollisionCheck_SpawnShieldParticlesWood       = 0x80062E14;  /* ROM: 0x00AD9FB4 */
  CollisionCheck_CylSideVsLineSeg               = 0x80062ECC;  /* ROM: 0x00ADA06C */
  CollisionCheck_GetSwordDamage                 = 0x800635D0;  /* ROM: 0x00ADA770 */

/* build/src/code/z_common_data.o */
 /* .text */
  SaveContext_Init = 0x80063640;  /* ROM: 0x00ADA7E0 */
 /* .bss */
  gSaveContext = 0x8015E660;  /* ROM: 0x00BD5800 */
  D_8015FA88   = 0x8015FA88;  /* ROM: 0x00BD6C28 */
  D_8015FA8C   = 0x8015FA8C;  /* ROM: 0x00BD6C2C */

/* build/src/code/z_debug.o */
 /* .text */
  func_800636C0 = 0x800636C0;  /* ROM: 0x00ADA860 */
  func_8006375C = 0x8006375C;  /* ROM: 0x00ADA8FC */
  func_8006376C = 0x8006376C;  /* ROM: 0x00ADA90C */
  func_80063828 = 0x80063828;  /* ROM: 0x00ADA9C8 */
  func_8006390C = 0x8006390C;  /* ROM: 0x00ADAAAC */
  func_80063C04 = 0x80063C04;  /* ROM: 0x00ADADA4 */
  func_80063D7C = 0x80063D7C;  /* ROM: 0x00ADAF1C */
 /* .data */
  D_8011E0B0      = 0x8011E0B0;  /* ROM: 0x00B95250 */
  printTextColors = 0x8011E0B4;  /* ROM: 0x00B95254 */
  inputCombos     = 0x8011E0D4;  /* ROM: 0x00B95274 */
  regChar         = 0x8011E148;  /* ROM: 0x00B952E8 */
 /* .bss */
  gGameInfo  = 0x8015FA90;  /* ROM: 0x00BD6C30 */
  D_8015FA94 = 0x8015FA94;  /* ROM: 0x00BD6C34 */
  D_8015FA98 = 0x8015FA98;  /* ROM: 0x00BD6C38 */

/* build/src/code/z_debug_display.o */
 /* .text */
  DebugDisplay_Init         = 0x80063E90;  /* ROM: 0x00ADB030 */
  DebugDisplay_AddObject    = 0x80063E9C;  /* ROM: 0x00ADB03C */
  DebugDisplay_DrawObjects  = 0x80063FA0;  /* ROM: 0x00ADB140 */
  DebugDisplay_DrawSpriteI8 = 0x80064030;  /* ROM: 0x00ADB1D0 */
  DebugDisplay_DrawPolygon  = 0x80064254;  /* ROM: 0x00ADB3F4 */

/* build/src/code/z_demo.o */
 /* .text */
  Cutscene_DrawDebugInfo             = 0x800643F0;  /* ROM: 0x00ADB590 */
  func_8006450C                      = 0x8006450C;  /* ROM: 0x00ADB6AC */
  func_80064520                      = 0x80064520;  /* ROM: 0x00ADB6C0 */
  func_80064534                      = 0x80064534;  /* ROM: 0x00ADB6D4 */
  func_80064558                      = 0x80064558;  /* ROM: 0x00ADB6F8 */
  func_800645A0                      = 0x800645A0;  /* ROM: 0x00ADB740 */
  func_80064720                      = 0x80064720;  /* ROM: 0x00ADB8C0 */
  func_8006472C                      = 0x8006472C;  /* ROM: 0x00ADB8CC */
  func_80064760                      = 0x80064760;  /* ROM: 0x00ADB900 */
  func_800647C0                      = 0x800647C0;  /* ROM: 0x00ADB960 */
  func_80064824                      = 0x80064824;  /* ROM: 0x00ADB9C4 */
  Cutscene_Command_SetLighting       = 0x80064FB8;  /* ROM: 0x00ADC158 */
  Cutscene_Command_PlayBGM           = 0x80064FF8;  /* ROM: 0x00ADC198 */
  Cutscene_Command_StopBGM           = 0x80065034;  /* ROM: 0x00ADC1D4 */
  Cutscene_Command_FadeBGM           = 0x80065070;  /* ROM: 0x00ADC210 */
  Cutscene_Command_09                = 0x800650F0;  /* ROM: 0x00ADC290 */
  func_80065134                      = 0x80065134;  /* ROM: 0x00ADC2D4 */
  Cutscene_Command_Terminator        = 0x800651D8;  /* ROM: 0x00ADC378 */
  Cutscene_Command_TransitionFX      = 0x80066F80;  /* ROM: 0x00ADE120 */
  Cutscene_Command_CameraPositions   = 0x80067958;  /* ROM: 0x00ADEAF8 */
  Cutscene_Command_CameraFocus       = 0x80067AA8;  /* ROM: 0x00ADEC48 */
  Cutscene_Command_07                = 0x80067C00;  /* ROM: 0x00ADEDA0 */
  Cutscene_Command_08                = 0x80067DD8;  /* ROM: 0x00ADEF78 */
  Cutscene_Command_Textbox           = 0x80067F7C;  /* ROM: 0x00ADF11C */
  Cutscene_ProcessCommands           = 0x8006824C;  /* ROM: 0x00ADF3EC */
  func_80068C3C                      = 0x80068C3C;  /* ROM: 0x00ADFDDC */
  func_80068D84                      = 0x80068D84;  /* ROM: 0x00ADFF24 */
  func_80068DC0                      = 0x80068DC0;  /* ROM: 0x00ADFF60 */
  func_80068ECC                      = 0x80068ECC;  /* ROM: 0x00AE006C */
  func_80069048                      = 0x80069048;  /* ROM: 0x00AE01E8 */
  func_8006907C                      = 0x8006907C;  /* ROM: 0x00AE021C */
  Cutscene_HandleEntranceTriggers    = 0x800690A0;  /* ROM: 0x00AE0240 */
  Cutscene_HandleConditionalTriggers = 0x800691C0;  /* ROM: 0x00AE0360 */
  Cutscene_SetSegment                = 0x800693D8;  /* ROM: 0x00AE0578 */
 /* .data */
  D_8011E1C0             = 0x8011E1C0;  /* ROM: 0x00B95360 */
  D_8011E1C4             = 0x8011E1C4;  /* ROM: 0x00B95364 */
  sCsStateHandlers1      = 0x8011E1C8;  /* ROM: 0x00B95368 */
  sCsStateHandlers2      = 0x8011E1DC;  /* ROM: 0x00B9537C */
  sTitleCsState          = 0x8011E1F0;  /* ROM: 0x00B95390 */
  sEntranceCutsceneTable = 0x8011E1F4;  /* ROM: 0x00B95394 */
  D_8011E304             = 0x8011E304;  /* ROM: 0x00B954A4 */
 /* .bss */
  D_8015FCC0  = 0x8015FCC0;  /* ROM: 0x00BD6E60 */
  D_8015FCC2  = 0x8015FCC2;  /* ROM: 0x00BD6E62 */
  D_8015FCC4  = 0x8015FCC4;  /* ROM: 0x00BD6E64 */
  D_8015FCC6  = 0x8015FCC6;  /* ROM: 0x00BD6E66 */
  D_8015FCC8  = 0x8015FCC8;  /* ROM: 0x00BD6E68 */
  sQuakeIndex = 0x8015FCCA;  /* ROM: 0x00BD6E6A */
  D_8015FCCC  = 0x8015FCCC;  /* ROM: 0x00BD6E6C */
  D_8015FCD0  = 0x8015FCD0;  /* ROM: 0x00BD6E70 */
  D_8015FCE4  = 0x8015FCE4;  /* ROM: 0x00BD6E84 */

/* build/src/code/code_80069420.o */
 /* .text */
  MemCopy = 0x80069420;  /* ROM: 0x00AE05C0 */
  MemSet  = 0x8006944C;  /* ROM: 0x00AE05EC */

/* build/src/code/z_draw.o */
 /* .text */
  GetItem_Draw               = 0x800694A0;  /* ROM: 0x00AE0640 */
  GetItem_DrawMaskOrBombchu  = 0x800694E4;  /* ROM: 0x00AE0684 */
  GetItem_DrawSoldOut        = 0x800695C0;  /* ROM: 0x00AE0760 */
  GetItem_DrawBlueFire       = 0x8006969C;  /* ROM: 0x00AE083C */
  GetItem_DrawPoes           = 0x80069880;  /* ROM: 0x00AE0A20 */
  GetItem_DrawFairy          = 0x80069AC8;  /* ROM: 0x00AE0C68 */
  GetItem_DrawMirrorShield   = 0x80069CF0;  /* ROM: 0x00AE0E90 */
  GetItem_DrawSkullToken     = 0x80069EB0;  /* ROM: 0x00AE1050 */
  GetItem_DrawEggOrMedallion = 0x8006A060;  /* ROM: 0x00AE1200 */
  GetItem_DrawCompass        = 0x8006A158;  /* ROM: 0x00AE12F8 */
  GetItem_DrawPotion         = 0x8006A2A0;  /* ROM: 0x00AE1440 */
  GetItem_DrawGoronSword     = 0x8006A4B0;  /* ROM: 0x00AE1650 */
  GetItem_DrawDekuNuts       = 0x8006A5F0;  /* ROM: 0x00AE1790 */
  GetItem_DrawRecoveryHeart  = 0x8006A73C;  /* ROM: 0x00AE18DC */
  GetItem_DrawFish           = 0x8006A88C;  /* ROM: 0x00AE1A2C */
  GetItem_DrawOpa0           = 0x8006A9CC;  /* ROM: 0x00AE1B6C */
  GetItem_DrawOpa0Xlu1       = 0x8006AAA8;  /* ROM: 0x00AE1C48 */
  GetItem_DrawXlu01          = 0x8006ABEC;  /* ROM: 0x00AE1D8C */
  GetItem_DrawOpa10Xlu2      = 0x8006ACE4;  /* ROM: 0x00AE1E84 */
  GetItem_DrawMagicArrow     = 0x8006AE40;  /* ROM: 0x00AE1FE0 */
  GetItem_DrawMagicSpell     = 0x8006AF9C;  /* ROM: 0x00AE213C */
  GetItem_DrawOpa1023        = 0x8006B124;  /* ROM: 0x00AE22C4 */
  GetItem_DrawOpa10Xlu32     = 0x8006B24C;  /* ROM: 0x00AE23EC */
  GetItem_DrawSmallRupee     = 0x8006B3C0;  /* ROM: 0x00AE2560 */
  GetItem_DrawScale          = 0x8006B54C;  /* ROM: 0x00AE26EC */
  GetItem_DrawBulletBag      = 0x8006B6E4;  /* ROM: 0x00AE2884 */
  GetItem_DrawWallet         = 0x8006B870;  /* ROM: 0x00AE2A10 */
 /* .data */
  sDrawItemTable = 0x8011E320;  /* ROM: 0x00B954C0 */

/* build/src/code/z_sound_source.o */
 /* .text */
  SoundSource_InitAll                = 0x8006BA00;  /* ROM: 0x00AE2BA0 */
  SoundSource_UpdateAll              = 0x8006BA30;  /* ROM: 0x00AE2BD0 */
  SoundSource_PlaySfxAtFixedWorldPos = 0x8006BAD8;  /* ROM: 0x00AE2C78 */

/* build/src/code/z_elf_message.o */
 /* .text */
  ElfMessage_CheckCondition  = 0x8006BBC0;  /* ROM: 0x00AE2D60 */
  func_8006BE88              = 0x8006BE88;  /* ROM: 0x00AE3028 */
  func_8006BF1C              = 0x8006BF1C;  /* ROM: 0x00AE30BC */
  ElfMessage_GetTextFromMsgs = 0x8006C0FC;  /* ROM: 0x00AE329C */
  ElfMessage_GetSariaText    = 0x8006C2B0;  /* ROM: 0x00AE3450 */
  ElfMessage_GetCUpText      = 0x8006C318;  /* ROM: 0x00AE34B8 */
 /* .data */
  sChildSariaMsgs = 0x8011F3A0;  /* ROM: 0x00B96540 */
  sAdultSariaMsgs = 0x8011F3D4;  /* ROM: 0x00B96574 */

/* build/src/code/z_face_reaction.o */
 /* .text */
  Text_GetFaceReaction = 0x8006C360;  /* ROM: 0x00AE3500 */
 /* .data */
  sReactionTextIds = 0x8011F3F0;  /* ROM: 0x00B96590 */

/* build/src/code/code_8006C3A0.o */
 /* .text */
  Flags_UnsetAllEnv = 0x8006C3A0;  /* ROM: 0x00AE3540 */
  Flags_SetEnv      = 0x8006C3D0;  /* ROM: 0x00AE3570 */
  Flags_UnsetEnv    = 0x8006C438;  /* ROM: 0x00AE35D8 */
  Flags_GetEnv      = 0x8006C4A4;  /* ROM: 0x00AE3644 */

/* build/src/code/code_8006C510.o */
 /* .text */
  func_8006C510 = 0x8006C510;  /* ROM: 0x00AE36B0 */
  func_8006C5A8 = 0x8006C5A8;  /* ROM: 0x00AE3748 */

/* build/src/code/z_fcurve_data_skelanime.o */
 /* .text */
  SkelCurve_Clear    = 0x8006C750;  /* ROM: 0x00AE38F0 */
  SkelCurve_Init     = 0x8006C778;  /* ROM: 0x00AE3918 */
  SkelCurve_Destroy  = 0x8006C85C;  /* ROM: 0x00AE39FC */
  SkelCurve_SetAnim  = 0x8006C894;  /* ROM: 0x00AE3A34 */
  SkelCurve_Update   = 0x8006C8C4;  /* ROM: 0x00AE3A64 */
  SkelCurve_DrawLimb = 0x8006CBAC;  /* ROM: 0x00AE3D4C */
  SkelCurve_Draw     = 0x8006CF6C;  /* ROM: 0x00AE410C */

/* build/src/code/z_horse.o */
 /* .text */
  func_8006CFC0 = 0x8006CFC0;  /* ROM: 0x00AE4160 */
  func_8006D074 = 0x8006D074;  /* ROM: 0x00AE4214 */
  func_8006D0AC = 0x8006D0AC;  /* ROM: 0x00AE424C */
  func_8006D0EC = 0x8006D0EC;  /* ROM: 0x00AE428C */
  func_8006D684 = 0x8006D684;  /* ROM: 0x00AE4824 */
  func_8006DC68 = 0x8006DC68;  /* ROM: 0x00AE4E08 */
  func_8006DD9C = 0x8006DD9C;  /* ROM: 0x00AE4F3C */

/* build/src/code/z_jpeg.o */
 /* .text */
  Jpeg_ScheduleDecoderTask = 0x8006DE30;  /* ROM: 0x00AE4FD0 */
  Jpeg_CopyToZbuffer       = 0x8006DF68;  /* ROM: 0x00AE5108 */
  Jpeg_GetUnalignedU16     = 0x8006E0A0;  /* ROM: 0x00AE5240 */
  Jpeg_ParseMarkers        = 0x8006E0EC;  /* ROM: 0x00AE528C */
  Jpeg_Decode              = 0x8006E418;  /* ROM: 0x00AE55B8 */

/* build/src/code/z_kaleido_setup.o */
 /* .text */
  KaleidoSetup_Update  = 0x8006EA30;  /* ROM: 0x00AE5BD0 */
  KaleidoSetup_Init    = 0x8006ECF4;  /* ROM: 0x00AE5E94 */
  KaleidoSetup_Destroy = 0x8006EE48;  /* ROM: 0x00AE5FE8 */
 /* .data */
  sKaleidoSetupKscpPos0 = 0x8011FAA0;  /* ROM: 0x00B96C40 */
  sKaleidoSetupEyeX0    = 0x8011FAA8;  /* ROM: 0x00B96C48 */
  sKaleidoSetupEyeZ0    = 0x8011FAB8;  /* ROM: 0x00B96C58 */
  sKaleidoSetupKscpPos1 = 0x8011FAC8;  /* ROM: 0x00B96C68 */
  sKaleidoSetupEyeX1    = 0x8011FAD0;  /* ROM: 0x00B96C70 */
  sKaleidoSetupEyeZ1    = 0x8011FAE0;  /* ROM: 0x00B96C80 */

/* build/src/code/z_kanfont.o */
 /* .text */
  func_8006EE50           = 0x8006EE50;  /* ROM: 0x00AE5FF0 */
  Font_LoadChar           = 0x8006EE60;  /* ROM: 0x00AE6000 */
  Font_LoadMessageBoxIcon = 0x8006EEBC;  /* ROM: 0x00AE605C */
  Font_LoadOrderedFont    = 0x8006EF10;  /* ROM: 0x00AE60B0 */

/* build/src/code/z_kankyo.o */
 /* .text */
  func_8006F0A0                        = 0x8006F0A0;  /* ROM: 0x00AE6240 */
  Environment_GetPixelDepth            = 0x8006F0D4;  /* ROM: 0x00AE6274 */
  Environment_GraphCallback            = 0x8006F0FC;  /* ROM: 0x00AE629C */
  Environment_Init                     = 0x8006F140;  /* ROM: 0x00AE62E0 */
  Environment_SmoothStepToU8           = 0x8006F6BC;  /* ROM: 0x00AE685C */
  Environment_SmoothStepToS8           = 0x8006F7F8;  /* ROM: 0x00AE6998 */
  Environment_LerpWeight               = 0x8006F93C;  /* ROM: 0x00AE6ADC */
  Environment_LerpWeightAccelDecel     = 0x8006F9BC;  /* ROM: 0x00AE6B5C */
  func_8006FB94                        = 0x8006FB94;  /* ROM: 0x00AE6D34 */
  Environment_UpdateSkybox             = 0x8006FC88;  /* ROM: 0x00AE6E28 */
  Environment_EnableUnderwaterLights   = 0x80070600;  /* ROM: 0x00AE77A0 */
  Environment_DisableUnderwaterLights  = 0x800706A0;  /* ROM: 0x00AE7840 */
  Environment_PrintDebugInfo           = 0x80070718;  /* ROM: 0x00AE78B8 */
  Environment_Update                   = 0x80070C24;  /* ROM: 0x00AE7DC4 */
  Environment_DrawSunAndMoon           = 0x800730DC;  /* ROM: 0x00AEA27C */
  Environment_DrawSunLensFlare         = 0x80073988;  /* ROM: 0x00AEAB28 */
  Environment_DrawLensFlare            = 0x80073A5C;  /* ROM: 0x00AEABFC */
  func_800746DC                        = 0x800746DC;  /* ROM: 0x00AEB87C */
  Environment_DrawRain                 = 0x80074704;  /* ROM: 0x00AEB8A4 */
  func_80074CE8                        = 0x80074CE8;  /* ROM: 0x00AEBE88 */
  Environment_DrawSkyboxFilters        = 0x80074D6C;  /* ROM: 0x00AEBF0C */
  Environment_DrawLightningFlash       = 0x80074FF4;  /* ROM: 0x00AEC194 */
  Environment_UpdateLightningStrike    = 0x800750C0;  /* ROM: 0x00AEC260 */
  Environment_AddLightningBolts        = 0x800753C4;  /* ROM: 0x00AEC564 */
  Environment_DrawLightning            = 0x8007542C;  /* ROM: 0x00AEC5CC */
  Environment_PlaySceneSequence        = 0x800758AC;  /* ROM: 0x00AECA4C */
  func_80075B44                        = 0x80075B44;  /* ROM: 0x00AECCE4 */
  Environment_DrawCustomLensFlare      = 0x80075E68;  /* ROM: 0x00AED008 */
  Environment_InitGameOverLights       = 0x80075F14;  /* ROM: 0x00AED0B4 */
  Environment_FadeInGameOverLights     = 0x800760F4;  /* ROM: 0x00AED294 */
  Environment_FadeOutGameOverLights    = 0x800763A8;  /* ROM: 0x00AED548 */
  func_800766C4                        = 0x800766C4;  /* ROM: 0x00AED864 */
  Environment_FillScreen               = 0x8007672C;  /* ROM: 0x00AED8CC */
  Environment_DrawSandstorm            = 0x80076934;  /* ROM: 0x00AEDAD4 */
  Environment_AdjustLights             = 0x800773A8;  /* ROM: 0x00AEE548 */
  Environment_GetBgsDayCount           = 0x800775CC;  /* ROM: 0x00AEE76C */
  Environment_ClearBgsDayCount         = 0x800775D8;  /* ROM: 0x00AEE778 */
  Environment_GetTotalDays             = 0x800775E4;  /* ROM: 0x00AEE784 */
  Environment_ForcePlaySequence        = 0x800775F0;  /* ROM: 0x00AEE790 */
  Environment_IsForcedSequenceDisabled = 0x80077600;  /* ROM: 0x00AEE7A0 */
  Environment_PlayStormNatureAmbience  = 0x80077624;  /* ROM: 0x00AEE7C4 */
  Environment_StopStormNatureAmbience  = 0x80077684;  /* ROM: 0x00AEE824 */
  Environment_WarpSongLeave            = 0x800776E4;  /* ROM: 0x00AEE884 */
 /* .data */
  D_8011FAF0             = 0x8011FAF0;  /* ROM: 0x00B96C90 */
  gWeatherMode           = 0x8011FB30;  /* ROM: 0x00B96CD0 */
  D_8011FB34             = 0x8011FB34;  /* ROM: 0x00B96CD4 */
  D_8011FB38             = 0x8011FB38;  /* ROM: 0x00B96CD8 */
  gSkyboxBlendingEnabled = 0x8011FB3C;  /* ROM: 0x00B96CDC */
  gTimeIncrement         = 0x8011FB40;  /* ROM: 0x00B96CE0 */
  D_8011FB44             = 0x8011FB44;  /* ROM: 0x00B96CE4 */
  D_8011FB48             = 0x8011FB48;  /* ROM: 0x00B96CE8 */
  D_8011FC1C             = 0x8011FC1C;  /* ROM: 0x00B96DBC */
  gSkyboxFiles           = 0x8011FD3C;  /* ROM: 0x00B96EDC */
  D_8011FDCC             = 0x8011FDCC;  /* ROM: 0x00B96F6C */
  D_8011FDD0             = 0x8011FDD0;  /* ROM: 0x00B96F70 */
  D_8011FDD4             = 0x8011FDD4;  /* ROM: 0x00B96F74 */
  sLensFlareScales       = 0x8011FDD8;  /* ROM: 0x00B96F78 */
  sSandstormPrimColors   = 0x8011FEC4;  /* ROM: 0x00B97064 */
  sSandstormEnvColors    = 0x8011FED0;  /* ROM: 0x00B97070 */
 /* .bss */
  gCustomLensFlareOn        = 0x8015FCF0;  /* ROM: 0x00BD6E90 */
  gCustomLensFlarePos       = 0x8015FCF8;  /* ROM: 0x00BD6E98 */
  gLensFlareUnused          = 0x8015FD04;  /* ROM: 0x00BD6EA4 */
  gLensFlareScale           = 0x8015FD06;  /* ROM: 0x00BD6EA6 */
  gLensFlareColorIntensity  = 0x8015FD08;  /* ROM: 0x00BD6EA8 */
  gLensFlareScreenFillAlpha = 0x8015FD0C;  /* ROM: 0x00BD6EAC */
  sLightningBolts           = 0x8015FD10;  /* ROM: 0x00BD6EB0 */
  gLightningStrike          = 0x8015FD70;  /* ROM: 0x00BD6F10 */
  sLightningFlashAlpha      = 0x8015FD7C;  /* ROM: 0x00BD6F1C */
  D_8015FD7E                = 0x8015FD7E;  /* ROM: 0x00BD6F1E */
  D_8015FD80                = 0x8015FD80;  /* ROM: 0x00BD6F20 */
  sNGameOverLightNode       = 0x8015FD84;  /* ROM: 0x00BD6F24 */
  sNGameOverLightInfo       = 0x8015FD88;  /* ROM: 0x00BD6F28 */
  sSGameOverLightNode       = 0x8015FD98;  /* ROM: 0x00BD6F38 */
  sSGameOverLightInfo       = 0x8015FDA0;  /* ROM: 0x00BD6F40 */
  sGameOverLightsIntensity  = 0x8015FDAE;  /* ROM: 0x00BD6F4E */
  D_8015FDB0                = 0x8015FDB0;  /* ROM: 0x00BD6F50 */

/* build/src/code/z_lib.o */
 /* .text */
  Lib_MemSet                     = 0x800777E0;  /* ROM: 0x00AEE980 */
  Math_CosS                      = 0x80077834;  /* ROM: 0x00AEE9D4 */
  Math_SinS                      = 0x80077870;  /* ROM: 0x00AEEA10 */
  Math_ScaledStepToS             = 0x800778AC;  /* ROM: 0x00AEEA4C */
  Math_StepToS                   = 0x8007797C;  /* ROM: 0x00AEEB1C */
  Math_StepToF                   = 0x80077A00;  /* ROM: 0x00AEEBA0 */
  Math_StepUntilAngleS           = 0x80077A90;  /* ROM: 0x00AEEC30 */
  Math_StepUntilS                = 0x80077AF8;  /* ROM: 0x00AEEC98 */
  Math_StepToAngleS              = 0x80077B58;  /* ROM: 0x00AEECF8 */
  Math_StepUntilF                = 0x80077C1C;  /* ROM: 0x00AEEDBC */
  Math_AsymStepToF               = 0x80077C6C;  /* ROM: 0x00AEEE0C */
  func_80077D10                  = 0x80077D10;  /* ROM: 0x00AEEEB0 */
  Rand_S16Offset                 = 0x80077D90;  /* ROM: 0x00AEEF30 */
  Rand_S16OffsetStride           = 0x80077DDC;  /* ROM: 0x00AEEF7C */
  Math_Vec3f_Copy                = 0x80077E40;  /* ROM: 0x00AEEFE0 */
  Math_Vec3s_ToVec3f             = 0x80077E5C;  /* ROM: 0x00AEEFFC */
  Math_Vec3f_Sum                 = 0x80077E9C;  /* ROM: 0x00AEF03C */
  Math_Vec3f_Diff                = 0x80077ED0;  /* ROM: 0x00AEF070 */
  Math_Vec3s_DiffToVec3f         = 0x80077F04;  /* ROM: 0x00AEF0A4 */
  Math_Vec3f_Scale               = 0x80077F5C;  /* ROM: 0x00AEF0FC */
  Math_Vec3f_DistXYZ             = 0x80077F90;  /* ROM: 0x00AEF130 */
  Math_Vec3f_DistXYZAndStoreDiff = 0x80077FD0;  /* ROM: 0x00AEF170 */
  Math_Vec3f_DistXZ              = 0x80078028;  /* ROM: 0x00AEF1C8 */
  Math_Vec3f_DiffY               = 0x80078058;  /* ROM: 0x00AEF1F8 */
  Math_Vec3f_Yaw                 = 0x80078068;  /* ROM: 0x00AEF208 */
  Math_Vec3f_Pitch               = 0x8007809C;  /* ROM: 0x00AEF23C */
  Actor_ProcessInitChain         = 0x800780DC;  /* ROM: 0x00AEF27C */
  IChain_Apply_u8                = 0x80078154;  /* ROM: 0x00AEF2F4 */
  IChain_Apply_s8                = 0x8007816C;  /* ROM: 0x00AEF30C */
  IChain_Apply_u16               = 0x80078184;  /* ROM: 0x00AEF324 */
  IChain_Apply_s16               = 0x8007819C;  /* ROM: 0x00AEF33C */
  IChain_Apply_u32               = 0x800781B4;  /* ROM: 0x00AEF354 */
  IChain_Apply_s32               = 0x800781CC;  /* ROM: 0x00AEF36C */
  IChain_Apply_f32               = 0x800781E4;  /* ROM: 0x00AEF384 */
  IChain_Apply_f32div1000        = 0x80078204;  /* ROM: 0x00AEF3A4 */
  IChain_Apply_Vec3f             = 0x80078230;  /* ROM: 0x00AEF3D0 */
  IChain_Apply_Vec3fdiv1000      = 0x80078258;  /* ROM: 0x00AEF3F8 */
  IChain_Apply_Vec3s             = 0x800782F0;  /* ROM: 0x00AEF490 */
  Math_SmoothStepToF             = 0x80078310;  /* ROM: 0x00AEF4B0 */
  Math_ApproachF                 = 0x8007841C;  /* ROM: 0x00AEF5BC */
  Math_ApproachZeroF             = 0x8007848C;  /* ROM: 0x00AEF62C */
  Math_SmoothStepToDegF          = 0x800784D8;  /* ROM: 0x00AEF678 */
  Math_SmoothStepToS             = 0x8007869C;  /* ROM: 0x00AEF83C */
  Math_ApproachS                 = 0x800787BC;  /* ROM: 0x00AEF95C */
  Color_RGBA8_Copy               = 0x80078860;  /* ROM: 0x00AEFA00 */
  func_80078884                  = 0x80078884;  /* ROM: 0x00AEFA24 */
  func_800788CC                  = 0x800788CC;  /* ROM: 0x00AEFA6C */
  func_80078914                  = 0x80078914;  /* ROM: 0x00AEFAB4 */
 /* .data */
  sInitChainHandlers = 0x8011FEE0;  /* ROM: 0x00B97080 */

/* build/src/code/z_lifemeter.o */
 /* .text */
  HealthMeter_Init               = 0x80078960;  /* ROM: 0x00AEFB00 */
  HealthMeter_Update             = 0x80078A38;  /* ROM: 0x00AEFBD8 */
  func_80078E18                  = 0x80078E18;  /* ROM: 0x00AEFFB8 */
  func_80078E34                  = 0x80078E34;  /* ROM: 0x00AEFFD4 */
  func_80078E84                  = 0x80078E84;  /* ROM: 0x00AF0024 */
  HealthMeter_Draw               = 0x80078F1C;  /* ROM: 0x00AF00BC */
  HealthMeter_UpdateBeatingHeart = 0x80079BC8;  /* ROM: 0x00AF0D68 */
  HealthMeter_IsCritical         = 0x80079CB4;  /* ROM: 0x00AF0E54 */
 /* .bss */
  sBeatingHeartsDDPrim = 0x8015FDC0;  /* ROM: 0x00BD6F60 */
  sBeatingHeartsDDEnv  = 0x8015FDC8;  /* ROM: 0x00BD6F68 */
  sHeartsDDPrim        = 0x8015FDD0;  /* ROM: 0x00BD6F70 */
  sHeartsDDEnv         = 0x8015FDE0;  /* ROM: 0x00BD6F80 */

/* build/src/code/z_lights.o */
 /* .text */
  Lights_PointSetInfo           = 0x80079D30;  /* ROM: 0x00AF0ED0 */
  Lights_PointNoGlowSetInfo     = 0x80079D8C;  /* ROM: 0x00AF0F2C */
  Lights_PointGlowSetInfo       = 0x80079DF0;  /* ROM: 0x00AF0F90 */
  Lights_PointSetColorAndRadius = 0x80079E58;  /* ROM: 0x00AF0FF8 */
  Lights_DirectionalSetInfo     = 0x80079E7C;  /* ROM: 0x00AF101C */
  Lights_Reset                  = 0x80079ED0;  /* ROM: 0x00AF1070 */
  Lights_Draw                   = 0x80079EFC;  /* ROM: 0x00AF109C */
  Lights_FindSlot               = 0x8007A084;  /* ROM: 0x00AF1224 */
  Lights_BindPoint              = 0x8007A0B4;  /* ROM: 0x00AF1254 */
  Lights_BindDirectional        = 0x8007A40C;  /* ROM: 0x00AF15AC */
  Lights_BindAll                = 0x8007A474;  /* ROM: 0x00AF1614 */
  Lights_FindBufSlot            = 0x8007A510;  /* ROM: 0x00AF16B0 */
  Lights_FreeNode               = 0x8007A59C;  /* ROM: 0x00AF173C */
  LightContext_Init             = 0x8007A614;  /* ROM: 0x00AF17B4 */
  LightContext_SetAmbientColor  = 0x8007A67C;  /* ROM: 0x00AF181C */
  LightContext_SetFog           = 0x8007A698;  /* ROM: 0x00AF1838 */
  LightContext_NewLights        = 0x8007A6C4;  /* ROM: 0x00AF1864 */
  LightContext_InitList         = 0x8007A6FC;  /* ROM: 0x00AF189C */
  LightContext_DestroyList      = 0x8007A708;  /* ROM: 0x00AF18A8 */
  LightContext_InsertLight      = 0x8007A764;  /* ROM: 0x00AF1904 */
  LightContext_RemoveLight      = 0x8007A7C4;  /* ROM: 0x00AF1964 */
  Lights_NewAndDraw             = 0x8007A824;  /* ROM: 0x00AF19C4 */
  Lights_New                    = 0x8007A960;  /* ROM: 0x00AF1B00 */
  Lights_GlowCheck              = 0x8007A9B4;  /* ROM: 0x00AF1B54 */
  Lights_DrawGlow               = 0x8007ABBC;  /* ROM: 0x00AF1D5C */
 /* .bss */
  sLightsBuffer = 0x8015FDF0;  /* ROM: 0x00BD6F90 */

/* build/src/code/z_malloc.o */
 /* .text */
  ZeldaArena_CheckPointer = 0x8007AE10;  /* ROM: 0x00AF1FB0 */
  ZeldaArena_Malloc       = 0x8007AE90;  /* ROM: 0x00AF2030 */
  ZeldaArena_MallocDebug  = 0x8007AEE0;  /* ROM: 0x00AF2080 */
  ZeldaArena_MallocR      = 0x8007AF3C;  /* ROM: 0x00AF20DC */
  ZeldaArena_MallocRDebug = 0x8007AF8C;  /* ROM: 0x00AF212C */
  ZeldaArena_Realloc      = 0x8007AFE8;  /* ROM: 0x00AF2188 */
  ZeldaArena_ReallocDebug = 0x8007B040;  /* ROM: 0x00AF21E0 */
  ZeldaArena_Free         = 0x8007B0AC;  /* ROM: 0x00AF224C */
  ZeldaArena_FreeDebug    = 0x8007B0D4;  /* ROM: 0x00AF2274 */
  ZeldaArena_Calloc       = 0x8007B10C;  /* ROM: 0x00AF22AC */
  ZeldaArena_Display      = 0x8007B178;  /* ROM: 0x00AF2318 */
  ZeldaArena_GetSizes     = 0x8007B1A8;  /* ROM: 0x00AF2348 */
  ZeldaArena_Check        = 0x8007B1E0;  /* ROM: 0x00AF2380 */
  ZeldaArena_Init         = 0x8007B204;  /* ROM: 0x00AF23A4 */
  ZeldaArena_Cleanup      = 0x8007B23C;  /* ROM: 0x00AF23DC */
  ZeldaArena_IsInitalized = 0x8007B268;  /* ROM: 0x00AF2408 */
 /* .data */
  gZeldaArenaLogSeverity = 0x80120040;  /* ROM: 0x00B971E0 */
 /* .bss */
  sZeldaArena = 0x8015FF80;  /* ROM: 0x00BD7120 */

/* build/src/code/z_map_mark.o */
 /* .text */
  MapMark_Init           = 0x8007B290;  /* ROM: 0x00AF2430 */
  MapMark_ClearPointers  = 0x8007B364;  /* ROM: 0x00AF2504 */
  MapMark_DrawForDungeon = 0x8007B37C;  /* ROM: 0x00AF251C */
  MapMark_Draw           = 0x8007B8CC;  /* ROM: 0x00AF2A6C */

/* build/src/code/z_moji.o */
 /* .text */
  Moji_SetColor    = 0x8007B910;  /* ROM: 0x00AF2AB0 */
  Moji_SetPosition = 0x8007B934;  /* ROM: 0x00AF2AD4 */
  Moji_DrawChar    = 0x8007B9A4;  /* ROM: 0x00AF2B44 */
  Moji_DrawString  = 0x8007BBA8;  /* ROM: 0x00AF2D48 */
 /* .data */
  sFontColorRed   = 0x80120110;  /* ROM: 0x00B972B0 */
  sFontColorGreen = 0x80120114;  /* ROM: 0x00B972B4 */
  sFontColorBlue  = 0x80120118;  /* ROM: 0x00B972B8 */
  sFontColorAlpha = 0x8012011C;  /* ROM: 0x00B972BC */
  sScreenPosX     = 0x80120120;  /* ROM: 0x00B972C0 */
  sScreenPosY     = 0x80120124;  /* ROM: 0x00B972C4 */
 /* .bss */
  sCurTLUTIndex = 0x8015FFC0;  /* ROM: 0x00BD7160 */

/* build/src/code/z_prenmi_buff.o */
 /* .text */
  PreNmiBuff_Init        = 0x8007BE60;  /* ROM: 0x00AF3000 */
  PreNmiBuff_SetReset    = 0x8007BED4;  /* ROM: 0x00AF3074 */
  PreNmiBuff_IsResetting = 0x8007BF08;  /* ROM: 0x00AF30A8 */

/* build/src/code/z_msgevent.o */
 /* .text */
  MsgEvent_SendNullTask = 0x8007BF10;  /* ROM: 0x00AF30B0 */

/* build/src/code/z_olib.o */
 /* .text */
  OLib_Vec3fDist            = 0x8007BF90;  /* ROM: 0x00AF3130 */
  OLib_Vec3fDistOutDiff     = 0x8007BFD0;  /* ROM: 0x00AF3170 */
  OLib_Vec3fDistXZ          = 0x8007C028;  /* ROM: 0x00AF31C8 */
  OLib_ClampMinDist         = 0x8007C058;  /* ROM: 0x00AF31F8 */
  OLib_ClampMaxDist         = 0x8007C0A8;  /* ROM: 0x00AF3248 */
  OLib_Vec3fDistNormalize   = 0x8007C0F8;  /* ROM: 0x00AF3298 */
  OLib_VecSphToVec3f        = 0x8007C1AC;  /* ROM: 0x00AF334C */
  OLib_VecSphGeoToVec3f     = 0x8007C25C;  /* ROM: 0x00AF33FC */
  OLib_Vec3fToVecSph        = 0x8007C29C;  /* ROM: 0x00AF343C */
  OLib_Vec3fToVecSphGeo     = 0x8007C3F4;  /* ROM: 0x00AF3594 */
  OLib_Vec3fDiffToVecSph    = 0x8007C440;  /* ROM: 0x00AF35E0 */
  OLib_Vec3fDiffToVecSphGeo = 0x8007C490;  /* ROM: 0x00AF3630 */
  OLib_Vec3fDiffRad         = 0x8007C4E0;  /* ROM: 0x00AF3680 */
  OLib_Vec3fDiffDegF        = 0x8007C574;  /* ROM: 0x00AF3714 */
  OLib_Vec3fDiffBinAng      = 0x8007C5E0;  /* ROM: 0x00AF3780 */

/* build/src/code/z_onepointdemo.o */
 /* .text */
  OnePointCutscene_AddVecSphToVec3f = 0x8007C680;  /* ROM: 0x00AF3820 */
  OnePointCutscene_Vec3fYaw         = 0x8007C704;  /* ROM: 0x00AF38A4 */
  OnePointCutscene_Vec3sToVec3f     = 0x8007C76C;  /* ROM: 0x00AF390C */
  OnePointCutscene_BgCheckLineTest  = 0x8007C7A8;  /* ROM: 0x00AF3948 */
  OnePointCutscene_RaycastFloor     = 0x8007C7F8;  /* ROM: 0x00AF3998 */
  OnePointCutscene_SetCsCamPoints   = 0x8007C820;  /* ROM: 0x00AF39C0 */
  OnePointCutscene_SetInfo          = 0x8007C850;  /* ROM: 0x00AF39F0 */
  OnePointCutscene_SetAsChild       = 0x8007FFE0;  /* ROM: 0x00AF7180 */
  OnePointCutscene_RemoveCamera     = 0x80080024;  /* ROM: 0x00AF71C4 */
  OnePointCutscene_Init             = 0x800800F8;  /* ROM: 0x00AF7298 */
  OnePointCutscene_EndCutscene      = 0x800803F0;  /* ROM: 0x00AF7590 */
  OnePointCutscene_Attention        = 0x80080480;  /* ROM: 0x00AF7620 */
  OnePointCutscene_AttentionSetSfx  = 0x800806BC;  /* ROM: 0x00AF785C */
  OnePointCutscene_EnableAttention  = 0x8008070C;  /* ROM: 0x00AF78AC */
  OnePointCutscene_DisableAttention = 0x80080718;  /* ROM: 0x00AF78B8 */
  OnePointCutscene_CheckForCategory = 0x80080728;  /* ROM: 0x00AF78C8 */
  OnePointCutscene_Noop             = 0x80080788;  /* ROM: 0x00AF7928 */

/* build/src/code/z_map_exp.o */
 /* .text */
  Map_SavePlayerInitialInfo   = 0x800807A0;  /* ROM: 0x00AF7940 */
  Map_SetPaletteData          = 0x800807FC;  /* ROM: 0x00AF799C */
  Map_SetFloorPalettesData    = 0x800808FC;  /* ROM: 0x00AF7A9C */
  Map_InitData                = 0x80080AB4;  /* ROM: 0x00AF7C54 */
  Map_InitRoomData            = 0x80080E04;  /* ROM: 0x00AF7FA4 */
  Map_Destroy                 = 0x80080F44;  /* ROM: 0x00AF80E4 */
  Map_Init                    = 0x80080F68;  /* ROM: 0x00AF8108 */
  Minimap_DrawCompassIcons    = 0x80081240;  /* ROM: 0x00AF83E0 */
  Minimap_Draw                = 0x800816E0;  /* ROM: 0x00AF8880 */
  Map_GetFloorTextIndexOffset = 0x80082248;  /* ROM: 0x00AF93E8 */
  Map_Update                  = 0x8008226C;  /* ROM: 0x00AF940C */
 /* .data */
  sPlayerInitialPosX      = 0x80123A50;  /* ROM: 0x00B9ABF0 */
  sPlayerInitialPosZ      = 0x80123A54;  /* ROM: 0x00B9ABF4 */
  sPlayerInitialDirection = 0x80123A58;  /* ROM: 0x00B9ABF8 */
  sEntranceIconMapIndex   = 0x80123A5C;  /* ROM: 0x00B9ABFC */
 /* .bss */
  gMapData = 0x8015FFD0;  /* ROM: 0x00BD7170 */

/* build/src/code/z_parameter.o */
 /* .text */
  Interface_ChangeAlpha          = 0x800825E0;  /* ROM: 0x00AF9780 */
  func_80082644                  = 0x80082644;  /* ROM: 0x00AF97E4 */
  func_8008277C                  = 0x8008277C;  /* ROM: 0x00AF991C */
  func_80082850                  = 0x80082850;  /* ROM: 0x00AF99F0 */
  func_80083108                  = 0x80083108;  /* ROM: 0x00AFA2A8 */
  Interface_SetSceneRestrictions = 0x8008407C;  /* ROM: 0x00AFB21C */
  Gfx_TextureIA8                 = 0x80084298;  /* ROM: 0x00AFB438 */
  Gfx_TextureI8                  = 0x800844BC;  /* ROM: 0x00AFB65C */
  Inventory_SwapAgeEquipment     = 0x800846E0;  /* ROM: 0x00AFB880 */
  Interface_InitHorsebackArchery = 0x800849A8;  /* ROM: 0x00AFBB48 */
  func_800849EC                  = 0x800849EC;  /* ROM: 0x00AFBB8C */
  Interface_LoadItemIcon1        = 0x80084A6C;  /* ROM: 0x00AFBC0C */
  Interface_LoadItemIcon2        = 0x80084B30;  /* ROM: 0x00AFBCD0 */
  func_80084BF4                  = 0x80084BF4;  /* ROM: 0x00AFBD94 */
  Item_Give                      = 0x80084D10;  /* ROM: 0x00AFBEB0 */
  Item_CheckObtainability        = 0x80086388;  /* ROM: 0x00AFD528 */
  Inventory_DeleteItem           = 0x80086930;  /* ROM: 0x00AFDAD0 */
  Inventory_ReplaceItem          = 0x800869E4;  /* ROM: 0x00AFDB84 */
  Inventory_HasEmptyBottle       = 0x80086ABC;  /* ROM: 0x00AFDC5C */
  Inventory_HasSpecificBottle    = 0x80086B2C;  /* ROM: 0x00AFDCCC */
  Inventory_UpdateBottleItem     = 0x80086B9C;  /* ROM: 0x00AFDD3C */
  Inventory_ConsumeFairy         = 0x80086C70;  /* ROM: 0x00AFDE10 */
  func_80086D5C                  = 0x80086D5C;  /* ROM: 0x00AFDEFC */
  Interface_LoadActionLabel      = 0x80086D90;  /* ROM: 0x00AFDF30 */
  Interface_SetDoAction          = 0x80086F00;  /* ROM: 0x00AFE0A0 */
  Interface_SetNaviCall          = 0x80086F88;  /* ROM: 0x00AFE128 */
  Interface_LoadActionLabelB     = 0x8008708C;  /* ROM: 0x00AFE22C */
  Health_ChangeBy                = 0x80087174;  /* ROM: 0x00AFE314 */
  Health_GiveHearts              = 0x800872E4;  /* ROM: 0x00AFE484 */
  Rupees_ChangeBy                = 0x8008730C;  /* ROM: 0x00AFE4AC */
  Inventory_ChangeAmmo           = 0x80087330;  /* ROM: 0x00AFE4D0 */
  Magic_Fill                     = 0x80087680;  /* ROM: 0x00AFE820 */
  func_800876C8                  = 0x800876C8;  /* ROM: 0x00AFE868 */
  func_80087708                  = 0x80087708;  /* ROM: 0x00AFE8A8 */
  Interface_UpdateMagicBar       = 0x800879BC;  /* ROM: 0x00AFEB5C */
  Interface_DrawMagicBar         = 0x80088284;  /* ROM: 0x00AFF424 */
  func_80088AA0                  = 0x80088AA0;  /* ROM: 0x00AFFC40 */
  func_80088AF0                  = 0x80088AF0;  /* ROM: 0x00AFFC90 */
  func_80088B34                  = 0x80088B34;  /* ROM: 0x00AFFCD4 */
  Interface_DrawActionLabel      = 0x80088B84;  /* ROM: 0x00AFFD24 */
  Interface_DrawItemButtons      = 0x80088CBC;  /* ROM: 0x00AFFE5C */
  Interface_DrawItemIconTexture  = 0x80089B00;  /* ROM: 0x00B00CA0 */
  Interface_DrawAmmoCount        = 0x80089CF8;  /* ROM: 0x00B00E98 */
  Interface_DrawActionButton     = 0x8008A1BC;  /* ROM: 0x00B0135C */
  Interface_InitVertices         = 0x8008A3E0;  /* ROM: 0x00B01580 */
  func_8008A8B8                  = 0x8008A8B8;  /* ROM: 0x00B01A58 */
  func_8008A994                  = 0x8008A994;  /* ROM: 0x00B01B34 */
  Interface_Draw                 = 0x8008A9D8;  /* ROM: 0x00B01B78 */
  Interface_Update               = 0x8008D61C;  /* ROM: 0x00B047BC */
 /* .data */
  gSpoilingItems       = 0x80125A18;  /* ROM: 0x00B9CBB8 */
  gSpoilingItemReverts = 0x80125A20;  /* ROM: 0x00B9CBC0 */

/* build/src/code/z_path.o */
 /* .text */
  Path_GetByIndex         = 0x8008E4E0;  /* ROM: 0x00B05680 */
  Path_OrientAndGetDistSq = 0x8008E520;  /* ROM: 0x00B056C0 */
  Path_CopyLastPoint      = 0x8008E60C;  /* ROM: 0x00B057AC */

/* build/src/code/z_frame_advance.o */
 /* .text */
  FrameAdvance_Init   = 0x8008E6A0;  /* ROM: 0x00B05840 */
  FrameAdvance_Update = 0x8008E6AC;  /* ROM: 0x00B0584C */

/* build/src/code/z_player_lib.o */
 /* .text */
  Player_SetBootData               = 0x8008E750;  /* ROM: 0x00B058F0 */
  Player_InBlockingCsMode          = 0x8008E8DC;  /* ROM: 0x00B05A7C */
  Player_InCsMode                  = 0x8008E988;  /* ROM: 0x00B05B28 */
  func_8008E9C4                    = 0x8008E9C4;  /* ROM: 0x00B05B64 */
  Player_IsChildWithHylianShield   = 0x8008E9D0;  /* ROM: 0x00B05B70 */
  Player_ActionToModelGroup        = 0x8008E9F8;  /* ROM: 0x00B05B98 */
  Player_SetModelsForHoldingShield = 0x8008EA40;  /* ROM: 0x00B05BE0 */
  Player_SetModels                 = 0x8008EB2C;  /* ROM: 0x00B05CCC */
  Player_SetModelGroup             = 0x8008EC04;  /* ROM: 0x00B05DA4 */
  func_8008EC70                    = 0x8008EC70;  /* ROM: 0x00B05E10 */
  Player_SetEquipmentData          = 0x8008ECAC;  /* ROM: 0x00B05E4C */
  Player_UpdateBottleHeld          = 0x8008ED9C;  /* ROM: 0x00B05F3C */
  func_8008EDF0                    = 0x8008EDF0;  /* ROM: 0x00B05F90 */
  func_8008EE08                    = 0x8008EE08;  /* ROM: 0x00B05FA8 */
  func_8008EEAC                    = 0x8008EEAC;  /* ROM: 0x00B0604C */
  func_8008EF30                    = 0x8008EF30;  /* ROM: 0x00B060D0 */
  func_8008EF44                    = 0x8008EF44;  /* ROM: 0x00B060E4 */
  Player_IsBurningStickInRange     = 0x8008EF5C;  /* ROM: 0x00B060FC */
  Player_GetStrength               = 0x8008F034;  /* ROM: 0x00B061D4 */
  Player_GetMask                   = 0x8008F080;  /* ROM: 0x00B06220 */
  Player_UnsetMask                 = 0x8008F08C;  /* ROM: 0x00B0622C */
  Player_HasMirrorShieldEquipped   = 0x8008F098;  /* ROM: 0x00B06238 */
  Player_HasMirrorShieldSetToDraw  = 0x8008F0AC;  /* ROM: 0x00B0624C */
  Player_ActionToMagicSpell        = 0x8008F0D8;  /* ROM: 0x00B06278 */
  Player_HoldsHookshot             = 0x8008F104;  /* ROM: 0x00B062A4 */
  func_8008F128                    = 0x8008F128;  /* ROM: 0x00B062C8 */
  Player_ActionToSword             = 0x8008F158;  /* ROM: 0x00B062F8 */
  Player_GetSwordHeld              = 0x8008F180;  /* ROM: 0x00B06320 */
  Player_HoldsTwoHandedWeapon      = 0x8008F1A0;  /* ROM: 0x00B06340 */
  Player_HoldsBrokenKnife          = 0x8008F1CC;  /* ROM: 0x00B0636C */
  Player_ActionToBottle            = 0x8008F224;  /* ROM: 0x00B063C4 */
  Player_GetBottleHeld             = 0x8008F250;  /* ROM: 0x00B063F0 */
  Player_ActionToExplosive         = 0x8008F270;  /* ROM: 0x00B06410 */
  Player_GetExplosiveHeld          = 0x8008F29C;  /* ROM: 0x00B0643C */
  func_8008F2BC                    = 0x8008F2BC;  /* ROM: 0x00B0645C */
  func_8008F2F8                    = 0x8008F2F8;  /* ROM: 0x00B06498 */
  func_8008F470                    = 0x8008F470;  /* ROM: 0x00B06610 */
  func_8008F87C                    = 0x8008F87C;  /* ROM: 0x00B06A1C */
  func_8008FCC8                    = 0x8008FCC8;  /* ROM: 0x00B06E68 */
  func_80090014                    = 0x80090014;  /* ROM: 0x00B071B4 */
  func_800902F0                    = 0x800902F0;  /* ROM: 0x00B07490 */
  func_80090440                    = 0x80090440;  /* ROM: 0x00B075E0 */
  func_80090480                    = 0x80090480;  /* ROM: 0x00B07620 */
  func_80090604                    = 0x80090604;  /* ROM: 0x00B077A4 */
  func_800906D4                    = 0x800906D4;  /* ROM: 0x00B07874 */
  Player_DrawGetItemImpl           = 0x800907E4;  /* ROM: 0x00B07984 */
  Player_DrawGetItem               = 0x800909B4;  /* ROM: 0x00B07B54 */
  func_80090A28                    = 0x80090A28;  /* ROM: 0x00B07BC8 */
  Player_DrawHookshotReticle       = 0x80090AFC;  /* ROM: 0x00B07C9C */
  func_80090D20                    = 0x80090D20;  /* ROM: 0x00B07EC0 */
  func_80091738                    = 0x80091738;  /* ROM: 0x00B088D8 */
  func_80091880                    = 0x80091880;  /* ROM: 0x00B08A20 */
  func_80091A24                    = 0x80091A24;  /* ROM: 0x00B08BC4 */
  func_8009214C                    = 0x8009214C;  /* ROM: 0x00B092EC */
 /* .data */
  gPlayerSkelHeaders           = 0x80125B70;  /* ROM: 0x00B9CD10 */
  sBootData                    = 0x80125B78;  /* ROM: 0x00B9CD18 */
  sActionModelGroups           = 0x80125C44;  /* ROM: 0x00B9CDE4 */
  sTextTriggers                = 0x80125C88;  /* ROM: 0x00B9CE28 */
  gPlayerModelTypes            = 0x80125C98;  /* ROM: 0x00B9CE38 */
  D_80125CE8                   = 0x80125CE8;  /* ROM: 0x00B9CE88 */
  D_80125D28                   = 0x80125D28;  /* ROM: 0x00B9CEC8 */
  D_80125D68                   = 0x80125D68;  /* ROM: 0x00B9CF08 */
  D_80125D88                   = 0x80125D88;  /* ROM: 0x00B9CF28 */
  D_80125DE8                   = 0x80125DE8;  /* ROM: 0x00B9CF88 */
  D_80125E08                   = 0x80125E08;  /* ROM: 0x00B9CFA8 */
  D_80125E18                   = 0x80125E18;  /* ROM: 0x00B9CFB8 */
  D_80125E28                   = 0x80125E28;  /* ROM: 0x00B9CFC8 */
  D_80125E38                   = 0x80125E38;  /* ROM: 0x00B9CFD8 */
  D_80125E48                   = 0x80125E48;  /* ROM: 0x00B9CFE8 */
  D_80125E58                   = 0x80125E58;  /* ROM: 0x00B9CFF8 */
  D_80125E68                   = 0x80125E68;  /* ROM: 0x00B9D008 */
  D_80125E78                   = 0x80125E78;  /* ROM: 0x00B9D018 */
  D_80125E88                   = 0x80125E88;  /* ROM: 0x00B9D028 */
  D_80125E98                   = 0x80125E98;  /* ROM: 0x00B9D038 */
  D_80125EA8                   = 0x80125EA8;  /* ROM: 0x00B9D048 */
  D_80125EB8                   = 0x80125EB8;  /* ROM: 0x00B9D058 */
  D_80125EC8                   = 0x80125EC8;  /* ROM: 0x00B9D068 */
  D_80125ED8                   = 0x80125ED8;  /* ROM: 0x00B9D078 */
  D_80125EE8                   = 0x80125EE8;  /* ROM: 0x00B9D088 */
  D_80125EF8                   = 0x80125EF8;  /* ROM: 0x00B9D098 */
  D_80125F08                   = 0x80125F08;  /* ROM: 0x00B9D0A8 */
  sArmOutDLs                   = 0x80125F18;  /* ROM: 0x00B9D0B8 */
  sHandOutDLs                  = 0x80125F20;  /* ROM: 0x00B9D0C0 */
  sRightShoulderNearDLs        = 0x80125F28;  /* ROM: 0x00B9D0C8 */
  D_80125F30                   = 0x80125F30;  /* ROM: 0x00B9D0D0 */
  sHoldingFirstPersonWeaponDLs = 0x80125F38;  /* ROM: 0x00B9D0D8 */
  sPlayerDListGroups           = 0x80125F40;  /* ROM: 0x00B9D0E0 */
  gCullBackDList               = 0x80125F98;  /* ROM: 0x00B9D138 */
  gCullFrontDList              = 0x80125FA8;  /* ROM: 0x00B9D148 */
  sEyeMouthIndexes             = 0x80125FB8;  /* ROM: 0x00B9D158 */
  sEyeTextures                 = 0x80125FD8;  /* ROM: 0x00B9D178 */
  sMouthTextures               = 0x80125FF8;  /* ROM: 0x00B9D198 */
  sTunicColors                 = 0x80126008;  /* ROM: 0x00B9D1A8 */
  sGauntletColors              = 0x80126014;  /* ROM: 0x00B9D1B4 */
  sBootDListGroups             = 0x8012601C;  /* ROM: 0x00B9D1BC */
  D_8012602C                   = 0x8012602C;  /* ROM: 0x00B9D1CC */
  D_80126038                   = 0x80126038;  /* ROM: 0x00B9D1D8 */
  D_80126050                   = 0x80126050;  /* ROM: 0x00B9D1F0 */
  D_80126058                   = 0x80126058;  /* ROM: 0x00B9D1F8 */
  D_80126060                   = 0x80126060;  /* ROM: 0x00B9D200 */
  D_80126068                   = 0x80126068;  /* ROM: 0x00B9D208 */
  D_80126070                   = 0x80126070;  /* ROM: 0x00B9D210 */
  D_80126080                   = 0x80126080;  /* ROM: 0x00B9D220 */
  D_8012608C                   = 0x8012608C;  /* ROM: 0x00B9D22C */
  D_80126098                   = 0x80126098;  /* ROM: 0x00B9D238 */
  D_801260A4                   = 0x801260A4;  /* ROM: 0x00B9D244 */
  D_801260D4                   = 0x801260D4;  /* ROM: 0x00B9D274 */
  sSwordLengths                = 0x801260E0;  /* ROM: 0x00B9D280 */
  sBottleDLists                = 0x801260F8;  /* ROM: 0x00B9D298 */
  sBottleColors                = 0x80126100;  /* ROM: 0x00B9D2A0 */
  D_80126128                   = 0x80126128;  /* ROM: 0x00B9D2C8 */
  sBowStringData               = 0x80126134;  /* ROM: 0x00B9D2D4 */
  D_80126154                   = 0x80126154;  /* ROM: 0x00B9D2F4 */
  D_80126184                   = 0x80126184;  /* ROM: 0x00B9D324 */
  D_80126190                   = 0x80126190;  /* ROM: 0x00B9D330 */
  D_8012619C                   = 0x8012619C;  /* ROM: 0x00B9D33C */
  D_801261CC                   = 0x801261CC;  /* ROM: 0x00B9D36C */
  D_801261D8                   = 0x801261D8;  /* ROM: 0x00B9D378 */
  D_801261E0                   = 0x801261E0;  /* ROM: 0x00B9D380 */
  D_801261F8                   = 0x801261F8;  /* ROM: 0x00B9D398 */
 /* .bss */
  D_80160000       = 0x80160000;  /* ROM: 0x00BD71A0 */
  sDListsLodOffset = 0x80160004;  /* ROM: 0x00BD71A4 */
  sGetItemRefPos   = 0x80160008;  /* ROM: 0x00BD71A8 */
  D_80160014       = 0x80160014;  /* ROM: 0x00BD71B4 */
  D_80160018       = 0x80160018;  /* ROM: 0x00BD71B8 */

/* build/src/code/z_prenmi.o */
 /* .text */
  func_80092320  = 0x80092320;  /* ROM: 0x00B094C0 */
  PreNMI_Update  = 0x80092330;  /* ROM: 0x00B094D0 */
  PreNMI_Draw    = 0x80092384;  /* ROM: 0x00B09524 */
  PreNMI_Main    = 0x8009247C;  /* ROM: 0x00B0961C */
  PreNMI_Destroy = 0x800924B0;  /* ROM: 0x00B09650 */
  PreNMI_Init    = 0x800924B8;  /* ROM: 0x00B09658 */

/* build/src/code/z_quake.o */
 /* .text */
  Quake_AddVec          = 0x80092500;  /* ROM: 0x00B096A0 */
  Quake_UpdateShakeInfo = 0x80092584;  /* ROM: 0x00B09724 */
  Quake_Callback1       = 0x800927AC;  /* ROM: 0x00B0994C */
  Quake_Callback5       = 0x80092830;  /* ROM: 0x00B099D0 */
  Quake_Callback6       = 0x800928A0;  /* ROM: 0x00B09A40 */
  Quake_Callback3       = 0x80092920;  /* ROM: 0x00B09AC0 */
  Quake_Callback2       = 0x800929B4;  /* ROM: 0x00B09B54 */
  Quake_Callback4       = 0x80092A24;  /* ROM: 0x00B09BC4 */
  Quake_GetFreeIndex    = 0x80092AB8;  /* ROM: 0x00B09C58 */
  Quake_AddImpl         = 0x80092B48;  /* ROM: 0x00B09CE8 */
  Quake_Remove          = 0x80092BFC;  /* ROM: 0x00B09D9C */
  Quake_GetRequest      = 0x80092C20;  /* ROM: 0x00B09DC0 */
  Quake_SetValue        = 0x80092C7C;  /* ROM: 0x00B09E1C */
  Quake_SetSpeed        = 0x80092DAC;  /* ROM: 0x00B09F4C */
  Quake_SetCountdown    = 0x80092DF0;  /* ROM: 0x00B09F90 */
  Quake_GetCountdown    = 0x80092E3C;  /* ROM: 0x00B09FDC */
  Quake_SetQuakeValues  = 0x80092E70;  /* ROM: 0x00B0A010 */
  Quake_SetUnkValues    = 0x80092ED4;  /* ROM: 0x00B0A074 */
  Quake_Init            = 0x80092F38;  /* ROM: 0x00B0A0D8 */
  Quake_Add             = 0x80092F88;  /* ROM: 0x00B0A128 */
  Quake_RemoveFromIdx   = 0x80092FAC;  /* ROM: 0x00B0A14C */
  Quake_Calc            = 0x80092FF0;  /* ROM: 0x00B0A190 */
 /* .data */
  D_80126250         = 0x80126250;  /* ROM: 0x00B9D3F0 */
  sQuakeRequestCount = 0x80126254;  /* ROM: 0x00B9D3F4 */
  sQuakeCallbacks    = 0x80126258;  /* ROM: 0x00B9D3F8 */
 /* .bss */
  sQuakeRequest = 0x80160020;  /* ROM: 0x00BD71C0 */

/* build/src/code/z_rcp.o */
 /* .text */
  Gfx_SetFog               = 0x80093370;  /* ROM: 0x00B0A510 */
  Gfx_SetFogWithSync       = 0x8009352C;  /* ROM: 0x00B0A6CC */
  Gfx_SetFog2              = 0x80093708;  /* ROM: 0x00B0A8A8 */
  Gfx_CallSetupDLImpl      = 0x8009373C;  /* ROM: 0x00B0A8DC */
  Gfx_CallSetupDL          = 0x80093774;  /* ROM: 0x00B0A914 */
  Gfx_CallSetupDLAtPtr     = 0x80093794;  /* ROM: 0x00B0A934 */
  func_800937C0            = 0x800937C0;  /* ROM: 0x00B0A960 */
  func_800937E4            = 0x800937E4;  /* ROM: 0x00B0A984 */
  func_80093808            = 0x80093808;  /* ROM: 0x00B0A9A8 */
  func_80093848            = 0x80093848;  /* ROM: 0x00B0A9E8 */
  func_800938B4            = 0x800938B4;  /* ROM: 0x00B0AA54 */
  func_80093920            = 0x80093920;  /* ROM: 0x00B0AAC0 */
  func_8009398C            = 0x8009398C;  /* ROM: 0x00B0AB2C */
  func_800939F8            = 0x800939F8;  /* ROM: 0x00B0AB98 */
  func_80093A64            = 0x80093A64;  /* ROM: 0x00B0AC04 */
  func_80093AD0            = 0x80093AD0;  /* ROM: 0x00B0AC70 */
  func_80093B3C            = 0x80093B3C;  /* ROM: 0x00B0ACDC */
  func_80093BA8            = 0x80093BA8;  /* ROM: 0x00B0AD48 */
  func_80093C14            = 0x80093C14;  /* ROM: 0x00B0ADB4 */
  func_80093C80            = 0x80093C80;  /* ROM: 0x00B0AE20 */
  func_80093D18            = 0x80093D18;  /* ROM: 0x00B0AEB8 */
  func_80093D84            = 0x80093D84;  /* ROM: 0x00B0AF24 */
  func_80093DF0            = 0x80093DF0;  /* ROM: 0x00B0AF90 */
  func_80093E5C            = 0x80093E5C;  /* ROM: 0x00B0AFFC */
  func_80093EC8            = 0x80093EC8;  /* ROM: 0x00B0B068 */
  func_80093F34            = 0x80093F34;  /* ROM: 0x00B0B0D4 */
  func_80093F58            = 0x80093F58;  /* ROM: 0x00B0B0F8 */
  func_80093F7C            = 0x80093F7C;  /* ROM: 0x00B0B11C */
  func_80093FD8            = 0x80093FD8;  /* ROM: 0x00B0B178 */
  func_80094044            = 0x80094044;  /* ROM: 0x00B0B1E4 */
  func_800940B0            = 0x800940B0;  /* ROM: 0x00B0B250 */
  func_8009411C            = 0x8009411C;  /* ROM: 0x00B0B2BC */
  func_80094140            = 0x80094140;  /* ROM: 0x00B0B2E0 */
  func_800941AC            = 0x800941AC;  /* ROM: 0x00B0B34C */
  func_80094218            = 0x80094218;  /* ROM: 0x00B0B3B8 */
  func_80094284            = 0x80094284;  /* ROM: 0x00B0B424 */
  func_800942F0            = 0x800942F0;  /* ROM: 0x00B0B490 */
  func_8009435C            = 0x8009435C;  /* ROM: 0x00B0B4FC */
  func_800943C8            = 0x800943C8;  /* ROM: 0x00B0B568 */
  func_80094434            = 0x80094434;  /* ROM: 0x00B0B5D4 */
  func_800944A0            = 0x800944A0;  /* ROM: 0x00B0B640 */
  func_800944C4            = 0x800944C4;  /* ROM: 0x00B0B664 */
  func_80094520            = 0x80094520;  /* ROM: 0x00B0B6C0 */
  func_8009457C            = 0x8009457C;  /* ROM: 0x00B0B71C */
  func_800945A0            = 0x800945A0;  /* ROM: 0x00B0B740 */
  func_8009460C            = 0x8009460C;  /* ROM: 0x00B0B7AC */
  func_80094678            = 0x80094678;  /* ROM: 0x00B0B818 */
  func_800946E4            = 0x800946E4;  /* ROM: 0x00B0B884 */
  func_80094708            = 0x80094708;  /* ROM: 0x00B0B8A8 */
  func_8009472C            = 0x8009472C;  /* ROM: 0x00B0B8CC */
  func_8009476C            = 0x8009476C;  /* ROM: 0x00B0B90C */
  func_800947AC            = 0x800947AC;  /* ROM: 0x00B0B94C */
  func_80094944            = 0x80094944;  /* ROM: 0x00B0BAE4 */
  func_80094968            = 0x80094968;  /* ROM: 0x00B0BB08 */
  func_800949A8            = 0x800949A8;  /* ROM: 0x00B0BB48 */
  func_80094A14            = 0x80094A14;  /* ROM: 0x00B0BBB4 */
  func_80094A80            = 0x80094A80;  /* ROM: 0x00B0BC20 */
  func_80094AEC            = 0x80094AEC;  /* ROM: 0x00B0BC8C */
  func_80094B58            = 0x80094B58;  /* ROM: 0x00B0BCF8 */
  func_80094BC4            = 0x80094BC4;  /* ROM: 0x00B0BD64 */
  func_80094C50            = 0x80094C50;  /* ROM: 0x00B0BDF0 */
  func_80094CBC            = 0x80094CBC;  /* ROM: 0x00B0BE5C */
  func_80094D28            = 0x80094D28;  /* ROM: 0x00B0BEC8 */
  func_80094D4C            = 0x80094D4C;  /* ROM: 0x00B0BEEC */
  Gfx_BranchTexScroll      = 0x80094DB8;  /* ROM: 0x00B0BF58 */
  func_80094E54            = 0x80094E54;  /* ROM: 0x00B0BFF4 */
  func_80094E78            = 0x80094E78;  /* ROM: 0x00B0C018 */
  Gfx_TexScroll            = 0x80094E9C;  /* ROM: 0x00B0C03C */
  Gfx_TwoTexScroll         = 0x80094F40;  /* ROM: 0x00B0C0E0 */
  Gfx_TwoTexScrollEnvColor = 0x80095068;  /* ROM: 0x00B0C208 */
  Gfx_EnvColor             = 0x800951D0;  /* ROM: 0x00B0C370 */
  func_80095248            = 0x80095248;  /* ROM: 0x00B0C3E8 */
  func_80095974            = 0x80095974;  /* ROM: 0x00B0CB14 */
 /* .data */
  sSetupDL     = 0x80126280;  /* ROM: 0x00B9D420 */
  sFillSetupDL = 0x80126FD0;  /* ROM: 0x00B9E170 */
  D_80127030   = 0x80127030;  /* ROM: 0x00B9E1D0 */
  D_80127060   = 0x80127060;  /* ROM: 0x00B9E200 */
  gEmptyDL     = 0x80127098;  /* ROM: 0x00B9E238 */

/* build/src/code/z_room.o */
 /* .text */
  func_80095AA0 = 0x80095AA0;  /* ROM: 0x00B0CC40 */
  func_80095AB4 = 0x80095AB4;  /* ROM: 0x00B0CC54 */
  func_80095D04 = 0x80095D04;  /* ROM: 0x00B0CEA4 */
  func_80096238 = 0x80096238;  /* ROM: 0x00B0D3D8 */
  func_8009638C = 0x8009638C;  /* ROM: 0x00B0D52C */
  func_80096680 = 0x80096680;  /* ROM: 0x00B0D820 */
  func_80096A74 = 0x80096A74;  /* ROM: 0x00B0DC14 */
  func_80096B6C = 0x80096B6C;  /* ROM: 0x00B0DD0C */
  func_80096F6C = 0x80096F6C;  /* ROM: 0x00B0E10C */
  func_80096FD4 = 0x80096FD4;  /* ROM: 0x00B0E174 */
  func_80096FE8 = 0x80096FE8;  /* ROM: 0x00B0E188 */
  func_8009728C = 0x8009728C;  /* ROM: 0x00B0E42C */
  func_800973FC = 0x800973FC;  /* ROM: 0x00B0E59C */
  Room_Draw     = 0x800974A0;  /* ROM: 0x00B0E640 */
  func_80097534 = 0x80097534;  /* ROM: 0x00B0E6D4 */
 /* .data */
  D_801270A0        = 0x801270A0;  /* ROM: 0x00B9E240 */
  D_801270B0        = 0x801270B0;  /* ROM: 0x00B9E250 */
  sRoomDrawHandlers = 0x80127110;  /* ROM: 0x00B9E2B0 */

/* build/src/code/z_sample.o */
 /* .text */
  Sample_HandleStateChange = 0x800975D0;  /* ROM: 0x00B0E770 */
  Sample_Draw              = 0x80097604;  /* ROM: 0x00B0E7A4 */
  Sample_Main              = 0x80097820;  /* ROM: 0x00B0E9C0 */
  Sample_Destroy           = 0x80097848;  /* ROM: 0x00B0E9E8 */
  Sample_SetupView         = 0x80097850;  /* ROM: 0x00B0E9F0 */
  Sample_LoadTitleStatic   = 0x80097904;  /* ROM: 0x00B0EAA4 */
  Sample_Init              = 0x80097974;  /* ROM: 0x00B0EB14 */

/* build/src/code/code_80097A00.o */
 /* .text */
  Inventory_ChangeEquipment = 0x80097A00;  /* ROM: 0x00B0EBA0 */
  Inventory_DeleteEquipment = 0x80097A54;  /* ROM: 0x00B0EBF4 */
  Inventory_ChangeUpgrade   = 0x80097B9C;  /* ROM: 0x00B0ED3C */
 /* .data */
  gBitFlags          = 0x80127120;  /* ROM: 0x00B9E2C0 */
  gEquipMasks        = 0x801271A0;  /* ROM: 0x00B9E340 */
  gEquipNegMasks     = 0x801271A8;  /* ROM: 0x00B9E348 */
  gUpgradeMasks      = 0x801271B0;  /* ROM: 0x00B9E350 */
  gUpgradeNegMasks   = 0x801271D0;  /* ROM: 0x00B9E370 */
  gEquipShifts       = 0x801271F0;  /* ROM: 0x00B9E390 */
  gUpgradeShifts     = 0x801271F4;  /* ROM: 0x00B9E394 */
  gUpgradeCapacities = 0x801271FC;  /* ROM: 0x00B9E39C */
  gGsFlagsMasks      = 0x8012723C;  /* ROM: 0x00B9E3DC */
  gGsFlagsShifts     = 0x8012724C;  /* ROM: 0x00B9E3EC */
  gItemIcons         = 0x8012725C;  /* ROM: 0x00B9E3FC */
  gItemSlots         = 0x80127464;  /* ROM: 0x00B9E604 */

/* build/src/code/z_scene.o */
 /* .text */
  Object_Spawn                = 0x80097C00;  /* ROM: 0x00B0EDA0 */
  Object_InitBank             = 0x80097DD8;  /* ROM: 0x00B0EF78 */
  Object_UpdateBank           = 0x80097F9C;  /* ROM: 0x00B0F13C */
  Object_GetIndex             = 0x8009812C;  /* ROM: 0x00B0F2CC */
  Object_IsLoaded             = 0x80098188;  /* ROM: 0x00B0F328 */
  func_800981B8               = 0x800981B8;  /* ROM: 0x00B0F358 */
  func_800982FC               = 0x800982FC;  /* ROM: 0x00B0F49C */
  Scene_ExecuteCommands       = 0x8009840C;  /* ROM: 0x00B0F5AC */
  func_80098508               = 0x80098508;  /* ROM: 0x00B0F6A8 */
  func_800985DC               = 0x800985DC;  /* ROM: 0x00B0F77C */
  func_80098630               = 0x80098630;  /* ROM: 0x00B0F7D0 */
  func_80098674               = 0x80098674;  /* ROM: 0x00B0F814 */
  func_800987A4               = 0x800987A4;  /* ROM: 0x00B0F944 */
  func_800987F8               = 0x800987F8;  /* ROM: 0x00B0F998 */
  func_8009883C               = 0x8009883C;  /* ROM: 0x00B0F9DC */
  func_80098904               = 0x80098904;  /* ROM: 0x00B0FAA4 */
  func_80098958               = 0x80098958;  /* ROM: 0x00B0FAF8 */
  func_8009899C               = 0x8009899C;  /* ROM: 0x00B0FB3C */
  func_80098B74               = 0x80098B74;  /* ROM: 0x00B0FD14 */
  func_80098C24               = 0x80098C24;  /* ROM: 0x00B0FDC4 */
  func_80098C68               = 0x80098C68;  /* ROM: 0x00B0FE08 */
  TransitionActor_InitContext = 0x80098CBC;  /* ROM: 0x00B0FE5C */
  func_80098CC8               = 0x80098CC8;  /* ROM: 0x00B0FE68 */
  func_80098D1C               = 0x80098D1C;  /* ROM: 0x00B0FEBC */
  func_80098D5C               = 0x80098D5C;  /* ROM: 0x00B0FEFC */
  func_80098D80               = 0x80098D80;  /* ROM: 0x00B0FF20 */
  func_80099090               = 0x80099090;  /* ROM: 0x00B10230 */
  func_800990F0               = 0x800990F0;  /* ROM: 0x00B10290 */
  func_80099134               = 0x80099134;  /* ROM: 0x00B102D4 */
  func_80099140               = 0x80099140;  /* ROM: 0x00B102E0 */
  func_8009918C               = 0x8009918C;  /* ROM: 0x00B1032C */
  func_800991A0               = 0x800991A0;  /* ROM: 0x00B10340 */
  func_8009934C               = 0x8009934C;  /* ROM: 0x00B104EC */
  func_800993C0               = 0x800993C0;  /* ROM: 0x00B10560 */
 /* .data */
  gSceneCmdHandlers = 0x801274A0;  /* ROM: 0x00B9E640 */
  sNaviMsgFiles     = 0x80127508;  /* ROM: 0x00B9E6A8 */
  gLinkObjectIds    = 0x80127520;  /* ROM: 0x00B9E6C0 */
  gObjectTableSize  = 0x80127524;  /* ROM: 0x00B9E6C4 */
  gObjectTable      = 0x80127528;  /* ROM: 0x00B9E6C8 */

/* build/src/code/z_scene_table.o */
 /* .text */
  func_800994A0             = 0x800994A0;  /* ROM: 0x00B10640 */
  func_80099550             = 0x80099550;  /* ROM: 0x00B106F0 */
  func_800995DC             = 0x800995DC;  /* ROM: 0x00B1077C */
  func_80099760             = 0x80099760;  /* ROM: 0x00B10900 */
  func_80099878             = 0x80099878;  /* ROM: 0x00B10A18 */
  func_80099BD8             = 0x80099BD8;  /* ROM: 0x00B10D78 */
  func_8009A45C             = 0x8009A45C;  /* ROM: 0x00B115FC */
  func_8009A798             = 0x8009A798;  /* ROM: 0x00B11938 */
  func_8009A9DC             = 0x8009A9DC;  /* ROM: 0x00B11B7C */
  func_8009AB98             = 0x8009AB98;  /* ROM: 0x00B11D38 */
  func_8009ACA8             = 0x8009ACA8;  /* ROM: 0x00B11E48 */
  func_8009AE30             = 0x8009AE30;  /* ROM: 0x00B11FD0 */
  func_8009AFE0             = 0x8009AFE0;  /* ROM: 0x00B12180 */
  func_8009B0FC             = 0x8009B0FC;  /* ROM: 0x00B1229C */
  func_8009B86C             = 0x8009B86C;  /* ROM: 0x00B12A0C */
  func_8009B9BC             = 0x8009B9BC;  /* ROM: 0x00B12B5C */
  func_8009BAA4             = 0x8009BAA4;  /* ROM: 0x00B12C44 */
  func_8009BC44             = 0x8009BC44;  /* ROM: 0x00B12DE4 */
  func_8009BEEC             = 0x8009BEEC;  /* ROM: 0x00B1308C */
  func_8009C0AC             = 0x8009C0AC;  /* ROM: 0x00B1324C */
  func_8009C3EC             = 0x8009C3EC;  /* ROM: 0x00B1358C */
  func_8009C608             = 0x8009C608;  /* ROM: 0x00B137A8 */
  func_8009C8B8             = 0x8009C8B8;  /* ROM: 0x00B13A58 */
  func_8009CAC0             = 0x8009CAC0;  /* ROM: 0x00B13C60 */
  func_8009CC00             = 0x8009CC00;  /* ROM: 0x00B13DA0 */
  Gfx_TwoTexScrollPrimColor = 0x8009CE1C;  /* ROM: 0x00B13FBC */
  func_8009CF84             = 0x8009CF84;  /* ROM: 0x00B14124 */
  func_8009D0E8             = 0x8009D0E8;  /* ROM: 0x00B14288 */
  func_8009D31C             = 0x8009D31C;  /* ROM: 0x00B144BC */
  func_8009D438             = 0x8009D438;  /* ROM: 0x00B145D8 */
  func_8009D5B4             = 0x8009D5B4;  /* ROM: 0x00B14754 */
  func_8009D758             = 0x8009D758;  /* ROM: 0x00B148F8 */
  func_8009D974             = 0x8009D974;  /* ROM: 0x00B14B14 */
  func_8009DA30             = 0x8009DA30;  /* ROM: 0x00B14BD0 */
  func_8009DD5C             = 0x8009DD5C;  /* ROM: 0x00B14EFC */
  func_8009DE78             = 0x8009DE78;  /* ROM: 0x00B15018 */
  func_8009E0B8             = 0x8009E0B8;  /* ROM: 0x00B15258 */
  func_8009E54C             = 0x8009E54C;  /* ROM: 0x00B156EC */
  func_8009E730             = 0x8009E730;  /* ROM: 0x00B158D0 */
  func_8009E8C0             = 0x8009E8C0;  /* ROM: 0x00B15A60 */
  func_8009EAD8             = 0x8009EAD8;  /* ROM: 0x00B15C78 */
  func_8009EE44             = 0x8009EE44;  /* ROM: 0x00B15FE4 */
  func_8009F074             = 0x8009F074;  /* ROM: 0x00B16214 */
  func_8009F1B4             = 0x8009F1B4;  /* ROM: 0x00B16354 */
  func_8009F270             = 0x8009F270;  /* ROM: 0x00B16410 */
  func_8009F40C             = 0x8009F40C;  /* ROM: 0x00B165AC */
  func_8009F5D4             = 0x8009F5D4;  /* ROM: 0x00B16774 */
  func_8009F7D4             = 0x8009F7D4;  /* ROM: 0x00B16974 */
  func_8009F9D0             = 0x8009F9D0;  /* ROM: 0x00B16B70 */
  func_8009FB74             = 0x8009FB74;  /* ROM: 0x00B16D14 */
  func_8009FC90             = 0x8009FC90;  /* ROM: 0x00B16E30 */
  func_8009FE58             = 0x8009FE58;  /* ROM: 0x00B16FF8 */
  func_800A0334             = 0x800A0334;  /* ROM: 0x00B174D4 */
  func_800A055C             = 0x800A055C;  /* ROM: 0x00B176FC */
  func_800A057C             = 0x800A057C;  /* ROM: 0x00B1771C */
  func_800A059C             = 0x800A059C;  /* ROM: 0x00B1773C */
  Scene_Draw                = 0x800A06F8;  /* ROM: 0x00B17898 */
 /* .data */
  gEntranceTable                  = 0x801281C0;  /* ROM: 0x00B9F360 */
  gSceneTable                     = 0x80129A10;  /* ROM: 0x00BA0BB0 */
  sDefaultDisplayList             = 0x8012A2A8;  /* ROM: 0x00BA1448 */
  D_8012A2F8                      = 0x8012A2F8;  /* ROM: 0x00BA1498 */
  gDCEntranceTextures             = 0x8012A300;  /* ROM: 0x00BA14A0 */
  sDCLavaFloorTextures            = 0x8012A308;  /* ROM: 0x00BA14A8 */
  sThievesHideoutEntranceTextures = 0x8012A328;  /* ROM: 0x00BA14C8 */
  D_8012A330                      = 0x8012A330;  /* ROM: 0x00BA14D0 */
  sIceCavernEntranceTextures      = 0x8012A338;  /* ROM: 0x00BA14D8 */
  sGTGEntranceTextures            = 0x8012A340;  /* ROM: 0x00BA14E0 */
  sLonLonHouseEntranceTextures    = 0x8012A348;  /* ROM: 0x00BA14E8 */
  sGuardHouseView2Textures        = 0x8012A350;  /* ROM: 0x00BA14F0 */
  sGuardHouseView1Textures        = 0x8012A358;  /* ROM: 0x00BA14F8 */
  sForestTempleEntranceTextures   = 0x8012A360;  /* ROM: 0x00BA1500 */
  sSpiritTempleEntranceTextures   = 0x8012A368;  /* ROM: 0x00BA1508 */
  sKakarikoWindowTextures         = 0x8012A370;  /* ROM: 0x00BA1510 */
  sZorasDomainEntranceTextures    = 0x8012A378;  /* ROM: 0x00BA1518 */
  D_8012A380                      = 0x8012A380;  /* ROM: 0x00BA1520 */
  sGoronCityEntranceTextures      = 0x8012A388;  /* ROM: 0x00BA1528 */
  sLonLonRanchWindowTextures      = 0x8012A390;  /* ROM: 0x00BA1530 */
  D_8012A398                      = 0x8012A398;  /* ROM: 0x00BA1538 */
  sSceneDrawHandlers              = 0x8012A3A4;  /* ROM: 0x00BA1544 */

/* build/src/code/z_skelanime.o */
 /* .text */
  SkelAnime_DrawLimbLod           = 0x800A08A0;  /* ROM: 0x00B17A40 */
  SkelAnime_DrawLod               = 0x800A0B40;  /* ROM: 0x00B17CE0 */
  SkelAnime_DrawFlexLimbLod       = 0x800A0D94;  /* ROM: 0x00B17F34 */
  SkelAnime_DrawFlexLod           = 0x800A106C;  /* ROM: 0x00B1820C */
  SkelAnime_DrawLimbOpa           = 0x800A1344;  /* ROM: 0x00B184E4 */
  SkelAnime_DrawOpa               = 0x800A15C8;  /* ROM: 0x00B18768 */
  SkelAnime_DrawFlexLimbOpa       = 0x800A180C;  /* ROM: 0x00B189AC */
  SkelAnime_DrawFlexOpa           = 0x800A1AC8;  /* ROM: 0x00B18C68 */
  SkelAnime_GetFrameData          = 0x800A1D8C;  /* ROM: 0x00B18F2C */
  Animation_GetLength             = 0x800A1FC8;  /* ROM: 0x00B19168 */
  Animation_GetLastFrame          = 0x800A2000;  /* ROM: 0x00B191A0 */
  SkelAnime_DrawLimb              = 0x800A2044;  /* ROM: 0x00B191E4 */
  SkelAnime_Draw                  = 0x800A2288;  /* ROM: 0x00B19428 */
  SkelAnime_DrawFlexLimb          = 0x800A24A0;  /* ROM: 0x00B19640 */
  SkelAnime_DrawFlex              = 0x800A273C;  /* ROM: 0x00B198DC */
  SkelAnime_GetFrameDataLegacy    = 0x800A29BC;  /* ROM: 0x00B19B5C */
  Animation_GetLimbCountLegacy    = 0x800A2DBC;  /* ROM: 0x00B19F5C */
  Animation_GetLengthLegacy       = 0x800A2DF4;  /* ROM: 0x00B19F94 */
  Animation_GetLastFrameLegacy    = 0x800A2E2C;  /* ROM: 0x00B19FCC */
  SkelAnime_InterpFrameTable      = 0x800A2E70;  /* ROM: 0x00B1A010 */
  AnimationContext_Reset          = 0x800A32EC;  /* ROM: 0x00B1A48C */
  AnimationContext_SetNextQueue   = 0x800A32F4;  /* ROM: 0x00B1A494 */
  AnimationContext_DisableQueue   = 0x800A3310;  /* ROM: 0x00B1A4B0 */
  AnimationContext_AddEntry       = 0x800A3334;  /* ROM: 0x00B1A4D4 */
  AnimationContext_SetLoadFrame   = 0x800A336C;  /* ROM: 0x00B1A50C */
  AnimationContext_SetCopyAll     = 0x800A3478;  /* ROM: 0x00B1A618 */
  AnimationContext_SetInterp      = 0x800A34DC;  /* ROM: 0x00B1A67C */
  AnimationContext_SetCopyTrue    = 0x800A3548;  /* ROM: 0x00B1A6E8 */
  AnimationContext_SetCopyFalse   = 0x800A35B4;  /* ROM: 0x00B1A754 */
  AnimationContext_SetMoveActor   = 0x800A3620;  /* ROM: 0x00B1A7C0 */
  AnimationContext_LoadFrame      = 0x800A3678;  /* ROM: 0x00B1A818 */
  AnimationContext_CopyAll        = 0x800A36A4;  /* ROM: 0x00B1A844 */
  AnimationContext_Interp         = 0x800A3714;  /* ROM: 0x00B1A8B4 */
  AnimationContext_CopyTrue       = 0x800A3770;  /* ROM: 0x00B1A910 */
  AnimationContext_CopyFalse      = 0x800A37F0;  /* ROM: 0x00B1A990 */
  AnimationContext_MoveActor      = 0x800A3874;  /* ROM: 0x00B1AA14 */
  AnimationContext_Update         = 0x800A390C;  /* ROM: 0x00B1AAAC */
  SkelAnime_InitLink              = 0x800A39AC;  /* ROM: 0x00B1AB4C */
  LinkAnimation_SetUpdateFunction = 0x800A3B8C;  /* ROM: 0x00B1AD2C */
  LinkAnimation_Update            = 0x800A3BC0;  /* ROM: 0x00B1AD60 */
  LinkAnimation_Morph             = 0x800A3BE4;  /* ROM: 0x00B1AD84 */
  LinkAnimation_AnimateFrame      = 0x800A3C9C;  /* ROM: 0x00B1AE3C */
  LinkAnimation_Loop              = 0x800A3D70;  /* ROM: 0x00B1AF10 */
  LinkAnimation_Once              = 0x800A3E0C;  /* ROM: 0x00B1AFAC */
  Animation_SetMorph              = 0x800A3EE8;  /* ROM: 0x00B1B088 */
  LinkAnimation_Change            = 0x800A3F08;  /* ROM: 0x00B1B0A8 */
  LinkAnimation_PlayOnce          = 0x800A407C;  /* ROM: 0x00B1B21C */
  LinkAnimation_PlayOnceSetSpeed  = 0x800A40DC;  /* ROM: 0x00B1B27C */
  LinkAnimation_PlayLoop          = 0x800A4140;  /* ROM: 0x00B1B2E0 */
  LinkAnimation_PlayLoopSetSpeed  = 0x800A419C;  /* ROM: 0x00B1B33C */
  LinkAnimation_CopyJointToMorph  = 0x800A41FC;  /* ROM: 0x00B1B39C */
  LinkAnimation_CopyMorphToJoint  = 0x800A422C;  /* ROM: 0x00B1B3CC */
  LinkAnimation_LoadToMorph       = 0x800A425C;  /* ROM: 0x00B1B3FC */
  LinkAnimation_LoadToJoint       = 0x800A42A0;  /* ROM: 0x00B1B440 */
  LinkAnimation_InterpJointMorph  = 0x800A42E4;  /* ROM: 0x00B1B484 */
  LinkAnimation_BlendToJoint      = 0x800A431C;  /* ROM: 0x00B1B4BC */
  LinkAnimation_BlendToMorph      = 0x800A43B8;  /* ROM: 0x00B1B558 */
  LinkAnimation_EndLoop           = 0x800A4454;  /* ROM: 0x00B1B5F4 */
  Animation_OnFrameImpl           = 0x800A4478;  /* ROM: 0x00B1B618 */
  LinkAnimation_OnFrame           = 0x800A4530;  /* ROM: 0x00B1B6D0 */
  SkelAnime_Init                  = 0x800A457C;  /* ROM: 0x00B1B71C */
  SkelAnime_InitFlex              = 0x800A46F8;  /* ROM: 0x00B1B898 */
  SkelAnime_InitSkin              = 0x800A487C;  /* ROM: 0x00B1BA1C */
  SkelAnime_SetUpdate             = 0x800A49B0;  /* ROM: 0x00B1BB50 */
  SkelAnime_Update                = 0x800A49FC;  /* ROM: 0x00B1BB9C */
  SkelAnime_Morph                 = 0x800A4A20;  /* ROM: 0x00B1BBC0 */
  SkelAnime_MorphTaper            = 0x800A4AD8;  /* ROM: 0x00B1BC78 */
  SkelAnime_AnimateFrame          = 0x800A4C58;  /* ROM: 0x00B1BDF8 */
  SkelAnime_LoopFull              = 0x800A4D9C;  /* ROM: 0x00B1BF3C */
  SkelAnime_LoopPartial           = 0x800A4E38;  /* ROM: 0x00B1BFD8 */
  SkelAnime_Once                  = 0x800A4EE0;  /* ROM: 0x00B1C080 */
  Animation_ChangeImpl            = 0x800A4FE4;  /* ROM: 0x00B1C184 */
  Animation_Change                = 0x800A51A0;  /* ROM: 0x00B1C340 */
  Animation_PlayOnce              = 0x800A51E8;  /* ROM: 0x00B1C388 */
  Animation_MorphToPlayOnce       = 0x800A5240;  /* ROM: 0x00B1C3E0 */
  Animation_PlayOnceSetSpeed      = 0x800A529C;  /* ROM: 0x00B1C43C */
  Animation_PlayLoop              = 0x800A52F8;  /* ROM: 0x00B1C498 */
  Animation_MorphToLoop           = 0x800A534C;  /* ROM: 0x00B1C4EC */
  Animation_PlayLoopSetSpeed      = 0x800A5384;  /* ROM: 0x00B1C524 */
  Animation_EndLoop               = 0x800A53DC;  /* ROM: 0x00B1C57C */
  Animation_Reverse               = 0x800A5408;  /* ROM: 0x00B1C5A8 */
  SkelAnime_CopyFrameTableTrue    = 0x800A5428;  /* ROM: 0x00B1C5C8 */
  SkelAnime_CopyFrameTableFalse   = 0x800A5490;  /* ROM: 0x00B1C630 */
  SkelAnime_UpdateTranslation     = 0x800A54FC;  /* ROM: 0x00B1C69C */
  Animation_OnFrame               = 0x800A56C8;  /* ROM: 0x00B1C868 */
  SkelAnime_Free                  = 0x800A56F0;  /* ROM: 0x00B1C890 */
  SkelAnime_CopyFrameTable        = 0x800A5774;  /* ROM: 0x00B1C914 */

/* build/src/code/z_skin.o */
 /* .text */
  Skin_UpdateVertices         = 0x800A57C0;  /* ROM: 0x00B1C960 */
  Skin_ApplyLimbModifications = 0x800A598C;  /* ROM: 0x00B1CB2C */
  Skin_DrawAnimatedLimb       = 0x800A5E28;  /* ROM: 0x00B1CFC8 */
  Skin_DrawLimb               = 0x800A5F60;  /* ROM: 0x00B1D100 */
  Skin_DrawImpl               = 0x800A60D8;  /* ROM: 0x00B1D278 */
  func_800A6330               = 0x800A6330;  /* ROM: 0x00B1D4D0 */
  func_800A6360               = 0x800A6360;  /* ROM: 0x00B1D500 */
  func_800A6394               = 0x800A6394;  /* ROM: 0x00B1D534 */
  func_800A63CC               = 0x800A63CC;  /* ROM: 0x00B1D56C */
  Skin_GetLimbPos             = 0x800A6408;  /* ROM: 0x00B1D5A8 */
 /* .bss */
  gSkinLimbMatrices = 0x801600C0;  /* ROM: 0x00BD7260 */

/* build/src/code/z_skin_awb.o */
 /* .text */
  Skin_InitAnimatedLimb         = 0x800A6460;  /* ROM: 0x00B1D600 */
  Skin_Init                     = 0x800A663C;  /* ROM: 0x00B1D7DC */
  Skin_Free                     = 0x800A6888;  /* ROM: 0x00B1DA28 */
  func_800A698C                 = 0x800A698C;  /* ROM: 0x00B1DB2C */
  Skin_ApplyAnimTransformations = 0x800A6AC4;  /* ROM: 0x00B1DC64 */

/* build/src/code/z_skin_matrix.o */
 /* .text */
  SkinMatrix_Vec3fMtxFMultXYZW          = 0x800A6E10;  /* ROM: 0x00B1DFB0 */
  SkinMatrix_Vec3fMtxFMultXYZ           = 0x800A6EF4;  /* ROM: 0x00B1E094 */
  SkinMatrix_MtxFMtxFMult               = 0x800A6FA0;  /* ROM: 0x00B1E140 */
  SkinMatrix_GetClear                   = 0x800A72FC;  /* ROM: 0x00B1E49C */
  SkinMatrix_Clear                      = 0x800A730C;  /* ROM: 0x00B1E4AC */
  SkinMatrix_MtxFCopy                   = 0x800A735C;  /* ROM: 0x00B1E4FC */
  SkinMatrix_Invert                     = 0x800A73E0;  /* ROM: 0x00B1E580 */
  SkinMatrix_SetScale                   = 0x800A76A4;  /* ROM: 0x00B1E844 */
  SkinMatrix_SetRotateZYX               = 0x800A7704;  /* ROM: 0x00B1E8A4 */
  SkinMatrix_SetRotateYXZ               = 0x800A7894;  /* ROM: 0x00B1EA34 */
  SkinMatrix_SetTranslate               = 0x800A7A24;  /* ROM: 0x00B1EBC4 */
  SkinMatrix_SetTranslateRotateZYXScale = 0x800A7A84;  /* ROM: 0x00B1EC24 */
  SkinMatrix_SetTranslateRotateYXZScale = 0x800A7B04;  /* ROM: 0x00B1ECA4 */
  SkinMatrix_SetTranslateRotateZYX      = 0x800A7B84;  /* ROM: 0x00B1ED24 */
  SkinMatrix_Vec3fToVec3s               = 0x800A7BE4;  /* ROM: 0x00B1ED84 */
  SkinMatrix_Vec3sToVec3f               = 0x800A7C20;  /* ROM: 0x00B1EDC0 */
  SkinMatrix_MtxFToMtx                  = 0x800A7C60;  /* ROM: 0x00B1EE00 */
  SkinMatrix_MtxFToNewMtx               = 0x800A7E70;  /* ROM: 0x00B1F010 */
  SkinMatrix_SetRotateAxis              = 0x800A7EC0;  /* ROM: 0x00B1F060 */
  func_800A8030                         = 0x800A8030;  /* ROM: 0x00B1F1D0 */
 /* .data */
  sMtxFClear = 0x8012A4A0;  /* ROM: 0x00BA1640 */

/* build/src/code/z_sram.o */
 /* .text */
  Sram_InitNewSave           = 0x800A81A0;  /* ROM: 0x00B1F340 */
  Sram_InitDebugSave         = 0x800A82C8;  /* ROM: 0x00B1F468 */
  Sram_OpenSave              = 0x800A8484;  /* ROM: 0x00B1F624 */
  Sram_WriteSave             = 0x800A88D4;  /* ROM: 0x00B1FA74 */
  Sram_VerifyAndLoadAllSaves = 0x800A8A20;  /* ROM: 0x00B1FBC0 */
  Sram_InitSave              = 0x800A9258;  /* ROM: 0x00B203F8 */
  Sram_EraseSave             = 0x800A96D0;  /* ROM: 0x00B20870 */
  Sram_CopySave              = 0x800A97F0;  /* ROM: 0x00B20990 */
  Sram_WriteSramHeader       = 0x800A9A9C;  /* ROM: 0x00B20C3C */
  Sram_InitSram              = 0x800A9AD0;  /* ROM: 0x00B20C70 */
  Sram_Alloc                 = 0x800A9CD4;  /* ROM: 0x00B20E74 */
  Sram_Init                  = 0x800A9D28;  /* ROM: 0x00B20EC8 */
 /* .data */
  gSramSlotOffsets = 0x8012A4E0;  /* ROM: 0x00BA1680 */

/* build/src/code/z_ss_sram.o */
 /* .text */
  SsSram_Init      = 0x800A9D40;  /* ROM: 0x00B20EE0 */
  SsSram_Dma       = 0x800A9E14;  /* ROM: 0x00B20FB4 */
  SsSram_ReadWrite = 0x800A9EA0;  /* ROM: 0x00B21040 */
 /* .data */
  sSsSramContext = 0x8012A690;  /* ROM: 0x00BA1830 */

/* build/src/code/code_800A9F30.o */
 /* .text */
  func_800A9F30 = 0x800A9F30;  /* ROM: 0x00B210D0 */
  func_800A9F6C = 0x800A9F6C;  /* ROM: 0x00B2110C */
  func_800AA000 = 0x800AA000;  /* ROM: 0x00B211A0 */
  func_800AA0B4 = 0x800AA0B4;  /* ROM: 0x00B21254 */
  func_800AA0F0 = 0x800AA0F0;  /* ROM: 0x00B21290 */
  func_800AA148 = 0x800AA148;  /* ROM: 0x00B212E8 */
  func_800AA15C = 0x800AA15C;  /* ROM: 0x00B212FC */
  func_800AA16C = 0x800AA16C;  /* ROM: 0x00B2130C */
  func_800AA178 = 0x800AA178;  /* ROM: 0x00B21318 */
 /* .bss */
  D_80160FD0 = 0x80160FD0;  /* ROM: 0x00BD8170 */

/* build/src/code/z_view.o */
 /* .text */
  View_ViewportToVp = 0x800AA190;  /* ROM: 0x00B21330 */
  View_New          = 0x800AA1F8;  /* ROM: 0x00B21398 */
  View_Free         = 0x800AA250;  /* ROM: 0x00B213F0 */
  View_Init         = 0x800AA278;  /* ROM: 0x00B21418 */
  func_800AA358     = 0x800AA358;  /* ROM: 0x00B214F8 */
  func_800AA3F0     = 0x800AA3F0;  /* ROM: 0x00B21590 */
  View_SetScale     = 0x800AA43C;  /* ROM: 0x00B215DC */
  View_GetScale     = 0x800AA454;  /* ROM: 0x00B215F4 */
  func_800AA460     = 0x800AA460;  /* ROM: 0x00B21600 */
  func_800AA48C     = 0x800AA48C;  /* ROM: 0x00B2162C */
  func_800AA4A8     = 0x800AA4A8;  /* ROM: 0x00B21648 */
  func_800AA4E0     = 0x800AA4E0;  /* ROM: 0x00B21680 */
  View_SetViewport  = 0x800AA4FC;  /* ROM: 0x00B2169C */
  View_GetViewport  = 0x800AA52C;  /* ROM: 0x00B216CC */
  func_800AA550     = 0x800AA550;  /* ROM: 0x00B216F0 */
  func_800AA76C     = 0x800AA76C;  /* ROM: 0x00B2190C */
  func_800AA78C     = 0x800AA78C;  /* ROM: 0x00B2192C */
  func_800AA7AC     = 0x800AA7AC;  /* ROM: 0x00B2194C */
  func_800AA7B8     = 0x800AA7B8;  /* ROM: 0x00B21958 */
  func_800AA814     = 0x800AA814;  /* ROM: 0x00B219B4 */
  func_800AA840     = 0x800AA840;  /* ROM: 0x00B219E0 */
  func_800AA890     = 0x800AA890;  /* ROM: 0x00B21A30 */
  func_800AAA50     = 0x800AAA50;  /* ROM: 0x00B21BF0 */
  func_800AAA9C     = 0x800AAA9C;  /* ROM: 0x00B21C3C */
  func_800AB0A8     = 0x800AB0A8;  /* ROM: 0x00B22248 */
  func_800AB2C4     = 0x800AB2C4;  /* ROM: 0x00B22464 */
  func_800AB560     = 0x800AB560;  /* ROM: 0x00B22700 */
  func_800AB944     = 0x800AB944;  /* ROM: 0x00B22AE4 */
  func_800AB9EC     = 0x800AB9EC;  /* ROM: 0x00B22B8C */
  func_800ABE74     = 0x800ABE74;  /* ROM: 0x00B23014 */
 /* .data */
  D_8012ABF0 = 0x8012ABF0;  /* ROM: 0x00BA1D90 */

/* build/src/code/z_vimode.o */
 /* .text */
  ViMode_LogPrint          = 0x800AC030;  /* ROM: 0x00B231D0 */
  ViMode_Configure         = 0x800AC2F4;  /* ROM: 0x00B23494 */
  ViMode_Save              = 0x800AC89C;  /* ROM: 0x00B23A3C */
  ViMode_Load              = 0x800AC9A4;  /* ROM: 0x00B23B44 */
  ViMode_Init              = 0x800ACA28;  /* ROM: 0x00B23BC8 */
  ViMode_Destroy           = 0x800ACA90;  /* ROM: 0x00B23C30 */
  ViMode_ConfigureFeatures = 0x800ACA98;  /* ROM: 0x00B23C38 */
  ViMode_Update            = 0x800ACAF8;  /* ROM: 0x00B23C98 */

/* build/src/code/code_800ACE70.o */
 /* .text */
  func_800ACE70 = 0x800ACE70;  /* ROM: 0x00B24010 */
  func_800ACE90 = 0x800ACE90;  /* ROM: 0x00B24030 */
  func_800ACE98 = 0x800ACE98;  /* ROM: 0x00B24038 */
 /* .data */
  D_8012AC00 = 0x8012AC00;  /* ROM: 0x00BA1DA0 */
  D_8012AC28 = 0x8012AC28;  /* ROM: 0x00BA1DC8 */
  D_8012AC40 = 0x8012AC40;  /* ROM: 0x00BA1DE0 */
  D_8012AC58 = 0x8012AC58;  /* ROM: 0x00BA1DF8 */

/* build/src/code/z_vismono.o */
 /* .text */
  VisMono_Init          = 0x800AD000;  /* ROM: 0x00B241A0 */
  VisMono_Destroy       = 0x800AD054;  /* ROM: 0x00B241F4 */
  VisMono_UpdateTexture = 0x800AD080;  /* ROM: 0x00B24220 */
  VisMono_DrawTexture   = 0x800AD394;  /* ROM: 0x00B24534 */
  VisMono_Draw          = 0x800AD5C0;  /* ROM: 0x00B24760 */
  VisMono_DrawOld       = 0x800AD870;  /* ROM: 0x00B24A10 */

/* build/src/code/code_800AD920.o */
 /* .text */
  func_800AD920 = 0x800AD920;  /* ROM: 0x00B24AC0 */
  func_800AD950 = 0x800AD950;  /* ROM: 0x00B24AF0 */
  func_800AD958 = 0x800AD958;  /* ROM: 0x00B24AF8 */

/* build/src/code/z_vr_box.o */
 /* .text */
  func_800ADBB0 = 0x800ADBB0;  /* ROM: 0x00B24D50 */
  func_800AE2C0 = 0x800AE2C0;  /* ROM: 0x00B25460 */
  func_800AEFC8 = 0x800AEFC8;  /* ROM: 0x00B26168 */
  func_800AF178 = 0x800AF178;  /* ROM: 0x00B26318 */
  Skybox_Setup  = 0x800AF218;  /* ROM: 0x00B263B8 */
  Skybox_Init   = 0x800B0E50;  /* ROM: 0x00B27FF0 */
 /* .data */
  D_8012AC90 = 0x8012AC90;  /* ROM: 0x00BA1E30 */
  D_8012ACA0 = 0x8012ACA0;  /* ROM: 0x00BA1E40 */
  D_8012AD20 = 0x8012AD20;  /* ROM: 0x00BA1EC0 */
  D_8012AD2C = 0x8012AD2C;  /* ROM: 0x00BA1ECC */
  D_8012AD40 = 0x8012AD40;  /* ROM: 0x00BA1EE0 */
  D_8012ADC0 = 0x8012ADC0;  /* ROM: 0x00BA1F60 */
  D_8012ADD8 = 0x8012ADD8;  /* ROM: 0x00BA1F78 */
  D_8012AE18 = 0x8012AE18;  /* ROM: 0x00BA1FB8 */
  D_8012AE24 = 0x8012AE24;  /* ROM: 0x00BA1FC4 */
  D_8012AE30 = 0x8012AE30;  /* ROM: 0x00BA1FD0 */
  D_8012AE3C = 0x8012AE3C;  /* ROM: 0x00BA1FDC */
  D_8012AEBC = 0x8012AEBC;  /* ROM: 0x00BA205C */
  D_8012AF0C = 0x8012AF0C;  /* ROM: 0x00BA20AC */

/* build/src/code/z_vr_box_draw.o */
 /* .text */
  SkyboxDraw_UpdateMatrix = 0x800B1030;  /* ROM: 0x00B281D0 */
  SkyboxDraw_Draw         = 0x800B10C4;  /* ROM: 0x00B28264 */
  SkyboxDraw_Update       = 0x800B1744;  /* ROM: 0x00B288E4 */
 /* .bss */
  sSkyboxDrawMatrix = 0x801610E0;  /* ROM: 0x00BD8280 */

/* build/src/code/z_player_call.o */
 /* .text */
  PlayerCall_InitFuncPtrs = 0x800B1750;  /* ROM: 0x00B288F0 */
  PlayerCall_Init         = 0x800B17B4;  /* ROM: 0x00B28954 */
  PlayerCall_Destroy      = 0x800B17F8;  /* ROM: 0x00B28998 */
  PlayerCall_Update       = 0x800B1834;  /* ROM: 0x00B289D4 */
  PlayerCall_Draw         = 0x800B1870;  /* ROM: 0x00B28A10 */
 /* .data */
  Player_InitVars = 0x8012AF90;  /* ROM: 0x00BA2130 */
 /* .bss */
  sPlayerCallInitFunc    = 0x801610F0;  /* ROM: 0x00BD8290 */
  sPlayerCallDestroyFunc = 0x801610F4;  /* ROM: 0x00BD8294 */
  sPlayerCallUpdateFunc  = 0x801610F8;  /* ROM: 0x00BD8298 */
  sPlayerCallDrawFunc    = 0x801610FC;  /* ROM: 0x00BD829C */

/* build/src/code/z_fbdemo.o */
 /* .text */
  TransitionUnk_InitGraphics = 0x800B18B0;  /* ROM: 0x00B28A50 */
  TransitionUnk_InitData     = 0x800B1CFC;  /* ROM: 0x00B28E9C */
  TransitionUnk_Destroy      = 0x800B1DBC;  /* ROM: 0x00B28F5C */
  TransitionUnk_Init         = 0x800B1E84;  /* ROM: 0x00B29024 */
  TransitionUnk_SetData      = 0x800B2074;  /* ROM: 0x00B29214 */
  TransitionUnk_Draw         = 0x800B2188;  /* ROM: 0x00B29328 */
  TransitionUnk_Update       = 0x800B22B4;  /* ROM: 0x00B29454 */
  func_800B23E8              = 0x800B23E8;  /* ROM: 0x00B29588 */
  func_800B23F0              = 0x800B23F0;  /* ROM: 0x00B29590 */
 /* .data */
  D_8012AFB0 = 0x8012AFB0;  /* ROM: 0x00BA2150 */
  D_8012B000 = 0x8012B000;  /* ROM: 0x00BA21A0 */

/* build/src/code/z_fbdemo_triforce.o */
 /* .text */
  TransitionTriforce_Start    = 0x800B2400;  /* ROM: 0x00B295A0 */
  TransitionTriforce_Init     = 0x800B2438;  /* ROM: 0x00B295D8 */
  TransitionTriforce_Destroy  = 0x800B24D0;  /* ROM: 0x00B29670 */
  TransitionTriforce_Update   = 0x800B24D8;  /* ROM: 0x00B29678 */
  TransitionTriforce_SetColor = 0x800B25EC;  /* ROM: 0x00B2978C */
  TransitionTriforce_SetType  = 0x800B25F4;  /* ROM: 0x00B29794 */
  TransitionTriforce_SetState = 0x800B25FC;  /* ROM: 0x00B2979C */
  TransitionTriforce_Draw     = 0x800B2604;  /* ROM: 0x00B297A4 */
  TransitionTriforce_IsDone   = 0x800B2944;  /* ROM: 0x00B29AE4 */
 /* .data */
  sTriforceWipeDL  = 0x8012B030;  /* ROM: 0x00BA21D0 */
  sTriforceWipeVtx = 0x8012B060;  /* ROM: 0x00BA2200 */

/* build/src/code/z_fbdemo_wipe1.o */
 /* .text */
  TransitionWipe_Start       = 0x800B29D0;  /* ROM: 0x00B29B70 */
  TransitionWipe_Init        = 0x800B2A88;  /* ROM: 0x00B29C28 */
  TransitionWipe_Destroy     = 0x800B2AB0;  /* ROM: 0x00B29C50 */
  TransitionWipe_Update      = 0x800B2AB8;  /* ROM: 0x00B29C58 */
  TransitionWipe_Draw        = 0x800B2B98;  /* ROM: 0x00B29D38 */
  TransitionWipe_IsDone      = 0x800B2DD4;  /* ROM: 0x00B29F74 */
  TransitionWipe_SetType     = 0x800B2DDC;  /* ROM: 0x00B29F7C */
  TransitionWipe_SetColor    = 0x800B2E1C;  /* ROM: 0x00B29FBC */
  TransitionWipe_SetEnvColor = 0x800B2E24;  /* ROM: 0x00B29FC4 */
 /* .data */
  sWipe1Vtx      = 0x8012B100;  /* ROM: 0x00BA22A0 */
  sWipe1Tex      = 0x8012B290;  /* ROM: 0x00BA2430 */
  sWipeDList     = 0x8012BA90;  /* ROM: 0x00BA2C30 */
  sWipeSyncDList = 0x8012BB88;  /* ROM: 0x00BA2D28 */

/* build/src/code/z_fbdemo_circle.o */
 /* .text */
  TransitionCircle_Start       = 0x800B2E30;  /* ROM: 0x00B29FD0 */
  TransitionCircle_Init        = 0x800B301C;  /* ROM: 0x00B2A1BC */
  TransitionCircle_Destroy     = 0x800B3044;  /* ROM: 0x00B2A1E4 */
  TransitionCircle_Update      = 0x800B304C;  /* ROM: 0x00B2A1EC */
  TransitionCircle_Draw        = 0x800B31D0;  /* ROM: 0x00B2A370 */
  TransitionCircle_IsDone      = 0x800B346C;  /* ROM: 0x00B2A60C */
  TransitionCircle_SetType     = 0x800B3474;  /* ROM: 0x00B2A614 */
  TransitionCircle_SetColor    = 0x800B34CC;  /* ROM: 0x00B2A66C */
  TransitionCircle_SetEnvColor = 0x800B34D4;  /* ROM: 0x00B2A674 */
 /* .data */
  sCircleNullDList        = 0x8012BBA0;  /* ROM: 0x00BA2D40 */
  sCircleWipeDefaultTex   = 0x8012BBA8;  /* ROM: 0x00BA2D48 */
  sCircleWipeWaveTex      = 0x8012BFA8;  /* ROM: 0x00BA3148 */
  sCircleWipeRippleTex    = 0x8012C3A8;  /* ROM: 0x00BA3548 */
  sCircleWipeStarburstTex = 0x8012C7A8;  /* ROM: 0x00BA3948 */
  sCircleWipeVtx          = 0x8012CBA8;  /* ROM: 0x00BA3D48 */
  sCircleDList            = 0x8012CDC8;  /* ROM: 0x00BA3F68 */

/* build/src/code/z_fbdemo_fade.o */
 /* .text */
  TransitionFade_Start    = 0x800B34E0;  /* ROM: 0x00B2A680 */
  TransitionFade_Init     = 0x800B3538;  /* ROM: 0x00B2A6D8 */
  TransitionFade_Destroy  = 0x800B3560;  /* ROM: 0x00B2A700 */
  TransitionFade_Update   = 0x800B3568;  /* ROM: 0x00B2A708 */
  TransitionFade_Draw     = 0x800B3718;  /* ROM: 0x00B2A8B8 */
  TransitionFade_IsDone   = 0x800B37DC;  /* ROM: 0x00B2A97C */
  TransitionFade_SetColor = 0x800B37E4;  /* ROM: 0x00B2A984 */
  TransitionFade_SetType  = 0x800B37EC;  /* ROM: 0x00B2A98C */

/* build/src/code/shrink_window.o */
 /* .text */
  ShrinkWindow_SetVal        = 0x800B3840;  /* ROM: 0x00B2A9E0 */
  ShrinkWindow_GetVal        = 0x800B3898;  /* ROM: 0x00B2AA38 */
  ShrinkWindow_SetCurrentVal = 0x800B38A4;  /* ROM: 0x00B2AA44 */
  ShrinkWindow_GetCurrentVal = 0x800B38FC;  /* ROM: 0x00B2AA9C */
  ShrinkWindow_Init          = 0x800B3908;  /* ROM: 0x00B2AAA8 */
  ShrinkWindow_Destroy       = 0x800B3968;  /* ROM: 0x00B2AB08 */
  ShrinkWindow_Update        = 0x800B39B8;  /* ROM: 0x00B2AB58 */
 /* .data */
  D_8012CED0              = 0x8012CED0;  /* ROM: 0x00BA4070 */
  sShrinkWindowVal        = 0x8012CED4;  /* ROM: 0x00BA4074 */
  sShrinkWindowCurrentVal = 0x8012CED8;  /* ROM: 0x00BA4078 */

/* build/src/code/db_camera.o */
 /* .text */
  DbCamera_AddVecSph               = 0x800B3B50;  /* ROM: 0x00B2ACF0 */
  DbCamera_CalcUpFromPitchYawRoll  = 0x800B3BD4;  /* ROM: 0x00B2AD74 */
  DbCamera_SetTextValue            = 0x800B3DF8;  /* ROM: 0x00B2AF98 */
  DbCamera_Vec3SToF                = 0x800B3EBC;  /* ROM: 0x00B2B05C */
  DbCamera_Vec3FToS                = 0x800B3EFC;  /* ROM: 0x00B2B09C */
  DbCamera_CopyVec3f               = 0x800B3F38;  /* ROM: 0x00B2B0D8 */
  DbCamera_Vec3SToF2               = 0x800B3F54;  /* ROM: 0x00B2B0F4 */
  func_800B3F94                    = 0x800B3F94;  /* ROM: 0x00B2B134 */
  func_800B3FF4                    = 0x800B3FF4;  /* ROM: 0x00B2B194 */
  func_800B404C                    = 0x800B404C;  /* ROM: 0x00B2B1EC */
  func_800B4088                    = 0x800B4088;  /* ROM: 0x00B2B228 */
  func_800B41DC                    = 0x800B41DC;  /* ROM: 0x00B2B37C */
  func_800B42C0                    = 0x800B42C0;  /* ROM: 0x00B2B460 */
  func_800B4370                    = 0x800B4370;  /* ROM: 0x00B2B510 */
  func_800B44E0                    = 0x800B44E0;  /* ROM: 0x00B2B680 */
  DbCamera_PrintPoints             = 0x800B4920;  /* ROM: 0x00B2BAC0 */
  DbCamera_PrintF32Bytes           = 0x800B4A68;  /* ROM: 0x00B2BC08 */
  DbCamera_PrintU16Bytes           = 0x800B4AA8;  /* ROM: 0x00B2BC48 */
  DbCamera_PrintS16Bytes           = 0x800B4AE4;  /* ROM: 0x00B2BC84 */
  DbCamera_PrintCutBytes           = 0x800B4B20;  /* ROM: 0x00B2BCC0 */
  DbCamera_Init                    = 0x800B4D58;  /* ROM: 0x00B2BEF8 */
  DbgCamera_Enable                 = 0x800B4DE4;  /* ROM: 0x00B2BF84 */
  DbCamera_Update                  = 0x800B4E7C;  /* ROM: 0x00B2C01C */
  DbCamera_GetFirstAvailableLetter = 0x800B8730;  /* ROM: 0x00B2F8D0 */
  DbCamera_InitCut                 = 0x800B87D8;  /* ROM: 0x00B2F978 */
  DbCamera_ResetCut                = 0x800B8978;  /* ROM: 0x00B2FB18 */
  DbCamera_CalcMempakAllocSize     = 0x800B8A0C;  /* ROM: 0x00B2FBAC */
  DbCamera_GetMempakAllocSize      = 0x800B8BA4;  /* ROM: 0x00B2FD44 */
  DbCamera_LoadCallback            = 0x800B8BB0;  /* ROM: 0x00B2FD50 */
  DbCamera_SaveCallback            = 0x800B8DB0;  /* ROM: 0x00B2FF50 */
  DbCamera_ClearCallback           = 0x800B8F30;  /* ROM: 0x00B300D0 */
  DbCamera_DrawSlotLetters         = 0x800B8F58;  /* ROM: 0x00B300F8 */
  DbCamera_PrintAllCuts            = 0x800B9060;  /* ROM: 0x00B30200 */
  func_800B91B0                    = 0x800B91B0;  /* ROM: 0x00B30350 */
  DbCamera_Reset                   = 0x800B958C;  /* ROM: 0x00B3072C */
  DbCamera_UpdateDemoControl       = 0x800B9638;  /* ROM: 0x00B307D8 */
  func_800BB03C                    = 0x800BB03C;  /* ROM: 0x00B321DC */
  func_800BB060                    = 0x800BB060;  /* ROM: 0x00B32200 */
  func_800BB06C                    = 0x800BB06C;  /* ROM: 0x00B3220C */
 /* .data */
  D_8012CEE0 = 0x8012CEE0;  /* ROM: 0x00BA4080 */
  D_8012CEE4 = 0x8012CEE4;  /* ROM: 0x00BA4084 */
  D_8012CEE8 = 0x8012CEE8;  /* ROM: 0x00BA4088 */
  D_8012CEEC = 0x8012CEEC;  /* ROM: 0x00BA408C */
  D_8012CEF0 = 0x8012CEF0;  /* ROM: 0x00BA4090 */
  D_8012CEF4 = 0x8012CEF4;  /* ROM: 0x00BA4094 */
  D_8012CEF8 = 0x8012CEF8;  /* ROM: 0x00BA4098 */
  D_8012CF04 = 0x8012CF04;  /* ROM: 0x00BA40A4 */
  D_8012CF08 = 0x8012CF08;  /* ROM: 0x00BA40A8 */
  D_8012CF0C = 0x8012CF0C;  /* ROM: 0x00BA40AC */
  D_8012CF10 = 0x8012CF10;  /* ROM: 0x00BA40B0 */
  D_8012CF14 = 0x8012CF14;  /* ROM: 0x00BA40B4 */
  D_8012CF18 = 0x8012CF18;  /* ROM: 0x00BA40B8 */
  D_8012CF24 = 0x8012CF24;  /* ROM: 0x00BA40C4 */
  D_8012CF30 = 0x8012CF30;  /* ROM: 0x00BA40D0 */
  D_8012CF34 = 0x8012CF34;  /* ROM: 0x00BA40D4 */
  D_8012CF38 = 0x8012CF38;  /* ROM: 0x00BA40D8 */
  D_8012CF3C = 0x8012CF3C;  /* ROM: 0x00BA40DC */
  D_8012CF40 = 0x8012CF40;  /* ROM: 0x00BA40E0 */
  D_8012CF44 = 0x8012CF44;  /* ROM: 0x00BA40E4 */
  D_8012CF48 = 0x8012CF48;  /* ROM: 0x00BA40E8 */
  D_8012CF4C = 0x8012CF4C;  /* ROM: 0x00BA40EC */
  D_8012CF50 = 0x8012CF50;  /* ROM: 0x00BA40F0 */
  D_8012CF60 = 0x8012CF60;  /* ROM: 0x00BA4100 */
  D_8012CF64 = 0x8012CF64;  /* ROM: 0x00BA4104 */
  D_8012CF68 = 0x8012CF68;  /* ROM: 0x00BA4108 */
  D_8012CF6C = 0x8012CF6C;  /* ROM: 0x00BA410C */
  D_8012CF70 = 0x8012CF70;  /* ROM: 0x00BA4110 */
  D_8012CF74 = 0x8012CF74;  /* ROM: 0x00BA4114 */
  D_8012CF78 = 0x8012CF78;  /* ROM: 0x00BA4118 */
  D_8012CF7C = 0x8012CF7C;  /* ROM: 0x00BA411C */
  D_8012CF80 = 0x8012CF80;  /* ROM: 0x00BA4120 */
  D_8012CF84 = 0x8012CF84;  /* ROM: 0x00BA4124 */
  D_8012CF88 = 0x8012CF88;  /* ROM: 0x00BA4128 */
  D_8012CF94 = 0x8012CF94;  /* ROM: 0x00BA4134 */
  D_8012CF98 = 0x8012CF98;  /* ROM: 0x00BA4138 */
  D_8012CF9C = 0x8012CF9C;  /* ROM: 0x00BA413C */
  D_8012CFA4 = 0x8012CFA4;  /* ROM: 0x00BA4144 */
  D_8012CFA8 = 0x8012CFA8;  /* ROM: 0x00BA4148 */
  D_8012CFAC = 0x8012CFAC;  /* ROM: 0x00BA414C */
  D_8012CFB0 = 0x8012CFB0;  /* ROM: 0x00BA4150 */
  D_8012CFB4 = 0x8012CFB4;  /* ROM: 0x00BA4154 */
  D_8012CFC4 = 0x8012CFC4;  /* ROM: 0x00BA4164 */
  D_8012CFD0 = 0x8012CFD0;  /* ROM: 0x00BA4170 */
  D_8012CFE4 = 0x8012CFE4;  /* ROM: 0x00BA4184 */
  D_8012CFF8 = 0x8012CFF8;  /* ROM: 0x00BA4198 */
  D_8012D00C = 0x8012D00C;  /* ROM: 0x00BA41AC */
  D_8012D020 = 0x8012D020;  /* ROM: 0x00BA41C0 */
  D_8012D034 = 0x8012D034;  /* ROM: 0x00BA41D4 */
  D_8012D048 = 0x8012D048;  /* ROM: 0x00BA41E8 */
  D_8012D05C = 0x8012D05C;  /* ROM: 0x00BA41FC */
  D_8012D070 = 0x8012D070;  /* ROM: 0x00BA4210 */
  D_8012D084 = 0x8012D084;  /* ROM: 0x00BA4224 */
  D_8012D098 = 0x8012D098;  /* ROM: 0x00BA4238 */
  D_8012D0AC = 0x8012D0AC;  /* ROM: 0x00BA424C */
  D_8012D0C0 = 0x8012D0C0;  /* ROM: 0x00BA4260 */
  D_8012D0D4 = 0x8012D0D4;  /* ROM: 0x00BA4274 */
  D_8012D0E4 = 0x8012D0E4;  /* ROM: 0x00BA4284 */
  D_8012D0F8 = 0x8012D0F8;  /* ROM: 0x00BA4298 */
  D_8012D114 = 0x8012D114;  /* ROM: 0x00BA42B4 */
  D_8012D128 = 0x8012D128;  /* ROM: 0x00BA42C8 */
  D_8012D13C = 0x8012D13C;  /* ROM: 0x00BA42DC */

/* build/src/code/code_800BB0A0.o */
 /* .text */
  func_800BB0A0 = 0x800BB0A0;  /* ROM: 0x00B32240 */
  func_800BB2B4 = 0x800BB2B4;  /* ROM: 0x00B32454 */

/* build/src/code/mempak.o */
 /* .text */
  Mempak_Init         = 0x800BB570;  /* ROM: 0x00B32710 */
  Mempak_GetFreeBytes = 0x800BB5E8;  /* ROM: 0x00B32788 */
  Mempak_FindFile     = 0x800BB5F8;  /* ROM: 0x00B32798 */
  Mempak_Write        = 0x800BB764;  /* ROM: 0x00B32904 */
  Mempak_Read         = 0x800BB838;  /* ROM: 0x00B329D8 */
  Mempak_Alloc        = 0x800BB90C;  /* ROM: 0x00B32AAC */
  Mempak_DeleteFile   = 0x800BBB6C;  /* ROM: 0x00B32D0C */
  Mempak_GetFileSize  = 0x800BBC14;  /* ROM: 0x00B32DB4 */
 /* .data */
  sMempakCompanyCode = 0x8012D180;  /* ROM: 0x00BA4320 */
  sMempakGameCode    = 0x8012D184;  /* ROM: 0x00BA4324 */
  sMempakGameName    = 0x8012D188;  /* ROM: 0x00BA4328 */
  sMempakExtName     = 0x8012D198;  /* ROM: 0x00BA4338 */
 /* .bss */
  sMempakPfsHandle = 0x801612F0;  /* ROM: 0x00BD8490 */
  sMempakFreeBytes = 0x80161358;  /* ROM: 0x00BD84F8 */
  sMempakFiles     = 0x80161360;  /* ROM: 0x00BD8500 */

/* build/src/code/z_kaleido_manager.o */
 /* .text */
  KaleidoManager_LoadOvl    = 0x800BBC90;  /* ROM: 0x00B32E30 */
  KaleidoManager_ClearOvl   = 0x800BBD60;  /* ROM: 0x00B32F00 */
  KaleidoManager_Init       = 0x800BBDB4;  /* ROM: 0x00B32F54 */
  KaleidoManager_Destroy    = 0x800BBEB0;  /* ROM: 0x00B33050 */
  KaleidoManager_GetRamAddr = 0x800BBEEC;  /* ROM: 0x00B3308C */
 /* .data */
  gKaleidoMgrOverlayTable = 0x8012D1A0;  /* ROM: 0x00BA4340 */
  sKaleidoAreaPtr         = 0x8012D1D8;  /* ROM: 0x00BA4378 */
  gKaleidoMgrCurOvl       = 0x8012D1DC;  /* ROM: 0x00BA437C */
  gBossMarkState          = 0x8012D1E0;  /* ROM: 0x00BA4380 */

/* build/src/code/z_kaleido_scope_call.o */
 /* .text */
  KaleidoScopeCall_LoadPlayer = 0x800BBFC0;  /* ROM: 0x00B33160 */
  KaleidoScopeCall_Init       = 0x800BC050;  /* ROM: 0x00B331F0 */
  KaleidoScopeCall_Destroy    = 0x800BC138;  /* ROM: 0x00B332D8 */
  KaleidoScopeCall_Update     = 0x800BC168;  /* ROM: 0x00B33308 */
  KaleidoScopeCall_Draw       = 0x800BC3D0;  /* ROM: 0x00B33570 */
 /* .bss */
  sKaleidoScopeUpdateFunc   = 0x80161390;  /* ROM: 0x00BD8530 */
  sKaleidoScopeDrawFunc     = 0x80161394;  /* ROM: 0x00BD8534 */
  gBossMarkScale            = 0x80161398;  /* ROM: 0x00BD8538 */
  D_8016139C                = 0x8016139C;  /* ROM: 0x00BD853C */
  gLoadedPauseMarkDataTable = 0x801613A0;  /* ROM: 0x00BD8540 */

/* build/src/code/z_play.o */
 /* .text */
  func_800BC450                = 0x800BC450;  /* ROM: 0x00B335F0 */
  func_800BC490                = 0x800BC490;  /* ROM: 0x00B33630 */
  func_800BC56C                = 0x800BC56C;  /* ROM: 0x00B3370C */
  func_800BC590                = 0x800BC590;  /* ROM: 0x00B33730 */
  func_800BC5E0                = 0x800BC5E0;  /* ROM: 0x00B33780 */
  func_800BC88C                = 0x800BC88C;  /* ROM: 0x00B33A2C */
  Gameplay_SetFog              = 0x800BC8A0;  /* ROM: 0x00B33A40 */
  Gameplay_Destroy             = 0x800BC8EC;  /* ROM: 0x00B33A8C */
  Gameplay_Init                = 0x800BCA64;  /* ROM: 0x00B33C04 */
  Gameplay_Update              = 0x800BD314;  /* ROM: 0x00B344B4 */
  Gameplay_DrawOverlayElements = 0x800BED40;  /* ROM: 0x00B35EE0 */
  Gameplay_Draw                = 0x800BEDD8;  /* ROM: 0x00B35F78 */
  Gameplay_Main                = 0x800BFAE4;  /* ROM: 0x00B36C84 */
  Gameplay_InCsMode            = 0x800BFC84;  /* ROM: 0x00B36E24 */
  func_800BFCB8                = 0x800BFCB8;  /* ROM: 0x00B36E58 */
  Gameplay_LoadFile            = 0x800BFE5C;  /* ROM: 0x00B36FFC */
  Gameplay_InitEnvironment     = 0x800BFEC4;  /* ROM: 0x00B37064 */
  Gameplay_InitScene           = 0x800BFF0C;  /* ROM: 0x00B370AC */
  Gameplay_SpawnScene          = 0x800C0008;  /* ROM: 0x00B371A8 */
  func_800C016C                = 0x800C016C;  /* ROM: 0x00B3730C */
  Gameplay_CreateSubCamera     = 0x800C0230;  /* ROM: 0x00B373D0 */
  Gameplay_GetActiveCamId      = 0x800C030C;  /* ROM: 0x00B374AC */
  Gameplay_ChangeCameraStatus  = 0x800C0314;  /* ROM: 0x00B374B4 */
  Gameplay_ClearCamera         = 0x800C0384;  /* ROM: 0x00B37524 */
  Gameplay_ClearAllSubCameras  = 0x800C0438;  /* ROM: 0x00B375D8 */
  Gameplay_GetCamera           = 0x800C04A4;  /* ROM: 0x00B37644 */
  Gameplay_CameraSetAtEye      = 0x800C04D8;  /* ROM: 0x00B37678 */
  Gameplay_CameraSetAtEyeUp    = 0x800C05E4;  /* ROM: 0x00B37784 */
  Gameplay_CameraSetFov        = 0x800C0704;  /* ROM: 0x00B378A4 */
  Gameplay_SetCameraRoll       = 0x800C0744;  /* ROM: 0x00B378E4 */
  Gameplay_CopyCamera          = 0x800C078C;  /* ROM: 0x00B3792C */
  func_800C0808                = 0x800C0808;  /* ROM: 0x00B379A8 */
  Gameplay_CameraChangeSetting = 0x800C0874;  /* ROM: 0x00B37A14 */
  func_800C08AC                = 0x800C08AC;  /* ROM: 0x00B37A4C */
  Gameplay_CameraGetUID        = 0x800C09A4;  /* ROM: 0x00B37B44 */
  func_800C09D8                = 0x800C09D8;  /* ROM: 0x00B37B78 */
  Gameplay_SaveSceneFlags      = 0x800C0A44;  /* ROM: 0x00B37BE4 */
  Gameplay_SetRespawnData      = 0x800C0A88;  /* ROM: 0x00B37C28 */
  Gameplay_SetupRespawnPoint   = 0x800C0AF4;  /* ROM: 0x00B37C94 */
  Gameplay_TriggerVoidOut      = 0x800C0B60;  /* ROM: 0x00B37D00 */
  Gameplay_LoadToLastEntrance  = 0x800C0BB4;  /* ROM: 0x00B37D54 */
  Gameplay_TriggerRespawn      = 0x800C0C88;  /* ROM: 0x00B37E28 */
  func_800C0CB8                = 0x800C0CB8;  /* ROM: 0x00B37E58 */
  FrameAdvance_IsEnabled       = 0x800C0D28;  /* ROM: 0x00B37EC8 */
  func_800C0D34                = 0x800C0D34;  /* ROM: 0x00B37ED4 */
  func_800C0DB4                = 0x800C0DB4;  /* ROM: 0x00B37F54 */
 /* .data */
  D_8012D1F0 = 0x8012D1F0;  /* ROM: 0x00BA4390 */
  D_8012D1F4 = 0x8012D1F4;  /* ROM: 0x00BA4394 */
  D_8012D1F8 = 0x8012D1F8;  /* ROM: 0x00BA4398 */
 /* .bss */
  sTrnsnUnk      = 0x801613B0;  /* ROM: 0x00BD8550 */
  gTrnsnUnkState = 0x80161490;  /* ROM: 0x00BD8630 */
  D_80161498     = 0x80161498;  /* ROM: 0x00BD8638 */
  D_801614B0     = 0x801614B0;  /* ROM: 0x00BD8650 */
  D_801614B8     = 0x801614B8;  /* ROM: 0x00BD8658 */
  D_801614C8     = 0x801614C8;  /* ROM: 0x00BD8668 */
  D_801614D0     = 0x801614D0;  /* ROM: 0x00BD8670 */

/* build/src/code/PreRender.o */
 /* .text */
  PreRender_SetValuesSave = 0x800C0E70;  /* ROM: 0x00B38010 */
  PreRender_Init          = 0x800C0EA8;  /* ROM: 0x00B38048 */
  PreRender_SetValues     = 0x800C0ED8;  /* ROM: 0x00B38078 */
  PreRender_Destroy       = 0x800C0F08;  /* ROM: 0x00B380A8 */
  func_800C0F28           = 0x800C0F28;  /* ROM: 0x00B380C8 */
  func_800C1258           = 0x800C1258;  /* ROM: 0x00B383F8 */
  func_800C170C           = 0x800C170C;  /* ROM: 0x00B388AC */
  func_800C1AE8           = 0x800C1AE8;  /* ROM: 0x00B38C88 */
  func_800C1B24           = 0x800C1B24;  /* ROM: 0x00B38CC4 */
  func_800C1E9C           = 0x800C1E9C;  /* ROM: 0x00B3903C */
  func_800C1F20           = 0x800C1F20;  /* ROM: 0x00B390C0 */
  func_800C1FA4           = 0x800C1FA4;  /* ROM: 0x00B39144 */
  func_800C20B4           = 0x800C20B4;  /* ROM: 0x00B39254 */
  func_800C2118           = 0x800C2118;  /* ROM: 0x00B392B8 */
  func_800C213C           = 0x800C213C;  /* ROM: 0x00B392DC */
  func_800C24BC           = 0x800C24BC;  /* ROM: 0x00B3965C */
  func_800C24E0           = 0x800C24E0;  /* ROM: 0x00B39680 */
  func_800C2500           = 0x800C2500;  /* ROM: 0x00B396A0 */
  func_800C2FE4           = 0x800C2FE4;  /* ROM: 0x00B3A184 */
  PreRender_Calc          = 0x800C3770;  /* ROM: 0x00B3A910 */

/* build/src/code/TwoHeadArena.o */
 /* .text */
  THGA_Ct                 = 0x800C3880;  /* ROM: 0x00B3AA20 */
  THGA_Dt                 = 0x800C38A0;  /* ROM: 0x00B3AA40 */
  THGA_IsCrash            = 0x800C38C0;  /* ROM: 0x00B3AA60 */
  THGA_Init               = 0x800C38E0;  /* ROM: 0x00B3AA80 */
  THGA_GetSize            = 0x800C3900;  /* ROM: 0x00B3AAA0 */
  THGA_GetHead            = 0x800C3920;  /* ROM: 0x00B3AAC0 */
  THGA_SetHead            = 0x800C3940;  /* ROM: 0x00B3AAE0 */
  THGA_GetTail            = 0x800C3960;  /* ROM: 0x00B3AB00 */
  THGA_AllocStartArray8   = 0x800C3980;  /* ROM: 0x00B3AB20 */
  THGA_AllocStart8        = 0x800C39A0;  /* ROM: 0x00B3AB40 */
  THGA_AllocStart8Wrapper = 0x800C39C0;  /* ROM: 0x00B3AB60 */
  THGA_AllocEnd           = 0x800C39E0;  /* ROM: 0x00B3AB80 */
  THGA_AllocEndArray64    = 0x800C3A00;  /* ROM: 0x00B3ABA0 */
  THGA_AllocEnd64         = 0x800C3A20;  /* ROM: 0x00B3ABC0 */
  THGA_AllocEndArray16    = 0x800C3A40;  /* ROM: 0x00B3ABE0 */
  THGA_AllocEnd16         = 0x800C3A60;  /* ROM: 0x00B3AC00 */
  THA_GetHead             = 0x800C3A80;  /* ROM: 0x00B3AC20 */
  THA_SetHead             = 0x800C3A88;  /* ROM: 0x00B3AC28 */
  THA_GetTail             = 0x800C3A90;  /* ROM: 0x00B3AC30 */
  THA_AllocStart          = 0x800C3A98;  /* ROM: 0x00B3AC38 */
  THA_AllocStart1         = 0x800C3AA8;  /* ROM: 0x00B3AC48 */
  THA_AllocEnd            = 0x800C3AC8;  /* ROM: 0x00B3AC68 */
  THA_AllocEndAlign16     = 0x800C3B54;  /* ROM: 0x00B3ACF4 */
  THA_AllocEndAlign       = 0x800C3B70;  /* ROM: 0x00B3AD10 */
  THA_GetSize             = 0x800C3B88;  /* ROM: 0x00B3AD28 */
  THA_IsCrash             = 0x800C3B98;  /* ROM: 0x00B3AD38 */
  THA_Init                = 0x800C3BBC;  /* ROM: 0x00B3AD5C */
  THA_Ct                  = 0x800C3BD4;  /* ROM: 0x00B3AD74 */
  THA_Dt                  = 0x800C3BF8;  /* ROM: 0x00B3AD98 */

/* build/src/code/code_800C3C20.o */
 /* .text */
  func_800C3C20 = 0x800C3C20;  /* ROM: 0x00B3ADC0 */
 /* .data */
  D_8012D200 = 0x8012D200;  /* ROM: 0x00BA43A0 */

/* build/src/code/audioMgr.o */
 /* .text */
  func_800C3C80          = 0x800C3C80;  /* ROM: 0x00B3AE20 */
  AudioMgr_HandleRetrace = 0x800C3CB8;  /* ROM: 0x00B3AE58 */
  AudioMgr_HandlePRENMI  = 0x800C3E40;  /* ROM: 0x00B3AFE0 */
  AudioMgr_ThreadEntry   = 0x800C3E70;  /* ROM: 0x00B3B010 */
  AudioMgr_Unlock        = 0x800C3FC4;  /* ROM: 0x00B3B164 */
  AudioMgr_Init          = 0x800C3FEC;  /* ROM: 0x00B3B18C */

/* build/src/code/title_setup.o */
 /* .text */
  TitleSetup_InitImpl = 0x800C40B0;  /* ROM: 0x00B3B250 */
  TitleSetup_Destroy  = 0x800C40FC;  /* ROM: 0x00B3B29C */
  TitleSetup_Init     = 0x800C4104;  /* ROM: 0x00B3B2A4 */

/* build/src/code/game.o */
 /* .text */
  GameState_FaultPrint       = 0x800C4130;  /* ROM: 0x00B3B2D0 */
  GameState_SetFBFilter      = 0x800C41F0;  /* ROM: 0x00B3B390 */
  func_800C4344              = 0x800C4344;  /* ROM: 0x00B3B4E4 */
  GameState_DrawInputDisplay = 0x800C4558;  /* ROM: 0x00B3B6F8 */
  GameState_Draw             = 0x800C46EC;  /* ROM: 0x00B3B88C */
  GameState_SetFrameBuffer   = 0x800C48CC;  /* ROM: 0x00B3BA6C */
  func_800C49F4              = 0x800C49F4;  /* ROM: 0x00B3BB94 */
  GameState_ReqPadData       = 0x800C4A98;  /* ROM: 0x00B3BC38 */
  GameState_Update           = 0x800C4AC8;  /* ROM: 0x00B3BC68 */
  GameState_InitArena        = 0x800C4E80;  /* ROM: 0x00B3C020 */
  GameState_Realloc          = 0x800C4F20;  /* ROM: 0x00B3C0C0 */
  GameState_Init             = 0x800C5080;  /* ROM: 0x00B3C220 */
  GameState_Destroy          = 0x800C5360;  /* ROM: 0x00B3C500 */
  GameState_GetInit          = 0x800C546C;  /* ROM: 0x00B3C60C */
  GameState_GetSize          = 0x800C5474;  /* ROM: 0x00B3C614 */
  GameState_IsRunning        = 0x800C547C;  /* ROM: 0x00B3C61C */
  GameState_Alloc            = 0x800C5484;  /* ROM: 0x00B3C624 */
  GameState_AllocEndAlign16  = 0x800C5584;  /* ROM: 0x00B3C724 */
  GameState_GetArenaSize     = 0x800C55A4;  /* ROM: 0x00B3C744 */
 /* .bss */
  D_801664D0         = 0x801664D0;  /* ROM: 0x00BDD670 */
  D_801664F0         = 0x801664F0;  /* ROM: 0x00BDD690 */
  D_80166500         = 0x80166500;  /* ROM: 0x00BDD6A0 */
  sMonoColors        = 0x80166510;  /* ROM: 0x00BDD6B0 */
  sViMode            = 0x80166528;  /* ROM: 0x00BDD6C8 */
  sGameFaultClient   = 0x801665B0;  /* ROM: 0x00BDD750 */
  sLastButtonPressed = 0x801665C0;  /* ROM: 0x00BDD760 */

/* build/src/code/gamealloc.o */
 /* .text */
  GameAlloc_Log         = 0x800C55D0;  /* ROM: 0x00B3C770 */
  GameAlloc_MallocDebug = 0x800C563C;  /* ROM: 0x00B3C7DC */
  GameAlloc_Malloc      = 0x800C56B0;  /* ROM: 0x00B3C850 */
  GameAlloc_Free        = 0x800C5724;  /* ROM: 0x00B3C8C4 */
  GameAlloc_Cleanup     = 0x800C57CC;  /* ROM: 0x00B3C96C */
  GameAlloc_Init        = 0x800C5834;  /* ROM: 0x00B3C9D4 */

/* build/src/code/graph.o */
 /* .text */
  Graph_FaultClient      = 0x800C5850;  /* ROM: 0x00B3C9F0 */
  Graph_DisassembleUCode = 0x800C58BC;  /* ROM: 0x00B3CA5C */
  Graph_UCodeFaultClient = 0x800C5AB0;  /* ROM: 0x00B3CC50 */
  Graph_InitTHGA         = 0x800C5B14;  /* ROM: 0x00B3CCB4 */
  Graph_GetNextGameState = 0x800C5C2C;  /* ROM: 0x00B3CDCC */
  Graph_Init             = 0x800C5D08;  /* ROM: 0x00B3CEA8 */
  Graph_Destroy          = 0x800C5D94;  /* ROM: 0x00B3CF34 */
  Graph_TaskSet00        = 0x800C5DC0;  /* ROM: 0x00B3CF60 */
  Graph_Update           = 0x800C61D8;  /* ROM: 0x00B3D378 */
  Graph_ThreadEntry      = 0x800C6844;  /* ROM: 0x00B3D9E4 */
  Graph_Alloc            = 0x800C69CC;  /* ROM: 0x00B3DB6C */
  Graph_Alloc2           = 0x800C6A48;  /* ROM: 0x00B3DBE8 */
  Graph_OpenDisps        = 0x800C6AC4;  /* ROM: 0x00B3DC64 */
  Graph_CloseDisps       = 0x800C6B54;  /* ROM: 0x00B3DCF4 */
  Graph_GfxPlusOne       = 0x800C6C20;  /* ROM: 0x00B3DDC0 */
  Graph_BranchDlist      = 0x800C6C28;  /* ROM: 0x00B3DDC8 */
  Graph_DlistAlloc       = 0x800C6C3C;  /* ROM: 0x00B3DDDC */
 /* .data */
  D_8012D230 = 0x8012D230;  /* ROM: 0x00BA43D0 */
  D_8012D248 = 0x8012D248;  /* ROM: 0x00BA43E8 */
 /* .bss */
  sGraphUpdateTime       = 0x801665D0;  /* ROM: 0x00BDD770 */
  sGraphSetTaskTime      = 0x801665D8;  /* ROM: 0x00BDD778 */
  sGraphFaultClient      = 0x801665E0;  /* ROM: 0x00BDD780 */
  sGraphCfbInfos         = 0x801665F0;  /* ROM: 0x00BDD790 */
  sGraphUcodeFaultClient = 0x80166648;  /* ROM: 0x00BDD7E8 */

/* build/src/code/listalloc.o */
 /* .text */
  ListAlloc_Init    = 0x800C6C70;  /* ROM: 0x00B3DE10 */
  ListAlloc_Alloc   = 0x800C6C80;  /* ROM: 0x00B3DE20 */
  ListAlloc_Free    = 0x800C6CFC;  /* ROM: 0x00B3DE9C */
  ListAlloc_FreeAll = 0x800C6D84;  /* ROM: 0x00B3DF24 */

/* build/src/code/main.o */
 /* .text */
  Main_LogSystemHeap = 0x800C6DD0;  /* ROM: 0x00B3DF70 */
  Main               = 0x800C6E20;  /* ROM: 0x00B3DFC0 */
 /* .data */
  gScreenWidth    = 0x8012D270;  /* ROM: 0x00BA4410 */
  gScreenHeight   = 0x8012D274;  /* ROM: 0x00BA4414 */
  gSystemHeapSize = 0x8012D278;  /* ROM: 0x00BA4418 */
 /* .bss */
  gAppNmiBufferPtr = 0x80166660;  /* ROM: 0x00BDD800 */
  gSchedContext    = 0x80166668;  /* ROM: 0x00BDD808 */
  gPadMgr          = 0x801668C0;  /* ROM: 0x00BDDA60 */
  gIrqMgr          = 0x80166D28;  /* ROM: 0x00BDDEC8 */
  gSegments        = 0x80166FA8;  /* ROM: 0x00BDE148 */
  sGraphThread     = 0x80166FE8;  /* ROM: 0x00BDE188 */
  sGraphStack      = 0x80167198;  /* ROM: 0x00BDE338 */
  sSchedStack      = 0x80168998;  /* ROM: 0x00BDFB38 */
  sAudioStack      = 0x80168F98;  /* ROM: 0x00BE0138 */
  sPadMgrStack     = 0x80169798;  /* ROM: 0x00BE0938 */
  sIrqMgrStack     = 0x80169C98;  /* ROM: 0x00BE0E38 */
  sGraphStackInfo  = 0x8016A198;  /* ROM: 0x00BE1338 */
  sSchedStackInfo  = 0x8016A1B8;  /* ROM: 0x00BE1358 */
  sAudioStackInfo  = 0x8016A1D8;  /* ROM: 0x00BE1378 */
  sPadMgrStackInfo = 0x8016A1F8;  /* ROM: 0x00BE1398 */
  sIrqMgrStackInfo = 0x8016A218;  /* ROM: 0x00BE13B8 */
  gAudioMgr        = 0x8016A238;  /* ROM: 0x00BE13D8 */
  sSiIntMsgQ       = 0x8016A4D0;  /* ROM: 0x00BE1670 */
  sSiIntMsgBuf     = 0x8016A4E8;  /* ROM: 0x00BE1688 */

/* build/src/code/padmgr.o */
 /* .text */
  PadMgr_LockSerialMesgQueue   = 0x800C7250;  /* ROM: 0x00B3E3F0 */
  PadMgr_UnlockSerialMesgQueue = 0x800C72FC;  /* ROM: 0x00B3E49C */
  PadMgr_LockPadData           = 0x800C73BC;  /* ROM: 0x00B3E55C */
  PadMgr_UnlockPadData         = 0x800C73E4;  /* ROM: 0x00B3E584 */
  PadMgr_RumbleControl         = 0x800C740C;  /* ROM: 0x00B3E5AC */
  PadMgr_RumbleStop            = 0x800C7818;  /* ROM: 0x00B3E9B8 */
  PadMgr_RumbleReset           = 0x800C7928;  /* ROM: 0x00B3EAC8 */
  PadMgr_RumbleSetSingle       = 0x800C7934;  /* ROM: 0x00B3EAD4 */
  PadMgr_RumbleSet             = 0x800C7948;  /* ROM: 0x00B3EAE8 */
  PadMgr_ProcessInputs         = 0x800C7974;  /* ROM: 0x00B3EB14 */
  PadMgr_HandleRetraceMsg      = 0x800C7C14;  /* ROM: 0x00B3EDB4 */
  PadMgr_HandlePreNMI          = 0x800C7DD0;  /* ROM: 0x00B3EF70 */
  PadMgr_RequestPadData        = 0x800C7E08;  /* ROM: 0x00B3EFA8 */
  PadMgr_ThreadEntry           = 0x800C7F80;  /* ROM: 0x00B3F120 */
  PadMgr_Init                  = 0x800C819C;  /* ROM: 0x00B3F33C */
 /* .data */
  D_8012D280 = 0x8012D280;  /* ROM: 0x00BA4420 */

/* build/src/code/sched.o */
 /* .text */
  Sched_SwapFrameBuffer = 0x800C82A0;  /* ROM: 0x00B3F440 */
  func_800C84E4         = 0x800C84E4;  /* ROM: 0x00B3F684 */
  Sched_HandleReset     = 0x800C8534;  /* ROM: 0x00B3F6D4 */
  Sched_HandleStart     = 0x800C87CC;  /* ROM: 0x00B3F96C */
  Sched_QueueTask       = 0x800C87F0;  /* ROM: 0x00B3F990 */
  Sched_Yield           = 0x800C8910;  /* ROM: 0x00B3FAB0 */
  func_800C89D4         = 0x800C89D4;  /* ROM: 0x00B3FB74 */
  Sched_Schedule        = 0x800C8A94;  /* ROM: 0x00B3FC34 */
  func_800C8BC4         = 0x800C8BC4;  /* ROM: 0x00B3FD64 */
  Sched_IsComplete      = 0x800C8C40;  /* ROM: 0x00B3FDE0 */
  Sched_RunTask         = 0x800C8CB8;  /* ROM: 0x00B3FE58 */
  Sched_HandleEntry     = 0x800C8EDC;  /* ROM: 0x00B4007C */
  Sched_HandleRetrace   = 0x800C9018;  /* ROM: 0x00B401B8 */
  Sched_HandleRSPDone   = 0x800C91BC;  /* ROM: 0x00B4035C */
  Sched_HandleRDPDone   = 0x800C94B4;  /* ROM: 0x00B40654 */
  Sched_SendEntryMsg    = 0x800C95F8;  /* ROM: 0x00B40798 */
  Sched_ThreadEntry     = 0x800C9644;  /* ROM: 0x00B407E4 */
  Sched_Init            = 0x800C9874;  /* ROM: 0x00B40A14 */
 /* .data */
  sLogScheduler = 0x8012D290;  /* ROM: 0x00BA4430 */
 /* .bss */
  sRSPGFXStartTime   = 0x8016A500;  /* ROM: 0x00BE16A0 */
  sRSPAudioStartTime = 0x8016A508;  /* ROM: 0x00BE16A8 */
  sRSPOtherStartTime = 0x8016A510;  /* ROM: 0x00BE16B0 */
  sRDPStartTime      = 0x8016A518;  /* ROM: 0x00BE16B8 */

/* build/src/code/speed_meter.o */
 /* .text */
  SpeedMeter_InitImpl         = 0x800C9940;  /* ROM: 0x00B40AE0 */
  SpeedMeter_Init             = 0x800C9998;  /* ROM: 0x00B40B38 */
  SpeedMeter_Destroy          = 0x800C99BC;  /* ROM: 0x00B40B5C */
  SpeedMeter_DrawTimeEntries  = 0x800C99C4;  /* ROM: 0x00B40B64 */
  SpeedMeter_InitAllocEntry   = 0x800C9E08;  /* ROM: 0x00B40FA8 */
  SpeedMeter_DrawAllocEntry   = 0x800C9E44;  /* ROM: 0x00B40FE4 */
  SpeedMeter_DrawAllocEntries = 0x800CA104;  /* ROM: 0x00B412A4 */
 /* .data */
  sSpeedMeterTimeEntryArray = 0x8012D2A0;  /* ROM: 0x00BA4440 */
 /* .bss */
  D_8016A520              = 0x8016A520;  /* ROM: 0x00BE16C0 */
  D_8016A528              = 0x8016A528;  /* ROM: 0x00BE16C8 */
  D_8016A530              = 0x8016A530;  /* ROM: 0x00BE16D0 */
  D_8016A538              = 0x8016A538;  /* ROM: 0x00BE16D8 */
  D_8016A540              = 0x8016A540;  /* ROM: 0x00BE16E0 */
  D_8016A548              = 0x8016A548;  /* ROM: 0x00BE16E8 */
  D_8016A550              = 0x8016A550;  /* ROM: 0x00BE16F0 */
  D_8016A558              = 0x8016A558;  /* ROM: 0x00BE16F8 */
  gRSPAudioTotalTime      = 0x8016A560;  /* ROM: 0x00BE1700 */
  gRSPGFXTotalTime        = 0x8016A568;  /* ROM: 0x00BE1708 */
  gRSPOtherTotalTime      = 0x8016A570;  /* ROM: 0x00BE1710 */
  D_8016A578              = 0x8016A578;  /* ROM: 0x00BE1718 */
  gRDPTotalTime           = 0x8016A580;  /* ROM: 0x00BE1720 */
  sSpeedMeterTimeEntryPtr = 0x8016A588;  /* ROM: 0x00BE1728 */

/* build/src/code/sys_cfb.o */
 /* .text */
  SysCfb_Init     = 0x800CA3A0;  /* ROM: 0x00B41540 */
  SysCfb_Reset    = 0x800CA4EC;  /* ROM: 0x00B4168C */
  SysCfb_GetFbPtr = 0x800CA508;  /* ROM: 0x00B416A8 */
  SysCfb_GetFbEnd = 0x800CA530;  /* ROM: 0x00B416D0 */
 /* .bss */
  sSysCfbFbPtr = 0x8016A590;  /* ROM: 0x00BE1730 */
  sSysCfbEnd   = 0x8016A598;  /* ROM: 0x00BE1738 */

/* build/src/code/sys_math.o */
 /* .text */
  Math_FactorialF = 0x800CA540;  /* ROM: 0x00B416E0 */
  Math_Factorial  = 0x800CA63C;  /* ROM: 0x00B417DC */
  Math_PowF       = 0x800CA6FC;  /* ROM: 0x00B4189C */
  Math_SinF       = 0x800CA720;  /* ROM: 0x00B418C0 */
  Math_CosF       = 0x800CA774;  /* ROM: 0x00B41914 */
 /* .data */
  sFactorialTbl = 0x8012D2D0;  /* ROM: 0x00BA4470 */

/* build/src/code/sys_math3d.o */
 /* .text */
  Math3D_PlaneVsLineSegClosestPoint         = 0x800CA7D0;  /* ROM: 0x00B41970 */
  Math3D_LineVsLineClosestTwoPoints         = 0x800CA8E8;  /* ROM: 0x00B41A88 */
  Math3D_LineClosestToPoint                 = 0x800CAB94;  /* ROM: 0x00B41D34 */
  Math3D_FindPointOnPlaneIntersect          = 0x800CACAC;  /* ROM: 0x00B41E4C */
  Math3D_PlaneVsPlaneNewLine                = 0x800CAD08;  /* ROM: 0x00B41EA8 */
  Math3D_PlaneVsPlaneVsLineClosestPoint     = 0x800CAEE8;  /* ROM: 0x00B42088 */
  Math3D_PointOnInfiniteLine                = 0x800CAF5C;  /* ROM: 0x00B420FC */
  Math3D_LineSplitRatio                     = 0x800CAFA0;  /* ROM: 0x00B42140 */
  Math3D_Cos                                = 0x800CAFEC;  /* ROM: 0x00B4218C */
  Math3D_CosOut                             = 0x800CB010;  /* ROM: 0x00B421B0 */
  Math3D_Vec3fReflect                       = 0x800CB0C0;  /* ROM: 0x00B42260 */
  Math3D_PointInSquare2D                    = 0x800CB198;  /* ROM: 0x00B42338 */
  Math3D_CirSquareVsTriSquare               = 0x800CB1F8;  /* ROM: 0x00B42398 */
  Math3D_SphCubeVsTriCube                   = 0x800CB338;  /* ROM: 0x00B424D8 */
  Math3D_Dist1DSq                           = 0x800CB55C;  /* ROM: 0x00B426FC */
  Math3D_Dist1D                             = 0x800CB570;  /* ROM: 0x00B42710 */
  Math3D_Dist2DSq                           = 0x800CB594;  /* ROM: 0x00B42734 */
  Math3D_Dist2D                             = 0x800CB5D8;  /* ROM: 0x00B42778 */
  Math3D_Vec3fMagnitudeSq                   = 0x800CB600;  /* ROM: 0x00B427A0 */
  Math3D_Vec3fMagnitude                     = 0x800CB628;  /* ROM: 0x00B427C8 */
  Math3D_Vec3fDistSq                        = 0x800CB650;  /* ROM: 0x00B427F0 */
  Math3D_Vec3f_DistXYZ                      = 0x800CB678;  /* ROM: 0x00B42818 */
  Math3D_DistXYZ16toF                       = 0x800CB698;  /* ROM: 0x00B42838 */
  Math3D_Vec3fDiff_CrossZ                   = 0x800CB70C;  /* ROM: 0x00B428AC */
  Math3D_Vec3fDiff_CrossX                   = 0x800CB744;  /* ROM: 0x00B428E4 */
  Math3D_Vec3fDiff_CrossY                   = 0x800CB77C;  /* ROM: 0x00B4291C */
  Math3D_Vec3f_Cross                        = 0x800CB7B4;  /* ROM: 0x00B42954 */
  Math3D_SurfaceNorm                        = 0x800CB824;  /* ROM: 0x00B429C4 */
  Math3D_PointRelativeToCubeFaces           = 0x800CB88C;  /* ROM: 0x00B42A2C */
  Math3D_PointRelativeToCubeEdges           = 0x800CB934;  /* ROM: 0x00B42AD4 */
  Math3D_PointRelativeToCubeVertices        = 0x800CBAE4;  /* ROM: 0x00B42C84 */
  Math3D_LineVsCube                         = 0x800CBC60;  /* ROM: 0x00B42E00 */
  Math3D_LineVsCubeShort                    = 0x800CC6D8;  /* ROM: 0x00B43878 */
  Math3D_RotateXZPlane                      = 0x800CC824;  /* ROM: 0x00B439C4 */
  Math3D_DefPlane                           = 0x800CC8B4;  /* ROM: 0x00B43A54 */
  Math3D_Planef                             = 0x800CC9C8;  /* ROM: 0x00B43B68 */
  Math3D_Plane                              = 0x800CCA04;  /* ROM: 0x00B43BA4 */
  Math3D_UDistPlaneToPos                    = 0x800CCA3C;  /* ROM: 0x00B43BDC */
  Math3D_DistPlaneToPos                     = 0x800CCB0C;  /* ROM: 0x00B43CAC */
  Math3D_TriChkPointParaYImpl               = 0x800CCBE4;  /* ROM: 0x00B43D84 */
  Math3D_TriChkPointParaYDeterminate        = 0x800CCF00;  /* ROM: 0x00B440A0 */
  Math3D_TriChkPointParaYSlopedY            = 0x800CCF48;  /* ROM: 0x00B440E8 */
  Math3D_TriChkPointParaYIntersectDist      = 0x800CCF98;  /* ROM: 0x00B44138 */
  Math3D_TriChkPointParaYIntersectInsideTri = 0x800CD044;  /* ROM: 0x00B441E4 */
  Math3D_TriChkPointParaY                   = 0x800CD0F0;  /* ROM: 0x00B44290 */
  Math3D_TriChkLineSegParaYIntersect        = 0x800CD168;  /* ROM: 0x00B44308 */
  Math3D_TriChkPointParaYDist               = 0x800CD2D8;  /* ROM: 0x00B44478 */
  Math3D_TriChkPointParaXImpl               = 0x800CD34C;  /* ROM: 0x00B444EC */
  Math3D_TriChkPointParaXDeterminate        = 0x800CD668;  /* ROM: 0x00B44808 */
  Math3D_TriChkPointParaXIntersect          = 0x800CD6B0;  /* ROM: 0x00B44850 */
  Math3D_TriChkPointParaX                   = 0x800CD760;  /* ROM: 0x00B44900 */
  Math3D_TriChkLineSegParaXIntersect        = 0x800CD7D8;  /* ROM: 0x00B44978 */
  Math3D_TriChkPointParaXDist               = 0x800CD95C;  /* ROM: 0x00B44AFC */
  Math3D_TriChkPointParaZImpl               = 0x800CD9D0;  /* ROM: 0x00B44B70 */
  Math3D_TriChkPointParaZDeterminate        = 0x800CDD18;  /* ROM: 0x00B44EB8 */
  Math3D_TriChkPointParaZIntersect          = 0x800CDD60;  /* ROM: 0x00B44F00 */
  Math3D_TriChkPointParaZ                   = 0x800CDE10;  /* ROM: 0x00B44FB0 */
  Math3D_TriChkLineSegParaZIntersect        = 0x800CDE88;  /* ROM: 0x00B45028 */
  Math3D_TriChkLineSegParaZDist             = 0x800CE010;  /* ROM: 0x00B451B0 */
  Math3D_LineSegFindPlaneIntersect          = 0x800CE084;  /* ROM: 0x00B45224 */
  Math3D_LineSegVsPlane                     = 0x800CE15C;  /* ROM: 0x00B452FC */
  Math3D_TriLineIntersect                   = 0x800CE25C;  /* ROM: 0x00B453FC */
  Math3D_TriNorm                            = 0x800CE3C0;  /* ROM: 0x00B45560 */
  Math3D_PointInSph                         = 0x800CE46C;  /* ROM: 0x00B4560C */
  Math3D_PointDistToLine2D                  = 0x800CE4B8;  /* ROM: 0x00B45658 */
  Math3D_LineVsSph                          = 0x800CE600;  /* ROM: 0x00B457A0 */
  Math3D_GetSphVsTriIntersectPoint          = 0x800CE800;  /* ROM: 0x00B459A0 */
  Math3D_TriVsSphIntersect                  = 0x800CE934;  /* ROM: 0x00B45AD4 */
  Math3D_PointInCyl                         = 0x800CED50;  /* ROM: 0x00B45EF0 */
  Math3D_CylVsLineSeg                       = 0x800CEE0C;  /* ROM: 0x00B45FAC */
  Math3D_CylTriVsIntersect                  = 0x800CF7D0;  /* ROM: 0x00B46970 */
  Math3D_CylVsTri                           = 0x800CFC4C;  /* ROM: 0x00B46DEC */
  Math3D_SphVsSph                           = 0x800CFC6C;  /* ROM: 0x00B46E0C */
  Math3D_SphVsSphOverlap                    = 0x800CFC8C;  /* ROM: 0x00B46E2C */
  Math3D_SphVsSphOverlapCenter              = 0x800CFCAC;  /* ROM: 0x00B46E4C */
  Math3D_SphVsCylOverlapDist                = 0x800CFD84;  /* ROM: 0x00B46F24 */
  Math3D_SphVsCylOverlapCenterDist          = 0x800CFDA4;  /* ROM: 0x00B46F44 */
  Math3D_CylOutsideCyl                      = 0x800CFF14;  /* ROM: 0x00B470B4 */
  Math3D_CylOutsideCylDist                  = 0x800CFF34;  /* ROM: 0x00B470D4 */
  Math3D_TriVsTriIntersect                  = 0x800D0104;  /* ROM: 0x00B472A4 */
  Math3D_XZInSphere                         = 0x800D0480;  /* ROM: 0x00B47620 */
  Math3D_XYInSphere                         = 0x800D04F0;  /* ROM: 0x00B47690 */
  Math3D_YZInSphere                         = 0x800D0560;  /* ROM: 0x00B47700 */
  Math3D_DrawSphere                         = 0x800D05D0;  /* ROM: 0x00B47770 */
  Math3D_DrawCylinder                       = 0x800D05DC;  /* ROM: 0x00B4777C */

/* build/src/code/sys_math_atan.o */
 /* .text */
  Math_GetAtan2Tbl = 0x800D05F0;  /* ROM: 0x00B47790 */
  Math_Atan2S      = 0x800D0664;  /* ROM: 0x00B47804 */
  Math_Atan2F      = 0x800D07D4;  /* ROM: 0x00B47974 */

/* build/src/code/sys_matrix.o */
 /* .text */
  Matrix_Init                         = 0x800D0810;  /* ROM: 0x00B479B0 */
  Matrix_Push                         = 0x800D084C;  /* ROM: 0x00B479EC */
  Matrix_Pop                          = 0x800D0884;  /* ROM: 0x00B47A24 */
  Matrix_Get                          = 0x800D08D8;  /* ROM: 0x00B47A78 */
  Matrix_Put                          = 0x800D08FC;  /* ROM: 0x00B47A9C */
  Matrix_GetCurrent                   = 0x800D0924;  /* ROM: 0x00B47AC4 */
  Matrix_Mult                         = 0x800D0930;  /* ROM: 0x00B47AD0 */
  Matrix_Translate                    = 0x800D0984;  /* ROM: 0x00B47B24 */
  Matrix_Scale                        = 0x800D0A8C;  /* ROM: 0x00B47C2C */
  Matrix_RotateX                      = 0x800D0B70;  /* ROM: 0x00B47D10 */
  Matrix_RotateY                      = 0x800D0D20;  /* ROM: 0x00B47EC0 */
  Matrix_RotateZ                      = 0x800D0ED4;  /* ROM: 0x00B48074 */
  Matrix_RotateZYX                    = 0x800D1084;  /* ROM: 0x00B48224 */
  Matrix_TranslateRotateZYX           = 0x800D1340;  /* ROM: 0x00B484E0 */
  Matrix_SetTranslateRotateYXZ        = 0x800D1694;  /* ROM: 0x00B48834 */
  Matrix_MtxFToMtx                    = 0x800D1840;  /* ROM: 0x00B489E0 */
  Matrix_ToMtx                        = 0x800D1A54;  /* ROM: 0x00B48BF4 */
  Matrix_NewMtx                       = 0x800D1A88;  /* ROM: 0x00B48C28 */
  Matrix_MtxFToNewMtx                 = 0x800D1AC0;  /* ROM: 0x00B48C60 */
  Matrix_MultVec3f                    = 0x800D1AF4;  /* ROM: 0x00B48C94 */
  Matrix_MtxFCopy                     = 0x800D1BA8;  /* ROM: 0x00B48D48 */
  Matrix_MtxToMtxF                    = 0x800D1CAC;  /* ROM: 0x00B48E4C */
  Matrix_MultVec3fExt                 = 0x800D1EF4;  /* ROM: 0x00B49094 */
  Matrix_Transpose                    = 0x800D1FA0;  /* ROM: 0x00B49140 */
  Matrix_ReplaceRotation              = 0x800D1FD4;  /* ROM: 0x00B49174 */
  Matrix_MtxFToYXZRotS                = 0x800D20CC;  /* ROM: 0x00B4926C */
  Matrix_MtxFToZYXRotS                = 0x800D2264;  /* ROM: 0x00B49404 */
  Matrix_RotateAxis                   = 0x800D23FC;  /* ROM: 0x00B4959C */
  Matrix_CheckFloats                  = 0x800D285C;  /* ROM: 0x00B499FC */
  Matrix_SetTranslateUniformScaleMtxF = 0x800D2A34;  /* ROM: 0x00B49BD4 */
  Matrix_SetTranslateUniformScaleMtx  = 0x800D2A98;  /* ROM: 0x00B49C38 */
  Matrix_SetTranslateUniformScaleMtx2 = 0x800D2AE4;  /* ROM: 0x00B49C84 */
  Matrix_SetTranslateScaleMtx1        = 0x800D2BD0;  /* ROM: 0x00B49D70 */
  Matrix_SetTranslateScaleMtx2        = 0x800D2CEC;  /* ROM: 0x00B49E8C */
 /* .data */
  gMtxClear  = 0x8012DB20;  /* ROM: 0x00BA4CC0 */
  gMtxFClear = 0x8012DB60;  /* ROM: 0x00BA4D00 */
 /* .bss */
  sMatrixStack   = 0x8016A7C0;  /* ROM: 0x00BE1960 */
  sCurrentMatrix = 0x8016A7C4;  /* ROM: 0x00BE1964 */

/* build/src/code/sys_ucode.o */
 /* .text */
  SysUcode_GetUCodeBoot     = 0x800D2DF0;  /* ROM: 0x00B49F90 */
  SysUcode_GetUCodeBootSize = 0x800D2DFC;  /* ROM: 0x00B49F9C */
  SysUcode_GetUCode         = 0x800D2E14;  /* ROM: 0x00B49FB4 */
  SysUcode_GetUCodeData     = 0x800D2E20;  /* ROM: 0x00B49FC0 */
 /* .data */
  D_8012DBA0 = 0x8012DBA0;  /* ROM: 0x00BA4D40 */
  D_8012DBA4 = 0x8012DBA4;  /* ROM: 0x00BA4D44 */

/* build/src/code/code_800D2E30.o */
 /* .text */
  func_800D2E30 = 0x800D2E30;  /* ROM: 0x00B49FD0 */
  func_800D3140 = 0x800D3140;  /* ROM: 0x00B4A2E0 */
  func_800D3178 = 0x800D3178;  /* ROM: 0x00B4A318 */

/* build/src/code/code_800D31A0.o */
 /* .text */
  func_800D31A0 = 0x800D31A0;  /* ROM: 0x00B4A340 */
  func_800D31F0 = 0x800D31F0;  /* ROM: 0x00B4A390 */
  func_800D3210 = 0x800D3210;  /* ROM: 0x00B4A3B0 */
 /* .data */
  gIsCtrlr2Valid = 0x8012DBC0;  /* ROM: 0x00BA4D60 */

/* build/src/code/irqmgr.o */
 /* .text */
  IrqMgr_AddClient         = 0x800D3220;  /* ROM: 0x00B4A3C0 */
  IrqMgr_RemoveClient      = 0x800D3300;  /* ROM: 0x00B4A4A0 */
  IrqMgr_SendMesgToClients = 0x800D33CC;  /* ROM: 0x00B4A56C */
  IrqMgr_JamMesgToClients  = 0x800D3454;  /* ROM: 0x00B4A5F4 */
  IrqMgr_HandlePreNMI      = 0x800D34DC;  /* ROM: 0x00B4A67C */
  IrqMgr_CheckStacks       = 0x800D3574;  /* ROM: 0x00B4A714 */
  IrqMgr_HandlePRENMI450   = 0x800D35F8;  /* ROM: 0x00B4A798 */
  IrqMgr_HandlePRENMI480   = 0x800D3674;  /* ROM: 0x00B4A814 */
  IrqMgr_HandlePRENMI500   = 0x800D3718;  /* ROM: 0x00B4A8B8 */
  IrqMgr_HandleRetrace     = 0x800D3738;  /* ROM: 0x00B4A8D8 */
  IrqMgr_ThreadEntry       = 0x800D37F0;  /* ROM: 0x00B4A990 */
  IrqMgr_Init              = 0x800D3990;  /* ROM: 0x00B4AB30 */
 /* .data */
  gIrqMgrResetStatus  = 0x8012DBD0;  /* ROM: 0x00BA4D70 */
  sIrqMgrResetTime    = 0x8012DBD8;  /* ROM: 0x00BA4D78 */
  gIrqMgrRetraceTime  = 0x8012DBE0;  /* ROM: 0x00BA4D80 */
  sIrqMgrRetraceCount = 0x8012DBE8;  /* ROM: 0x00BA4D88 */

/* build/src/code/debug_malloc.o */
 /* .text */
  DebugArena_CheckPointer = 0x800D3A90;  /* ROM: 0x00B4AC30 */
  DebugArena_Malloc       = 0x800D3B10;  /* ROM: 0x00B4ACB0 */
  DebugArena_MallocDebug  = 0x800D3B60;  /* ROM: 0x00B4AD00 */
  DebugArena_MallocR      = 0x800D3BBC;  /* ROM: 0x00B4AD5C */
  DebugArena_MallocRDebug = 0x800D3C0C;  /* ROM: 0x00B4ADAC */
  DebugArena_Realloc      = 0x800D3C68;  /* ROM: 0x00B4AE08 */
  DebugArena_ReallocDebug = 0x800D3CC0;  /* ROM: 0x00B4AE60 */
  DebugArena_Free         = 0x800D3D2C;  /* ROM: 0x00B4AECC */
  DebugArena_FreeDebug    = 0x800D3D54;  /* ROM: 0x00B4AEF4 */
  DebugArena_Calloc       = 0x800D3D8C;  /* ROM: 0x00B4AF2C */
  DebugArena_Display      = 0x800D3DF8;  /* ROM: 0x00B4AF98 */
  DebugArena_GetSizes     = 0x800D3E28;  /* ROM: 0x00B4AFC8 */
  DebugArena_Check        = 0x800D3E60;  /* ROM: 0x00B4B000 */
  DebugArena_Init         = 0x800D3E84;  /* ROM: 0x00B4B024 */
  DebugArena_Cleanup      = 0x800D3EBC;  /* ROM: 0x00B4B05C */
  DebugArena_IsInitalized = 0x800D3EE8;  /* ROM: 0x00B4B088 */
 /* .data */
  gDebugArenaLogSeverity = 0x8012DBF0;  /* ROM: 0x00BA4D90 */
 /* .bss */
  sDebugArena = 0x8016A7D0;  /* ROM: 0x00BE1970 */

/* build/src/code/fault.o */
 /* .text */
  Fault_SleepImpl             = 0x800D3F20;  /* ROM: 0x00B4B0C0 */
  Fault_ClientProcessThread   = 0x800D3F90;  /* ROM: 0x00B4B130 */
  Fault_ClientRunTask         = 0x800D4004;  /* ROM: 0x00B4B1A4 */
  Fault_ProcessClient         = 0x800D4188;  /* ROM: 0x00B4B328 */
  Fault_AddClient             = 0x800D41DC;  /* ROM: 0x00B4B37C */
  Fault_RemoveClient          = 0x800D42C0;  /* ROM: 0x00B4B460 */
  Fault_AddAddrConvClient     = 0x800D43B8;  /* ROM: 0x00B4B558 */
  Fault_RemoveAddrConvClient  = 0x800D4490;  /* ROM: 0x00B4B630 */
  Fault_ConvertAddress        = 0x800D4588;  /* ROM: 0x00B4B728 */
  Fault_Sleep                 = 0x800D463C;  /* ROM: 0x00B4B7DC */
  Fault_PadCallback           = 0x800D4678;  /* ROM: 0x00B4B818 */
  Fault_UpdatePadImpl         = 0x800D46B4;  /* ROM: 0x00B4B854 */
  Fault_WaitForInputImpl      = 0x800D4700;  /* ROM: 0x00B4B8A0 */
  Fault_WaitForInput          = 0x800D484C;  /* ROM: 0x00B4B9EC */
  Fault_DrawRec               = 0x800D4898;  /* ROM: 0x00B4BA38 */
  Fault_FillScreenBlack       = 0x800D48F8;  /* ROM: 0x00B4BA98 */
  Fault_FillScreenRed         = 0x800D494C;  /* ROM: 0x00B4BAEC */
  Fault_DrawCornerRec         = 0x800D49A0;  /* ROM: 0x00B4BB40 */
  Fault_PrintFReg             = 0x800D49F4;  /* ROM: 0x00B4BB94 */
  Fault_LogFReg               = 0x800D4AA0;  /* ROM: 0x00B4BC40 */
  Fault_PrintFPCSR            = 0x800D4B50;  /* ROM: 0x00B4BCF0 */
  Fault_LogFPCSR              = 0x800D4BF4;  /* ROM: 0x00B4BD94 */
  Fault_PrintThreadContext    = 0x800D4C8C;  /* ROM: 0x00B4BE2C */
  Fault_LogThreadContext      = 0x800D4FA8;  /* ROM: 0x00B4C148 */
  Fault_FindFaultedThread     = 0x800D52A4;  /* ROM: 0x00B4C444 */
  Fault_Wait5Seconds          = 0x800D532C;  /* ROM: 0x00B4C4CC */
  Fault_WaitForButtonCombo    = 0x800D53BC;  /* ROM: 0x00B4C55C */
  Fault_DrawMemDumpContents   = 0x800D5688;  /* ROM: 0x00B4C828 */
  Fault_DrawMemDump           = 0x800D57F4;  /* ROM: 0x00B4C994 */
  Fault_WalkStack             = 0x800D59F8;  /* ROM: 0x00B4CB98 */
  Fault_DrawStackTrace        = 0x800D5B88;  /* ROM: 0x00B4CD28 */
  Fault_LogStackTrace         = 0x800D5D08;  /* ROM: 0x00B4CEA8 */
  Fault_ResumeThread          = 0x800D5E78;  /* ROM: 0x00B4D018 */
  Fault_DisplayFrameBuffer    = 0x800D5EF4;  /* ROM: 0x00B4D094 */
  Fault_ProcessClients        = 0x800D5FB4;  /* ROM: 0x00B4D154 */
  Fault_UpdatePad             = 0x800D6094;  /* ROM: 0x00B4D234 */
  Fault_ThreadEntry           = 0x800D60D0;  /* ROM: 0x00B4D270 */
  Fault_SetFrameBuffer        = 0x800D6430;  /* ROM: 0x00B4D5D0 */
  Fault_Init                  = 0x800D6484;  /* ROM: 0x00B4D624 */
  Fault_HungupFaultClient     = 0x800D65B8;  /* ROM: 0x00B4D758 */
  Fault_AddHungupAndCrashImpl = 0x800D66B4;  /* ROM: 0x00B4D854 */
  Fault_AddHungupAndCrash     = 0x800D670C;  /* ROM: 0x00B4D8AC */
 /* .data */
  sExceptionNames   = 0x8012DC00;  /* ROM: 0x00BA4DA0 */
  sFpExceptionNames = 0x8012DC48;  /* ROM: 0x00BA4DE8 */

/* build/src/code/fault_drawer.o */
 /* .text */
  FaultDrawer_SetOsSyncPrintfEnabled = 0x800D6770;  /* ROM: 0x00B4D910 */
  FaultDrawer_DrawRecImpl            = 0x800D6780;  /* ROM: 0x00B4D920 */
  FaultDrawer_DrawChar               = 0x800D689C;  /* ROM: 0x00B4DA3C */
  FaultDrawer_ColorToPrintColor      = 0x800D6A0C;  /* ROM: 0x00B4DBAC */
  FaultDrawer_UpdatePrintColor       = 0x800D6ABC;  /* ROM: 0x00B4DC5C */
  FaultDrawer_SetForeColor           = 0x800D6B5C;  /* ROM: 0x00B4DCFC */
  FaultDrawer_SetBackColor           = 0x800D6BA4;  /* ROM: 0x00B4DD44 */
  FaultDrawer_SetFontColor           = 0x800D6BEC;  /* ROM: 0x00B4DD8C */
  FaultDrawer_SetCharPad             = 0x800D6C34;  /* ROM: 0x00B4DDD4 */
  FaultDrawer_SetCursor              = 0x800D6C64;  /* ROM: 0x00B4DE04 */
  FaultDrawer_FillScreen             = 0x800D6D5C;  /* ROM: 0x00B4DEFC */
  FaultDrawer_PrintCallback          = 0x800D6DEC;  /* ROM: 0x00B4DF8C */
  FaultDrawer_VPrintf                = 0x800D6FF8;  /* ROM: 0x00B4E198 */
  FaultDrawer_Printf                 = 0x800D7048;  /* ROM: 0x00B4E1E8 */
  FaultDrawer_DrawText               = 0x800D7098;  /* ROM: 0x00B4E238 */
  FaultDrawer_SetDrawerFB            = 0x800D70E8;  /* ROM: 0x00B4E288 */
  FaultDrawer_SetInputCallback       = 0x800D7114;  /* ROM: 0x00B4E2B4 */
  FaultDrawer_WritebackFBDCache      = 0x800D7124;  /* ROM: 0x00B4E2C4 */
  FaultDrawer_Init                   = 0x800D7180;  /* ROM: 0x00B4E320 */
 /* .data */
  sFaultDrawerDefault = 0x8012DC60;  /* ROM: 0x00BA4E00 */
 /* .rodata */
  sFaultDrawerFont = 0x80147570;  /* ROM: 0x00BBE710 */
 /* .bss */
  sFaultDrawer = 0x8016B680;  /* ROM: 0x00BE2820 */
  D_8016B6C0   = 0x8016B6C0;  /* ROM: 0x00BE2860 */

/* build/src/code/ucode_disas.o */
 /* .text */
  UCodeDisas_TranslateAddr     = 0x800D7CD0;  /* ROM: 0x00B4EE70 */
  UCodeDisas_ParseCombineColor = 0x800D7D04;  /* ROM: 0x00B4EEA4 */
  UCodeDisas_ParseCombineAlpha = 0x800D7EA4;  /* ROM: 0x00B4F044 */
  UCodeDisas_Init              = 0x800D7F5C;  /* ROM: 0x00B4F0FC */
  UCodeDisas_Destroy           = 0x800D7FC4;  /* ROM: 0x00B4F164 */
  UCodeDisas_SetCurUCodeImpl   = 0x800D7FD0;  /* ROM: 0x00B4F170 */
  UCodeDisas_ParseGeometryMode = 0x800D805C;  /* ROM: 0x00B4F1FC */
  UCodeDisas_ParseRenderMode   = 0x800D8124;  /* ROM: 0x00B4F2C4 */
  UCodeDisas_PrintVertices     = 0x800D82A0;  /* ROM: 0x00B4F440 */
  UCodeDisas_Disassemble       = 0x800D8400;  /* ROM: 0x00B4F5A0 */
  UCodeDisas_RegisterUCode     = 0x800DAC80;  /* ROM: 0x00B51E20 */
  UCodeDisas_SetCurUCode       = 0x800DAC90;  /* ROM: 0x00B51E30 */
 /* .data */
  sUCodeDisasGeometryModes = 0x8012DCA0;  /* ROM: 0x00BA4E40 */
  sUCodeDisasMtxFlags      = 0x8012DCF8;  /* ROM: 0x00BA4E98 */

/* build/src/code/audio_synthesis.o */
 /* .text */
  AudioSynth_InitNextRingBuf            = 0x800DACC0;  /* ROM: 0x00B51E60 */
  func_800DB03C                         = 0x800DB03C;  /* ROM: 0x00B521DC */
  AudioSynth_Update                     = 0x800DB0C4;  /* ROM: 0x00B52264 */
  func_800DB2C0                         = 0x800DB2C0;  /* ROM: 0x00B52460 */
  AudioSynth_LoadRingBuffer1AtTemp      = 0x800DB330;  /* ROM: 0x00B524D0 */
  AudioSynth_SaveRingBuffer1AtTemp      = 0x800DB3D8;  /* ROM: 0x00B52578 */
  AudioSynth_LeakReverb                 = 0x800DB480;  /* ROM: 0x00B52620 */
  func_800DB4E4                         = 0x800DB4E4;  /* ROM: 0x00B52684 */
  func_800DB680                         = 0x800DB680;  /* ROM: 0x00B52820 */
  func_800DB828                         = 0x800DB828;  /* ROM: 0x00B529C8 */
  AudioSynth_FilterReverb               = 0x800DBA40;  /* ROM: 0x00B52BE0 */
  AudioSynth_MaybeMixRingBuffer1        = 0x800DBAE8;  /* ROM: 0x00B52C88 */
  func_800DBB94                         = 0x800DBB94;  /* ROM: 0x00B52D34 */
  AudioSynth_ClearBuffer                = 0x800DBB9C;  /* ROM: 0x00B52D3C */
  func_800DBBBC                         = 0x800DBBBC;  /* ROM: 0x00B52D5C */
  func_800DBBC4                         = 0x800DBBC4;  /* ROM: 0x00B52D64 */
  func_800DBBCC                         = 0x800DBBCC;  /* ROM: 0x00B52D6C */
  AudioSynth_Mix                        = 0x800DBBD4;  /* ROM: 0x00B52D74 */
  func_800DBC08                         = 0x800DBC08;  /* ROM: 0x00B52DA8 */
  func_800DBC10                         = 0x800DBC10;  /* ROM: 0x00B52DB0 */
  func_800DBC18                         = 0x800DBC18;  /* ROM: 0x00B52DB8 */
  AudioSynth_SetBuffer                  = 0x800DBC20;  /* ROM: 0x00B52DC0 */
  func_800DBC54                         = 0x800DBC54;  /* ROM: 0x00B52DF4 */
  func_800DBC5C                         = 0x800DBC5C;  /* ROM: 0x00B52DFC */
  AudioSynth_DMemMove                   = 0x800DBC64;  /* ROM: 0x00B52E04 */
  func_800DBC90                         = 0x800DBC90;  /* ROM: 0x00B52E30 */
  func_800DBC98                         = 0x800DBC98;  /* ROM: 0x00B52E38 */
  func_800DBCA0                         = 0x800DBCA0;  /* ROM: 0x00B52E40 */
  func_800DBCA8                         = 0x800DBCA8;  /* ROM: 0x00B52E48 */
  AudioSynth_InterL                     = 0x800DBCB0;  /* ROM: 0x00B52E50 */
  AudioSynth_EnvSetup1                  = 0x800DBCD4;  /* ROM: 0x00B52E74 */
  func_800DBD08                         = 0x800DBD08;  /* ROM: 0x00B52EA8 */
  AudioSynth_LoadBuffer                 = 0x800DBD10;  /* ROM: 0x00B52EB0 */
  AudioSynth_SaveBuffer                 = 0x800DBD38;  /* ROM: 0x00B52ED8 */
  AudioSynth_EnvSetup2                  = 0x800DBD60;  /* ROM: 0x00B52F00 */
  func_800DBD7C                         = 0x800DBD7C;  /* ROM: 0x00B52F1C */
  func_800DBD84                         = 0x800DBD84;  /* ROM: 0x00B52F24 */
  func_800DBD8C                         = 0x800DBD8C;  /* ROM: 0x00B52F2C */
  AudioSynth_S8Dec                      = 0x800DBD94;  /* ROM: 0x00B52F34 */
  AudioSynth_HiLoGain                   = 0x800DBDB0;  /* ROM: 0x00B52F50 */
  AudioSynth_UnkCmd19                   = 0x800DBDE4;  /* ROM: 0x00B52F84 */
  func_800DBE18                         = 0x800DBE18;  /* ROM: 0x00B52FB8 */
  func_800DBE20                         = 0x800DBE20;  /* ROM: 0x00B52FC0 */
  func_800DBE28                         = 0x800DBE28;  /* ROM: 0x00B52FC8 */
  func_800DBE30                         = 0x800DBE30;  /* ROM: 0x00B52FD0 */
  AudioSynth_UnkCmd3                    = 0x800DBE38;  /* ROM: 0x00B52FD8 */
  func_800DBE5C                         = 0x800DBE5C;  /* ROM: 0x00B52FFC */
  func_800DBE64                         = 0x800DBE64;  /* ROM: 0x00B53004 */
  func_800DBE6C                         = 0x800DBE6C;  /* ROM: 0x00B5300C */
  AudioSynth_LoadFilter                 = 0x800DBE74;  /* ROM: 0x00B53014 */
  AudioSynth_LoadFilterCount            = 0x800DBE98;  /* ROM: 0x00B53038 */
  AudioSynth_LoadRingBuffer1            = 0x800DBEB0;  /* ROM: 0x00B53050 */
  AudioSynth_LoadRingBuffer2            = 0x800DBF5C;  /* ROM: 0x00B530FC */
  AudioSynth_LoadRingBufferPart         = 0x800DC008;  /* ROM: 0x00B531A8 */
  AudioSynth_SaveRingBufferPart         = 0x800DC074;  /* ROM: 0x00B53214 */
  AudioSynth_SaveBufferOffset           = 0x800DC0E0;  /* ROM: 0x00B53280 */
  AudioSynth_MaybeLoadRingBuffer2       = 0x800DC124;  /* ROM: 0x00B532C4 */
  func_800DC164                         = 0x800DC164;  /* ROM: 0x00B53304 */
  AudioSynth_SaveReverbSamples          = 0x800DC1D8;  /* ROM: 0x00B53378 */
  AudioSynth_SaveRingBuffer2            = 0x800DC2DC;  /* ROM: 0x00B5347C */
  AudioSynth_DoOneAudioUpdate           = 0x800DC384;  /* ROM: 0x00B53524 */
  AudioSynth_ProcessNote                = 0x800DC910;  /* ROM: 0x00B53AB0 */
  AudioSynth_FinalResample              = 0x800DD62C;  /* ROM: 0x00B547CC */
  AudioSynth_ProcessEnvelope            = 0x800DD6CC;  /* ROM: 0x00B5486C */
  AudioSynth_LoadWaveSamples            = 0x800DD9F4;  /* ROM: 0x00B54B94 */
  AudioSynth_NoteApplyHeadsetPanEffects = 0x800DDB64;  /* ROM: 0x00B54D04 */
 /* .data */
  D_801304A0 = 0x801304A0;  /* ROM: 0x00BA7640 */
  D_801304A4 = 0x801304A4;  /* ROM: 0x00BA7644 */
  D_801304A8 = 0x801304A8;  /* ROM: 0x00BA7648 */
  D_801304AC = 0x801304AC;  /* ROM: 0x00BA764C */
  D_801304B0 = 0x801304B0;  /* ROM: 0x00BA7650 */
  D_801304C0 = 0x801304C0;  /* ROM: 0x00BA7660 */

/* build/src/code/audio_heap.o */
 /* .text */
  func_800DDE20                             = 0x800DDE20;  /* ROM: 0x00B54FC0 */
  func_800DDE3C                             = 0x800DDE3C;  /* ROM: 0x00B54FDC */
  AudioHeap_ResetLoadStatus                 = 0x800DDF80;  /* ROM: 0x00B55120 */
  AudioHeap_DiscardFont                     = 0x800DE048;  /* ROM: 0x00B551E8 */
  AudioHeap_ReleaseNotesForFont             = 0x800DE12C;  /* ROM: 0x00B552CC */
  AudioHeap_DiscardSequence                 = 0x800DE1B4;  /* ROM: 0x00B55354 */
  AudioHeap_WritebackDCache                 = 0x800DE238;  /* ROM: 0x00B553D8 */
  AudioHeap_AllocZeroedAttemptExternal      = 0x800DE258;  /* ROM: 0x00B553F8 */
  AudioHeap_AllocAttemptExternal            = 0x800DE2B0;  /* ROM: 0x00B55450 */
  AudioHeap_AllocDmaMemory                  = 0x800DE308;  /* ROM: 0x00B554A8 */
  AudioHeap_AllocDmaMemoryZeroed            = 0x800DE344;  /* ROM: 0x00B554E4 */
  AudioHeap_AllocZeroed                     = 0x800DE380;  /* ROM: 0x00B55520 */
  AudioHeap_Alloc                           = 0x800DE3DC;  /* ROM: 0x00B5557C */
  AudioHeap_AllocPoolInit                   = 0x800DE434;  /* ROM: 0x00B555D4 */
  AudioHeap_PersistentCacheClear            = 0x800DE45C;  /* ROM: 0x00B555FC */
  AudioHeap_TemporaryCacheClear             = 0x800DE470;  /* ROM: 0x00B55610 */
  AudioHeap_ResetPool                       = 0x800DE4A0;  /* ROM: 0x00B55640 */
  AudioHeap_PopCache                        = 0x800DE4B0;  /* ROM: 0x00B55650 */
  AudioHeap_InitMainPools                   = 0x800DE5F0;  /* ROM: 0x00B55790 */
  AudioHeap_SessionPoolsInit                = 0x800DE650;  /* ROM: 0x00B557F0 */
  AudioHeap_CachePoolInit                   = 0x800DE6D4;  /* ROM: 0x00B55874 */
  AudioHeap_PersistentCachesInit            = 0x800DE758;  /* ROM: 0x00B558F8 */
  AudioHeap_TemporaryCachesInit             = 0x800DE81C;  /* ROM: 0x00B559BC */
  AudioHeap_AllocCached                     = 0x800DE8E0;  /* ROM: 0x00B55A80 */
  AudioHeap_SearchCaches                    = 0x800DF074;  /* ROM: 0x00B56214 */
  AudioHeap_SearchRegularCaches             = 0x800DF0CC;  /* ROM: 0x00B5626C */
  func_800DF1D8                             = 0x800DF1D8;  /* ROM: 0x00B56378 */
  AudioHeap_ClearFilter                     = 0x800DF5AC;  /* ROM: 0x00B5674C */
  AudioHeap_LoadLowPassFilter               = 0x800DF5DC;  /* ROM: 0x00B5677C */
  AudioHeap_LoadHighPassFilter              = 0x800DF630;  /* ROM: 0x00B567D0 */
  AudioHeap_LoadFilter                      = 0x800DF688;  /* ROM: 0x00B56828 */
  AudioHeap_UpdateReverb                    = 0x800DF7BC;  /* ROM: 0x00B5695C */
  AudioHeap_UpdateReverbs                   = 0x800DF7C4;  /* ROM: 0x00B56964 */
  AudioHeap_ClearAiBuffers                  = 0x800DF888;  /* ROM: 0x00B56A28 */
  AudioHeap_ResetStep                       = 0x800DF8F4;  /* ROM: 0x00B56A94 */
  AudioHeap_Init                            = 0x800DFBF8;  /* ROM: 0x00B56D98 */
  AudioHeap_SearchPermanentCache            = 0x800E04E8;  /* ROM: 0x00B57688 */
  AudioHeap_AllocPermanent                  = 0x800E0540;  /* ROM: 0x00B576E0 */
  AudioHeap_AllocSampleCache                = 0x800E05C4;  /* ROM: 0x00B57764 */
  AudioHeap_InitSampleCaches                = 0x800E0634;  /* ROM: 0x00B577D4 */
  AudioHeap_AllocTemporarySampleCacheEntry  = 0x800E06CC;  /* ROM: 0x00B5786C */
  AudioHeap_UnapplySampleCacheForFont       = 0x800E0964;  /* ROM: 0x00B57B04 */
  AudioHeap_DiscardSampleCacheEntry         = 0x800E0AD8;  /* ROM: 0x00B57C78 */
  AudioHeap_UnapplySampleCache              = 0x800E0BB4;  /* ROM: 0x00B57D54 */
  AudioHeap_AllocPersistentSampleCacheEntry = 0x800E0BF8;  /* ROM: 0x00B57D98 */
  AudioHeap_DiscardSampleCacheForFont       = 0x800E0C80;  /* ROM: 0x00B57E20 */
  AudioHeap_DiscardSampleCaches             = 0x800E0CBC;  /* ROM: 0x00B57E5C */
  AudioHeap_ChangeStorage                   = 0x800E0E0C;  /* ROM: 0x00B57FAC */
  AudioHeap_DiscardSampleBank               = 0x800E0E6C;  /* ROM: 0x00B5800C */
  AudioHeap_ApplySampleBankCache            = 0x800E0E90;  /* ROM: 0x00B58030 */
  AudioHeap_ApplySampleBankCacheInternal    = 0x800E0EB4;  /* ROM: 0x00B58054 */
  AudioHeap_DiscardSampleBanks              = 0x800E1148;  /* ROM: 0x00B582E8 */

/* build/src/code/audio_load.o */
 /* .text */
  AudioLoad_DecreaseSampleDmaTtls                 = 0x800E11F0;  /* ROM: 0x00B58390 */
  AudioLoad_DmaSampleData                         = 0x800E12DC;  /* ROM: 0x00B5847C */
  AudioLoad_InitSampleDmaBuffers                  = 0x800E1618;  /* ROM: 0x00B587B8 */
  AudioLoad_IsFontLoadComplete                    = 0x800E18B0;  /* ROM: 0x00B58A50 */
  AudioLoad_IsSeqLoadComplete                     = 0x800E1928;  /* ROM: 0x00B58AC8 */
  AudioLoad_IsSampleLoadComplete                  = 0x800E19A0;  /* ROM: 0x00B58B40 */
  AudioLoad_SetFontLoadStatus                     = 0x800E1A18;  /* ROM: 0x00B58BB8 */
  AudioLoad_SetSeqLoadStatus                      = 0x800E1A48;  /* ROM: 0x00B58BE8 */
  AudioLoad_SetSampleFontLoadStatusAndApplyCaches = 0x800E1A78;  /* ROM: 0x00B58C18 */
  AudioLoad_SetSampleFontLoadStatus               = 0x800E1AD8;  /* ROM: 0x00B58C78 */
  AudioLoad_InitTable                             = 0x800E1B08;  /* ROM: 0x00B58CA8 */
  AudioLoad_SyncLoadSeqFonts                      = 0x800E1B68;  /* ROM: 0x00B58D08 */
  AudioLoad_SyncLoadSeqParts                      = 0x800E1C18;  /* ROM: 0x00B58DB8 */
  AudioLoad_SyncLoadSample                        = 0x800E1C78;  /* ROM: 0x00B58E18 */
  AudioLoad_SyncLoadInstrument                    = 0x800E1D64;  /* ROM: 0x00B58F04 */
  AudioLoad_AsyncLoad                             = 0x800E1E34;  /* ROM: 0x00B58FD4 */
  AudioLoad_AsyncLoadSeq                          = 0x800E1E6C;  /* ROM: 0x00B5900C */
  AudioLoad_AsyncLoadSampleBank                   = 0x800E1EB0;  /* ROM: 0x00B59050 */
  AudioLoad_AsyncLoadFont                         = 0x800E1EF4;  /* ROM: 0x00B59094 */
  AudioLoad_GetFontsForSequence                   = 0x800E1F38;  /* ROM: 0x00B590D8 */
  AudioLoad_DiscardSeqFonts                       = 0x800E1F7C;  /* ROM: 0x00B5911C */
  AudioLoad_DiscardFont                           = 0x800E202C;  /* ROM: 0x00B591CC */
  AudioLoad_SyncInitSeqPlayer                     = 0x800E20D4;  /* ROM: 0x00B59274 */
  AudioLoad_SyncInitSeqPlayerSkipTicks            = 0x800E2124;  /* ROM: 0x00B592C4 */
  AudioLoad_SyncInitSeqPlayerInternal             = 0x800E217C;  /* ROM: 0x00B5931C */
  AudioLoad_SyncLoadSeq                           = 0x800E22C4;  /* ROM: 0x00B59464 */
  AudioLoad_GetSampleBank                         = 0x800E2318;  /* ROM: 0x00B594B8 */
  AudioLoad_TrySyncLoadSampleBank                 = 0x800E2338;  /* ROM: 0x00B594D8 */
  AudioLoad_SyncLoadFont                          = 0x800E2454;  /* ROM: 0x00B595F4 */
  AudioLoad_SyncLoad                              = 0x800E2558;  /* ROM: 0x00B596F8 */
  AudioLoad_GetRealTableIndex                     = 0x800E2768;  /* ROM: 0x00B59908 */
  AudioLoad_SearchCaches                          = 0x800E27A4;  /* ROM: 0x00B59944 */
  AudioLoad_GetLoadTable                          = 0x800E27F8;  /* ROM: 0x00B59998 */
  AudioLoad_RelocateFont                          = 0x800E283C;  /* ROM: 0x00B599DC */
  AudioLoad_SyncDma                               = 0x800E2AA8;  /* ROM: 0x00B59C48 */
  AudioLoad_SyncDmaUnkMedium                      = 0x800E2BCC;  /* ROM: 0x00B59D6C */
  AudioLoad_Dma                                   = 0x800E2BE0;  /* ROM: 0x00B59D80 */
  AudioLoad_Unused1                               = 0x800E2CB8;  /* ROM: 0x00B59E58 */
  AudioLoad_SyncLoadSimple                        = 0x800E2CC0;  /* ROM: 0x00B59E60 */
  AudioLoad_AsyncLoadInner                        = 0x800E2CE0;  /* ROM: 0x00B59E80 */
  AudioLoad_ProcessLoads                          = 0x800E2FEC;  /* ROM: 0x00B5A18C */
  AudioLoad_SetDmaHandler                         = 0x800E301C;  /* ROM: 0x00B5A1BC */
  AudioLoad_SetUnusedHandler                      = 0x800E3028;  /* ROM: 0x00B5A1C8 */
  AudioLoad_InitSoundFontMeta                     = 0x800E3034;  /* ROM: 0x00B5A1D4 */
  AudioLoad_Init                                  = 0x800E3094;  /* ROM: 0x00B5A234 */
  AudioLoad_InitSlowLoads                         = 0x800E3400;  /* ROM: 0x00B5A5A0 */
  AudioLoad_SlowLoadSample                        = 0x800E3414;  /* ROM: 0x00B5A5B4 */
  AudioLoad_GetFontSample                         = 0x800E35E0;  /* ROM: 0x00B5A780 */
  AudioLoad_Unused2                               = 0x800E3670;  /* ROM: 0x00B5A810 */
  AudioLoad_FinishSlowLoad                        = 0x800E3678;  /* ROM: 0x00B5A818 */
  AudioLoad_ProcessSlowLoads                      = 0x800E36EC;  /* ROM: 0x00B5A88C */
  AudioLoad_DmaSlowCopy                           = 0x800E3874;  /* ROM: 0x00B5AA14 */
  AudioLoad_DmaSlowCopyUnkMedium                  = 0x800E38F8;  /* ROM: 0x00B5AA98 */
  AudioLoad_SlowLoadSeq                           = 0x800E390C;  /* ROM: 0x00B5AAAC */
  AudioLoad_InitAsyncLoads                        = 0x800E3A14;  /* ROM: 0x00B5ABB4 */
  AudioLoad_StartAsyncLoadUnkMedium               = 0x800E3A44;  /* ROM: 0x00B5ABE4 */
  AudioLoad_StartAsyncLoad                        = 0x800E3AC8;  /* ROM: 0x00B5AC68 */
  AudioLoad_ProcessAsyncLoads                     = 0x800E3BEC;  /* ROM: 0x00B5AD8C */
  AudioLoad_ProcessAsyncLoadUnkMedium             = 0x800E3D10;  /* ROM: 0x00B5AEB0 */
  AudioLoad_FinishAsyncLoad                       = 0x800E3D1C;  /* ROM: 0x00B5AEBC */
  AudioLoad_ProcessAsyncLoad                      = 0x800E3E58;  /* ROM: 0x00B5AFF8 */
  AudioLoad_AsyncDma                              = 0x800E3FB4;  /* ROM: 0x00B5B154 */
  AudioLoad_AsyncDmaUnkMedium                     = 0x800E4044;  /* ROM: 0x00B5B1E4 */
  AudioLoad_RelocateSample                        = 0x800E4058;  /* ROM: 0x00B5B1F8 */
  AudioLoad_RelocateFontAndPreloadSamples         = 0x800E4198;  /* ROM: 0x00B5B338 */
  AudioLoad_ProcessSamplePreloads                 = 0x800E4590;  /* ROM: 0x00B5B730 */
  AudioLoad_AddToSampleSet                        = 0x800E4744;  /* ROM: 0x00B5B8E4 */
  AudioLoad_GetSamplesForFont                     = 0x800E478C;  /* ROM: 0x00B5B92C */
  AudioLoad_AddUsedSample                         = 0x800E48C0;  /* ROM: 0x00B5BA60 */
  AudioLoad_PreloadSamplesForFont                 = 0x800E4918;  /* ROM: 0x00B5BAB8 */
  AudioLoad_LoadPermanentSamples                  = 0x800E4D94;  /* ROM: 0x00B5BF34 */
  AudioLoad_Unused3                               = 0x800E4ED4;  /* ROM: 0x00B5C074 */
  AudioLoad_Unused4                               = 0x800E4EDC;  /* ROM: 0x00B5C07C */
  AudioLoad_Unused5                               = 0x800E4EE4;  /* ROM: 0x00B5C084 */
  AudioLoad_ScriptLoad                            = 0x800E4EEC;  /* ROM: 0x00B5C08C */
  AudioLoad_ProcessScriptLoads                    = 0x800E4F58;  /* ROM: 0x00B5C0F8 */
  AudioLoad_InitScriptLoads                       = 0x800E4FB0;  /* ROM: 0x00B5C150 */
 /* .data */
  sDmaHandler             = 0x801304D0;  /* ROM: 0x00BA7670 */
  sUnusedHandler          = 0x801304D4;  /* ROM: 0x00BA7674 */
  gAudioContextInitalized = 0x801304D8;  /* ROM: 0x00BA7678 */
 /* .bss */
  sScriptLoadQueue        = 0x8016B6E0;  /* ROM: 0x00BE2880 */
  sScriptLoadMesgBuf      = 0x8016B6F8;  /* ROM: 0x00BE2898 */
  sScriptLoadDonePointers = 0x8016B738;  /* ROM: 0x00BE28D8 */
  sAudioLoadPad1          = 0x8016B778;  /* ROM: 0x00BE2918 */
  D_8016B780              = 0x8016B780;  /* ROM: 0x00BE2920 */
  sAudioLoadPad2          = 0x8016B788;  /* ROM: 0x00BE2928 */

/* build/src/code/code_800E4FE0.o */
 /* .text */
  func_800E4FE0                = 0x800E4FE0;  /* ROM: 0x00B5C180 */
  func_800E5000                = 0x800E5000;  /* ROM: 0x00B5C1A0 */
  func_800E5584                = 0x800E5584;  /* ROM: 0x00B5C724 */
  func_800E5958                = 0x800E5958;  /* ROM: 0x00B5CAF8 */
  func_800E59AC                = 0x800E59AC;  /* ROM: 0x00B5CB4C */
  Audio_InitMesgQueuesInternal = 0x800E59F4;  /* ROM: 0x00B5CB94 */
  Audio_QueueCmd               = 0x800E5A8C;  /* ROM: 0x00B5CC2C */
  Audio_QueueCmdF32            = 0x800E5AD8;  /* ROM: 0x00B5CC78 */
  Audio_QueueCmdS32            = 0x800E5AFC;  /* ROM: 0x00B5CC9C */
  Audio_QueueCmdS8             = 0x800E5B20;  /* ROM: 0x00B5CCC0 */
  Audio_QueueCmdU16            = 0x800E5B50;  /* ROM: 0x00B5CCF0 */
  Audio_ScheduleProcessCmds    = 0x800E5B80;  /* ROM: 0x00B5CD20 */
  Audio_ResetCmdQueue          = 0x800E5C10;  /* ROM: 0x00B5CDB0 */
  Audio_ProcessCmd             = 0x800E5C28;  /* ROM: 0x00B5CDC8 */
  Audio_ProcessCmds            = 0x800E5D6C;  /* ROM: 0x00B5CF0C */
  func_800E5E20                = 0x800E5E20;  /* ROM: 0x00B5CFC0 */
  func_800E5E84                = 0x800E5E84;  /* ROM: 0x00B5D024 */
  func_800E5EA4                = 0x800E5EA4;  /* ROM: 0x00B5D044 */
  func_800E5EDC                = 0x800E5EDC;  /* ROM: 0x00B5D07C */
  func_800E5F34                = 0x800E5F34;  /* ROM: 0x00B5D0D4 */
  func_800E5F88                = 0x800E5F88;  /* ROM: 0x00B5D128 */
  Audio_PreNMIInternal         = 0x800E6024;  /* ROM: 0x00B5D1C4 */
  func_800E6070                = 0x800E6070;  /* ROM: 0x00B5D210 */
  func_800E60C4                = 0x800E60C4;  /* ROM: 0x00B5D264 */
  Audio_InitExternalPool       = 0x800E60EC;  /* ROM: 0x00B5D28C */
  Audio_DestroyExternalPool    = 0x800E611C;  /* ROM: 0x00B5D2BC */
  func_800E6128                = 0x800E6128;  /* ROM: 0x00B5D2C8 */
  func_800E6300                = 0x800E6300;  /* ROM: 0x00B5D4A0 */
  func_800E64B0                = 0x800E64B0;  /* ROM: 0x00B5D650 */
  func_800E64F8                = 0x800E64F8;  /* ROM: 0x00B5D698 */
  func_800E651C                = 0x800E651C;  /* ROM: 0x00B5D6BC */
  Audio_WaitForAudioTask       = 0x800E6550;  /* ROM: 0x00B5D6F0 */
  func_800E6590                = 0x800E6590;  /* ROM: 0x00B5D730 */
  func_800E6680                = 0x800E6680;  /* ROM: 0x00B5D820 */
  func_800E66A0                = 0x800E66A0;  /* ROM: 0x00B5D840 */
  func_800E66C0                = 0x800E66C0;  /* ROM: 0x00B5D860 */
  Audio_NextRandom             = 0x800E67C0;  /* ROM: 0x00B5D960 */
  Audio_InitMesgQueues         = 0x800E6818;  /* ROM: 0x00B5D9B8 */

/* build/src/code/code_800E6840.o */
 /* .text */
  Audio_InvalDCache     = 0x800E6840;  /* ROM: 0x00B5D9E0 */
  Audio_WritebackDCache = 0x800E6880;  /* ROM: 0x00B5DA20 */

/* build/src/libultra/io/aisetnextbuf.o */
 /* .text */
  osAiSetNextBuffer = 0x800E68C0;  /* ROM: 0x00B5DA60 */

/* build/src/code/audio_playback.o */
 /* .text */
  Audio_InitNoteSub                 = 0x800E6940;  /* ROM: 0x00B5DAE0 */
  Audio_NoteSetResamplingRate       = 0x800E6DB8;  /* ROM: 0x00B5DF58 */
  Audio_NoteInit                    = 0x800E6E68;  /* ROM: 0x00B5E008 */
  Audio_NoteDisable                 = 0x800E6F28;  /* ROM: 0x00B5E0C8 */
  Audio_ProcessNotes                = 0x800E6F8C;  /* ROM: 0x00B5E12C */
  Audio_InstrumentGetSound          = 0x800E745C;  /* ROM: 0x00B5E5FC */
  Audio_GetInstrumentInner          = 0x800E7498;  /* ROM: 0x00B5E638 */
  Audio_GetDrum                     = 0x800E756C;  /* ROM: 0x00B5E70C */
  Audio_GetSfx                      = 0x800E7650;  /* ROM: 0x00B5E7F0 */
  Audio_SetFontInstrument           = 0x800E7744;  /* ROM: 0x00B5E8E4 */
  Audio_SeqLayerDecayRelease        = 0x800E7888;  /* ROM: 0x00B5EA28 */
  Audio_SeqLayerNoteDecay           = 0x800E7B60;  /* ROM: 0x00B5ED00 */
  Audio_SeqLayerNoteRelease         = 0x800E7B80;  /* ROM: 0x00B5ED20 */
  Audio_BuildSyntheticWave          = 0x800E7BA0;  /* ROM: 0x00B5ED40 */
  Audio_InitSyntheticWave           = 0x800E7CA4;  /* ROM: 0x00B5EE44 */
  Audio_InitNoteList                = 0x800E7CFC;  /* ROM: 0x00B5EE9C */
  Audio_InitNoteLists               = 0x800E7D0C;  /* ROM: 0x00B5EEAC */
  Audio_InitNoteFreeList            = 0x800E7D5C;  /* ROM: 0x00B5EEFC */
  Audio_NotePoolClear               = 0x800E7E00;  /* ROM: 0x00B5EFA0 */
  Audio_NotePoolFill                = 0x800E7F60;  /* ROM: 0x00B5F100 */
  Audio_AudioListPushFront          = 0x800E809C;  /* ROM: 0x00B5F23C */
  Audio_AudioListRemove             = 0x800E80DC;  /* ROM: 0x00B5F27C */
  Audio_FindNodeWithPrioLessThan    = 0x800E8108;  /* ROM: 0x00B5F2A8 */
  Audio_NoteInitForLayer            = 0x800E8188;  /* ROM: 0x00B5F328 */
  func_800E82C0                     = 0x800E82C0;  /* ROM: 0x00B5F460 */
  Audio_NoteReleaseAndTakeOwnership = 0x800E82F4;  /* ROM: 0x00B5F494 */
  Audio_AllocNoteFromDisabled       = 0x800E8320;  /* ROM: 0x00B5F4C0 */
  Audio_AllocNoteFromDecaying       = 0x800E836C;  /* ROM: 0x00B5F50C */
  Audio_AllocNoteFromActive         = 0x800E83BC;  /* ROM: 0x00B5F55C */
  Audio_AllocNote                   = 0x800E84B4;  /* ROM: 0x00B5F654 */
  Audio_NoteInitAll                 = 0x800E8788;  /* ROM: 0x00B5F928 */

/* build/src/code/audio_effects.o */
 /* .text */
  Audio_SequenceChannelProcessSound = 0x800E88C0;  /* ROM: 0x00B5FA60 */
  Audio_SequencePlayerProcessSound  = 0x800E8A88;  /* ROM: 0x00B5FC28 */
  Audio_GetPortamentoFreqScale      = 0x800E8BD4;  /* ROM: 0x00B5FD74 */
  Audio_GetVibratoPitchChange       = 0x800E8C30;  /* ROM: 0x00B5FDD0 */
  Audio_GetVibratoFreqScale         = 0x800E8C68;  /* ROM: 0x00B5FE08 */
  Audio_NoteVibratoUpdate           = 0x800E8EA4;  /* ROM: 0x00B60044 */
  Audio_NoteVibratoInit             = 0x800E8F00;  /* ROM: 0x00B600A0 */
  Audio_NotePortamentoInit          = 0x800E8FB8;  /* ROM: 0x00B60158 */
  Audio_AdsrInit                    = 0x800E8FE4;  /* ROM: 0x00B60184 */
  Audio_AdsrUpdate                  = 0x800E9004;  /* ROM: 0x00B601A4 */

/* build/src/code/audio_seqplayer.o */
 /* .text */
  AudioSeq_GetScriptControlFlowArgument    = 0x800E9340;  /* ROM: 0x00B604E0 */
  AudioSeq_HandleScriptFlowControl         = 0x800E93A8;  /* ROM: 0x00B60548 */
  AudioSeq_InitSequenceChannel             = 0x800E9584;  /* ROM: 0x00B60724 */
  AudioSeq_SeqChannelSetLayer              = 0x800E96D8;  /* ROM: 0x00B60878 */
  AudioSeq_SeqLayerDisable                 = 0x800E97FC;  /* ROM: 0x00B6099C */
  AudioSeq_SeqLayerFree                    = 0x800E9878;  /* ROM: 0x00B60A18 */
  AudioSeq_SequenceChannelDisable          = 0x800E98C8;  /* ROM: 0x00B60A68 */
  AudioSeq_SequencePlayerSetupChannels     = 0x800E9934;  /* ROM: 0x00B60AD4 */
  AudioSeq_SequencePlayerDisableChannels   = 0x800E9A2C;  /* ROM: 0x00B60BCC */
  AudioSeq_SequenceChannelEnable           = 0x800E9AAC;  /* ROM: 0x00B60C4C */
  AudioSeq_SequencePlayerDisableAsFinished = 0x800E9B44;  /* ROM: 0x00B60CE4 */
  AudioSeq_SequencePlayerDisable           = 0x800E9B6C;  /* ROM: 0x00B60D0C */
  AudioSeq_AudioListPushBack               = 0x800E9C28;  /* ROM: 0x00B60DC8 */
  AudioSeq_AudioListPopBack                = 0x800E9C68;  /* ROM: 0x00B60E08 */
  AudioSeq_InitLayerFreelist               = 0x800E9CA8;  /* ROM: 0x00B60E48 */
  AudioSeq_ScriptReadU8                    = 0x800E9D48;  /* ROM: 0x00B60EE8 */
  AudioSeq_ScriptReadS16                   = 0x800E9D5C;  /* ROM: 0x00B60EFC */
  AudioSeq_ScriptReadCompressedU16         = 0x800E9D94;  /* ROM: 0x00B60F34 */
  AudioSeq_SeqLayerProcessScript           = 0x800E9DD4;  /* ROM: 0x00B60F74 */
  AudioSeq_SeqLayerProcessScriptStep1      = 0x800E9ED8;  /* ROM: 0x00B61078 */
  AudioSeq_SeqLayerProcessScriptStep5      = 0x800E9F64;  /* ROM: 0x00B61104 */
  AudioSeq_SeqLayerProcessScriptStep2      = 0x800EA0C0;  /* ROM: 0x00B61260 */
  AudioSeq_SeqLayerProcessScriptStep4      = 0x800EA440;  /* ROM: 0x00B615E0 */
  AudioSeq_SeqLayerProcessScriptStep3      = 0x800EAAE0;  /* ROM: 0x00B61C80 */
  AudioSeq_SetChannelPriorities            = 0x800EAEF4;  /* ROM: 0x00B62094 */
  AudioSeq_GetInstrument                   = 0x800EAF24;  /* ROM: 0x00B620C4 */
  AudioSeq_SetInstrument                   = 0x800EAF98;  /* ROM: 0x00B62138 */
  AudioSeq_SequenceChannelSetVolume        = 0x800EB044;  /* ROM: 0x00B621E4 */
  AudioSeq_SequenceChannelProcessScript    = 0x800EB068;  /* ROM: 0x00B62208 */
  AudioSeq_SequencePlayerProcessSequence   = 0x800EBD58;  /* ROM: 0x00B62EF8 */
  AudioSeq_ProcessSequences                = 0x800EC564;  /* ROM: 0x00B63704 */
  AudioSeq_SkipForwardSequence             = 0x800EC618;  /* ROM: 0x00B637B8 */
  AudioSeq_ResetSequencePlayer             = 0x800EC668;  /* ROM: 0x00B63808 */
  AudioSeq_InitSequencePlayerChannels      = 0x800EC734;  /* ROM: 0x00B638D4 */
  AudioSeq_InitSequencePlayer              = 0x800EC80C;  /* ROM: 0x00B639AC */
  AudioSeq_InitSequencePlayers             = 0x800EC8DC;  /* ROM: 0x00B63A7C */
 /* .data */
  D_80130520 = 0x80130520;  /* ROM: 0x00BA76C0 */

/* build/src/code/code_800EC960.o */
 /* .text */
  func_800EC960                         = 0x800EC960;  /* ROM: 0x00B63B00 */
  Audio_GetOcaInput                     = 0x800ECA00;  /* ROM: 0x00B63BA0 */
  Audio_OcaAdjStick                     = 0x800ECA60;  /* ROM: 0x00B63C00 */
  Audio_OcaGetPlayingState              = 0x800ECAF0;  /* ROM: 0x00B63C90 */
  Audio_OcaMapNoteValue                 = 0x800ECB34;  /* ROM: 0x00B63CD4 */
  func_800ECB7C                         = 0x800ECB7C;  /* ROM: 0x00B63D1C */
  func_800ECC04                         = 0x800ECC04;  /* ROM: 0x00B63DA4 */
  func_800ECDBC                         = 0x800ECDBC;  /* ROM: 0x00B63F5C */
  func_800ECDF8                         = 0x800ECDF8;  /* ROM: 0x00B63F98 */
  func_800ED200                         = 0x800ED200;  /* ROM: 0x00B643A0 */
  func_800ED458                         = 0x800ED458;  /* ROM: 0x00B645F8 */
  func_800ED848                         = 0x800ED848;  /* ROM: 0x00B649E8 */
  Audio_OcaSetInstrument                = 0x800ED858;  /* ROM: 0x00B649F8 */
  Audio_OcaSetSongPlayback              = 0x800ED93C;  /* ROM: 0x00B64ADC */
  Audio_OcaPlayback                     = 0x800EDA3C;  /* ROM: 0x00B64BDC */
  func_800EDD68                         = 0x800EDD68;  /* ROM: 0x00B64F08 */
  Audio_OcaSetRecordingState            = 0x800EE170;  /* ROM: 0x00B65310 */
  Audio_OcaUpdateRecordingStaff         = 0x800EE29C;  /* ROM: 0x00B6543C */
  Audio_OcaUpdatePlayingStaff           = 0x800EE2D4;  /* ROM: 0x00B65474 */
  Audio_OcaUpdateDisplayedStaff         = 0x800EE318;  /* ROM: 0x00B654B8 */
  Audio_OcaGetRecordingStaff            = 0x800EE3C8;  /* ROM: 0x00B65568 */
  Audio_OcaGetPlayingStaff              = 0x800EE3D4;  /* ROM: 0x00B65574 */
  Audio_OcaGetDisplayingStaff           = 0x800EE3F8;  /* ROM: 0x00B65598 */
  func_800EE404                         = 0x800EE404;  /* ROM: 0x00B655A4 */
  Audio_OcaMemoryGameStart              = 0x800EE57C;  /* ROM: 0x00B6571C */
  Audio_OcaMemoryGameGenNote            = 0x800EE5EC;  /* ROM: 0x00B6578C */
  func_800EE6F4                         = 0x800EE6F4;  /* ROM: 0x00B65894 */
  func_800EE824                         = 0x800EE824;  /* ROM: 0x00B659C4 */
  func_800EE930                         = 0x800EE930;  /* ROM: 0x00B65AD0 */
  AudioDebug_SetInput                   = 0x800EE97C;  /* ROM: 0x00B65B1C */
  AudioDebug_ToStringBinary             = 0x800EE9D0;  /* ROM: 0x00B65B70 */
  AudioDebug_Draw                       = 0x800EEA50;  /* ROM: 0x00B65BF0 */
  AudioDebug_ProcessInput_SndCont       = 0x800F1BDC;  /* ROM: 0x00B68D7C */
  AudioDebug_ProcessInput_IntInfo       = 0x800F2150;  /* ROM: 0x00B692F0 */
  AudioDebug_ProcessInput_ScrPrt        = 0x800F227C;  /* ROM: 0x00B6941C */
  AudioDebug_ProcessInput_SfxSwap       = 0x800F2464;  /* ROM: 0x00B69604 */
  AudioDebug_ProcessInput_SubTrackInfo  = 0x800F27A0;  /* ROM: 0x00B69940 */
  AudioDebug_ProcessInput_HeapInfo      = 0x800F28AC;  /* ROM: 0x00B69A4C */
  AudioDebug_ProcessInput_BlkChgBgm     = 0x800F28B4;  /* ROM: 0x00B69A54 */
  AudioDebug_ProcessInput_OcaTest       = 0x800F29FC;  /* ROM: 0x00B69B9C */
  AudioDebug_ProcessInput_SfxParamChg   = 0x800F2A04;  /* ROM: 0x00B69BA4 */
  AudioDebug_ScrPrt                     = 0x800F2D6C;  /* ROM: 0x00B69F0C */
  AudioDebug_ProcessInput               = 0x800F2E28;  /* ROM: 0x00B69FC8 */
  func_800F3054                         = 0x800F3054;  /* ROM: 0x00B6A1F4 */
  func_800F3138                         = 0x800F3138;  /* ROM: 0x00B6A2D8 */
  func_800F3140                         = 0x800F3140;  /* ROM: 0x00B6A2E0 */
  func_800F314C                         = 0x800F314C;  /* ROM: 0x00B6A2EC */
  Audio_ComputeSoundVolume              = 0x800F3188;  /* ROM: 0x00B6A328 */
  Audio_ComputeSoundReverb              = 0x800F32F0;  /* ROM: 0x00B6A490 */
  Audio_ComputeSoundPanSigned           = 0x800F3468;  /* ROM: 0x00B6A608 */
  Audio_ComputeSoundFreqScale           = 0x800F35EC;  /* ROM: 0x00B6A78C */
  func_800F37B8                         = 0x800F37B8;  /* ROM: 0x00B6A958 */
  func_800F3990                         = 0x800F3990;  /* ROM: 0x00B6AB30 */
  Audio_SetSoundProperties              = 0x800F3A08;  /* ROM: 0x00B6ABA8 */
  Audio_ResetSfxChannelState            = 0x800F3ED4;  /* ROM: 0x00B6B074 */
  func_800F3F3C                         = 0x800F3F3C;  /* ROM: 0x00B6B0DC */
  func_800F3F84                         = 0x800F3F84;  /* ROM: 0x00B6B124 */
  func_800F4010                         = 0x800F4010;  /* ROM: 0x00B6B1B0 */
  func_800F4138                         = 0x800F4138;  /* ROM: 0x00B6B2D8 */
  func_800F4190                         = 0x800F4190;  /* ROM: 0x00B6B330 */
  Audio_PlaySoundRandom                 = 0x800F41E0;  /* ROM: 0x00B6B380 */
  func_800F4254                         = 0x800F4254;  /* ROM: 0x00B6B3F4 */
  func_800F436C                         = 0x800F436C;  /* ROM: 0x00B6B50C */
  func_800F4414                         = 0x800F4414;  /* ROM: 0x00B6B5B4 */
  func_800F44EC                         = 0x800F44EC;  /* ROM: 0x00B6B68C */
  func_800F4524                         = 0x800F4524;  /* ROM: 0x00B6B6C4 */
  func_800F4578                         = 0x800F4578;  /* ROM: 0x00B6B718 */
  func_800F45D0                         = 0x800F45D0;  /* ROM: 0x00B6B770 */
  Audio_PlaySoundRiver                  = 0x800F4634;  /* ROM: 0x00B6B7D4 */
  Audio_PlaySoundWaterfall              = 0x800F46E0;  /* ROM: 0x00B6B880 */
  Audio_StepFreqLerp                    = 0x800F4784;  /* ROM: 0x00B6B924 */
  func_800F47BC                         = 0x800F47BC;  /* ROM: 0x00B6B95C */
  func_800F47FC                         = 0x800F47FC;  /* ROM: 0x00B6B99C */
  func_800F483C                         = 0x800F483C;  /* ROM: 0x00B6B9DC */
  Audio_SetGanonsTowerBgmVolumeLevel    = 0x800F4870;  /* ROM: 0x00B6BA10 */
  Audio_SetGanonsTowerBgmVolume         = 0x800F491C;  /* ROM: 0x00B6BABC */
  Audio_LowerMainBgmVolume              = 0x800F4A54;  /* ROM: 0x00B6BBF4 */
  Audio_UpdateRiverSoundVolumes         = 0x800F4A70;  /* ROM: 0x00B6BC10 */
  Audio_PlaySoundIncreasinglyTransposed = 0x800F4B58;  /* ROM: 0x00B6BCF8 */
  Audio_ResetIncreasingTranspose        = 0x800F4BE8;  /* ROM: 0x00B6BD88 */
  Audio_PlaySoundTransposed             = 0x800F4BF4;  /* ROM: 0x00B6BD94 */
  func_800F4C58                         = 0x800F4C58;  /* ROM: 0x00B6BDF8 */
  func_800F4E30                         = 0x800F4E30;  /* ROM: 0x00B6BFD0 */
  Audio_ClearSariaBgm                   = 0x800F50CC;  /* ROM: 0x00B6C26C */
  Audio_ClearSariaBgmAtPos              = 0x800F50EC;  /* ROM: 0x00B6C28C */
  Audio_SplitBgmChannels                = 0x800F510C;  /* ROM: 0x00B6C2AC */
  Audio_PlaySariaBgm                    = 0x800F52A0;  /* ROM: 0x00B6C440 */
  Audio_ClearSariaBgm2                  = 0x800F5504;  /* ROM: 0x00B6C6A4 */
  func_800F5510                         = 0x800F5510;  /* ROM: 0x00B6C6B0 */
  func_800F5550                         = 0x800F5550;  /* ROM: 0x00B6C6F0 */
  func_800F56A8                         = 0x800F56A8;  /* ROM: 0x00B6C848 */
  func_800F5718                         = 0x800F5718;  /* ROM: 0x00B6C8B8 */
  func_800F574C                         = 0x800F574C;  /* ROM: 0x00B6C8EC */
  func_800F5918                         = 0x800F5918;  /* ROM: 0x00B6CAB8 */
  func_800F595C                         = 0x800F595C;  /* ROM: 0x00B6CAFC */
  func_800F59E8                         = 0x800F59E8;  /* ROM: 0x00B6CB88 */
  func_800F5A58                         = 0x800F5A58;  /* ROM: 0x00B6CBF8 */
  func_800F5ACC                         = 0x800F5ACC;  /* ROM: 0x00B6CC6C */
  func_800F5B58                         = 0x800F5B58;  /* ROM: 0x00B6CCF8 */
  func_800F5BF0                         = 0x800F5BF0;  /* ROM: 0x00B6CD90 */
  func_800F5C2C                         = 0x800F5C2C;  /* ROM: 0x00B6CDCC */
  Audio_PlayFanfare                     = 0x800F5C64;  /* ROM: 0x00B6CE04 */
  func_800F5CF8                         = 0x800F5CF8;  /* ROM: 0x00B6CE98 */
  func_800F5E18                         = 0x800F5E18;  /* ROM: 0x00B6CFB8 */
  Audio_SetSequenceMode                 = 0x800F5E90;  /* ROM: 0x00B6D030 */
  Audio_SetBgmEnemyVolume               = 0x800F6114;  /* ROM: 0x00B6D2B4 */
  func_800F6268                         = 0x800F6268;  /* ROM: 0x00B6D408 */
  func_800F64E0                         = 0x800F64E0;  /* ROM: 0x00B6D680 */
  func_800F6584                         = 0x800F6584;  /* ROM: 0x00B6D724 */
  Audio_SetEnvReverb                    = 0x800F66C0;  /* ROM: 0x00B6D860 */
  Audio_SetCodeReverb                   = 0x800F66DC;  /* ROM: 0x00B6D87C */
  func_800F6700                         = 0x800F6700;  /* ROM: 0x00B6D8A0 */
  Audio_SetBaseFilter                   = 0x800F67A0;  /* ROM: 0x00B6D940 */
  Audio_SetExtraFilter                  = 0x800F6828;  /* ROM: 0x00B6D9C8 */
  Audio_SetCutsceneFlag                 = 0x800F68BC;  /* ROM: 0x00B6DA5C */
  Audio_PlaySoundGeneralIfNotInCutscene = 0x800F68D4;  /* ROM: 0x00B6DA74 */
  Audio_PlaySoundIfNotInCutscene        = 0x800F691C;  /* ROM: 0x00B6DABC */
  func_800F6964                         = 0x800F6964;  /* ROM: 0x00B6DB04 */
  func_800F6AB0                         = 0x800F6AB0;  /* ROM: 0x00B6DC50 */
  func_800F6B3C                         = 0x800F6B3C;  /* ROM: 0x00B6DCDC */
  Audio_DisableAllSeq                   = 0x800F6B68;  /* ROM: 0x00B6DD08 */
  func_800F6BB8                         = 0x800F6BB8;  /* ROM: 0x00B6DD58 */
  func_800F6BDC                         = 0x800F6BDC;  /* ROM: 0x00B6DD7C */
  Audio_PreNMI                          = 0x800F6C14;  /* ROM: 0x00B6DDB4 */
  func_800F6C34                         = 0x800F6C34;  /* ROM: 0x00B6DDD4 */
  Audio_SetNatureAmbienceChannelIO      = 0x800F6D58;  /* ROM: 0x00B6DEF8 */
  Audio_StartNatureAmbienceSequence     = 0x800F6E7C;  /* ROM: 0x00B6E01C */
  Audio_PlayNatureAmbienceSequence      = 0x800F6FB4;  /* ROM: 0x00B6E154 */
  Audio_Init                            = 0x800F70F8;  /* ROM: 0x00B6E298 */
  Audio_InitSound                       = 0x800F711C;  /* ROM: 0x00B6E2BC */
  func_800F7170                         = 0x800F7170;  /* ROM: 0x00B6E310 */
  func_800F71BC                         = 0x800F71BC;  /* ROM: 0x00B6E35C */
  func_800F7208                         = 0x800F7208;  /* ROM: 0x00B6E3A8 */
 /* .data */
  gIsLargeSoundBank             = 0x80130570;  /* ROM: 0x00BA7710 */
  gChannelsPerBank              = 0x80130578;  /* ROM: 0x00BA7718 */
  gUsedChannelsPerBank          = 0x80130594;  /* ROM: 0x00BA7734 */
  D_801305B0                    = 0x801305B0;  /* ROM: 0x00BA7750 */
  D_801305B4                    = 0x801305B4;  /* ROM: 0x00BA7754 */
  D_801305B8                    = 0x801305B8;  /* ROM: 0x00BA7758 */
  D_801305BC                    = 0x801305BC;  /* ROM: 0x00BA775C */
  D_801305C0                    = 0x801305C0;  /* ROM: 0x00BA7760 */
  sBehindScreenZ                = 0x801305C4;  /* ROM: 0x00BA7764 */
  sAudioIncreasingTranspose     = 0x801305CC;  /* ROM: 0x00BA776C */
  gMorphaTransposeTable         = 0x801305D0;  /* ROM: 0x00BA7770 */
  sPrevChargeLevel              = 0x801305E0;  /* ROM: 0x00BA7780 */
  D_801305E4                    = 0x801305E4;  /* ROM: 0x00BA7784 */
  D_801305F4                    = 0x801305F4;  /* ROM: 0x00BA7794 */
  sGanonsTowerLevelsVol         = 0x801305F8;  /* ROM: 0x00BA7798 */
  sEnterGanonsTowerTimer        = 0x80130600;  /* ROM: 0x00BA77A0 */
  D_80130604                    = 0x80130604;  /* ROM: 0x00BA77A4 */
  D_80130608                    = 0x80130608;  /* ROM: 0x00BA77A8 */
  sAudioCutsceneFlag            = 0x8013060C;  /* ROM: 0x00BA77AC */
  sSpecReverb                   = 0x80130610;  /* ROM: 0x00BA77B0 */
  sAudioEnvReverb               = 0x80130614;  /* ROM: 0x00BA77B4 */
  sAudioCodeReverb              = 0x80130618;  /* ROM: 0x00BA77B8 */
  sPrevSeqMode                  = 0x8013061C;  /* ROM: 0x00BA77BC */
  sAudioEnemyDist               = 0x80130620;  /* ROM: 0x00BA77C0 */
  sAudioEnemyVol                = 0x80130624;  /* ROM: 0x00BA77C4 */
  sPrevMainBgmSeqId             = 0x80130628;  /* ROM: 0x00BA77C8 */
  D_8013062C                    = 0x8013062C;  /* ROM: 0x00BA77CC */
  D_80130630                    = 0x80130630;  /* ROM: 0x00BA77D0 */
  sNumFramesStill               = 0x80130634;  /* ROM: 0x00BA77D4 */
  sNumFramesMoving              = 0x80130638;  /* ROM: 0x00BA77D8 */
  sAudioBaseFilter              = 0x8013063C;  /* ROM: 0x00BA77DC */
  sAudioExtraFilter             = 0x80130640;  /* ROM: 0x00BA77E0 */
  sAudioBaseFilter2             = 0x80130644;  /* ROM: 0x00BA77E4 */
  sAudioExtraFilter2            = 0x80130648;  /* ROM: 0x00BA77E8 */
  sSariaBgmPtr                  = 0x8013064C;  /* ROM: 0x00BA77EC */
  D_80130650                    = 0x80130650;  /* ROM: 0x00BA77F0 */
  sSeqModeInput                 = 0x80130654;  /* ROM: 0x00BA77F4 */
  sSeqFlags                     = 0x80130658;  /* ROM: 0x00BA77F8 */
  sSpecReverbs                  = 0x801306C8;  /* ROM: 0x00BA7868 */
  sNatureAmbienceDataIO         = 0x801306DC;  /* ROM: 0x00BA787C */
  sOcarinaAllowedBtnMask        = 0x80130EFC;  /* ROM: 0x00BA809C */
  sOcarinaABtnMap               = 0x80130F00;  /* ROM: 0x00BA80A0 */
  sOcarinaCUPBtnMap             = 0x80130F04;  /* ROM: 0x00BA80A4 */
  sOcarinaCDownBtnMap           = 0x80130F08;  /* ROM: 0x00BA80A8 */
  sOcarinaInpEnabled            = 0x80130F0C;  /* ROM: 0x00BA80AC */
  D_80130F10                    = 0x80130F10;  /* ROM: 0x00BA80B0 */
  sCurOcarinaBtnVal             = 0x80130F14;  /* ROM: 0x00BA80B4 */
  sPrevOcarinaNoteVal           = 0x80130F18;  /* ROM: 0x00BA80B8 */
  sCurOcarinaBtnIdx             = 0x80130F1C;  /* ROM: 0x00BA80BC */
  sLearnSongLastBtn             = 0x80130F20;  /* ROM: 0x00BA80C0 */
  D_80130F24                    = 0x80130F24;  /* ROM: 0x00BA80C4 */
  D_80130F28                    = 0x80130F28;  /* ROM: 0x00BA80C8 */
  D_80130F2C                    = 0x80130F2C;  /* ROM: 0x00BA80CC */
  D_80130F30                    = 0x80130F30;  /* ROM: 0x00BA80D0 */
  D_80130F34                    = 0x80130F34;  /* ROM: 0x00BA80D4 */
  sPlaybackState                = 0x80130F38;  /* ROM: 0x00BA80D8 */
  D_80130F3C                    = 0x80130F3C;  /* ROM: 0x00BA80DC */
  sNotePlaybackTimer            = 0x80130F40;  /* ROM: 0x00BA80E0 */
  sPlaybackNotePos              = 0x80130F44;  /* ROM: 0x00BA80E4 */
  sStaffPlaybackPos             = 0x80130F48;  /* ROM: 0x00BA80E8 */
  D_80130F4C                    = 0x80130F4C;  /* ROM: 0x00BA80EC */
  sDisplayedNoteValue           = 0x80130F50;  /* ROM: 0x00BA80F0 */
  sNotePlaybackVolume           = 0x80130F54;  /* ROM: 0x00BA80F4 */
  sNotePlaybackVibrato          = 0x80130F58;  /* ROM: 0x00BA80F8 */
  sNotePlaybackTone             = 0x80130F5C;  /* ROM: 0x00BA80FC */
  sNormalizedNotePlaybackTone   = 0x80130F60;  /* ROM: 0x00BA8100 */
  sNormalizedNotePlaybackVolume = 0x80130F64;  /* ROM: 0x00BA8104 */
  D_80130F68                    = 0x80130F68;  /* ROM: 0x00BA8108 */
  sOcarinaNoteValues            = 0x80130F6C;  /* ROM: 0x00BA810C */
  sOcaMinigameAppendPos         = 0x80130F74;  /* ROM: 0x00BA8114 */
  sOcaMinigameEndPos            = 0x80130F78;  /* ROM: 0x00BA8118 */
  sOcaMinigameNoteCnts          = 0x80130F7C;  /* ROM: 0x00BA811C */
  sOcarinaSongs                 = 0x80130F80;  /* ROM: 0x00BA8120 */
  sPlaybackSong                 = 0x80131840;  /* ROM: 0x00BA89E0 */
  sFrogsSongNotes               = 0x80131844;  /* ROM: 0x00BA89E4 */
  gFrogsSongPtr                 = 0x80131854;  /* ROM: 0x00BA89F4 */
  sRecordingState               = 0x80131858;  /* ROM: 0x00BA89F8 */
  sRecordSongPos                = 0x8013185C;  /* ROM: 0x00BA89FC */
  D_80131860                    = 0x80131860;  /* ROM: 0x00BA8A00 */
  D_80131864                    = 0x80131864;  /* ROM: 0x00BA8A04 */
  D_80131868                    = 0x80131868;  /* ROM: 0x00BA8A08 */
  D_8013186C                    = 0x8013186C;  /* ROM: 0x00BA8A0C */
  D_80131870                    = 0x80131870;  /* ROM: 0x00BA8A10 */
  D_80131874                    = 0x80131874;  /* ROM: 0x00BA8A14 */
  D_80131878                    = 0x80131878;  /* ROM: 0x00BA8A18 */
  D_8013187C                    = 0x8013187C;  /* ROM: 0x00BA8A1C */
  D_80131880                    = 0x80131880;  /* ROM: 0x00BA8A20 */
  sPierresSong                  = 0x80131884;  /* ROM: 0x00BA8A24 */
  gScarecrowCustomSongPtr       = 0x80131BE4;  /* ROM: 0x00BA8D84 */
  gScarecrowSpawnSongPtr        = 0x80131BE8;  /* ROM: 0x00BA8D88 */
  D_80131BEC                    = 0x80131BEC;  /* ROM: 0x00BA8D8C */
  sNoteValueIndexMap            = 0x80131BF0;  /* ROM: 0x00BA8D90 */
  gOcarinaSongNotes             = 0x80131C00;  /* ROM: 0x00BA8DA0 */
  D_80131C8C                    = 0x80131C8C;  /* ROM: 0x00BA8E2C */
  sAudioUpdateDuration          = 0x80131C90;  /* ROM: 0x00BA8E30 */
  sAudioUpdateDurationMax       = 0x80131C94;  /* ROM: 0x00BA8E34 */
  sAudioDebugEverOpened         = 0x80131C98;  /* ROM: 0x00BA8E38 */
  sAudioSfxMuted                = 0x80131C9C;  /* ROM: 0x00BA8E3C */
  sAudioDebugPage               = 0x80131CA0;  /* ROM: 0x00BA8E40 */
  sAudioSndContSel              = 0x80131CA4;  /* ROM: 0x00BA8E44 */
  sAudioDebugTextColor          = 0x80131CA8;  /* ROM: 0x00BA8E48 */
  sAudioDebugPageNames          = 0x80131CAC;  /* ROM: 0x00BA8E4C */
  sAudioSndContWork             = 0x80131E08;  /* ROM: 0x00BA8FA8 */
  sAudioSndContWorkLims         = 0x80131E20;  /* ROM: 0x00BA8FC0 */
  sSoundBankNames               = 0x80131E38;  /* ROM: 0x00BA8FD8 */
  sSoundModeNames               = 0x80131E88;  /* ROM: 0x00BA9028 */
  sAudioIntInfoX                = 0x80131EBC;  /* ROM: 0x00BA905C */
  sAudioIntInfoY                = 0x80131EC0;  /* ROM: 0x00BA9060 */
  sAudioIntInfoSel              = 0x80131EC4;  /* ROM: 0x00BA9064 */
  sAudioIntInfoBankPage         = 0x80131EC8;  /* ROM: 0x00BA9068 */
  sAudioScrPrtSel               = 0x80131ED0;  /* ROM: 0x00BA9070 */
  sAudioScrPrtInd               = 0x80131ED4;  /* ROM: 0x00BA9074 */
  sAudioScrPrtOverflow          = 0x80131ED8;  /* ROM: 0x00BA9078 */
  sAudioScrPrtX                 = 0x80131EDC;  /* ROM: 0x00BA907C */
  sAudioScrPrtY                 = 0x80131EE0;  /* ROM: 0x00BA9080 */
  sAudioScrPrtWork              = 0x80131EE4;  /* ROM: 0x00BA9084 */
  sAudioScrPrtWorkLims          = 0x80131EF0;  /* ROM: 0x00BA9090 */
  sAudioSubTrackInfoSpec        = 0x80131EFC;  /* ROM: 0x00BA909C */
  sAudioSfxSwapIsEditing        = 0x80131F00;  /* ROM: 0x00BA90A0 */
  sAudioSfxSwapSel              = 0x80131F04;  /* ROM: 0x00BA90A4 */
  sAudioSfxSwapNibbleSel        = 0x80131F08;  /* ROM: 0x00BA90A8 */
  sAudioSfxSwapModeNames        = 0x80131F0C;  /* ROM: 0x00BA90AC */
  sAudioSfxParamChgSel          = 0x80131F18;  /* ROM: 0x00BA90B8 */
  sAudioSfxParamChgBitSel       = 0x80131F1C;  /* ROM: 0x00BA90BC */
  sAudioSfxParamChgWork         = 0x80131F20;  /* ROM: 0x00BA90C0 */
  sAudioSubTrackInfoPlayerSel   = 0x80131F28;  /* ROM: 0x00BA90C8 */
  sAudioSubTrackInfoChannelSel  = 0x80131F2C;  /* ROM: 0x00BA90CC */
  sSeqPlayerPeakNumLayers       = 0x80131F30;  /* ROM: 0x00BA90D0 */
  sAudioSceneNames              = 0x80131F44;  /* ROM: 0x00BA90E4 */
  sAudioBlkChgBgmWork           = 0x80131F4C;  /* ROM: 0x00BA90EC */
  sAudioBlkChgBgmSel            = 0x80131F50;  /* ROM: 0x00BA90F0 */
  sBoolStrs                     = 0x80131F54;  /* ROM: 0x00BA90F4 */
  sAudioNatureFailed            = 0x80131F64;  /* ROM: 0x00BA9104 */
  sPeakNumNotes                 = 0x80131F68;  /* ROM: 0x00BA9108 */
 /* .bss */
  sAudioUpdateStartTime        = 0x8016B7A0;  /* ROM: 0x00BE2940 */
  sAudioUpdateEndTime          = 0x8016B7A4;  /* ROM: 0x00BE2944 */
  D_8016B7A8                   = 0x8016B7A8;  /* ROM: 0x00BE2948 */
  D_8016B7AC                   = 0x8016B7AC;  /* ROM: 0x00BE294C */
  D_8016B7B0                   = 0x8016B7B0;  /* ROM: 0x00BE2950 */
  D_8016B7B4                   = 0x8016B7B4;  /* ROM: 0x00BE2954 */
  sRiverFreqScaleLerp          = 0x8016B7B8;  /* ROM: 0x00BE2958 */
  sWaterfallFreqScaleLerp      = 0x8016B7C8;  /* ROM: 0x00BE2968 */
  D_8016B7D8                   = 0x8016B7D8;  /* ROM: 0x00BE2978 */
  D_8016B7DC                   = 0x8016B7DC;  /* ROM: 0x00BE297C */
  D_8016B7E0                   = 0x8016B7E0;  /* ROM: 0x00BE2980 */
  D_8016B7E4                   = 0x8016B7E4;  /* ROM: 0x00BE2984 */
  sAudioScrPrtBuf              = 0x8016B7E8;  /* ROM: 0x00BE2988 */
  sRiverSoundMainBgmVol        = 0x8016B8B0;  /* ROM: 0x00BE2A50 */
  sRiverSoundMainBgmCurrentVol = 0x8016B8B1;  /* ROM: 0x00BE2A51 */
  sRiverSoundMainBgmLower      = 0x8016B8B2;  /* ROM: 0x00BE2A52 */
  sRiverSoundMainBgmRestore    = 0x8016B8B3;  /* ROM: 0x00BE2A53 */
  sGanonsTowerVol              = 0x8016B8B4;  /* ROM: 0x00BE2A54 */
  sSfxChannelState             = 0x8016B8B8;  /* ROM: 0x00BE2A58 */
  sBinToStrBuf                 = 0x8016B9B8;  /* ROM: 0x00BE2B58 */
  D_8016B9D8                   = 0x8016B9D8;  /* ROM: 0x00BE2B78 */
  sAudioSpecPeakNumNotes       = 0x8016B9E0;  /* ROM: 0x00BE2B80 */
  D_8016B9F2                   = 0x8016B9F2;  /* ROM: 0x00BE2B92 */
  D_8016B9F3                   = 0x8016B9F3;  /* ROM: 0x00BE2B93 */
  D_8016B9F4                   = 0x8016B9F4;  /* ROM: 0x00BE2B94 */
  D_8016B9F6                   = 0x8016B9F6;  /* ROM: 0x00BE2B96 */
  sPlayingStaff                = 0x8016B9F8;  /* ROM: 0x00BE2B98 */
  sDisplayedStaff              = 0x8016B9FC;  /* ROM: 0x00BE2B9C */
  sRecordingStaff              = 0x8016BA00;  /* ROM: 0x00BE2BA0 */
  D_8016BA04                   = 0x8016BA04;  /* ROM: 0x00BE2BA4 */
  sCurOcaStick                 = 0x8016BA08;  /* ROM: 0x00BE2BA8 */
  sCurOcarinaBtnPress          = 0x8016BA0C;  /* ROM: 0x00BE2BAC */
  D_8016BA10                   = 0x8016BA10;  /* ROM: 0x00BE2BB0 */
  sPrevOcarinaBtnPress         = 0x8016BA14;  /* ROM: 0x00BE2BB4 */
  D_8016BA18                   = 0x8016BA18;  /* ROM: 0x00BE2BB8 */
  D_8016BA1C                   = 0x8016BA1C;  /* ROM: 0x00BE2BBC */
  sCurOcarinaSong              = 0x8016BA20;  /* ROM: 0x00BE2BC0 */
  sOcarinaSongAppendPos        = 0x8016BA28;  /* ROM: 0x00BE2BC8 */
  sOcarinaHasStartedSong       = 0x8016BA29;  /* ROM: 0x00BE2BC9 */
  sOcarinaSongNoteStartIdx     = 0x8016BA2A;  /* ROM: 0x00BE2BCA */
  sOcarinaSongCnt              = 0x8016BA2B;  /* ROM: 0x00BE2BCB */
  sOcarinaAvailSongs           = 0x8016BA2C;  /* ROM: 0x00BE2BCC */
  sStaffPlayingPos             = 0x8016BA2E;  /* ROM: 0x00BE2BCE */
  sLearnSongPos                = 0x8016BA30;  /* ROM: 0x00BE2BD0 */
  D_8016BA50                   = 0x8016BA50;  /* ROM: 0x00BE2BF0 */
  D_8016BA70                   = 0x8016BA70;  /* ROM: 0x00BE2C10 */
  sLearnSongExpectedNote       = 0x8016BA90;  /* ROM: 0x00BE2C30 */
  D_8016BAA0                   = 0x8016BAA0;  /* ROM: 0x00BE2C40 */
  sAudioHasMalonBgm            = 0x8016BAA8;  /* ROM: 0x00BE2C48 */
  sAudioMalonBgmDist           = 0x8016BAAC;  /* ROM: 0x00BE2C4C */
  sDebugPadHold                = 0x8016BAB0;  /* ROM: 0x00BE2C50 */
  sDebugPadBtnLast             = 0x8016BAB4;  /* ROM: 0x00BE2C54 */
  sDebugPadPress               = 0x8016BAB8;  /* ROM: 0x00BE2C58 */
  sAudioUpdateTaskStart        = 0x8016BABC;  /* ROM: 0x00BE2C5C */
  sAudioUpdateTaskEnd          = 0x8016BAC0;  /* ROM: 0x00BE2C60 */

/* build/src/code/code_800F7260.o */
 /* .text */
  Audio_SetSoundBanksMute           = 0x800F7260;  /* ROM: 0x00B6E400 */
  Audio_QueueSeqCmdMute             = 0x800F72B8;  /* ROM: 0x00B6E458 */
  Audio_ClearBGMMute                = 0x800F731C;  /* ROM: 0x00B6E4BC */
  Audio_PlaySoundGeneral            = 0x800F738C;  /* ROM: 0x00B6E52C */
  Audio_RemoveMatchingSoundRequests = 0x800F74E0;  /* ROM: 0x00B6E680 */
  Audio_ProcessSoundRequest         = 0x800F7680;  /* ROM: 0x00B6E820 */
  Audio_RemoveSoundBankEntry        = 0x800F7B54;  /* ROM: 0x00B6ECF4 */
  Audio_ChooseActiveSounds          = 0x800F7CEC;  /* ROM: 0x00B6EE8C */
  Audio_PlayActiveSounds            = 0x800F8480;  /* ROM: 0x00B6F620 */
  Audio_StopSfxByBank               = 0x800F87A0;  /* ROM: 0x00B6F940 */
  func_800F8884                     = 0x800F8884;  /* ROM: 0x00B6FA24 */
  Audio_StopSfxByPosAndBank         = 0x800F89A0;  /* ROM: 0x00B6FB40 */
  Audio_StopSfxByPos                = 0x800F89E8;  /* ROM: 0x00B6FB88 */
  Audio_StopSfxByPosAndId           = 0x800F8A44;  /* ROM: 0x00B6FBE4 */
  Audio_StopSfxByTokenAndId         = 0x800F8BA0;  /* ROM: 0x00B6FD40 */
  Audio_StopSfxById                 = 0x800F8D04;  /* ROM: 0x00B6FEA4 */
  Audio_ProcessSoundRequests        = 0x800F8E3C;  /* ROM: 0x00B6FFDC */
  Audio_SetUnusedBankLerp           = 0x800F8EA0;  /* ROM: 0x00B70040 */
  Audio_StepUnusedBankLerp          = 0x800F8F34;  /* ROM: 0x00B700D4 */
  func_800F8F88                     = 0x800F8F88;  /* ROM: 0x00B70128 */
  Audio_IsSfxPlaying                = 0x800F8FF4;  /* ROM: 0x00B70194 */
  Audio_ResetSounds                 = 0x800F905C;  /* ROM: 0x00B701FC */
 /* .data */
  D_80133340              = 0x80133340;  /* ROM: 0x00BAA4E0 */
  D_80133344              = 0x80133344;  /* ROM: 0x00BAA4E4 */
  D_8013338C              = 0x8013338C;  /* ROM: 0x00BAA52C */
  D_80133390              = 0x80133390;  /* ROM: 0x00BAA530 */
  D_80133398              = 0x80133398;  /* ROM: 0x00BAA538 */
  sSoundRequestWriteIndex = 0x801333A0;  /* ROM: 0x00BAA540 */
  sSoundRequestReadIndex  = 0x801333A4;  /* ROM: 0x00BAA544 */
  gSoundBanks             = 0x801333A8;  /* ROM: 0x00BAA548 */
  sBankSizes              = 0x801333C4;  /* ROM: 0x00BAA564 */
  gSfxChannelLayout       = 0x801333CC;  /* ROM: 0x00BAA56C */
  D_801333D0              = 0x801333D0;  /* ROM: 0x00BAA570 */
  D_801333D4              = 0x801333D4;  /* ROM: 0x00BAA574 */
  D_801333E0              = 0x801333E0;  /* ROM: 0x00BAA580 */
  D_801333E4              = 0x801333E4;  /* ROM: 0x00BAA584 */
  D_801333E8              = 0x801333E8;  /* ROM: 0x00BAA588 */
  D_801333EC              = 0x801333EC;  /* ROM: 0x00BAA58C */
  D_801333F0              = 0x801333F0;  /* ROM: 0x00BAA590 */
  gAudioSfxSwapOff        = 0x801333F4;  /* ROM: 0x00BAA594 */
  D_801333F8              = 0x801333F8;  /* ROM: 0x00BAA598 */
 /* .bss */
  D_8016BAD0              = 0x8016BAD0;  /* ROM: 0x00BE2C70 */
  D_8016BC80              = 0x8016BC80;  /* ROM: 0x00BE2E20 */
  D_8016BEC0              = 0x8016BEC0;  /* ROM: 0x00BE3060 */
  D_8016C2E0              = 0x8016C2E0;  /* ROM: 0x00BE3480 */
  D_8016C6A0              = 0x8016C6A0;  /* ROM: 0x00BE3840 */
  D_8016C820              = 0x8016C820;  /* ROM: 0x00BE39C0 */
  D_8016C8B0              = 0x8016C8B0;  /* ROM: 0x00BE3A50 */
  sSoundRequests          = 0x8016C9A0;  /* ROM: 0x00BE3B40 */
  sSoundBankListEnd       = 0x8016E1A0;  /* ROM: 0x00BE5340 */
  sSoundBankFreeListStart = 0x8016E1A8;  /* ROM: 0x00BE5348 */
  sSoundBankUnused        = 0x8016E1B0;  /* ROM: 0x00BE5350 */
  gActiveSounds           = 0x8016E1B8;  /* ROM: 0x00BE5358 */
  sCurSfxPlayerChannelIdx = 0x8016E260;  /* ROM: 0x00BE5400 */
  gSoundBankMuted         = 0x8016E264;  /* ROM: 0x00BE5404 */
  sUnusedBankLerp         = 0x8016E270;  /* ROM: 0x00BE5410 */
  gAudioSfxSwapSource     = 0x8016E2E0;  /* ROM: 0x00BE5480 */
  gAudioSfxSwapTarget     = 0x8016E2F8;  /* ROM: 0x00BE5498 */
  gAudioSfxSwapMode       = 0x8016E310;  /* ROM: 0x00BE54B0 */

/* build/src/code/code_800F9280.o */
 /* .text */
  func_800F9280        = 0x800F9280;  /* ROM: 0x00B70420 */
  func_800F9474        = 0x800F9474;  /* ROM: 0x00B70614 */
  Audio_ProcessSeqCmd  = 0x800F94FC;  /* ROM: 0x00B7069C */
  Audio_QueueSeqCmd    = 0x800FA00C;  /* ROM: 0x00B711AC */
  Audio_ProcessSeqCmds = 0x800FA034;  /* ROM: 0x00B711D4 */
  func_800FA0B4        = 0x800FA0B4;  /* ROM: 0x00B71254 */
  func_800FA11C        = 0x800FA11C;  /* ROM: 0x00B712BC */
  func_800FA174        = 0x800FA174;  /* ROM: 0x00B71314 */
  func_800FA18C        = 0x800FA18C;  /* ROM: 0x00B7132C */
  Audio_SetVolScale    = 0x800FA240;  /* ROM: 0x00B713E0 */
  func_800FA3DC        = 0x800FA3DC;  /* ROM: 0x00B7157C */
  func_800FAD34        = 0x800FAD34;  /* ROM: 0x00B71ED4 */
  func_800FADF8        = 0x800FADF8;  /* ROM: 0x00B71F98 */
  func_800FAEB4        = 0x800FAEB4;  /* ROM: 0x00B72054 */
 /* .data */
  sSeqCmdWrPos = 0x80133400;  /* ROM: 0x00BAA5A0 */
  sSeqCmdRdPos = 0x80133404;  /* ROM: 0x00BAA5A4 */
  D_80133408   = 0x80133408;  /* ROM: 0x00BAA5A8 */
  D_8013340C   = 0x8013340C;  /* ROM: 0x00BAA5AC */
  D_80133410   = 0x80133410;  /* ROM: 0x00BAA5B0 */
  gAudioSpecId = 0x80133414;  /* ROM: 0x00BAA5B4 */
  D_80133418   = 0x80133418;  /* ROM: 0x00BAA5B8 */
 /* .bss */
  D_8016E320    = 0x8016E320;  /* ROM: 0x00BE54C0 */
  D_8016E348    = 0x8016E348;  /* ROM: 0x00BE54E8 */
  sAudioSeqCmds = 0x8016E350;  /* ROM: 0x00BE54F0 */
  D_8016E750    = 0x8016E750;  /* ROM: 0x00BE58F0 */

/* build/src/code/gfxprint.o */
 /* .text */
  GfxPrint_Setup               = 0x800FAF60;  /* ROM: 0x00B72100 */
  GfxPrint_SetColor            = 0x800FB3AC;  /* ROM: 0x00B7254C */
  GfxPrint_SetPosPx            = 0x800FB3F8;  /* ROM: 0x00B72598 */
  GfxPrint_SetPos              = 0x800FB41C;  /* ROM: 0x00B725BC */
  GfxPrint_SetBasePosPx        = 0x800FB444;  /* ROM: 0x00B725E4 */
  GfxPrint_PrintCharImpl       = 0x800FB458;  /* ROM: 0x00B725F8 */
  GfxPrint_PrintChar           = 0x800FB8EC;  /* ROM: 0x00B72A8C */
  GfxPrint_PrintStringWithSize = 0x800FBAAC;  /* ROM: 0x00B72C4C */
  GfxPrint_PrintString         = 0x800FBB08;  /* ROM: 0x00B72CA8 */
  GfxPrint_Callback            = 0x800FBB60;  /* ROM: 0x00B72D00 */
  GfxPrint_Init                = 0x800FBB8C;  /* ROM: 0x00B72D2C */
  GfxPrint_Destroy             = 0x800FBC14;  /* ROM: 0x00B72DB4 */
  GfxPrint_Open                = 0x800FBC1C;  /* ROM: 0x00B72DBC */
  GfxPrint_Close               = 0x800FBC64;  /* ROM: 0x00B72E04 */
  GfxPrint_VPrintf             = 0x800FBC94;  /* ROM: 0x00B72E34 */
  GfxPrint_Printf              = 0x800FBCB4;  /* ROM: 0x00B72E54 */
 /* .data */
  sGfxPrintFontTLUT    = 0x80133BD0;  /* ROM: 0x00BAAD70 */
  sGfxPrintRainbowTLUT = 0x80133C50;  /* ROM: 0x00BAADF0 */
  sGfxPrintRainbowData = 0x80133C70;  /* ROM: 0x00BAAE10 */
  sGfxPrintFontData    = 0x80133C78;  /* ROM: 0x00BAAE18 */

/* build/src/code/rcp_utils.o */
 /* .text */
  RcpUtils_PrintRegisterStatus = 0x800FBCE0;  /* ROM: 0x00B72E80 */
  RcpUtils_Reset               = 0x800FBFD8;  /* ROM: 0x00B73178 */

/* build/src/code/loadfragment2.o */
 /* .text */
  Overlay_AllocateAndLoad = 0x800FC010;  /* ROM: 0x00B731B0 */

/* build/src/code/mtxuty-cvt.o */
 /* .text */
  MtxConv_F2L = 0x800FC0C0;  /* ROM: 0x00B73260 */
  MtxConv_L2F = 0x800FC258;  /* ROM: 0x00B733F8 */

/* build/src/code/relocation.o */
 /* .text */
  Overlay_Relocate = 0x800FC2C0;  /* ROM: 0x00B73460 */

/* build/src/code/code_800FC620.o */
 /* .text */
  Overlay_Load    = 0x800FC620;  /* ROM: 0x00B737C0 */
  func_800FC800   = 0x800FC800;  /* ROM: 0x00B739A0 */
  func_800FC83C   = 0x800FC83C;  /* ROM: 0x00B739DC */
  func_800FC868   = 0x800FC868;  /* ROM: 0x00B73A08 */
  func_800FC8D8   = 0x800FC8D8;  /* ROM: 0x00B73A78 */
  func_800FC948   = 0x800FC948;  /* ROM: 0x00B73AE8 */
  func_800FCA18   = 0x800FCA18;  /* ROM: 0x00B73BB8 */
  func_800FCB34   = 0x800FCAB4;  /* ROM: 0x00B73C54 */
  SystemHeap_Init = 0x800FCB24;  /* ROM: 0x00B73CC4 */
 /* .data */
  sInitFuncs = 0x80134480;  /* ROM: 0x00BAB620 */
  sNew       = 0x80134484;  /* ROM: 0x00BAB624 */
  D_80134488 = 0x80134488;  /* ROM: 0x00BAB628 */

/* build/src/code/padutils.o */
 /* .text */
  PadUtils_Init           = 0x800FCB50;  /* ROM: 0x00B73CF0 */
  func_800FCB70           = 0x800FCB70;  /* ROM: 0x00B73D10 */
  PadUtils_ResetPressRel  = 0x800FCB78;  /* ROM: 0x00B73D18 */
  PadUtils_CheckCurExact  = 0x800FCB84;  /* ROM: 0x00B73D24 */
  PadUtils_CheckCur       = 0x800FCB9C;  /* ROM: 0x00B73D3C */
  PadUtils_CheckPressed   = 0x800FCBB8;  /* ROM: 0x00B73D58 */
  PadUtils_CheckReleased  = 0x800FCBD4;  /* ROM: 0x00B73D74 */
  PadUtils_GetCurButton   = 0x800FCBF0;  /* ROM: 0x00B73D90 */
  PadUtils_GetPressButton = 0x800FCBF8;  /* ROM: 0x00B73D98 */
  PadUtils_GetCurX        = 0x800FCC00;  /* ROM: 0x00B73DA0 */
  PadUtils_GetCurY        = 0x800FCC08;  /* ROM: 0x00B73DA8 */
  PadUtils_SetRelXY       = 0x800FCC10;  /* ROM: 0x00B73DB0 */
  PadUtils_GetRelXImpl    = 0x800FCC1C;  /* ROM: 0x00B73DBC */
  PadUtils_GetRelYImpl    = 0x800FCC24;  /* ROM: 0x00B73DC4 */
  PadUtils_GetRelX        = 0x800FCC2C;  /* ROM: 0x00B73DCC */
  PadUtils_GetRelY        = 0x800FCC4C;  /* ROM: 0x00B73DEC */
  PadUtils_UpdateRelXY    = 0x800FCC6C;  /* ROM: 0x00B73E0C */

/* build/src/code/padsetup.o */
 /* .text */
  PadSetup_Init = 0x800FCD40;  /* ROM: 0x00B73EE0 */

/* build/src/code/code_800FCE80.o */
 /* .text */
  Math_FTanF          = 0x800FCE80;  /* ROM: 0x00B74020 */
  Math_FFloorF        = 0x800FCEB4;  /* ROM: 0x00B74054 */
  Math_FCeilF         = 0x800FCED4;  /* ROM: 0x00B74074 */
  Math_FRoundF        = 0x800FCEF4;  /* ROM: 0x00B74094 */
  Math_FTruncF        = 0x800FCF14;  /* ROM: 0x00B740B4 */
  Math_FNearbyIntF    = 0x800FCF34;  /* ROM: 0x00B740D4 */
  Math_FAtanTaylorQF  = 0x800FCF54;  /* ROM: 0x00B740F4 */
  Math_FAtanTaylorF   = 0x800FCFA0;  /* ROM: 0x00B74140 */
  Math_FAtanContFracF = 0x800FD0C4;  /* ROM: 0x00B74264 */
  Math_FAtanF         = 0x800FD210;  /* ROM: 0x00B743B0 */
  Math_FAtan2F        = 0x800FD250;  /* ROM: 0x00B743F0 */
  Math_FAsinF         = 0x800FD338;  /* ROM: 0x00B744D8 */
  Math_FAcosF         = 0x800FD368;  /* ROM: 0x00B74508 */
 /* .bss */
  gUseAtanContFrac = 0x80175600;  /* ROM: 0x00BEC7A0 */

/* build/src/code/system_malloc.o */
 /* .text */
  SystemArena_CheckPointer = 0x800FD4F0;  /* ROM: 0x00B74690 */
  SystemArena_Malloc       = 0x800FD570;  /* ROM: 0x00B74710 */
  SystemArena_MallocDebug  = 0x800FD5C0;  /* ROM: 0x00B74760 */
  SystemArena_MallocR      = 0x800FD61C;  /* ROM: 0x00B747BC */
  SystemArena_MallocRDebug = 0x800FD66C;  /* ROM: 0x00B7480C */
  SystemArena_Realloc      = 0x800FD6C8;  /* ROM: 0x00B74868 */
  SystemArena_ReallocDebug = 0x800FD720;  /* ROM: 0x00B748C0 */
  SystemArena_Free         = 0x800FD78C;  /* ROM: 0x00B7492C */
  SystemArena_FreeDebug    = 0x800FD7B4;  /* ROM: 0x00B74954 */
  SystemArena_Calloc       = 0x800FD7EC;  /* ROM: 0x00B7498C */
  SystemArena_Display      = 0x800FD858;  /* ROM: 0x00B749F8 */
  SystemArena_GetSizes     = 0x800FD888;  /* ROM: 0x00B74A28 */
  SystemArena_Check        = 0x800FD8C0;  /* ROM: 0x00B74A60 */
  SystemArena_Init         = 0x800FD8E4;  /* ROM: 0x00B74A84 */
  SystemArena_Cleanup      = 0x800FD91C;  /* ROM: 0x00B74ABC */
  SystemArena_IsInitalized = 0x800FD948;  /* ROM: 0x00B74AE8 */
 /* .data */
  gSystemArenaLogSeverity = 0x801344B0;  /* ROM: 0x00BAB650 */
 /* .bss */
  gSystemArena = 0x80175610;  /* ROM: 0x00BEC7B0 */

/* build/src/code/code_800FD970.o */
 /* .text */
  Rand_Next              = 0x800FD970;  /* ROM: 0x00B74B10 */
  Rand_Seed              = 0x800FD9A0;  /* ROM: 0x00B74B40 */
  Rand_ZeroOne           = 0x800FD9AC;  /* ROM: 0x00B74B4C */
  Rand_Centered          = 0x800FDA00;  /* ROM: 0x00B74BA0 */
  Rand_Seed_Variable     = 0x800FDA58;  /* ROM: 0x00B74BF8 */
  Rand_Next_Variable     = 0x800FDA60;  /* ROM: 0x00B74C00 */
  Rand_ZeroOne_Variable  = 0x800FDA88;  /* ROM: 0x00B74C28 */
  Rand_Centered_Variable = 0x800FDAD4;  /* ROM: 0x00B74C74 */

/* build/src/code/__osMalloc.o */
 /* .text */
  ArenaImpl_GetFillAllocBlock   = 0x800FDB30;  /* ROM: 0x00B74CD0 */
  ArenaImpl_GetFillFreeBlock    = 0x800FDB40;  /* ROM: 0x00B74CE0 */
  ArenaImpl_GetCheckFreeBlock   = 0x800FDB50;  /* ROM: 0x00B74CF0 */
  ArenaImpl_SetFillAllocBlock   = 0x800FDB60;  /* ROM: 0x00B74D00 */
  ArenaImpl_SetFillFreeBlock    = 0x800FDB70;  /* ROM: 0x00B74D10 */
  ArenaImpl_SetCheckFreeBlock   = 0x800FDB80;  /* ROM: 0x00B74D20 */
  ArenaImpl_UnsetFillAllocBlock = 0x800FDB90;  /* ROM: 0x00B74D30 */
  ArenaImpl_UnsetFillFreeBlock  = 0x800FDBA0;  /* ROM: 0x00B74D40 */
  ArenaImpl_UnsetCheckFreeBlock = 0x800FDBB0;  /* ROM: 0x00B74D50 */
  ArenaImpl_SetDebugInfo        = 0x800FDBC0;  /* ROM: 0x00B74D60 */
  ArenaImpl_LockInit            = 0x800FDC10;  /* ROM: 0x00B74DB0 */
  ArenaImpl_Lock                = 0x800FDC3C;  /* ROM: 0x00B74DDC */
  ArenaImpl_Unlock              = 0x800FDC64;  /* ROM: 0x00B74E04 */
  ArenaImpl_GetNextBlock        = 0x800FDC8C;  /* ROM: 0x00B74E2C */
  ArenaImpl_GetPrevBlock        = 0x800FDCE4;  /* ROM: 0x00B74E84 */
  ArenaImpl_GetLastBlock        = 0x800FDD3C;  /* ROM: 0x00B74EDC */
  __osMallocInit                = 0x800FDDA4;  /* ROM: 0x00B74F44 */
  __osMallocAddBlock            = 0x800FDDF4;  /* ROM: 0x00B74F94 */
  ArenaImpl_RemoveAllBlocks     = 0x800FDEB4;  /* ROM: 0x00B75054 */
  __osMallocCleanup             = 0x800FDF20;  /* ROM: 0x00B750C0 */
  __osMallocIsInitalized        = 0x800FDF4C;  /* ROM: 0x00B750EC */
  __osMalloc_FreeBlockTest      = 0x800FDF54;  /* ROM: 0x00B750F4 */
  __osMalloc_NoLockDebug        = 0x800FDFF4;  /* ROM: 0x00B75194 */
  __osMallocDebug               = 0x800FE144;  /* ROM: 0x00B752E4 */
  __osMallocRDebug              = 0x800FE194;  /* ROM: 0x00B75334 */
  __osMalloc_NoLock             = 0x800FE2FC;  /* ROM: 0x00B7549C */
  __osMalloc                    = 0x800FE444;  /* ROM: 0x00B755E4 */
  __osMallocR                   = 0x800FE484;  /* ROM: 0x00B75624 */
  __osFree_NoLock               = 0x800FE5E4;  /* ROM: 0x00B75784 */
  __osFree                      = 0x800FE7E4;  /* ROM: 0x00B75984 */
  __osFree_NoLockDebug          = 0x800FE81C;  /* ROM: 0x00B759BC */
  __osFreeDebug                 = 0x800FEA28;  /* ROM: 0x00B75BC8 */
  __osRealloc                   = 0x800FEA70;  /* ROM: 0x00B75C10 */
  __osReallocDebug              = 0x800FED9C;  /* ROM: 0x00B75F3C */
  ArenaImpl_GetSizes            = 0x800FEDBC;  /* ROM: 0x00B75F5C */
  __osDisplayArena              = 0x800FEE80;  /* ROM: 0x00B76020 */
  ArenaImpl_FaultClient         = 0x800FF0AC;  /* ROM: 0x00B7624C */
  __osCheckArena                = 0x800FF280;  /* ROM: 0x00B76420 */
  func_800FF334                 = 0x800FF334;  /* ROM: 0x00B764D4 */
 /* .bss */
  sArenaLockMsg                   = 0x80175650;  /* ROM: 0x00BEC7F0 */
  __osMalloc_FreeBlockTest_Enable = 0x80175654;  /* ROM: 0x00BEC7F4 */

/* build/src/code/printutils.o */
 /* .text */
  PrintUtils_VPrintf = 0x800FF340;  /* ROM: 0x00B764E0 */
  PrintUtils_Printf  = 0x800FF374;  /* ROM: 0x00B76514 */

/* build/src/code/sleep.o */
 /* .text */
  Sleep_Cycles = 0x800FF3A0;  /* ROM: 0x00B76540 */
  Sleep_Nsec   = 0x800FF40C;  /* ROM: 0x00B765AC */
  Sleep_Usec   = 0x800FF45C;  /* ROM: 0x00B765FC */
  Sleep_Msec   = 0x800FF4AC;  /* ROM: 0x00B7664C */
  Sleep_Sec    = 0x800FF500;  /* ROM: 0x00B766A0 */

/* build/src/code/jpegutils.o */
 /* .text */
  JpegUtils_ProcessQuantizationTable   = 0x800FF540;  /* ROM: 0x00B766E0 */
  JpegUtils_ParseHuffmanCodesLengths   = 0x800FF5A8;  /* ROM: 0x00B76748 */
  JpegUtils_GetHuffmanCodes            = 0x800FF62C;  /* ROM: 0x00B767CC */
  JpegUtils_SetHuffmanTable            = 0x800FF698;  /* ROM: 0x00B76838 */
  JpegUtils_ProcessHuffmanTableImpl    = 0x800FF740;  /* ROM: 0x00B768E0 */
  JpegUtils_ProcessHuffmanTable        = 0x800FF7FC;  /* ROM: 0x00B7699C */
  JpegUtils_SetHuffmanTableOld         = 0x800FF8D4;  /* ROM: 0x00B76A74 */
  JpegUtils_ProcessHuffmanTableImplOld = 0x800FF97C;  /* ROM: 0x00B76B1C */

/* build/src/code/jpegdecoder.o */
 /* .text */
  JpegDecoder_Decode          = 0x800FFA50;  /* ROM: 0x00B76BF0 */
  JpegDecoder_ProcessMcu      = 0x800FFC78;  /* ROM: 0x00B76E18 */
  JpegDecoder_ParseNextSymbol = 0x800FFE14;  /* ROM: 0x00B76FB4 */
  JpegDecoder_ReadBits        = 0x800FFF50;  /* ROM: 0x00B770F0 */
 /* .bss */
  sJpegBitStreamPtr      = 0x80175660;  /* ROM: 0x00BEC800 */
  sJpegBitStreamByteIdx  = 0x80175664;  /* ROM: 0x00BEC804 */
  sJpegBitStreamBitIdx   = 0x80175668;  /* ROM: 0x00BEC808 */
  sJpegBitStreamDontSkip = 0x80175669;  /* ROM: 0x00BEC809 */
  sJpegBitStreamCurWord  = 0x8017566C;  /* ROM: 0x00BEC80C */

/* build/src/libultra/io/pfsfreeblocks.o */
 /* .text */
  osPfsFreeBlocks = 0x80100040;  /* ROM: 0x00B771E0 */

/* build/src/libultra/gu/sinf.o */
 /* .text */
  sinf = 0x80100290;  /* ROM: 0x00B77430 */

/* build/src/libultra/gu/sins.o */
 /* .text */
  sins = 0x80100450;  /* ROM: 0x00B775F0 */

/* build/src/libultra/io/sptask.o */
 /* .text */
  _VirtualToPhysicalTask = 0x801004C0;  /* ROM: 0x00B77660 */
  osSpTaskLoad           = 0x801005CC;  /* ROM: 0x00B7776C */
  osSpTaskStartGo        = 0x80100734;  /* ROM: 0x00B778D4 */

/* build/src/libultra/io/motor.o */
 /* .text */
  __osMotorAccess = 0x80100780;  /* ROM: 0x00B77920 */
  _MakeMotorData  = 0x801008E8;  /* ROM: 0x00B77A88 */
  osMotorInit     = 0x801009F4;  /* ROM: 0x00B77B94 */
 /* .bss */
  osPifBuffers = 0x801756B0;  /* ROM: 0x00BEC850 */

/* build/src/libultra/io/siacs.o */
 /* .text */
  __osSiCreateAccessQueue = 0x80100B50;  /* ROM: 0x00B77CF0 */
  __osSiGetAccess         = 0x80100BA0;  /* ROM: 0x00B77D40 */
  __osSiRelAccess         = 0x80100BE4;  /* ROM: 0x00B77D84 */
 /* .data */
  gOSSiAccessQueueCreated = 0x80134CD0;  /* ROM: 0x00BABE70 */
 /* .bss */
  osSiMesgBuff      = 0x801757B0;  /* ROM: 0x00BEC950 */
  gOSSiMessageQueue = 0x801757B8;  /* ROM: 0x00BEC958 */

/* build/src/libultra/io/controller.o */
 /* .text */
  osContInit          = 0x80100C10;  /* ROM: 0x00B77DB0 */
  __osContGetInitData = 0x80100D6C;  /* ROM: 0x00B77F0C */
  __osPackRequestData = 0x80100E18;  /* ROM: 0x00B77FB8 */
 /* .data */
  gOSContInitialized = 0x80134CE0;  /* ROM: 0x00BABE80 */
 /* .bss */
  __osPifInternalBuff = 0x801757D0;  /* ROM: 0x00BEC970 */
  __osContLastPoll    = 0x80175810;  /* ROM: 0x00BEC9B0 */
  __osMaxControllers  = 0x80175811;  /* ROM: 0x00BEC9B1 */
  __osEepromTimer     = 0x80175818;  /* ROM: 0x00BEC9B8 */
  __osEepromTimerMsgQ = 0x80175838;  /* ROM: 0x00BEC9D8 */
  __osEepromTimerMsg  = 0x80175850;  /* ROM: 0x00BEC9F0 */

/* build/src/libultra/io/contreaddata.o */
 /* .text */
  osContStartReadData = 0x80100EF0;  /* ROM: 0x00B78090 */
  osContGetReadData   = 0x80100F74;  /* ROM: 0x00B78114 */
  __osPackReadData    = 0x80101000;  /* ROM: 0x00B781A0 */

/* build/src/libultra/gu/perspective.o */
 /* .text */
  guPerspectiveF = 0x801010D0;  /* ROM: 0x00B78270 */
  guPerspective  = 0x80101300;  /* ROM: 0x00B784A0 */

/* build/src/libultra/io/sprawdma.o */
 /* .text */
  __osSpRawStartDma = 0x80101360;  /* ROM: 0x00B78500 */

/* build/src/libultra/io/sirawdma.o */
 /* .text */
  __osSiRawStartDma = 0x801013F0;  /* ROM: 0x00B78590 */

/* build/src/libultra/io/sptaskyield.o */
 /* .text */
  osSpTaskYield = 0x801014A0;  /* ROM: 0x00B78640 */

/* build/src/libultra/io/pfsreadwritefile.o */
 /* .text */
  __osPfsGetNextPage = 0x801014C0;  /* ROM: 0x00B78660 */
  osPfsReadWriteFile = 0x80101594;  /* ROM: 0x00B78734 */
 /* .bss */
  __osPfsInodeCache = 0x80175860;  /* ROM: 0x00BECA00 */

/* build/src/libultra/io/pfsgetstatus.o */
 /* .text */
  __osPfsGetStatus         = 0x80101910;  /* ROM: 0x00B78AB0 */
  __osPfsRequestOneChannel = 0x801019E0;  /* ROM: 0x00B78B80 */
  __osPfsGetOneChannelData = 0x80101AA4;  /* ROM: 0x00B78C44 */
 /* .bss */
  gPifMempakBuf = 0x80175960;  /* ROM: 0x00BECB00 */

/* build/src/libultra/gu/lookat.o */
 /* .text */
  guLookAtF = 0x80101B90;  /* ROM: 0x00B78D30 */
  guLookAt  = 0x80101E34;  /* ROM: 0x00B78FD4 */

/* build/src/libultra/io/pfsallocatefile.o */
 /* .text */
  osPfsAllocateFile  = 0x80101EB0;  /* ROM: 0x00B79050 */
  __osPfsDeclearPage = 0x801021E4;  /* ROM: 0x00B79384 */

/* build/src/libultra/os/stoptimer.o */
 /* .text */
  osStopTimer = 0x80102330;  /* ROM: 0x00B794D0 */

/* build/src/libultra/io/contpfs.o */
 /* .text */
  __osSumcalc      = 0x80102420;  /* ROM: 0x00B795C0 */
  __osIdCheckSum   = 0x80102494;  /* ROM: 0x00B79634 */
  __osRepairPackId = 0x80102590;  /* ROM: 0x00B79730 */
  __osCheckPackId  = 0x801028E0;  /* ROM: 0x00B79A80 */
  __osGetId        = 0x80102A44;  /* ROM: 0x00B79BE4 */
  __osCheckId      = 0x80102BF0;  /* ROM: 0x00B79D90 */
  __osPfsRWInode   = 0x80102CC4;  /* ROM: 0x00B79E64 */
 /* .data */
  __osPfsInodeCacheChannel = 0x80134CF0;  /* ROM: 0x00BABE90 */
  __osPfsInodeCacheBank    = 0x80134CF4;  /* ROM: 0x00BABE94 */

/* build/src/libultra/io/pfsfindfile.o */
 /* .text */
  osPfsFindFile = 0x80103010;  /* ROM: 0x00B7A1B0 */

/* build/src/libultra/gu/sqrtf.o */
 /* .text */
  sqrtf = 0x801031E0;  /* ROM: 0x00B7A380 */

/* build/src/libultra/os/afterprenmi.o */
 /* .text */
  osAfterPreNMI = 0x801031F0;  /* ROM: 0x00B7A390 */

/* build/src/libultra/io/contquery.o */
 /* .text */
  osContStartQuery = 0x80103210;  /* ROM: 0x00B7A3B0 */
  osContGetQuery   = 0x8010328C;  /* ROM: 0x00B7A42C */

/* build/src/libultra/gu/lookathil.o */
 /* .text */
  guLookAtHiliteF = 0x801032B0;  /* ROM: 0x00B7A450 */
  guLookAtHilite  = 0x80103A70;  /* ROM: 0x00B7AC10 */

/* build/src/libultra/io/sp.o */
 /* .text */
  __osSpDeviceBusy = 0x80103B30;  /* ROM: 0x00B7ACD0 */

/* build/src/libultra/gu/position.o */
 /* .text */
  guPositionF = 0x80103BB0;  /* ROM: 0x00B7AD50 */
  guPosition  = 0x80103D58;  /* ROM: 0x00B7AEF8 */

/* build/src/libultra/io/sptaskyielded.o */
 /* .text */
  osSpTaskYielded = 0x80103DC0;  /* ROM: 0x00B7AF60 */

/* build/src/libultra/gu/rotate.o */
 /* .text */
  guRotateF = 0x80103E20;  /* ROM: 0x00B7AFC0 */
  guRotate  = 0x80103FA4;  /* ROM: 0x00B7B144 */

/* build/src/libultra/io/aisetfreq.o */
 /* .text */
  osAiSetFrequency = 0x80103FF0;  /* ROM: 0x00B7B190 */

/* build/src/libultra/os/getactivequeue.o */
 /* .text */
  __osGetActiveQueue = 0x80104140;  /* ROM: 0x00B7B2E0 */

/* build/src/libultra/io/dpgetstat.o */
 /* .text */
  osDpGetStatus = 0x801041C0;  /* ROM: 0x00B7B360 */

/* build/src/libultra/io/dpsetstat.o */
 /* .text */
  osDpSetStatus = 0x801041D0;  /* ROM: 0x00B7B370 */

/* build/src/libultra/io/pfsdeletefile.o */
 /* .text */
  osPfsDeleteFile     = 0x801041E0;  /* ROM: 0x00B7B380 */
  __osPfsReleasePages = 0x801043B8;  /* ROM: 0x00B7B558 */

/* build/src/libultra/gu/ortho.o */
 /* .text */
  guOrthoF = 0x80104450;  /* ROM: 0x00B7B5F0 */
  guOrtho  = 0x801045A4;  /* ROM: 0x00B7B744 */

/* build/src/libultra/gu/cosf.o */
 /* .text */
  cosf = 0x80104610;  /* ROM: 0x00B7B7B0 */

/* build/src/libultra/gu/coss.o */
 /* .text */
  coss = 0x80104780;  /* ROM: 0x00B7B920 */

/* build/src/libultra/io/visetevent.o */
 /* .text */
  osViSetEvent = 0x801047B0;  /* ROM: 0x00B7B950 */

/* build/src/libultra/io/pfsisplug.o */
 /* .text */
  osPfsIsPlug        = 0x80104810;  /* ROM: 0x00B7B9B0 */
  __osPfsRequestData = 0x8010499C;  /* ROM: 0x00B7BB3C */
  __osPfsGetInitData = 0x80104A50;  /* ROM: 0x00B7BBF0 */

/* build/src/libultra/gu/us2dex.o */
 /* .text */
  guS2DInitBg = 0x80104B00;  /* ROM: 0x00B7BCA0 */

/* build/src/libultra/io/pfsselectbank.o */
 /* .text */
  __osPfsSelectBank = 0x80104C80;  /* ROM: 0x00B7BE20 */

/* build/src/libultra/io/contsetch.o */
 /* .text */
  osContSetCh = 0x80104D00;  /* ROM: 0x00B7BEA0 */

/* build/src/libultra/io/pfsfilestate.o */
 /* .text */
  osPfsFileState = 0x80104D60;  /* ROM: 0x00B7BF00 */

/* build/src/libultra/io/pfsinitpak.o */
 /* .text */
  osPfsInitPak        = 0x80104F40;  /* ROM: 0x00B7C0E0 */
  __osPfsCheckRamArea = 0x80105148;  /* ROM: 0x00B7C2E8 */

/* build/src/libultra/io/pfschecker.o */
 /* .text */
  osPfsChecker  = 0x80105250;  /* ROM: 0x00B7C3F0 */
  func_80105788 = 0x80105788;  /* ROM: 0x00B7C928 */
  func_80105A60 = 0x80105A60;  /* ROM: 0x00B7CC00 */

/* build/src/libultra/io/aigetlen.o */
 /* .text */
  osAiGetLength = 0x80105C00;  /* ROM: 0x00B7CDA0 */

/* build/src/libultra/io/contramwrite.o */
 /* .text */
  __osContRamWrite = 0x80105CF0;  /* ROM: 0x00B7CE90 */

/* build/src/libultra/io/contramread.o */
 /* .text */
  __osContRamRead = 0x80105F40;  /* ROM: 0x00B7D0E0 */
 /* .data */
  __osPfsLastChannel = 0x80134D20;  /* ROM: 0x00BABEC0 */

/* build/src/libultra/io/crc.o */
 /* .text */
  __osContAddressCrc = 0x80106170;  /* ROM: 0x00B7D310 */
  __osContDataCrc    = 0x80106240;  /* ROM: 0x00B7D3E0 */

/* build/src/libultra/os/settimer.o */
 /* .text */
  osSetTimer = 0x801062E0;  /* ROM: 0x00B7D480 */

/* build/src/libultra/io/spgetstat.o */
 /* .text */
  __osSpGetStatus = 0x80106470;  /* ROM: 0x00B7D610 */

/* build/src/libultra/io/spsetstat.o */
 /* .text */
  __osSpSetStatus = 0x80106480;  /* ROM: 0x00B7D620 */

/* build/src/libultra/os/getcurrfaultedthread.o */
 /* .text */
  __osGetCurrFaultedThread = 0x801064C0;  /* ROM: 0x00B7D660 */

/* build/src/libultra/libc/llcvt.o */
 /* .text */
  __d_to_ll  = 0x80106550;  /* ROM: 0x00B7D6F0 */
  __f_to_ll  = 0x8010656C;  /* ROM: 0x00B7D70C */
  __d_to_ull = 0x80106588;  /* ROM: 0x00B7D728 */
  __f_to_ull = 0x80106628;  /* ROM: 0x00B7D7C8 */
  __ll_to_d  = 0x801066C4;  /* ROM: 0x00B7D864 */
  __ll_to_f  = 0x801066DC;  /* ROM: 0x00B7D87C */
  __ull_to_d = 0x801066F4;  /* ROM: 0x00B7D894 */
  __ull_to_f = 0x80106728;  /* ROM: 0x00B7D8C8 */

/* build/src/libultra/io/vigetcurrframebuf.o */
 /* .text */
  osViGetCurrentFramebuffer = 0x80106760;  /* ROM: 0x00B7D900 */

/* build/src/libultra/io/spsetpc.o */
 /* .text */
  __osSpSetPc = 0x801067A0;  /* ROM: 0x00B7D940 */

/* build/src/libultra/libc/sqrt.o */
 /* .text */
  sqrt = 0x801067D0;  /* ROM: 0x00B7D970 */

/* build/src/libultra/libc/absf.o */
 /* .text */
  absf = 0x801067E0;  /* ROM: 0x00B7D980 */

/* build/src/code/code_801067F0.o */
 /* .text */
  func_801067F0 = 0x801067F0;  /* ROM: 0x00B7D990 */

/* build/src/code/code_80106860.o */
 /* .text */
  func_80106860 = 0x80106860;  /* ROM: 0x00B7DA00 */

/* build/src/code/code_801068B0.o */
 /* .text */
  func_801068B0 = 0x801068B0;  /* ROM: 0x00B7DA50 */

/* build/src/code/z_message_PAL.o */
 /* .text */
  Message_ResetOcarinaNoteState    = 0x801069B0;  /* ROM: 0x00B7DB50 */
  Message_UpdateOcarinaGame        = 0x80106AA8;  /* ROM: 0x00B7DC48 */
  Message_ShouldAdvance            = 0x80106BC8;  /* ROM: 0x00B7DD68 */
  Message_ShouldAdvanceSilent      = 0x80106C88;  /* ROM: 0x00B7DE28 */
  Message_CloseTextbox             = 0x80106CCC;  /* ROM: 0x00B7DE6C */
  Message_HandleChoiceSelection    = 0x80106D40;  /* ROM: 0x00B7DEE0 */
  Message_DrawTextChar             = 0x80106F1C;  /* ROM: 0x00B7E0BC */
  Message_GrowTextbox              = 0x80107244;  /* ROM: 0x00B7E3E4 */
  Message_FindMessage              = 0x80107448;  /* ROM: 0x00B7E5E8 */
  Message_FindCreditsMessage       = 0x80107628;  /* ROM: 0x00B7E7C8 */
  Message_SetTextColor             = 0x801076CC;  /* ROM: 0x00B7E86C */
  Message_DrawTextboxIcon          = 0x80107980;  /* ROM: 0x00B7EB20 */
  Message_DrawItemIcon             = 0x801080B4;  /* ROM: 0x00B7F254 */
  Message_HandleOcarina            = 0x801083F8;  /* ROM: 0x00B7F598 */
  Message_DrawText                 = 0x801086B0;  /* ROM: 0x00B7F850 */
  Message_LoadItemIcon             = 0x80109968;  /* ROM: 0x00B80B08 */
  Message_Decode                   = 0x80109B3C;  /* ROM: 0x00B80CDC */
  Message_OpenText                 = 0x8010B0C0;  /* ROM: 0x00B82260 */
  Message_StartTextbox             = 0x8010B680;  /* ROM: 0x00B82820 */
  Message_ContinueTextbox          = 0x8010B720;  /* ROM: 0x00B828C0 */
  Message_StartOcarina             = 0x8010B820;  /* ROM: 0x00B829C0 */
  func_8010BD58                    = 0x8010BD58;  /* ROM: 0x00B82EF8 */
  func_8010BD88                    = 0x8010BD88;  /* ROM: 0x00B82F28 */
  Message_GetState                 = 0x8010BDBC;  /* ROM: 0x00B82F5C */
  Message_DrawTextBox              = 0x8010BED8;  /* ROM: 0x00B83078 */
  Message_SetView                  = 0x8010C358;  /* ROM: 0x00B834F8 */
  Message_DrawMain                 = 0x8010C39C;  /* ROM: 0x00B8353C */
  Message_DrawDebugVariableChanged = 0x8010F2CC;  /* ROM: 0x00B8646C */
  Message_DrawDebugText            = 0x8010F494;  /* ROM: 0x00B86634 */
  Message_Draw                     = 0x8010F58C;  /* ROM: 0x00B8672C */
  Message_Update                   = 0x8010F6F0;  /* ROM: 0x00B86890 */
  Message_SetTables                = 0x8011040C;  /* ROM: 0x00B875AC */
 /* .data */
  sTextFade                        = 0x8014B2F0;  /* ROM: 0x00BC2490 */
  D_8014B2F4                       = 0x8014B2F4;  /* ROM: 0x00BC2494 */
  sOcarinaNoteBufPos               = 0x8014B2F8;  /* ROM: 0x00BC2498 */
  sOcarinaNoteBufLen               = 0x8014B2FC;  /* ROM: 0x00BC249C */
  sTextboxSkipped                  = 0x8014B300;  /* ROM: 0x00BC24A0 */
  sNextTextId                      = 0x8014B304;  /* ROM: 0x00BC24A4 */
  sTextIsCredits                   = 0x8014B308;  /* ROM: 0x00BC24A8 */
  D_8014B30C                       = 0x8014B30C;  /* ROM: 0x00BC24AC */
  sLastPlayedSong                  = 0x8014B310;  /* ROM: 0x00BC24B0 */
  sHasSunsSong                     = 0x8014B314;  /* ROM: 0x00BC24B4 */
  sMessageHasSetSfx                = 0x8014B318;  /* ROM: 0x00BC24B8 */
  sOcarinaSongBitFlags             = 0x8014B31C;  /* ROM: 0x00BC24BC */
  sNesMessageEntryTable            = 0x8014B320;  /* ROM: 0x00BC24C0 */
  sGerMessageEntryTable            = 0x8014F548;  /* ROM: 0x00BC66E8 */
  sFraMessageEntryTable            = 0x80151658;  /* ROM: 0x00BC87F8 */
  sStaffMessageEntryTable          = 0x80153768;  /* ROM: 0x00BCA908 */
  sNesMessageEntryTablePtr         = 0x801538F0;  /* ROM: 0x00BCAA90 */
  sGerMessageEntryTablePtr         = 0x801538F4;  /* ROM: 0x00BCAA94 */
  sFraMessageEntryTablePtr         = 0x801538F8;  /* ROM: 0x00BCAA98 */
  sStaffMessageEntryTablePtr       = 0x801538FC;  /* ROM: 0x00BCAA9C */
  sTextboxBackgroundForePrimColors = 0x80153900;  /* ROM: 0x00BCAAA0 */
  sTextboxBackgroundBackPrimColors = 0x80153930;  /* ROM: 0x00BCAAD0 */
  sTextboxBackgroundYOffsets       = 0x80153948;  /* ROM: 0x00BCAAE8 */
  sOcarinaNoteBuf                  = 0x8015394C;  /* ROM: 0x00BCAAEC */
  sOcarinaNotesAlphaValues         = 0x80153958;  /* ROM: 0x00BCAAF8 */
  gOcarinaSongItemMap              = 0x8015396C;  /* ROM: 0x00BCAB0C */
  sFontWidths                      = 0x80153A00;  /* ROM: 0x00BCABA0 */
  D_80153D7C                       = 0x80153D7C;  /* ROM: 0x00BCAF1C */
  gGameOverTimer                   = 0x80153D80;  /* ROM: 0x00BCAF20 */
 /* .bss */
  sCharTexSize       = 0x801759A0;  /* ROM: 0x00BECB40 */
  sCharTexScale      = 0x801759A4;  /* ROM: 0x00BECB44 */
  sOcarinaNoteAPrimR = 0x801759A8;  /* ROM: 0x00BECB48 */
  sOcarinaNoteAPrimB = 0x801759AA;  /* ROM: 0x00BECB4A */
  sOcarinaNoteAPrimG = 0x801759AC;  /* ROM: 0x00BECB4C */
  sOcarinaNoteAEnvR  = 0x801759AE;  /* ROM: 0x00BECB4E */
  sOcarinaNoteAEnvB  = 0x801759B0;  /* ROM: 0x00BECB50 */
  sOcarinaNoteAEnvG  = 0x801759B2;  /* ROM: 0x00BECB52 */
  sOcarinaNoteCPrimR = 0x801759B4;  /* ROM: 0x00BECB54 */
  sOcarinaNoteCPrimB = 0x801759B6;  /* ROM: 0x00BECB56 */
  sOcarinaNoteCPrimG = 0x801759B8;  /* ROM: 0x00BECB58 */
  sOcarinaNoteCEnvR  = 0x801759BA;  /* ROM: 0x00BECB5A */
  sOcarinaNoteCEnvB  = 0x801759BC;  /* ROM: 0x00BECB5C */
  sOcarinaNoteCEnvG  = 0x801759BE;  /* ROM: 0x00BECB5E */

/* build/src/code/z_game_over.o */
 /* .text */
  GameOver_Init         = 0x80110450;  /* ROM: 0x00B875F0 */
  GameOver_FadeInLights = 0x80110460;  /* ROM: 0x00B87600 */
  GameOver_Update       = 0x801104C8;  /* ROM: 0x00B87668 */

/* build/src/code/z_construct.o */
 /* .text */
  func_80110990 = 0x80110990;  /* ROM: 0x00B87B30 */
  func_801109B0 = 0x801109B0;  /* ROM: 0x00B87B50 */
  Message_Init  = 0x80110F68;  /* ROM: 0x00B88108 */
  func_80111070 = 0x80111070;  /* ROM: 0x00B88210 */
  func_80112098 = 0x80112098;  /* ROM: 0x00B89238 */

/* build/src/code/z_effect_soft_sprite_dlftbls.o */
 /* .data */
  gEffectSsOverlayTable = 0x801159B0;  /* ROM: 0x00B8CB50 */

/* build/src/code/z_game_dlftbls.o */
 /* .data */
  gGameStateOverlayTable = 0x8011F830;  /* ROM: 0x00B969D0 */

/* build/src/code/z_map_data.o */
 /* .data */
  gMapDataTable = 0x801257F8;  /* ROM: 0x00B9C998 */

/* build/src/code/audio_data.o */
 /* .data */
  gSawtoothWaveSample               = 0x8012E090;  /* ROM: 0x00BA5230 */
  gTriangleWaveSample               = 0x8012E290;  /* ROM: 0x00BA5430 */
  gSineWaveSample                   = 0x8012E490;  /* ROM: 0x00BA5630 */
  gSquareWaveSample                 = 0x8012E690;  /* ROM: 0x00BA5830 */
  gWhiteNoiseSample                 = 0x8012E890;  /* ROM: 0x00BA5A30 */
  D_8012EA90                        = 0x8012EA90;  /* ROM: 0x00BA5C30 */
  gEighthPulseWaveSample            = 0x8012EC90;  /* ROM: 0x00BA5E30 */
  gQuarterPulseWaveSample           = 0x8012EE90;  /* ROM: 0x00BA6030 */
  gWaveSamples                      = 0x8012F090;  /* ROM: 0x00BA6230 */
  gBendPitchOneOctaveFrequencies    = 0x8012F0B4;  /* ROM: 0x00BA6254 */
  gBendPitchTwoSemitonesFrequencies = 0x8012F4B4;  /* ROM: 0x00BA6654 */
  gNoteFrequencies                  = 0x8012F8B4;  /* ROM: 0x00BA6A54 */
  gDefaultShortNoteVelocityTable    = 0x8012FAB4;  /* ROM: 0x00BA6C54 */
  gDefaultShortNoteGateTimeTable    = 0x8012FAC4;  /* ROM: 0x00BA6C64 */
  gDefaultEnvelope                  = 0x8012FAD4;  /* ROM: 0x00BA6C74 */
  gZeroNoteSub                      = 0x8012FAE4;  /* ROM: 0x00BA6C84 */
  gDefaultNoteSub                   = 0x8012FB04;  /* ROM: 0x00BA6CA4 */
  gHeadsetPanQuantization           = 0x8012FB24;  /* ROM: 0x00BA6CC4 */
  D_8012FBA4                        = 0x8012FBA4;  /* ROM: 0x00BA6D44 */
  D_8012FBA8                        = 0x8012FBA8;  /* ROM: 0x00BA6D48 */
  gHeadsetPanVolume                 = 0x8012FC28;  /* ROM: 0x00BA6DC8 */
  gStereoPanVolume                  = 0x8012FE28;  /* ROM: 0x00BA6FC8 */
  gDefaultPanVolume                 = 0x80130028;  /* ROM: 0x00BA71C8 */
  sLowPassFilterData                = 0x80130228;  /* ROM: 0x00BA73C8 */
  sHighPassFilterData               = 0x80130328;  /* ROM: 0x00BA74C8 */
  D_80130418                        = 0x80130418;  /* ROM: 0x00BA75B8 */

/* build/src/code/audio_sound_params.o */
 /* .data */
  sEnemyBankParams   = 0x80131F70;  /* ROM: 0x00BA9110 */
  sPlayerBankParams  = 0x8013273C;  /* ROM: 0x00BA98DC */
  sItemBankParams    = 0x80132ABC;  /* ROM: 0x00BA9C5C */
  sEnvBankParams     = 0x80132BFC;  /* ROM: 0x00BA9D9C */
  sSystemBankParams  = 0x80132FDC;  /* ROM: 0x00BAA17C */
  sOcarinaBankParams = 0x801330FC;  /* ROM: 0x00BAA29C */
  sVoiceBankParams   = 0x8013311C;  /* ROM: 0x00BAA2BC */
  gSoundParams       = 0x8013331C;  /* ROM: 0x00BAA4BC */

/* build/src/code/audio_init_params.o */
 /* .data */
  D_80133420  = 0x80133420;  /* ROM: 0x00BAA5C0 */
  gAudioSpecs = 0x801337C8;  /* ROM: 0x00BAA968 */
 /* .rodata */
  D_8014A6C0 = 0x8014A6C0;  /* ROM: 0x00BC1860 */
  D_8014A6C4 = 0x8014A6C4;  /* ROM: 0x00BC1864 */
 /* .bss */
  D_8016F0E0    = 0x8016F0E0;  /* ROM: 0x00BE6280 */
  gAudioContext = 0x8016F180;  /* ROM: 0x00BE6320 */
  D_801755D0    = 0x801755D0;  /* ROM: 0x00BEC770 */
  D_801755D8    = 0x801755D8;  /* ROM: 0x00BEC778 */

/* build/src/code/logseverity.o */
 /* .data */
  gOverlayLogSeverity = 0x80133BC0;  /* ROM: 0x00BAAD60 */

/* build/src/buffers/zbuffer.o */
 /* .bss */
  gZBuffer = 0x801759C0;  /* ROM: 0x00BECB60 */

/* build/src/buffers/gfxbuffers.o */
 /* .bss */
  gGfxSPTaskOutputBuffer = 0x8019B1C0;  /* ROM: 0x00C12360 */
  gGfxSPTaskYieldBuffer  = 0x801B31C0;  /* ROM: 0x00C2A360 */
  gGfxSPTaskStack        = 0x801B3DC0;  /* ROM: 0x00C2AF60 */
  gGfxPools              = 0x801B41C0;  /* ROM: 0x00C2B360 */

/* build/src/buffers/heaps.o */
 /* .bss */
  gAudioHeap  = 0x801D89E0;  /* ROM: 0x00C4FB80 */
  gSystemHeap = 0x802109E0;  /* ROM: 0x00C87B80 */

