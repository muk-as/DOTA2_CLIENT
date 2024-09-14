#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class AnimationProcessingType_t : std::uint32_t
    {
        ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
        ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
        ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
        ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
        ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
        ANIMATION_PROCESSING_MAX = 0x5,
    };
};
