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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class EWeekendTourneyRichPresenceEvent : std::uint32_t
        {
            k_EWeekendTourneyRichPresenceEvent_None = 0x0,
            k_EWeekendTourneyRichPresenceEvent_StartedMatch = 0x1,
            k_EWeekendTourneyRichPresenceEvent_WonMatch = 0x2,
            k_EWeekendTourneyRichPresenceEvent_Eliminated = 0x3,
        };
    };
};
