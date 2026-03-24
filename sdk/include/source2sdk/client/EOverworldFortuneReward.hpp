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
        enum class EOverworldFortuneReward : std::uint32_t
        {
            k_eOverworldFortuneReward_Invalid = 0x0,
            k_eOverworldFortuneReward_RandomToken = 0x1,
            k_eOverworldFortuneReward_ExtraToken = 0x2,
            k_eOverworldFortuneReward_CandyBag = 0x3,
            k_eOverworldFortuneReward_DiscountCoin = 0x4,
            k_eOverworldFortuneReward_Treasure = 0x5,
        };
    };
};
