#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class IKTargetSource : std::uint32_t
        {
            // MPropertyFriendlyName "Bone"
            IKTARGETSOURCE_Bone = 0x0,
            // MPropertyFriendlyName "Animgraph Parameter"
            IKTARGETSOURCE_AnimgraphParameter = 0x1,
            // MPropertySuppressEnumerator
            IKTARGETSOURCE_COUNT = 0x2,
        };
    };
};
