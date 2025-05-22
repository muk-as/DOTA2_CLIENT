#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 9
        // Alignment: 4
        // Size: 0x4
        enum class QuickBuyPurchasable_t : std::uint32_t
        {
            QUICK_BUY_PURCHASABLE_INVALID = 0xffffffff,
            QUICK_BUY_NOT_PURCHASABLE_GOLD = 0x0,
            QUICK_BUY_NOT_PURCHASABLE_BUYBACK_PROTECTION = 0x1,
            QUICK_BUY_NOT_PURCHASABLE_SECRET_SHOP = 0x2,
            QUICK_BUY_NOT_PURCHASABLE_OUT_OF_STOCK = 0x3,
            QUICK_BUY_NOT_PURCHASABLE_GOLD_AND_OTHER_SHOP = 0x4,
            QUICK_BUY_NOT_PURCHASABLE_SECRET_SHOP_AND_OTHER_SHOP = 0x5,
            QUICK_BUY_PURCHASABLE_AT_OTHER_SHOP = 0x6,
            QUICK_BUY_PURCHASABLE = 0x7,
        };
    };
};
