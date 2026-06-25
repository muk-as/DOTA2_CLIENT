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
        // Size: 0x_
        enum class ChoreoStrafeMode_t : std::uint32_t
        {
            // MPropertyFriendlyName "Default"
            DEFAULT = 0x0,
            // MPropertyFriendlyName "Enable"
            ENABLE = 0x1,
            // MPropertyFriendlyName "Disable"
            DISABLE = 0x2,
        };
    };
};
