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
        // Enumerator count: 22
        // Alignment: 4
        // Size: 0x_
        enum class SaveRestoreTableFlags_t : std::uint32_t
        {
            FENTTABLE_NONE = 0x0,
            FENTTABLE_PLAYER = 0x80000000,
            FENTTABLE_REMOVED = 0x40000000,
            FENTTABLE_MOVEABLE = 0x20000000,
            FENTTABLE_GLOBAL = 0x10000000,
            FENTTABLE_PLAYERCHILD = 0x8000000,
            LEVELMASK_BIT_0 = 0x1,
            LEVELMASK_BIT_1 = 0x2,
            LEVELMASK_BIT_2 = 0x4,
            LEVELMASK_BIT_3 = 0x8,
            LEVELMASK_BIT_4 = 0x10,
            LEVELMASK_BIT_5 = 0x20,
            LEVELMASK_BIT_6 = 0x40,
            LEVELMASK_BIT_7 = 0x80,
            LEVELMASK_BIT_8 = 0x100,
            LEVELMASK_BIT_9 = 0x200,
            LEVELMASK_BIT_10 = 0x400,
            LEVELMASK_BIT_11 = 0x800,
            LEVELMASK_BIT_12 = 0x1000,
            LEVELMASK_BIT_13 = 0x2000,
            LEVELMASK_BIT_14 = 0x4000,
            LEVELMASK_BIT_15 = 0x8000,
        };
    };
};
