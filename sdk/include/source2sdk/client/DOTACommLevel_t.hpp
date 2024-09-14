#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class DOTACommLevel_t : std::uint32_t
    {
        DOTA_COMM_LEVEL_NONE = 0x0,
        DOTA_COMM_LEVEL_COOLDOWN = 0x1,
        DOTA_COMM_LEVEL_PINGS = 0x2,
        DOTA_COMM_LEVEL_MAPDRAWING = 0x3,
        DOTA_COMM_LEVEL_CHAT = 0x4,
        DOTA_COMM_LEVEL_TIPPING = 0x5,
        DOTA_COMM_LEVEL_VOICE = 0x6,
        DOTA_COMM_LEVEL_ALLIED_ABILITY = 0x7,
    };
};
