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
        // Alignment: 1
        // Size: 0x1
        enum class NavScope_t : std::uint8_t
        {
            eGround = 0x0,
            eAir = 0x1,
            // MPropertySuppressEnumerator
            eCount = 0x2,
            // MPropertySuppressEnumerator
            eFirst = 0x0,
            // MPropertySuppressEnumerator
            eInvalid = 0xff,
        };
    };
};
