#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 13
    // Alignment: 1
    // Size: 0x1
    enum class RenderMode_t : std::uint8_t
    {
        kRenderNormal = 0,
        kRenderTransColor = 1,
        kRenderTransTexture = 2,
        kRenderGlow = 3,
        kRenderTransAlpha = 4,
        kRenderTransAdd = 5,
        kRenderEnvironmental = 6,
        kRenderTransAddFrameBlend = 7,
        kRenderTransAlphaAdd = 8,
        kRenderWorldGlow = 9,
        kRenderNone = 10,
        kRenderDevVisualizer = 11,
        kRenderModeCount = 12,
    };
};
