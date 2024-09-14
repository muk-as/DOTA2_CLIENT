#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class TrainOrientationType_t : std::uint32_t
    {
        TrainOrientation_Fixed = 0x0,
        TrainOrientation_AtPathTracks = 0x1,
        TrainOrientation_LinearBlend = 0x2,
        TrainOrientation_EaseInEaseOut = 0x3,
    };
};
