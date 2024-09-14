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
    // 
    // metadata: MEnumFlagsWithOverlappingBits
    enum class DOTA_UNIT_TARGET_TEAM : std::uint32_t
    {
        DOTA_UNIT_TARGET_TEAM_NONE = 0x0,
        DOTA_UNIT_TARGET_TEAM_FRIENDLY = 0x1,
        DOTA_UNIT_TARGET_TEAM_ENEMY = 0x2,
        DOTA_UNIT_TARGET_TEAM_CUSTOM = 0x4,
        DOTA_UNIT_TARGET_TEAM_BOTH = 0x3,
    };
};
