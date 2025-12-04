#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x_
        enum class HoverPoseFlags_t : std::uint8_t
        {
            eNone = 0x0,
            ePosition = 0x1,
            eAngles = 0x2,
        };
    };
};
