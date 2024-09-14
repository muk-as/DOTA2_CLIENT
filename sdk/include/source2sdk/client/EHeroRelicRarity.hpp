#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EHeroRelicRarity : std::uint32_t
    {
        HERO_RELIC_RARITY_INVALID = 0xffffffff,
        HERO_RELIC_RARITY_COMMON = 0x0,
        HERO_RELIC_RARITY_RARE = 0x1,
    };
};
