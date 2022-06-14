#define PORTAMENTO_IS_SPECIAL(x) ((x).mode & 0x80)
#define PORTAMENTO_MODE(x) ((x).mode & ~0x80)
#define PORTAMENTO_MODE_1 1
#define PORTAMENTO_MODE_2 2
#define PORTAMENTO_MODE_3 3
#define PORTAMENTO_MODE_4 4
#define PORTAMENTO_MODE_5 5

u8 AudioSeq_ScriptReadU8(SeqScriptState* state);
s16 AudioSeq_ScriptReadS16(SeqScriptState* state);
u16 AudioSeq_ScriptReadCompressedU16(SeqScriptState* state);
u8 AudioSeq_GetInstrument(SequenceChannel* channel, u8 instId, Instrument** instOut, AdsrSettings* adsr);

#define CMD_ARGS_0() 0
#define CMD_ARGS_1(arg0Type) (((sizeof(arg0Type) - 1) << 7) | 1)
#define CMD_ARGS_2(arg0Type, arg1Type) (((sizeof(arg0Type) - 1) << 7) | ((sizeof(arg1Type) - 1) << 6) | 2)
#define CMD_ARGS_3(arg0Type, arg1Type, arg2Type) \
    (((sizeof(arg0Type) - 1) << 7) | ((sizeof(arg1Type) - 1) << 6) | ((sizeof(arg2Type) - 1) << 5) | 3)

extern u8 sSeqInstructionArgsTable[92];

u16 AudioSeq_GetScriptControlFlowArgument(SeqScriptState* state, u8 cmd);
s32 AudioSeq_HandleScriptFlowControl(SequencePlayer* seqPlayer, SeqScriptState* state, s32 cmd, s32 cmdArg);
void AudioSeq_InitSequenceChannel(SequenceChannel* channel);
s32 AudioSeq_SeqChannelSetLayer(SequenceChannel* channel, s32 layerIdx);
void AudioSeq_SeqLayerDisable(SequenceLayer* layer);
void AudioSeq_SeqLayerFree(SequenceChannel* channel, s32 layerIdx);
void AudioSeq_SequencePlayerSetupChannels(SequencePlayer* seqPlayer, u16 channelBits);
void AudioSeq_SequencePlayerDisableChannels(SequencePlayer* seqPlayer, u16 channelBitsUnused);
void AudioSeq_SequenceChannelEnable(SequencePlayer* seqPlayer, u8 channelIdx, void* script);
void AudioSeq_InitLayerFreelist(void);
u8 AudioSeq_ScriptReadU8(SeqScriptState* state);
s16 AudioSeq_ScriptReadS16(SeqScriptState* state);
u16 AudioSeq_ScriptReadCompressedU16(SeqScriptState* state);
void AudioSeq_SeqLayerProcessScriptStep1(SequenceLayer* layer);
s32 AudioSeq_SeqLayerProcessScriptStep2(SequenceLayer* layer);
s32 AudioSeq_SeqLayerProcessScriptStep3(SequenceLayer* layer, s32 cmd);
s32 AudioSeq_SeqLayerProcessScriptStep4(SequenceLayer* layer, s32 cmd);
s32 AudioSeq_SeqLayerProcessScriptStep5(SequenceLayer* layer, s32 sameSound);
void AudioSeq_SeqLayerProcessScript(SequenceLayer* layer);
void AudioSeq_SeqLayerProcessScriptStep1(SequenceLayer* layer);
s32 AudioSeq_SeqLayerProcessScriptStep5(SequenceLayer* layer, s32 sameSound);
s32 AudioSeq_SeqLayerProcessScriptStep2(SequenceLayer* layer);
s32 AudioSeq_SeqLayerProcessScriptStep4(SequenceLayer* layer, s32 cmd);
s32 AudioSeq_SeqLayerProcessScriptStep3(SequenceLayer* layer, s32 cmd);
void AudioSeq_SetChannelPriorities(SequenceChannel* channel, u8 arg1);
u8 AudioSeq_GetInstrument(SequenceChannel* channel, u8 instId, Instrument** instOut, AdsrSettings* adsr);
void AudioSeq_SetInstrument(SequenceChannel* channel, u8 instId);
void AudioSeq_SequenceChannelSetVolume(SequenceChannel* channel, u8 volume);
void AudioSeq_SequenceChannelProcessScript(SequenceChannel* channel);
void AudioSeq_SequencePlayerProcessSequence(SequencePlayer* seqPlayer);