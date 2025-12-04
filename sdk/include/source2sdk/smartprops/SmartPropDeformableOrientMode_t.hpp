#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class SmartPropDeformableOrientMode_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            NONE = 0x0,
            // MPropertyFriendlyName "Align Forward with Normal"
            FORWARD_NORMAL = 0x1,
            // MPropertyFriendlyName "Align Up With Normal"
            UP_NORMAL = 0x2,
            // MPropertyFriendlyName "Align Backward with Normal"
            BACKWARD_NORMAL = 0x3,
            // MPropertyFriendlyName "Maintain Closest Triangle Offset"
            MAINTAIN_OFFSET = 0x4,
        };
    };
};
