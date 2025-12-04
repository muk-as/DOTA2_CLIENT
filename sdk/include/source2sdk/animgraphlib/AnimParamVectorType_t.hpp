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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class AnimParamVectorType_t : std::uint32_t
        {
            // MPropertyFriendlyName "None Specified"
            ANIMPARAM_VECTOR_TYPE_NONE = 0x0,
            // MPropertyFriendlyName "World Space Position"
            ANIMPARAM_VECTOR_TYPE_POSITION_WS = 0x1,
            // MPropertyFriendlyName "Model Space Position"
            ANIMPARAM_VECTOR_TYPE_POSITION_LS = 0x2,
            // MPropertyFriendlyName "World Space Direction"
            ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 0x3,
            // MPropertyFriendlyName "Model Space Direction"
            ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 0x4,
        };
    };
};
