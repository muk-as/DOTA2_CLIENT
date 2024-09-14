#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_RUNES : std::uint32_t
    {
        DOTA_RUNE_INVALID = 0xffffffff,
        DOTA_RUNE_DOUBLEDAMAGE = 0x0,
        DOTA_RUNE_HASTE = 0x1,
        DOTA_RUNE_ILLUSION = 0x2,
        DOTA_RUNE_INVISIBILITY = 0x3,
        DOTA_RUNE_REGENERATION = 0x4,
        DOTA_RUNE_BOUNTY = 0x5,
        DOTA_RUNE_ARCANE = 0x6,
        DOTA_RUNE_WATER = 0x7,
        DOTA_RUNE_XP = 0x8,
        DOTA_RUNE_SHIELD = 0x9,
        DOTA_RUNE_COUNT = 0xa,
    };
};
