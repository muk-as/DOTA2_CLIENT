#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Enumerator count: 10
    // Alignment: 2
    // Size: 0x2
    enum class VMixFilterType_t : std::uint16_t
    {
        FILTER_UNKNOWN = 0xffff,
        FILTER_LOWPASS = 0x0,
        FILTER_HIGHPASS = 0x1,
        FILTER_BANDPASS = 0x2,
        FILTER_NOTCH = 0x3,
        FILTER_PEAKING_EQ = 0x4,
        FILTER_LOW_SHELF = 0x5,
        FILTER_HIGH_SHELF = 0x6,
        FILTER_ALLPASS = 0x7,
        FILTER_PASSTHROUGH = 0x8,
    };
};
