#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class VMixPannerType_t : std::uint32_t
    {
        PANNER_TYPE_LINEAR = 0x0,
        PANNER_TYPE_EQUAL_POWER = 0x1,
    };
};
