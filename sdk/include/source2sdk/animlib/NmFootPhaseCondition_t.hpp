#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class NmFootPhaseCondition_t : std::uint8_t
    {
        LeftFootDown = 0,
        LeftFootPassing = 1,
        LeftPhase = 4,
        RightFootDown = 2,
        RightFootPassing = 3,
        RightPhase = 5,
    };
};
