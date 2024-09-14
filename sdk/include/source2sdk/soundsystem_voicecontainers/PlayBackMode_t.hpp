#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class PlayBackMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Random"
        Random = 0x0,
        // MPropertyFriendlyName "Random No Repeats"
        RandomNoRepeats = 0x1,
        // MPropertyFriendlyName "Random Avoid Last"
        RandomAvoidLast = 0x2,
        // MPropertyFriendlyName "Sequential"
        Sequential = 0x3,
        // MPropertyFriendlyName "Random With Weights"
        RandomWeights = 0x4,
    };
};
