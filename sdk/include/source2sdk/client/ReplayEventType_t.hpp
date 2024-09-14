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
    enum class ReplayEventType_t : std::uint32_t
    {
        REPLAY_EVENT_CANCEL = 0x0,
        REPLAY_EVENT_DEATH = 0x1,
        REPLAY_EVENT_GENERIC = 0x2,
        REPLAY_EVENT_STUCK_NEED_FULL_UPDATE = 0x3,
        REPLAY_EVENT_VICTORY = 0x4,
    };
};
