#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class BlendKeyType : std::uint32_t
    {
        // MPropertyFriendlyName "User Defined Values"
        BlendKey_UserValue = 0x0,
        // MPropertyFriendlyName "Velocity"
        BlendKey_Velocity = 0x1,
        // MPropertyFriendlyName "Distance"
        BlendKey_Distance = 0x2,
        // MPropertyFriendlyName "Remaining Distance"
        BlendKey_RemainingDistance = 0x3,
    };
};
