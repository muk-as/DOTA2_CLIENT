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
        // Size: 0x_
        enum class eRollType : std::uint32_t
        {
            ROLL_NONE = 0xffffffff,
            ROLL_STATS = 0x0,
            ROLL_CREDITS = 0x1,
            ROLL_LATE_JOIN_LOGO = 0x2,
            ROLL_OUTTRO = 0x3,
        };
    };
};
