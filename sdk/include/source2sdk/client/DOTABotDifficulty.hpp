#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class DOTABotDifficulty : std::uint32_t
    {
        BOT_DIFFICULTY_PASSIVE = 0x0,
        BOT_DIFFICULTY_EASY = 0x1,
        BOT_DIFFICULTY_MEDIUM = 0x2,
        BOT_DIFFICULTY_HARD = 0x3,
        BOT_DIFFICULTY_UNFAIR = 0x4,
        BOT_DIFFICULTY_INVALID = 0x5,
        BOT_DIFFICULTY_EXTRA1 = 0x6,
        BOT_DIFFICULTY_EXTRA2 = 0x7,
        BOT_DIFFICULTY_EXTRA3 = 0x8,
        BOT_DIFFICULTY_NPX = 0x9,
    };
};
