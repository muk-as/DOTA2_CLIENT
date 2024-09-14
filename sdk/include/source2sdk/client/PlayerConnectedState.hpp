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
    enum class PlayerConnectedState : std::uint32_t
    {
        PlayerNeverConnected = 0xffffffff,
        PlayerConnected = 0x0,
        PlayerConnecting = 0x1,
        PlayerReconnecting = 0x2,
        PlayerDisconnecting = 0x3,
        PlayerDisconnected = 0x4,
        PlayerReserved = 0x5,
    };
};
