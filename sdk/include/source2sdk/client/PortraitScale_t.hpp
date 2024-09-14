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
    enum class PortraitScale_t : std::uint32_t
    {
        PORTRAIT_SCALE_INVALID = 0xffffffff,
        PORTRAIT_SCALE_LOADOUT = 0x0,
        PORTRAIT_SCALE_ALTERNATE_LOADOUT = 0x1,
        PORTRAIT_SCALE_WORLD = 0x2,
        PORTRAIT_SCALE_SPECTATOR_LOADOUT = 0x3,
        PORTRAIT_SCALE_VERSUS_LOADOUT = 0x4,
    };
};
