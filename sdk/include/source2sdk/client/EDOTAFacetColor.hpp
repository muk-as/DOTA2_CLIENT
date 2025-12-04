#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 8
        // Alignment: 1
        // Size: 0x_
        enum class EDOTAFacetColor : std::uint8_t
        {
            FACET_COLOR_RED = 0x0,
            FACET_COLOR_YELLOW = 0x1,
            FACET_COLOR_GREEN = 0x2,
            FACET_COLOR_BLUE = 0x3,
            FACET_COLOR_PURPLE = 0x4,
            FACET_COLOR_GRAY = 0x5,
            FACET_COLOR_COUNT = 0x6,
            FACET_COLOR_INVALID = 0x7,
        };
    };
};
