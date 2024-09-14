#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    // 
    // metadata: MEnumFlagsWithOverlappingBits
    enum class DAMAGE_TYPES : std::uint32_t
    {
        DAMAGE_TYPE_NONE = 0x0,
        DAMAGE_TYPE_PHYSICAL = 0x1,
        DAMAGE_TYPE_MAGICAL = 0x2,
        DAMAGE_TYPE_PURE = 0x4,
        DAMAGE_TYPE_HP_REMOVAL = 0x8,
        DAMAGE_TYPE_ABILITY_DEFINED = 0x16,
        DAMAGE_TYPE_ALL = 0x7,
    };
};
