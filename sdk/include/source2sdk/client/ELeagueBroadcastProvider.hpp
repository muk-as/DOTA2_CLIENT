#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ELeagueBroadcastProvider : std::uint32_t
    {
        LEAGUE_BROADCAST_UNKNOWN = 0x0,
        LEAGUE_BROADCAST_STEAM = 0x1,
        LEAGUE_BROADCAST_TWITCH = 0x2,
        LEAGUE_BROADCAST_YOUTUBE = 0x3,
        LEAGUE_BROADCAST_OTHER = 0x64,
    };
};
