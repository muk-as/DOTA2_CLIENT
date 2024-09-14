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
    enum class ECoachTeammateRating : std::uint32_t
    {
        k_ECoachTeammateRating_None = 0x0,
        k_ECoachTeammateRating_Positive = 0x1,
        k_ECoachTeammateRating_Negative = 0x2,
        k_ECoachTeammateRating_Abusive = 0x3,
    };
};
