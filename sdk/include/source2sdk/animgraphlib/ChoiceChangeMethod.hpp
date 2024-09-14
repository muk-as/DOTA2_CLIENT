#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ChoiceChangeMethod : std::uint32_t
    {
        OnReset = 0x0,
        OnCycleEnd = 0x1,
        OnResetOrCycleEnd = 0x2,
    };
};
