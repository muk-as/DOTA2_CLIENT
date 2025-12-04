#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x_
        enum class TargetWarpTimingMethod : std::uint32_t
        {
            // MPropertyFriendlyName "Reach destination when root motion ends"
            ReachDestinationOnRootMotionEnd = 0x0,
            // MPropertyFriendlyName "Reach destination when warp tag ends"
            ReachDestinationOnWarpTagEnd = 0x1,
        };
    };
};
