#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class IChoreoServices__ChoreoState_t : std::uint32_t
    {
        STATE_PRE_SCRIPT = 0x0,
        STATE_WAIT_FOR_SCRIPT = 0x1,
        STATE_WALK_TO_MARK = 0x2,
        STATE_SYNCHRONIZE_SCRIPT = 0x3,
        STATE_PLAY_SCRIPT = 0x4,
        STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
        STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6,
    };
};
