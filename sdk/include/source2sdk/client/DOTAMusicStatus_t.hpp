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
    enum class DOTAMusicStatus_t : std::uint32_t
    {
        DOTA_MUSIC_STATUS_NONE = 0x0,
        DOTA_MUSIC_STATUS_EXPLORATION = 0x1,
        DOTA_MUSIC_STATUS_BATTLE = 0x2,
        DOTA_MUSIC_STATUS_PRE_GAME_EXPLORATION = 0x3,
        DOTA_MUSIC_STATUS_DEAD = 0x4,
        DOTA_MUSIC_STATUS_LAST = 0x5,
    };
};
