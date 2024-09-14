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
    enum class DOTALeaverStatus_t : std::uint32_t
    {
        DOTA_LEAVER_NONE = 0x0,
        DOTA_LEAVER_DISCONNECTED = 0x1,
        DOTA_LEAVER_DISCONNECTED_TOO_LONG = 0x2,
        DOTA_LEAVER_ABANDONED = 0x3,
        DOTA_LEAVER_AFK = 0x4,
        DOTA_LEAVER_NEVER_CONNECTED = 0x5,
        DOTA_LEAVER_NEVER_CONNECTED_TOO_LONG = 0x6,
        DOTA_LEAVER_FAILED_TO_READY_UP = 0x7,
        DOTA_LEAVER_DECLINED = 0x8,
        DOTA_LEAVER_DECLINED_REQUEUE = 0x9,
    };
};
