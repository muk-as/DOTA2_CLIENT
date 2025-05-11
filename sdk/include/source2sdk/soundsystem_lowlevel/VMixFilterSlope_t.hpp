#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Enumerator count: 9
        // Alignment: 1
        // Size: 0x1
        enum class VMixFilterSlope_t : std::uint8_t
        {
            FILTER_SLOPE_1POLE_6dB = 0x0,
            FILTER_SLOPE_1POLE_12dB = 0x1,
            FILTER_SLOPE_1POLE_18dB = 0x2,
            FILTER_SLOPE_1POLE_24dB = 0x3,
            FILTER_SLOPE_12dB = 0x4,
            FILTER_SLOPE_24dB = 0x5,
            FILTER_SLOPE_36dB = 0x6,
            FILTER_SLOPE_48dB = 0x7,
            FILTER_SLOPE_MAX = 0x7,
        };
    };
};
