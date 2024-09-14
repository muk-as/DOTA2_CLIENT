#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class SignonState_t : std::uint32_t
    {
        SIGNONSTATE_NONE = 0x0,
        SIGNONSTATE_CHALLENGE = 0x1,
        SIGNONSTATE_CONNECTED = 0x2,
        SIGNONSTATE_NEW = 0x3,
        SIGNONSTATE_PRESPAWN = 0x4,
        SIGNONSTATE_SPAWN = 0x5,
        SIGNONSTATE_FULL = 0x6,
        SIGNONSTATE_CHANGELEVEL = 0x7,
    };
};
