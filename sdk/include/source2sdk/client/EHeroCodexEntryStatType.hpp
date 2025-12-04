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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x_
        enum class EHeroCodexEntryStatType : std::uint32_t
        {
            k_eHeroCodexEntryStatType_Killed = 0x0,
            k_eHeroCodexEntryStatType_WinsPlayingAsHero = 0x1,
            k_eHeroCodexEntryStatType_WinsWith = 0x2,
            k_eHeroCodexEntryStatType_LossesPlayingAsHero = 0x3,
            k_eHeroCodexEntryStatType_LossesWith = 0x4,
            k_eHeroCodexEntryStatType_TurboWinsPlayingAsHero = 0x5,
            k_eHeroCodexEntryStatType_TurboWinsWith = 0x6,
            k_eHeroCodexEntryStatType_TurboLossesPlayingAsHero = 0x7,
            k_eHeroCodexEntryStatType_TurboLossesWith = 0x8,
            k_eHeroCodexEntryStatType_Count = 0x9,
        };
    };
};
