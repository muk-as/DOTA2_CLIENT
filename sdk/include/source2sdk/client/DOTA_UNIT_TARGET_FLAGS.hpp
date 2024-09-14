#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 23
    // Alignment: 4
    // Size: 0x4
    // 
    // metadata: MEnumFlagsWithOverlappingBits
    enum class DOTA_UNIT_TARGET_FLAGS : std::uint32_t
    {
        DOTA_UNIT_TARGET_FLAG_NONE = 0x0,
        DOTA_UNIT_TARGET_FLAG_RANGED_ONLY = 0x2,
        DOTA_UNIT_TARGET_FLAG_MELEE_ONLY = 0x4,
        DOTA_UNIT_TARGET_FLAG_DEAD = 0x8,
        DOTA_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES = 0x10,
        DOTA_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES = 0x20,
        DOTA_UNIT_TARGET_FLAG_INVULNERABLE = 0x40,
        DOTA_UNIT_TARGET_FLAG_FOW_VISIBLE = 0x80,
        DOTA_UNIT_TARGET_FLAG_NO_INVIS = 0x100,
        DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS = 0x200,
        DOTA_UNIT_TARGET_FLAG_PLAYER_CONTROLLED = 0x400,
        DOTA_UNIT_TARGET_FLAG_NOT_DOMINATED = 0x800,
        DOTA_UNIT_TARGET_FLAG_NOT_SUMMONED = 0x1000,
        DOTA_UNIT_TARGET_FLAG_NOT_ILLUSIONS = 0x2000,
        DOTA_UNIT_TARGET_FLAG_NOT_ATTACK_IMMUNE = 0x4000,
        DOTA_UNIT_TARGET_FLAG_MANA_ONLY = 0x8000,
        DOTA_UNIT_TARGET_FLAG_CHECK_DISABLE_HELP = 0x10000,
        DOTA_UNIT_TARGET_FLAG_NOT_CREEP_HERO = 0x20000,
        DOTA_UNIT_TARGET_FLAG_OUT_OF_WORLD = 0x40000,
        DOTA_UNIT_TARGET_FLAG_NOT_NIGHTMARED = 0x80000,
        DOTA_UNIT_TARGET_FLAG_PREFER_ENEMIES = 0x100000,
        DOTA_UNIT_TARGET_FLAG_RESPECT_OBSTRUCTIONS = 0x200000,
        DOTA_UNIT_TARGET_FLAG_CAN_BE_SEEN = 0x180,
    };
};
