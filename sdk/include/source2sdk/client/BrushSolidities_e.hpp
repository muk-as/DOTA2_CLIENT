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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class BrushSolidities_e : std::uint32_t
        {
            BRUSHSOLID_TOGGLE = 0x0,
            BRUSHSOLID_NEVER = 0x1,
            BRUSHSOLID_ALWAYS = 0x2,
        };
    };
};
