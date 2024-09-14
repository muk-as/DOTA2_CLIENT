#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 8
    // Alignment: 1
    // Size: 0x1
    enum class CNmTransitionNode__TransitionOptions_t : std::uint8_t
    {
        None = 0,
        ClampDuration = 1,
        Synchronized = 2,
        MatchSourceTime = 3,
        MatchSyncEventIndex = 4,
        MatchSyncEventID = 5,
        MatchSyncEventPercentage = 6,
        PreferClosestSyncEventID = 7,
    };
};
