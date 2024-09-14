#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ChoreoLookAtSpeed_t : std::uint32_t
    {
        // MPropertySuppressEnumerator
        eInvalid = 0xffffffff,
        // MPropertyFriendlyName "Slow"
        eSlow = 0x0,
        // MPropertyFriendlyName "Medium"
        eMedium = 0x1,
        // MPropertyFriendlyName "Fast"
        eFast = 0x2,
    };
};
