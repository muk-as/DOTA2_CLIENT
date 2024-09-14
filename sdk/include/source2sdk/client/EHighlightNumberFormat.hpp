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
    enum class EHighlightNumberFormat : std::uint32_t
    {
        // MPropertyFriendlyName "Float"
        k_eFloat = 0x0,
        // MPropertyFriendlyName "Integer"
        k_eInteger = 0x1,
        // MPropertyFriendlyName "Percentage"
        k_ePercentage = 0x2,
        // MPropertyFriendlyName "Time"
        k_eTime = 0x3,
    };
};
