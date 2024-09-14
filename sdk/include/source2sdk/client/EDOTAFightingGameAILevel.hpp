#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EDOTAFightingGameAILevel : std::uint32_t
    {
        FG_AI_LEVEL_NONE = 0xffffffff,
        FG_AI_LEVEL_EASY = 0x0,
        FG_AI_LEVEL_MEDIUM = 0x1,
        FG_AI_LEVEL_HARD = 0x2,
    };
};
