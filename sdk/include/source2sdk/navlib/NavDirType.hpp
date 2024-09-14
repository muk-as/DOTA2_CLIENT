#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::navlib
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class NavDirType : std::uint32_t
    {
        NORTH = 0x0,
        EAST = 0x1,
        SOUTH = 0x2,
        WEST = 0x3,
        NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4,
    };
};
