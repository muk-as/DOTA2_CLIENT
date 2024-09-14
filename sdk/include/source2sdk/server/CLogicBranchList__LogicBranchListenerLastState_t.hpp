#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class CLogicBranchList__LogicBranchListenerLastState_t : std::uint32_t
    {
        LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
        LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
        LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
        LOGIC_BRANCH_LISTENER_MIXED = 0x3,
    };
};
