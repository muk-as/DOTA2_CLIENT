#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class EDOTASpecialBonusOperation : std::uint8_t
    {
        SPECIAL_BONUS_ADD = 0,
        SPECIAL_BONUS_MULTIPLY = 1,
        SPECIAL_BONUS_SUBTRACT = 2,
        SPECIAL_BONUS_PERCENTAGE_ADD = 3,
        SPECIAL_BONUS_PERCENTAGE_SUBTRACT = 4,
        SPECIAL_BONUS_SET = 5,
    };
};
