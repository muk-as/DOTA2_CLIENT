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
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x_
        enum class NavScopeFlags_t : std::uint8_t
        {
            eGround = 0x1,
            eAir = 0x2,
            // MEnumeratorIsNotAFlag
            eAll = 0x3,
            // MEnumeratorIsNotAFlag
            eNone = 0x0,
        };
    };
};
