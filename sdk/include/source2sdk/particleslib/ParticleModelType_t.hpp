#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ParticleModelType_t : std::uint32_t
    {
        PM_TYPE_INVALID = 0x0,
        PM_TYPE_NAMED_VALUE_MODEL = 0x1,
        PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
        PM_TYPE_CONTROL_POINT = 0x3,
        PM_TYPE_COUNT = 0x4,
    };
};
