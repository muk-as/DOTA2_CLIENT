#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class Blend2DMode : std::uint32_t
        {
            // MPropertyFriendlyName "General"
            Blend2DMode_General = 0x0,
            // MPropertyFriendlyName "Directional"
            Blend2DMode_Directional = 0x1,
        };
    };
};
