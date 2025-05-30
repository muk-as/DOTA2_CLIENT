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
        // Size: 0x4
        enum class StepPhase : std::uint32_t
        {
            // MPropertyFriendlyName "On Ground"
            StepPhase_OnGround = 0x0,
            // MPropertyFriendlyName "In the Air"
            StepPhase_InAir = 0x1,
        };
    };
};
