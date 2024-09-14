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
    enum class ECandyShopUpgrade : std::uint32_t
    {
        k_ECandyShopUpgradeInvalid = 0xffffffff,
        k_ECandyShopUpgrade_InventorySize = 0x0,
        k_ECandyShopUpgrade_RewardShelf = 0x1,
        k_ECandyShopUpgrade_ExtraExchangeRecipe = 0x2,
    };
};
