#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class EHighPriorityMMState : std::uint32_t
    {
        k_EHighPriorityMM_Unknown = 0x0,
        k_EHighPriorityMM_MissingMMData = 0x1,
        k_EHighPriorityMM_ResourceMissing = 0x2,
        k_EHighPriorityMM_ManuallyDisabled = 0x3,
        k_EHighPriorityMM_Min_Enabled = 0x40,
        k_EHighPriorityMM_AllRolesSelected = 0x41,
        k_EHighPriorityMM_UsingResource = 0x42,
        k_EHighPriorityMM_FiveStack = 0x43,
        k_EHighPriorityMM_HighDemand = 0x44,
    };
};
