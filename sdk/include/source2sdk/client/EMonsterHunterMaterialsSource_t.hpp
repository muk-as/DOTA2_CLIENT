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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class EMonsterHunterMaterialsSource_t : std::uint32_t
        {
            Invalid = 0xffffffff,
            PremiumPass = 0x0,
            Tutorial = 0x1,
            HunterRankReward = 0x2,
            HeroAtlasReward = 0x3,
            MaterialTrader = 0x4,
        };
    };
};
