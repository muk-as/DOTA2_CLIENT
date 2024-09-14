#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class JumpCorrectionMethod : std::uint32_t
    {
        // MPropertyFriendlyName "Scale Animation Motion"
        ScaleMotion = 0x0,
        // MPropertyFriendlyName "Add Correction Delta"
        AddCorrectionDelta = 0x1,
    };
};
