#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EOverrideBlockLOS_t : std::uint32_t
    {
        BLOCK_LOS_DEFAULT = 0x0,
        BLOCK_LOS_FORCE_FALSE = 0x1,
        BLOCK_LOS_FORCE_TRUE = 0x2,
    };
};
