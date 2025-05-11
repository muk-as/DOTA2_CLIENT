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
        // Enumerator count: 13
        // Alignment: 1
        // Size: 0x1
        enum class RenderMode_t : std::uint8_t
        {
            kRenderNormal = 0x0,
            kRenderTransColor = 0x1,
            kRenderTransTexture = 0x2,
            kRenderGlow = 0x3,
            kRenderTransAlpha = 0x4,
            kRenderTransAdd = 0x5,
            kRenderEnvironmental = 0x6,
            kRenderTransAddFrameBlend = 0x7,
            kRenderTransAlphaAdd = 0x8,
            kRenderWorldGlow = 0x9,
            kRenderNone = 0xa,
            kRenderDevVisualizer = 0xb,
            kRenderModeCount = 0xc,
        };
    };
};
