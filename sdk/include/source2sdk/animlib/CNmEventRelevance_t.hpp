#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class CNmEventRelevance_t : std::uint32_t
        {
            ClientOnly = 0x0,
            ServerOnly = 0x1,
            ClientAndServer = 0x2,
        };
    };
};
