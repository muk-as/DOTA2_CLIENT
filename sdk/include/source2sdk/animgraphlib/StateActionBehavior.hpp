#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class StateActionBehavior : std::uint32_t
    {
        STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
        STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
        STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
        STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
    };
};
