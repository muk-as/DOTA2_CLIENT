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
        // Size: 0x_
        enum class ESocialFeedEventType : std::uint32_t
        {
            k_ESocialFeedEventType_Invalid = 0xffffffff,
            k_ESocialFeedEventType_MatchEvent = 0x0,
            k_ESocialFeedEventType_EconomyEvent = 0x1,
            k_ESocialFeedEventType_TrophyLevelEvent = 0x2,
            k_ESocialFeedEventType_MessageEvent = 0x3,
            k_ESocialFeedEventType_WeekendTourney = 0x4,
            k_ESocialFeedEventType_RankTier = 0x5,
            k_ESocialFeedEventType_PlusActivated = 0x6,
            k_ESocialFeedEventType_PlusHeroLevelTier = 0x7,
        };
    };
};
