#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class PulseApiFeature_t : std::uint32_t
        {
            AF_NONE = 0x0,
            AF_ENTITIES = 0x1,
            AF_PANORAMA = 0x2,
            AF_PARTICLES = 0x8,
            AF_FAKE_ENTITIES = 0x10,
            AF_SELECTORS_WITHOUT_REQUIREMENTS = 0x20,
        };
    };
};
