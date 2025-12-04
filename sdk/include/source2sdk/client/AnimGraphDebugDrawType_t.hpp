#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class AnimGraphDebugDrawType_t : std::uint32_t
        {
            None = 0x0,
            WsPosition = 0x1,
            MsPosition = 0x2,
            WsDirection = 0x3,
            MsDirection = 0x4,
        };
    };
};
