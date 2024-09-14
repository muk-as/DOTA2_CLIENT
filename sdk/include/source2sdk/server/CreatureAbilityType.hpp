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
    enum class CreatureAbilityType : std::uint32_t
    {
        CREATURE_ABILITY_OFFENSIVE = 0x0,
        CREATURE_ABILITY_DEFENSIVE = 0x1,
        CREATURE_ABILITY_ESCAPE = 0x2,
    };
};
