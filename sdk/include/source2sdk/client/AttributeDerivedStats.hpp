#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class AttributeDerivedStats : std::uint32_t
    {
        DOTA_ATTRIBUTE_STRENGTH_DAMAGE = 0x0,
        DOTA_ATTRIBUTE_STRENGTH_HP = 0x1,
        DOTA_ATTRIBUTE_STRENGTH_HP_REGEN = 0x2,
        DOTA_ATTRIBUTE_AGILITY_DAMAGE = 0x3,
        DOTA_ATTRIBUTE_AGILITY_ARMOR = 0x4,
        DOTA_ATTRIBUTE_AGILITY_ATTACK_SPEED = 0x5,
        DOTA_ATTRIBUTE_INTELLIGENCE_DAMAGE = 0x6,
        DOTA_ATTRIBUTE_INTELLIGENCE_MANA = 0x7,
        DOTA_ATTRIBUTE_INTELLIGENCE_MANA_REGEN = 0x8,
        DOTA_ATTRIBUTE_INTELLIGENCE_MAGIC_RESIST = 0x9,
        DOTA_ATTRIBUTE_ALL_DAMAGE = 0xa,
    };
};
