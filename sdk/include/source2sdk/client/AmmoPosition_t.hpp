#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class AmmoPosition_t : std::uint32_t
    {
        AMMO_POSITION_INVALID = 0xffffffff,
        AMMO_POSITION_PRIMARY = 0x0,
        AMMO_POSITION_SECONDARY = 0x1,
        AMMO_POSITION_COUNT = 0x2,
    };
};
