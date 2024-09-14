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
    enum class ECandyShopRewardOptionType : std::uint32_t
    {
        // MPropertySuppressEnumerator
        k_eCandyShopRewardOptionType_Invalid = 0xffffffff,
        k_eCandyShopRewardOptionType_SingleItem = 0x0,
        k_eCandyShopRewardOptionType_LootList = 0x1,
        k_eCandyShopRewardOptionType_SingleEventAction = 0x2,
        k_eCandyShopRewardOptionType_EventPoints = 0x3,
    };
};
