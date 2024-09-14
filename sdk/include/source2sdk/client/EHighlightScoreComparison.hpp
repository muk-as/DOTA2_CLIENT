#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class EHighlightScoreComparison : std::uint32_t
    {
        // MPropertyFriendlyName "Less Than"
        k_eScoreLessThan = 0x0,
        // MPropertyFriendlyName "Less Than Or Equal"
        k_eScoreLessThanOrEqual = 0x1,
        // MPropertyFriendlyName "Equal"
        k_eScoreEqual = 0x2,
        // MPropertyFriendlyName "Greater Than Or Equal"
        k_eScoreGreaterThanOrEqual = 0x3,
        // MPropertyFriendlyName "Greater Than"
        k_eScoreGreaterThan = 0x4,
    };
};
