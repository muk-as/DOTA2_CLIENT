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
        enum class quest_text_replace_values_t : std::uint32_t
        {
            QUEST_TEXT_REPLACE_VALUE_CURRENT_VALUE = 0x0,
            QUEST_TEXT_REPLACE_VALUE_TARGET_VALUE = 0x1,
            QUEST_TEXT_REPLACE_VALUE_ROUND = 0x2,
            QUEST_TEXT_REPLACE_VALUE_REWARD = 0x3,
            QUEST_NUM_TEXT_REPLACE_VALUES = 0x4,
        };
    };
};
