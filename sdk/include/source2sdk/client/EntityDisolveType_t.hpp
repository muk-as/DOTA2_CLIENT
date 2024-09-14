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
    enum class EntityDisolveType_t : std::uint32_t
    {
        ENTITY_DISSOLVE_INVALID = 0xffffffff,
        ENTITY_DISSOLVE_NORMAL = 0x0,
        ENTITY_DISSOLVE_ELECTRICAL = 0x1,
        ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
        ENTITY_DISSOLVE_CORE = 0x3,
    };
};
