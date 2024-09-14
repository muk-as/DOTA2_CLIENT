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
    enum class EDemoBoneSelectionMode : std::uint32_t
    {
        // MPropertyFriendlyName "Capture All Bones"
        CaptureAllBones = 0x0,
        // MPropertyFriendlyName "Capture Selected Bones"
        CaptureSelectedBones = 0x1,
    };
};
