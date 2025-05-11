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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class CHeadLookParams_HeadLookPriority_t : std::uint32_t
        {
            BORING = 0x0,
            INTERESTING = 0x1,
            IMPORTANT = 0x2,
            CRITICAL = 0x3,
            MANDATORY = 0x4,
        };
    };
};
