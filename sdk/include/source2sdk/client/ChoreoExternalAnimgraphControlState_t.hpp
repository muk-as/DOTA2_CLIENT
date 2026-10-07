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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x_
        enum class ChoreoExternalAnimgraphControlState_t : std::uint32_t
        {
            // MPropertyFriendlyName "eNone"
            // MAlternateSemanticName
            eNone = 0x0,
            // MPropertyFriendlyName "eExit"
            // MAlternateSemanticName
            eExit = 0x1,
            // MPropertyFriendlyName "eFallbackExit"
            // MAlternateSemanticName
            eFallbackExit = 0x2,
            // MPropertyFriendlyName "eState01"
            // MAlternateSemanticName
            eState01 = 0x3,
            // MPropertyFriendlyName "eState02"
            // MAlternateSemanticName
            eState02 = 0x4,
            // MPropertyFriendlyName "eState03"
            // MAlternateSemanticName
            eState03 = 0x5,
            // MPropertyFriendlyName "eState04"
            // MAlternateSemanticName
            eState04 = 0x6,
            // MPropertyFriendlyName "eState05"
            // MAlternateSemanticName
            eState05 = 0x7,
            // MPropertyFriendlyName "eLooping"
            // MAlternateSemanticName
            eLooping = 0x8,
            // MPropertySuppressEnumerator
            eCount = 0x9,
        };
    };
};
