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
    enum class PickMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Largest fitting"
        // MPropertyDescription "Pick the largest child element that will fit in the remaining length of the line, repeat this process until the line is full or no child will fit in the remaining length."
        LARGEST_FIRST = 0x0,
        // MPropertyFriendlyName "Random fitting"
        // MPropertyDescription "Pick a random choice from the child elements that will fit within the remaining length, repeat this process until the line is full or no child will fit in the remaining length."
        RANDOM = 0x1,
        // MPropertyFriendlyName "Place all in order"
        // MPropertyDescription "Place all of the child elements in the order they are specified even if they do not fit the line or do not fill the line. NOTE: end cap settings are ignored in this mode."
        ALL_IN_ORDER = 0x2,
    };
};
