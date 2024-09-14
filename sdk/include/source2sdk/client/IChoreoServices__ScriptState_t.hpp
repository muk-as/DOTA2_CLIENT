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
    enum class IChoreoServices__ScriptState_t : std::uint32_t
    {
        SCRIPT_PLAYING = 0x0,
        SCRIPT_WAIT = 0x1,
        SCRIPT_POST_IDLE = 0x2,
        SCRIPT_CLEANUP = 0x3,
        SCRIPT_MOVE_TO_MARK = 0x4,
    };
};
