#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EDOTAVersusScenePlayerBehavior : std::uint32_t
    {
        VS_PLAYER_BEHAVIOR_PLAY_ACTIVITY = 0x1,
        VS_PLAYER_BEHAVIOR_CHAT_WHEEL = 0x2,
        VS_PLAYER_BEHAVIOR_PLAYBACK_RATE = 0x3,
    };
};
