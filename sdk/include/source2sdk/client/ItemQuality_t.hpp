#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class ItemQuality_t : std::uint32_t
    {
        DOTA_ITEM_QUALITY_CONSUMABLE = 0x0,
        DOTA_ITEM_QUALITY_PLAIN = 0x1,
        DOTA_ITEM_QUALITY_COMMON = 0x2,
        DOTA_ITEM_QUALITY_RARE = 0x3,
        DOTA_ITEM_QUALITY_EPIC = 0x4,
        DOTA_ITEM_QUALITY_ARTIFACT = 0x5,
        DOTA_ITEM_QUALITY_SECRET_SHOP = 0x6,
        NUM_ITEM_QUALITY_LEVELS = 0x7,
    };
};
