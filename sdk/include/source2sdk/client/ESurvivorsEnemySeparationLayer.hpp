#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ESurvivorsEnemySeparationLayer : std::uint32_t
    {
        OFF = 0xffffffff,
        SMALL = 0x1,
        LARGE = 0x2,
        ELITE = 0x3,
    };
};
