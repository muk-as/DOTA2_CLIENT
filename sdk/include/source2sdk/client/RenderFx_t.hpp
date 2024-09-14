#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 20
    // Alignment: 1
    // Size: 0x1
    enum class RenderFx_t : std::uint8_t
    {
        kRenderFxNone = 0,
        kRenderFxPulseSlow = 1,
        kRenderFxPulseFast = 2,
        kRenderFxPulseSlowWide = 3,
        kRenderFxPulseFastWide = 4,
        kRenderFxFadeSlow = 5,
        kRenderFxFadeFast = 6,
        kRenderFxSolidSlow = 7,
        kRenderFxSolidFast = 8,
        kRenderFxStrobeSlow = 9,
        kRenderFxStrobeFast = 10,
        kRenderFxStrobeFaster = 11,
        kRenderFxFlickerSlow = 12,
        kRenderFxFlickerFast = 13,
        kRenderFxNoDissipation = 14,
        kRenderFxFadeOut = 15,
        kRenderFxFadeIn = 16,
        kRenderFxPulseFastWider = 17,
        kRenderFxGlowShell = 18,
        kRenderFxMax = 19,
    };
};
