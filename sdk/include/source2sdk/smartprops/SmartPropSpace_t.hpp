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
    enum class SmartPropSpace_t : std::uint32_t
    {
        // MPropertyFriendlyName "World space"
        // MPropertyDescription "World space transform, not relative to the specific smart prop object placement."
        WORLD = 0x0,
        // MPropertyFriendlyName "Object space"
        // MPropertyDescription "Object space transform, relative to the object placement, but does not include the current element transform."
        OBJECT = 0x1,
        // MPropertyFriendlyName "Element space"
        // MPropertyDescription "Element space transform, includes the transform of the current element, which is also relative to the object."
        ELEMENT = 0x2,
    };
};
