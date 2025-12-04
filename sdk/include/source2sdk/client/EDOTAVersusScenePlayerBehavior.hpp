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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class EDOTAVersusScenePlayerBehavior : std::uint32_t
        {
            VS_PLAYER_BEHAVIOR_PLAY_ACTIVITY = 0x1,
            VS_PLAYER_BEHAVIOR_CHAT_WHEEL = 0x2,
            VS_PLAYER_BEHAVIOR_PLAYBACK_RATE = 0x3,
        };
    };
};
