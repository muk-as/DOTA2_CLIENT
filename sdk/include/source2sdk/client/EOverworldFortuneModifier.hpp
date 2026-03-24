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
        enum class EOverworldFortuneModifier : std::uint32_t
        {
            k_eOverworldFortuneModifier_Invalid = 0x0,
            k_eOverworldFortuneModifier_DoubleReward = 0x1,
            k_eOverworldFortuneModifier_TripleReward = 0x2,
            k_eOverworldFortuneModifier_OneChance = 0x3,
            k_eOverworldFortuneModifier_ReceiveAdditionalRandomReward = 0x4,
            k_eOverworldFortuneModifier_RerollFortune = 0x5,
        };
    };
};
