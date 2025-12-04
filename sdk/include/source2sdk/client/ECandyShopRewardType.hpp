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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class ECandyShopRewardType : std::uint32_t
        {
            k_eCandyShopRewardType_None = 0x0,
            k_eCandyShopRewardType_Item = 0x1,
            k_eCandyShopRewardType_EventAction = 0x2,
            k_eCandyShopRewardType_EventPoints = 0x3,
        };
    };
};
