#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: schemasystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::schemasystem
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ThreeState_t : std::uint32_t
    {
        TRS_FALSE = 0x0,
        TRS_TRUE = 0x1,
        TRS_NONE = 0x2,
    };
};
