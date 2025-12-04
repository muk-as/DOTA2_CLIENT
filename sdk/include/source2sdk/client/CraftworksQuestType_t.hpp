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
        enum class CraftworksQuestType_t : std::uint32_t
        {
            k_eCraftworksQuest_Invalid = 0x0,
            k_eCraftworksQuest_StatTracker = 0x1,
            k_eCraftworksQuest_GiveCommend = 0x2,
            k_eCraftworksQuest_ReceiveCommend = 0x3,
        };
    };
};
