#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class AnimParamNetworkSetting : std::uint32_t
        {
            // MPropertyFriendlyName "Auto"
            Auto = 0x0,
            // MPropertyFriendlyName "Always Network"
            AlwaysNetwork = 0x1,
            // MPropertyFriendlyName "Never Network"
            NeverNetwork = 0x2,
        };
    };
};
