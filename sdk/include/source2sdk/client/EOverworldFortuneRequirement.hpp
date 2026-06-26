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
        // Enumerator count: 11
        // Alignment: 4
        // Size: 0x_
        enum class EOverworldFortuneRequirement : std::uint32_t
        {
            k_eOverworldFortuneRequirement_Invalid = 0x0,
            k_eOverworldFortuneRequirement_WinGame = 0x1,
            k_eOverworldFortuneRequirement_WinGameStrengthHero = 0x2,
            k_eOverworldFortuneRequirement_WinGameIntelligenceHero = 0x3,
            k_eOverworldFortuneRequirement_WinGameAgilityHero = 0x4,
            k_eOverworldFortuneRequirement_WinGameUniversalHero = 0x5,
            k_eOverworldFortuneRequirement_KillRoshan = 0x6,
            k_eOverworldFortuneRequirement_KillTormentor = 0x7,
            k_eOverworldFortuneRequirement_WinGameWithScepterShard = 0x8,
            k_eOverworldFortuneRequirement_GetMultipleKills = 0x9,
            k_eOverworldFortuneRequirement_Top3Networth = 0xa,
        };
    };
};
