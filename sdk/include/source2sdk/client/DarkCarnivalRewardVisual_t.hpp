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
        // Enumerator count: 16
        // Alignment: 4
        // Size: 0x_
        enum class DarkCarnivalRewardVisual_t : std::uint32_t
        {
            k_eDarkCarnivalRewardVisual_Invalid = 0xffffffff,
            k_eDarkCarnivalRewardVisual_Coin = 0x0,
            k_eDarkCarnivalRewardVisual_Tome = 0x1,
            k_eDarkCarnivalRewardVisual_Chest = 0x2,
            k_eDarkCarnivalRewardVisual_Chest_Small = 0x3,
            k_eDarkCarnivalRewardVisual_Encounter = 0x4,
            k_eDarkCarnivalRewardVisual_CandyBag = 0x5,
            k_eDarkCarnivalRewardVisual_Emoticon = 0x6,
            k_eDarkCarnivalRewardVisual_Spray = 0x7,
            k_eDarkCarnivalRewardVisual_LoadingScreen = 0x8,
            k_eDarkCarnivalRewardVisual_Oracle = 0x9,
            k_eDarkCarnivalRewardVisual_HeroItemSet = 0xa,
            k_eDarkCarnivalRewardVisual_ShowcaseDecoration = 0xb,
            k_eDarkCarnivalRewardVisual_Start = 0xc,
            k_eDarkCarnivalRewardVisual_End = 0xd,
            k_eDarkCarnivalRewardVisual_Completed = 0xe,
        };
    };
};
