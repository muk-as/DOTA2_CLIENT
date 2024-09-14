#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_CHAT_INFORMATIONAL : std::uint32_t
    {
        INFO_COOP_BATTLE_POINTS_RULES = 0x1,
        INFO_FROSTIVUS_ABANDON_REMINDER = 0x2,
        INFO_RANKED_REMINDER = 0x3,
        INFO_COOP_LOW_PRIORITY_PASSIVE_REMINDER = 0x4,
        INFO_CUSTOM_GAME_PENALTY_REMINDER = 0x5,
    };
};
