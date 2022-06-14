#define KALEIDO_OVERLAY(name, nameString)                                                                    \
    {                                                                                                        \
        NULL, (u32)_ovl_##name##SegmentRomStart, (u32)_ovl_##name##SegmentRomEnd, _ovl_##name##SegmentStart, \
            _ovl_##name##SegmentEnd, 0, nameString,                                                          \
    }

extern void* sKaleidoAreaPtr;