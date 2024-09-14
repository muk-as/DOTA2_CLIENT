#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 1
    // Size: 0x1
    enum class SolidType_t : std::uint8_t
    {
        SOLID_NONE = 0,
        SOLID_BSP = 1,
        SOLID_BBOX = 2,
        SOLID_OBB = 3,
        SOLID_SPHERE = 4,
        SOLID_POINT = 5,
        SOLID_VPHYSICS = 6,
        SOLID_CAPSULE = 7,
        SOLID_LAST = 8,
    };
};
