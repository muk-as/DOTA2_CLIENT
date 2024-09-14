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
    enum class EMatchBehaviorScoreVariance : std::uint32_t
    {
        k_EMatchBehaviorScoreVariance_Invalid = 0x0,
        k_EMatchBehaviorScoreVariance_Low = 0x1,
        k_EMatchBehaviorScoreVariance_Medium = 0x2,
        k_EMatchBehaviorScoreVariance_High = 0x3,
    };
};
