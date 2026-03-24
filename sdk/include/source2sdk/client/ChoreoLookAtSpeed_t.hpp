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
        enum class ChoreoLookAtSpeed_t : std::uint32_t
        {
            // MPropertySuppressEnumerator
            eInvalid = 0xffffffff,
            // MPropertyFriendlyName "Slow"
            // MAlternateSemanticName
            eSlow = 0x0,
            // MPropertyFriendlyName "Medium"
            // MAlternateSemanticName
            eMedium = 0x1,
            // MPropertyFriendlyName "Fast"
            // MAlternateSemanticName
            eFast = 0x2,
        };
    };
};
