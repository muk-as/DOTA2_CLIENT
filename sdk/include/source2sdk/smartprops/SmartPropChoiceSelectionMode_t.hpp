#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class SmartPropChoiceSelectionMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Random"
        // MPropertyDescription "Randomly pick a choice. If the choices have weights, the weights will be used to determine the probability of picking a given choice"
        RANDOM = 0x0,
        // MPropertyFriendlyName "First"
        // MPropertyDescription "Pick the first valid choice. Selection criteria may be added to a choice to determine if it is valid."
        FIRST = 0x1,
        // MPropertyFriendlyName "Specific"
        // MPropertyDescription "Pick a choice specified by an additional authored value."
        SPECIFIC = 0x2,
    };
};
