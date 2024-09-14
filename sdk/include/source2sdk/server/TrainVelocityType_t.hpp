#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class TrainVelocityType_t : std::uint32_t
    {
        TrainVelocity_Instantaneous = 0x0,
        TrainVelocity_LinearBlend = 0x1,
        TrainVelocity_EaseInEaseOut = 0x2,
    };
};
