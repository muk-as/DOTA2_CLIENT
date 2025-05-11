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
        // Size: 0x4
        enum class EOverworldEncounterRewardStyle : std::uint32_t
        {
            k_eOverworldEncounterRewardStyle_Invalid = 0x0,
            k_eOverworldEncounterRewardStyle_Choice = 0x1,
            k_eOverworldEncounterRewardStyle_Random = 0x2,
            k_eOverworldEncounterRewardStyle_HighScore = 0x3,
            k_eOverworldEncounterRewardStyle_ClaimCredits = 0x4,
            k_eOverworldEncounterRewardStyle_Quest = 0x5,
            k_eOverworldEncounterRewardStyle_ClaimCreditsRange = 0x6,
            k_eOverworldEncounterRewardStyle_Custom = 0xa,
            k_eOverworldEncounterRewardStyle_RepeatableChoice = 0xb,
        };
    };
};
