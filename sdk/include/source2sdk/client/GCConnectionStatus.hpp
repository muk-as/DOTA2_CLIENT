#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class GCConnectionStatus : std::uint32_t
    {
        GCConnectionStatus_HAVE_SESSION = 0x0,
        GCConnectionStatus_GC_GOING_DOWN = 0x1,
        GCConnectionStatus_NO_SESSION = 0x2,
        GCConnectionStatus_NO_SESSION_IN_LOGON_QUEUE = 0x3,
        GCConnectionStatus_NO_STEAM = 0x4,
        GCConnectionStatus_SUSPENDED = 0x5,
        GCConnectionStatus_STEAM_GOING_DOWN = 0x6,
    };
};
