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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class Fantasy_Roles : std::uint32_t
        {
            FANTASY_ROLE_UNDEFINED = 0x0,
            FANTASY_ROLE_CORE = 0x1,
            FANTASY_ROLE_SUPPORT = 0x2,
            FANTASY_ROLE_OFFLANE = 0x3,
            FANTASY_ROLE_MID = 0x4,
        };
    };
};
