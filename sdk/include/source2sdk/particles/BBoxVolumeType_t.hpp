#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class BBoxVolumeType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Bounding Box Volume"
        BBOX_VOLUME = 0x0,
        // MPropertyFriendlyName "Bounding Box Dimensions"
        BBOX_DIMENSIONS = 0x1,
        // MPropertyFriendlyName "Bounding Box Mins/Maxs"
        BBOX_MINS_MAXS = 0x2,
    };
};
