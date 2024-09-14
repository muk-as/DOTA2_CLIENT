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
    enum class DOTA_REPLAY_STATE_EVENT : std::uint32_t
    {
        DOTA_REPLAY_STATE_EVENT_GAME_START = 0x1,
        DOTA_REPLAY_STATE_EVENT_STARTING_HORN = 0x2,
        DOTA_REPLAY_STATE_EVENT_FIRST_BLOOD = 0x3,
        DOTA_REPLAY_STATE_EVENT_SHOWCASE = 0x4,
        DOTA_REPLAY_STATE_EVENT_POST_GAME = 0x5,
        DOTA_REPLAY_STATE_EVENT_WAIT_FOR_MAP = 0x6,
    };
};
