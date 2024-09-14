#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_ABILITY_TARGET_TYPE : std::uint32_t
    {
        DOTA_ABILITY_TARGET_NONE = 0x0,
        DOTA_ABILITY_TARGET_SELF = 0x1,
        DOTA_ABILITY_TARGET_ALLY_HERO = 0x2,
        DOTA_ABILITY_TARGET_ALLY_CREEP = 0x3,
        DOTA_ABILITY_TARGET_ENEMY_HERO = 0x4,
        DOTA_ABILITY_TARGET_ENEMY_CREEP = 0x5,
    };
};
