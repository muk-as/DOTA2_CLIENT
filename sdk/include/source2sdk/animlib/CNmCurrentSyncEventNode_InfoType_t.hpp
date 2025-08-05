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
        // Alignment: 1
        // Size: 0x1
        enum class CNmCurrentSyncEventNode_InfoType_t : std::uint8_t
        {
            IndexAndPercentage = 0x0,
            IndexOnly = 0x1,
            PercentageOnly = 0x2,
        };
    };
};
