#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 23
    // Alignment: 1
    // Size: 0x1
    enum class NmEasingOperation_t : std::uint8_t
    {
        Linear = 0,
        InQuad = 1,
        OutQuad = 2,
        InOutQuad = 3,
        InCubic = 4,
        OutCubic = 5,
        InOutCubic = 6,
        InQuart = 7,
        OutQuart = 8,
        InOutQuart = 9,
        InQuint = 10,
        OutQuint = 11,
        InOutQuint = 12,
        InSine = 13,
        OutSine = 14,
        InOutSine = 15,
        InExpo = 16,
        OutExpo = 17,
        InOutExpo = 18,
        InCirc = 19,
        OutCirc = 20,
        InOutCirc = 21,
        None = 22,
    };
};
