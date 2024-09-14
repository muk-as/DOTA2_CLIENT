#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class VPhysXConstraintParams_t__EnumFlags0_t : std::uint32_t
    {
        FLAG0_SHIFT_INTERPENETRATE = 0x0,
        FLAG0_SHIFT_CONSTRAIN = 0x1,
        FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
        FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
    };
};
