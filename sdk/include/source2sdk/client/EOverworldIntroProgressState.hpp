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
        enum class EOverworldIntroProgressState : std::uint32_t
        {
            k_eOverworldIntroProgressState_StoryRecap = 0x0,
            k_eOverworldIntroProgressState_GetStarted = 0x1,
            k_eOverworldIntroProgressState_HowToPlay = 0x2,
            k_eOverworldIntroProgressState_FreeToken = 0x3,
            k_eOverworldIntroProgressState_RevealInventory = 0x4,
            k_eOverworldIntroProgressState_UnlockNode = 0x5,
            k_eOverworldIntroProgressState_ShowLearnMore = 0x6,
            k_eOverworldIntroProgressState_Complete = 0x7,
        };
    };
};
