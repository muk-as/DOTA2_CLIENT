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
        // Enumerator count: 22
        // Alignment: 4
        // Size: 0x_
        enum class EOverworldFortuneReward : std::uint32_t
        {
            k_eOverworldFortuneReward_Invalid = 0x0,
            k_eOverworldFortuneReward_RandomToken = 0x1,
            k_eOverworldFortuneReward_ExtraToken = 0x2,
            k_eOverworldFortuneReward_CandyBag = 0x3,
            k_eOverworldFortuneReward_DiscountCoin = 0x4,
            k_eOverworldFortuneReward_Treasure = 0x5,
            k_eOverworldFortuneReward_SmallEconItem = 0x6,
            k_eOverworldFortuneReward_Rerolls = 0x7,
            k_eOverworldFortuneReward_OneRandomToken = 0x8,
            k_eOverworldFortuneReward_TwoRandomTokens = 0x9,
            k_eOverworldFortuneReward_ThreeRandomTokens = 0xa,
            k_eOverworldFortuneReward_OracleCoin = 0xb,
            k_eOverworldFortuneReward_CandyBagSmall = 0xc,
            k_eOverworldFortuneReward_CandyBagLarge = 0xd,
            k_eOverworldFortuneReward_BalloonCharges = 0xe,
            k_eOverworldFortuneReward_TwoNodeUnlocks = 0xf,
            k_eOverworldFortuneReward_TwoLeastTokens = 0x10,
            k_eOverworldFortuneReward_ThreeMostTokens = 0x11,
            k_eOverworldFortuneReward_OneNodeUnlock = 0x12,
            k_eOverworldFortuneReward_FireworksCharges = 0x13,
            k_eOverworldFortuneReward_PieCharges = 0x14,
            k_eOverworldFortuneReward_LastHeroPlayedTokens = 0x15,
        };
    };
};
