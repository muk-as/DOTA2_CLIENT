#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EShareAbility : std::uint32_t
    {
        ITEM_FULLY_SHAREABLE = 0x0,
        ITEM_PARTIALLY_SHAREABLE = 0x1,
        ITEM_NOT_SHAREABLE = 0x2,
    };
};
