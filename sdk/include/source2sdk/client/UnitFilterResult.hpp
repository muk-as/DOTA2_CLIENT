#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 29
    // Alignment: 4
    // Size: 0x4
    enum class UnitFilterResult : std::uint32_t
    {
        UF_SUCCESS = 0x0,
        UF_FAIL_FRIENDLY = 0x1,
        UF_FAIL_ENEMY = 0x2,
        UF_FAIL_HERO = 0x3,
        UF_FAIL_CONSIDERED_HERO = 0x4,
        UF_FAIL_CREEP = 0x5,
        UF_FAIL_BUILDING = 0x6,
        UF_FAIL_COURIER = 0x7,
        UF_FAIL_OTHER = 0x8,
        UF_FAIL_ANCIENT = 0x9,
        UF_FAIL_ILLUSION = 0xa,
        UF_FAIL_SUMMONED = 0xb,
        UF_FAIL_DOMINATED = 0xc,
        UF_FAIL_MELEE = 0xd,
        UF_FAIL_RANGED = 0xe,
        UF_FAIL_DEAD = 0xf,
        UF_FAIL_MAGIC_IMMUNE_ALLY = 0x10,
        UF_FAIL_MAGIC_IMMUNE_ENEMY = 0x11,
        UF_FAIL_INVULNERABLE = 0x12,
        UF_FAIL_IN_FOW = 0x13,
        UF_FAIL_INVISIBLE = 0x14,
        UF_FAIL_NOT_PLAYER_CONTROLLED = 0x15,
        UF_FAIL_ATTACK_IMMUNE = 0x16,
        UF_FAIL_CUSTOM = 0x17,
        UF_FAIL_INVALID_LOCATION = 0x18,
        UF_FAIL_DISABLE_HELP = 0x19,
        UF_FAIL_OUT_OF_WORLD = 0x1a,
        UF_FAIL_NIGHTMARED = 0x1b,
        UF_FAIL_OBSTRUCTED = 0x1c,
    };
};
