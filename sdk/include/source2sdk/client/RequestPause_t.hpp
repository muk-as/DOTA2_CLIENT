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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class RequestPause_t : std::uint32_t
        {
            RP_PAUSE = 0x0,
            RP_UNPAUSE = 0x1,
            RP_TOGGLEPAUSE = 0x2,
        };
    };
};
