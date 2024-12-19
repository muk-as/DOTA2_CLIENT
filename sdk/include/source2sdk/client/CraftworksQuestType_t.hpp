#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class CraftworksQuestType_t : std::uint32_t
    {
        k_eCraftworksQuest_Invalid = 0x0,
        k_eCraftworksQuest_StatTracker = 0x1,
        k_eCraftworksQuest_GiveCommend = 0x2,
        k_eCraftworksQuest_ReceiveCommend = 0x3,
    };
};
