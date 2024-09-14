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
    enum class AbilityLearnResult_t : std::uint32_t
    {
        ABILITY_CAN_BE_UPGRADED = 0x0,
        ABILITY_CANNOT_BE_UPGRADED_NOT_UPGRADABLE = 0x1,
        ABILITY_CANNOT_BE_UPGRADED_AT_MAX = 0x2,
        ABILITY_CANNOT_BE_UPGRADED_REQUIRES_LEVEL = 0x3,
        ABILITY_NOT_LEARNABLE = 0x4,
    };
};
