#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class AnimPoseControl : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        NoPoseControl = 0x0,
        // MPropertyFriendlyName "Absolute"
        AbsolutePoseControl = 0x1,
        // MPropertyFriendlyName "Relative"
        RelativePoseControl = 0x2,
    };
};
