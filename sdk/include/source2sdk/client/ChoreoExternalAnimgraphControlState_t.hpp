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
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x_
        enum class ChoreoExternalAnimgraphControlState_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            // MAlternateSemanticName
            eNone = 0x0,
            // MPropertyFriendlyName "Exit"
            // MAlternateSemanticName
            eExit = 0x1,
            // MPropertyFriendlyName "State_01"
            // MAlternateSemanticName
            eState01 = 0x2,
            // MPropertyFriendlyName "State_02"
            // MAlternateSemanticName
            eState02 = 0x3,
            // MPropertyFriendlyName "State_03"
            // MAlternateSemanticName
            eState03 = 0x4,
            // MPropertyFriendlyName "State_04"
            // MAlternateSemanticName
            eState04 = 0x5,
            // MPropertyFriendlyName "State_05"
            // MAlternateSemanticName
            eState05 = 0x6,
            // MPropertySuppressEnumerator
            eCount = 0x7,
        };
    };
};
