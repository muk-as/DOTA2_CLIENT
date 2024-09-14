#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Enumerator count: 9
    // Alignment: 1
    // Size: 0x1
    enum class VMixFilterSlope_t : std::uint8_t
    {
        FILTER_SLOPE_1POLE_6dB = 0,
        FILTER_SLOPE_1POLE_12dB = 1,
        FILTER_SLOPE_1POLE_18dB = 2,
        FILTER_SLOPE_1POLE_24dB = 3,
        FILTER_SLOPE_12dB = 4,
        FILTER_SLOPE_24dB = 5,
        FILTER_SLOPE_36dB = 6,
        FILTER_SLOPE_48dB = 7,
        FILTER_SLOPE_MAX = 7,
    };
};
