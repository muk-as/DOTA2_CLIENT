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
    enum class DOTAModifierAttribute_t : std::uint32_t
    {
        MODIFIER_ATTRIBUTE_NONE = 0x0,
        MODIFIER_ATTRIBUTE_PERMANENT = 0x1,
        MODIFIER_ATTRIBUTE_MULTIPLE = 0x2,
        MODIFIER_ATTRIBUTE_IGNORE_INVULNERABLE = 0x4,
        MODIFIER_ATTRIBUTE_AURA_PRIORITY = 0x8,
        MODIFIER_ATTRIBUTE_IGNORE_DODGE = 0x10,
    };
};
