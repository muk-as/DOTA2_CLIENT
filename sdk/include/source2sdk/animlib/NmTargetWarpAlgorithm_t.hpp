#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class NmTargetWarpAlgorithm_t : std::uint8_t
    {
        Lerp = 0,
        Hermite = 1,
        HermiteFeaturePreserving = 2,
        Bezier = 3,
    };
};
