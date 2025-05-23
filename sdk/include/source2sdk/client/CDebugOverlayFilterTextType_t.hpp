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
        // Size: 0x4
        enum class CDebugOverlayFilterTextType_t : std::uint32_t
        {
            FILTER_TEXT_NONE = 0x0,
            MATCH = 0x1,
            HIERARCHY = 0x2,
            COUNT = 0x3,
        };
    };
};
