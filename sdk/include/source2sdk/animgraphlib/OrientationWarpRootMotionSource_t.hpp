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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class OrientationWarpRootMotionSource_t : std::uint32_t
        {
            // MPropertyFriendlyName "Animation Or Procedural"
            eAnimationOrProcedural = 0x0,
            // MPropertyFriendlyName "Animation Only"
            eAnimationOnly = 0x1,
            // MPropertyFriendlyName "Procedural Only"
            eProceduralOnly = 0x2,
        };
    };
};
