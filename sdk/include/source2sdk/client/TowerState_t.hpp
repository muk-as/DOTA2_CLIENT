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
    enum class TowerState_t : std::uint32_t
    {
        TOWER_STATE_ACTIVE = 0x0,
        TOWER_STATE_SELECTED = 0x1,
        TOWER_STATE_INACTIVE = 0x2,
        TOWER_STATE_NO_BEAM_MOVEMENT = 0x3,
        TOWER_STATE_ACTIVE_CHANNELED = 0x4,
    };
};
