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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class ECrowdLevel : std::uint32_t
        {
            CROWD_NONE = 0x0,
            CROWD_LOW = 0x1,
            CROWD_MEDIUM = 0x2,
            CROWD_HIGH = 0x3,
        };
    };
};
