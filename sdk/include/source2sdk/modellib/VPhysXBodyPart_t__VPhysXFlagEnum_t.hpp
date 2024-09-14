#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class VPhysXBodyPart_t__VPhysXFlagEnum_t : std::uint32_t
    {
        FLAG_STATIC = 0x1,
        FLAG_KINEMATIC = 0x2,
        FLAG_JOINT = 0x4,
        FLAG_MASS = 0x8,
        FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
    };
};
