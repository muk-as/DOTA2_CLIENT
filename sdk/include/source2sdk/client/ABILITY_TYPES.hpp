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
    enum class ABILITY_TYPES : std::uint32_t
    {
        ABILITY_TYPE_BASIC = 0x0,
        ABILITY_TYPE_ULTIMATE = 0x1,
        ABILITY_TYPE_ATTRIBUTES = 0x2,
        ABILITY_TYPE_HIDDEN = 0x3,
    };
};
