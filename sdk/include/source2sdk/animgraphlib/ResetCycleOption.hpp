#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ResetCycleOption : std::uint32_t
    {
        Beginning = 0x0,
        SameCycleAsSource = 0x1,
        InverseSourceCycle = 0x2,
        FixedValue = 0x3,
        SameTimeAsSource = 0x4,
    };
};
