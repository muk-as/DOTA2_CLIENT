#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class DOTABehaviorLevel_t : std::uint32_t
    {
        DOTA_BEHAVIOR_LEVEL_NONE = 0x0,
        DOTA_BEHAVIOR_LEVEL_RANKED_ALLOWED = 0x1,
        DOTA_BEHAVIOR_LEVEL_PAUSING = 0x2,
        DOTA_BEHAVIOR_LEVEL_DROPS = 0x3,
        DOTA_BEHAVIOR_LEVEL_COACHING = 0x4,
    };
};
