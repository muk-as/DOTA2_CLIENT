#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class EInButtonState : std::uint32_t
    {
        IN_BUTTON_UP = 0x0,
        IN_BUTTON_DOWN = 0x1,
        IN_BUTTON_DOWN_UP = 0x2,
        IN_BUTTON_UP_DOWN = 0x3,
        IN_BUTTON_UP_DOWN_UP = 0x4,
        IN_BUTTON_DOWN_UP_DOWN = 0x5,
        IN_BUTTON_DOWN_UP_DOWN_UP = 0x6,
        IN_BUTTON_UP_DOWN_UP_DOWN = 0x7,
        IN_BUTTON_STATE_COUNT = 0x8,
    };
};
