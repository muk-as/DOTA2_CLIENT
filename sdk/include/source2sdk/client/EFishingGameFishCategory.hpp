#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class EFishingGameFishCategory : std::uint32_t
    {
        k_eFishingGameFishCategory_Invalid = 0x0,
        k_eFishingGameFishCategory_Trash = 0x1,
        k_eFishingGameFishCategory_Common = 0x2,
        k_eFishingGameFishCategory_Uncommon = 0x3,
        k_eFishingGameFishCategory_Rare = 0x4,
        k_eFishingGameFishCategory_UltraRare = 0x5,
    };
};
