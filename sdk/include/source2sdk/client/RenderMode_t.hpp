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
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x_
        enum class RenderMode_t : std::uint8_t
        {
            kRenderNormal = 0x0,
            kRenderTransAlpha = 0x1,
            kRenderNone = 0x2,
            kRenderModeCount = 0x3,
        };
    };
};
