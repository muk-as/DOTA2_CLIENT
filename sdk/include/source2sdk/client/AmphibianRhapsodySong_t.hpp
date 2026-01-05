#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 9
        // Alignment: 4
        // Size: 0x_
        enum class AmphibianRhapsodySong_t : std::uint32_t
        {
            SONG_INVALID = 0xffffffff,
            SONG_ATTACK = 0x0,
            SONG_HEAL = 0x1,
            SONG_UNUSED = 0x2,
            SONG_SPEED = 0x3,
            SONG_SCEPTER_ATTACK_SPEED = 0x4,
            SONG_SCEPTER_ATTACK_HEAL = 0x5,
            SONG_SCEPTER_SPEED_HEAL = 0x6,
            SONG_COUNT = 0x7,
        };
    };
};
