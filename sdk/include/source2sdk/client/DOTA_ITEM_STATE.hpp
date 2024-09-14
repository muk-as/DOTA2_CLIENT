#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_ITEM_STATE : std::uint32_t
    {
        DOTA_ITEM_NEEDS_EQUIPPED = 0x0,
        DOTA_ITEM_READY = 0x1,
    };
};
