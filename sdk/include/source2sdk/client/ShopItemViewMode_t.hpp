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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class ShopItemViewMode_t : std::uint32_t
        {
            SHOP_VIEW_MODE_LIST = 0x0,
            SHOP_VIEW_MODE_GRID = 0x1,
        };
    };
};
