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
        // Enumerator count: 18
        // Alignment: 1
        // Size: 0x_
        enum class RenderFx_t : std::uint8_t
        {
            kRenderFxNone = 0x0,
            kRenderFxPulseSlow = 0x1,
            kRenderFxPulseFast = 0x2,
            kRenderFxPulseSlowWide = 0x3,
            kRenderFxPulseFastWide = 0x4,
            kRenderFxFadeSlow = 0x5,
            kRenderFxFadeFast = 0x6,
            kRenderFxSolidSlow = 0x7,
            kRenderFxSolidFast = 0x8,
            kRenderFxStrobeSlow = 0x9,
            kRenderFxStrobeFast = 0xa,
            kRenderFxStrobeFaster = 0xb,
            kRenderFxFlickerSlow = 0xc,
            kRenderFxFlickerFast = 0xd,
            kRenderFxFadeOut = 0xe,
            kRenderFxFadeIn = 0xf,
            kRenderFxPulseFastWider = 0x10,
            kRenderFxMax = 0x11,
        };
    };
};
