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
    enum class eSplinePushType : std::uint32_t
    {
        // MPropertyFriendlyName "Along Spline Direction"
        k_eSplinePushAlong = 0x0,
        // MPropertyFriendlyName "Away from closest point"
        k_eSplinePushAway = 0x1,
        // MPropertyFriendlyName "Towards closest point"
        k_eSplinePushTowards = 0x2,
    };
};
