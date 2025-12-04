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
        // Size: 0x_
        enum class EMonsterHunterSmallRewardCategory : std::uint32_t
        {
            k_eMonsterHunterSmallReward_Invalid = 0x0,
            k_eMonsterHunterSmallReward_Sprays = 0x1,
            k_eMonsterHunterSmallReward_Emoticons = 0x2,
            k_eMonsterHunterSmallReward_ChatWheelLines = 0x3,
            k_eMonsterHunterSmallReward_StickerScrapSmall = 0x4,
            k_eMonsterHunterSmallReward_StickerScrapLarge = 0x5,
            k_eMonsterHunterSmallReward_UnlockMaterialTrader = 0x6,
            k_eMonsterHunterSmallReward_UnlockMaterialTraderStickerRecipe = 0x7,
            k_eMonsterHunterSmallReward_Materials = 0x8,
        };
    };
};
