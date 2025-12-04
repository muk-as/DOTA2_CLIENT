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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class SmartPropDeformableAttachMode_t : std::uint32_t
        {
            // MPropertyFriendlyName "Relative to Surface"
            RELATIVE = 0x0,
            // MPropertyFriendlyName "Snap to Surface"
            SNAP = 0x1,
            // MPropertyFriendlyName "Stiffen Overlapping Joints"
            STIFFEN = 0x2,
        };
    };
};
