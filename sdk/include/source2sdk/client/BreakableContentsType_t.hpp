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
    enum class BreakableContentsType_t : std::uint32_t
    {
        BC_DEFAULT = 0x0,
        BC_EMPTY = 0x1,
        BC_PROP_GROUP_OVERRIDE = 0x2,
        BC_PARTICLE_SYSTEM_OVERRIDE = 0x3,
    };
};
