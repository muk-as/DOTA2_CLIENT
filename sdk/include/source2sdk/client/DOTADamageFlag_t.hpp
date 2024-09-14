#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 20
    // Alignment: 4
    // Size: 0x4
    enum class DOTADamageFlag_t : std::uint32_t
    {
        DOTA_DAMAGE_FLAG_NONE = 0x0,
        DOTA_DAMAGE_FLAG_IGNORES_MAGIC_ARMOR = 0x1,
        DOTA_DAMAGE_FLAG_IGNORES_PHYSICAL_ARMOR = 0x2,
        DOTA_DAMAGE_FLAG_BYPASSES_INVULNERABILITY = 0x4,
        DOTA_DAMAGE_FLAG_BYPASSES_PHYSICAL_BLOCK = 0x8,
        DOTA_DAMAGE_FLAG_REFLECTION = 0x10,
        DOTA_DAMAGE_FLAG_HPLOSS = 0x20,
        DOTA_DAMAGE_FLAG_NO_DIRECTOR_EVENT = 0x40,
        DOTA_DAMAGE_FLAG_NON_LETHAL = 0x80,
        DOTA_DAMAGE_FLAG_NO_DAMAGE_MULTIPLIERS = 0x200,
        DOTA_DAMAGE_FLAG_NO_SPELL_AMPLIFICATION = 0x400,
        DOTA_DAMAGE_FLAG_DONT_DISPLAY_DAMAGE_IF_SOURCE_HIDDEN = 0x800,
        DOTA_DAMAGE_FLAG_NO_SPELL_LIFESTEAL = 0x1000,
        DOTA_DAMAGE_FLAG_PROPERTY_FIRE = 0x2000,
        DOTA_DAMAGE_FLAG_IGNORES_BASE_PHYSICAL_ARMOR = 0x4000,
        DOTA_DAMAGE_FLAG_SECONDARY_PROJECTILE_ATTACK = 0x8000,
        DOTA_DAMAGE_FLAG_FORCE_SPELL_AMPLIFICATION = 0x10000,
        DOTA_DAMAGE_FLAG_MAGIC_AUTO_ATTACK = 0x20000,
        DOTA_DAMAGE_FLAG_ATTACK_MODIFIER = 0x40000,
        DOTA_DAMAGE_FLAG_BYPASSES_ALL_BLOCK = 0x80000,
    };
};
