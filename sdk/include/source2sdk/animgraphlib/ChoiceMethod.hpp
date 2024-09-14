#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ChoiceMethod : std::uint32_t
    {
        WeightedRandom = 0x0,
        WeightedRandomNoRepeat = 0x1,
        Iterate = 0x2,
        IterateRandom = 0x3,
    };
};
