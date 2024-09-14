#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class SosActionSortType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Highest"
        SOS_SORTTYPE_HIGHEST = 0x0,
        // MPropertyFriendlyName "Lowest"
        SOS_SORTTYPE_LOWEST = 0x1,
    };
};
