#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 14
    // Alignment: 2
    // Size: 0x2
    enum class SoundTypes_t : std::uint16_t
    {
        SOUND_NONE = 0x0,
        SOUND_COMBAT = 0x1,
        SOUND_PLAYER = 0x2,
        SOUND_DANGER = 0x3,
        SOUND_BULLET_IMPACT = 0x4,
        SOUND_THUMPER = 0x5,
        SOUND_PHYSICS_DANGER = 0x6,
        SOUND_MOVE_AWAY = 0x7,
        SOUND_PLAYER_VEHICLE = 0x8,
        SOUND_GLASS_BREAK = 0x9,
        SOUND_PHYSICS_OBJECT = 0xa,
        SOUND_WARN_FRIENDS = 0xb,
        SOUND_FOOD = 0xc,
        NUM_AI_SOUND_TYPES = 0xd,
    };
};
