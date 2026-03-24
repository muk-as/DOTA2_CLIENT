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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class ChoreoExternalAnimgraphControlState_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            // MAlternateSemanticName
            eNone = 0x0,
            // MPropertyFriendlyName "Begin"
            // MAlternateSemanticName
            eBegin = 0x1,
            // MPropertyFriendlyName "Looping"
            // MAlternateSemanticName
            eLooping = 0x2,
            // MPropertyFriendlyName "Exit"
            // MAlternateSemanticName
            eExit = 0x3,
            // MPropertyFriendlyName "Abort"
            // MAlternateSemanticName
            eAbort = 0x4,
            // MPropertySuppressEnumerator
            eCount = 0x5,
        };
    };
};
