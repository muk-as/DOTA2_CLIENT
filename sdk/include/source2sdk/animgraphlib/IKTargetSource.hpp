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
    enum class IKTargetSource : std::uint32_t
    {
        // MPropertyFriendlyName "Bone"
        IKTARGETSOURCE_Bone = 0x0,
        // MPropertyFriendlyName "Animgraph Parameter"
        IKTARGETSOURCE_AnimgraphParameter = 0x1,
        IKTARGETSOURCE_COUNT = 0x2,
    };
};
