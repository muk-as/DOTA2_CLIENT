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
    enum class PortraitDisplayMode_t : std::uint32_t
    {
        PORTRAIT_DISPLAY_MODE_INVALID = 0xffffffff,
        PORTRAIT_DISPLAY_MODE_LOADOUT = 0x0,
        PORTRAIT_DISPLAY_MODE_LOADOUT_DIRE = 0x1,
        PORTRAIT_DISPLAY_MODE_LOADOUT_SMALL = 0x2,
        PORTRAIT_DISPLAY_MODE_TREASURE_SMALL = 0x3,
    };
};
