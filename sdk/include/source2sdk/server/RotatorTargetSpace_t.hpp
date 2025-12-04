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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x_
        enum class RotatorTargetSpace_t : std::uint32_t
        {
            ROTATOR_TARGET_WORLDSPACE = 0x0,
            ROTATOR_TARGET_LOCALSPACE = 0x1,
        };
    };
};
