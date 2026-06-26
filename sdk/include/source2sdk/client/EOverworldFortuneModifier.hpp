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
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x_
        enum class EOverworldFortuneModifier : std::uint32_t
        {
            k_eOverworldFortuneModifier_Invalid = 0x0,
            k_eOverworldFortuneModifier_NoModifier = 0x1,
            k_eOverworldFortuneModifier_DoubleReward = 0x2,
            k_eOverworldFortuneModifier_OneAttempt = 0x3,
            k_eOverworldFortuneModifier_ReceiveAdditionalRandomToken = 0x4,
            k_eOverworldFortuneModifier_RerollFortune = 0x5,
            k_eOverworldFortuneModifier_ImmediatelyReceiveReward = 0x6,
            k_eOverworldFortuneModifier_EarnRewardTwice = 0x7,
        };
    };
};
