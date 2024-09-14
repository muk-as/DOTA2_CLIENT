#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class StanceType_t : std::uint32_t
    {
        // MPropertySuppressEnumerator
        STANCE_CURRENT = 0xffffffff,
        // MPropertyFriendlyName "Default"
        STANCE_DEFAULT = 0x0,
        // MPropertyFriendlyName "Crouching"
        STANCE_CROUCHING = 0x1,
        // MPropertyFriendlyName "Prone"
        STANCE_PRONE = 0x2,
        // MPropertySuppressEnumerator
        NUM_STANCES = 0x3,
    };
};
