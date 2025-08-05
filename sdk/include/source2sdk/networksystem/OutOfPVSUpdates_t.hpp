#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: networksystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace networksystem
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class OutOfPVSUpdates_t : std::uint32_t
        {
            OOPVSUpdates_OptOut = 0x0,
            OOPVSUpdates_OptIn = 0x1,
            OOPVSUpdates_Default = 0x2,
            OOPVSUpdates_Count = 0x3,
        };
    };
};
