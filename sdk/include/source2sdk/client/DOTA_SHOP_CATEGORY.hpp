#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 17
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_SHOP_CATEGORY : std::uint32_t
    {
        DOTA_SHOP_CATEGORY_NONE = 0xffffffff,
        DOTA_SHOP_CATEGORY_CONSUMABLES = 0x0,
        DOTA_SHOP_CATEGORY_ATTRIBUTES = 0x1,
        DOTA_SHOP_CATEGORY_WEAPONS_ARMOR = 0x2,
        DOTA_SHOP_CATEGORY_MISC = 0x3,
        DOTA_SHOP_CATEGORY_BASICS = 0x4,
        DOTA_SHOP_CATEGORY_SUPPORT = 0x5,
        DOTA_SHOP_CATEGORY_MAGICS = 0x6,
        DOTA_SHOP_CATEGORY_WEAPONS = 0x7,
        DOTA_SHOP_CATEGORY_DEFENSE = 0x8,
        DOTA_SHOP_CATEGORY_ARTIFACTS = 0x9,
        DOTA_SHOP_CATEGORY_SIDE_SHOP_PAGE_1 = 0xa,
        DOTA_SHOP_CATEGORY_SIDE_SHOP_PAGE_2 = 0xb,
        DOTA_SHOP_CATEGORY_SECRET_SHOP = 0xc,
        DOTA_SHOP_CATEGORY_RECOMMENDED_ITEMS = 0xd,
        DOTA_SHOP_CATEGORY_SEARCH_RESULTS = 0xe,
        NUM_SHOP_CATEGORIES = 0xf,
    };
};
