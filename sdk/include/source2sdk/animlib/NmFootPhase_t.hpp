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
    enum class NmFootPhase_t : std::uint8_t
    {
        LeftFootDown = 0,
        RightFootPassing = 1,
        RightFootDown = 2,
        LeftFootPassing = 3,
    };
};
