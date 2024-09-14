#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ECandyShopRewardType : std::uint32_t
    {
        k_eCandyShopRewardType_None = 0x0,
        k_eCandyShopRewardType_Item = 0x1,
        k_eCandyShopRewardType_EventAction = 0x2,
        k_eCandyShopRewardType_EventPoints = 0x3,
    };
};
