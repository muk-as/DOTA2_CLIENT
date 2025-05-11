#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace materialsystem2
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class BloomBlendMode_t : std::uint32_t
        {
            BLOOM_BLEND_ADD = 0x0,
            BLOOM_BLEND_SCREEN = 0x1,
            BLOOM_BLEND_BLUR = 0x2,
        };
    };
};
