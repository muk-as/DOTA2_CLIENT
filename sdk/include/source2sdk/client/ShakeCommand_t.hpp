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
    enum class ShakeCommand_t : std::uint32_t
    {
        SHAKE_START = 0x0,
        SHAKE_STOP = 0x1,
        SHAKE_AMPLITUDE = 0x2,
        SHAKE_FREQUENCY = 0x3,
        SHAKE_START_RUMBLEONLY = 0x4,
        SHAKE_START_NORUMBLE = 0x5,
    };
};
