#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class EPlayerCoachMatchFlag : std::uint32_t
    {
        k_EPlayerCoachMatchFlag_EligibleForRewards = 0x1,
        k_EPlayerCoachMatchFlag_PrivateCoach = 0x2,
    };
};
