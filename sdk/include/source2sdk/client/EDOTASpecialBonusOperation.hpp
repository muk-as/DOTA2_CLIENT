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
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class EDOTASpecialBonusOperation : std::uint8_t
        {
            SPECIAL_BONUS_ADD = 0x0,
            SPECIAL_BONUS_MULTIPLY = 0x1,
            SPECIAL_BONUS_SUBTRACT = 0x2,
            SPECIAL_BONUS_PERCENTAGE_ADD = 0x3,
            SPECIAL_BONUS_PERCENTAGE_SUBTRACT = 0x4,
            SPECIAL_BONUS_SET = 0x5,
        };
    };
};
