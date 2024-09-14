#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 18
    // Alignment: 4
    // Size: 0x4
    enum class WeaponSound_t : std::uint32_t
    {
        WEAPON_SOUND_EMPTY = 0x0,
        WEAPON_SOUND_SECONDARY_EMPTY = 0x1,
        WEAPON_SOUND_SINGLE = 0x2,
        WEAPON_SOUND_SECONDARY_ATTACK = 0x3,
        WEAPON_SOUND_MELEE_MISS = 0x4,
        WEAPON_SOUND_MELEE_HIT = 0x5,
        WEAPON_SOUND_MELEE_HIT_WORLD = 0x6,
        WEAPON_SOUND_MELEE_HIT_PLAYER = 0x7,
        WEAPON_SOUND_MELEE_HIT_NPC = 0x8,
        WEAPON_SOUND_SPECIAL1 = 0x9,
        WEAPON_SOUND_SPECIAL2 = 0xa,
        WEAPON_SOUND_SPECIAL3 = 0xb,
        WEAPON_SOUND_NEARLYEMPTY = 0xc,
        WEAPON_SOUND_IMPACT = 0xd,
        WEAPON_SOUND_REFLECT = 0xe,
        WEAPON_SOUND_SECONDARY_IMPACT = 0xf,
        WEAPON_SOUND_SECONDARY_REFLECT = 0x10,
        // MPropertySuppressEnumerator
        WEAPON_SOUND_NUM_TYPES = 0x11,
    };
};
