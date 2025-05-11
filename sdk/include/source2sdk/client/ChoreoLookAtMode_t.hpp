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
        enum class ChoreoLookAtMode_t : std::uint32_t
        {
            // MPropertySuppressEnumerator
            eInvalid = 0xffffffff,
            // MPropertyFriendlyName "Chest"
            eChest = 0x0,
            // MPropertyFriendlyName "Head"
            eHead = 0x1,
            // MPropertyFriendlyName "Eyes"
            eEyesOnly = 0x2,
        };
    };
};
