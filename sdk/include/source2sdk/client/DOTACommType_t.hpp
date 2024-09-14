#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 16
    // Alignment: 4
    // Size: 0x4
    enum class DOTACommType_t : std::uint32_t
    {
        DOTA_COMM_TYPE_NONE = 0x0,
        DOTA_COMM_TYPE_PING = 0x1,
        DOTA_COMM_TYPE_CHATWHEEL = 0x2,
        DOTA_COMM_TYPE_TIP = 0x3,
        DOTA_COMM_TYPE_TEXT = 0x4,
        DOTA_COMM_TYPE_SHOWCASE = 0x5,
        DOTA_COMM_TYPE_VOICE = 0x6,
        DOTA_COMM_TYPE_ALLY_ABILITY = 0x7,
        DOTA_COMM_TYPE_PAUSE = 0x8,
        DOTA_COMM_TYPE_COACHING = 0x9,
        DOTA_COMM_TYPE_NOCOOLDOWN = 0xa,
        DOTA_COMM_TYPE_RANKEDMATCHMAKE = 0xb,
        DOTA_COMM_TYPE_DROPS = 0xc,
        DOTA_COMM_TYPE_NEWPLAYER_EXPERT = 0xd,
        DOTA_COMM_TYPE_COACHED = 0xe,
        DOTA_COMM_TYPE_MAPDRAWING = 0xf,
    };
};
