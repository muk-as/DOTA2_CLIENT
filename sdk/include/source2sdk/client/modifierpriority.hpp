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
    enum class modifierpriority : std::uint32_t
    {
        MODIFIER_PRIORITY_LOW = 0x0,
        MODIFIER_PRIORITY_NORMAL = 0x1,
        MODIFIER_PRIORITY_HIGH = 0x2,
        MODIFIER_PRIORITY_ULTRA = 0x3,
        MODIFIER_PRIORITY_SUPER_ULTRA = 0x4,
    };
};
