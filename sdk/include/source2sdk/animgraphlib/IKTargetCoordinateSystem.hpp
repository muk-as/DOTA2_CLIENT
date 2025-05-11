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
        // Size: 0x4
        enum class IKTargetCoordinateSystem : std::uint32_t
        {
            // MPropertyFriendlyName "World Space"
            IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
            // MPropertyFriendlyName "Model Space"
            IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
            IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
        };
    };
};
