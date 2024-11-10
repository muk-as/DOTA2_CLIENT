#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class CFuncMover__TransitionToPathNodeAction_t : std::uint32_t
    {
        TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
        TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
        TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
    };
};
