#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 14
    // Alignment: 4
    // Size: 0x4
    enum class EDOTAGCSessionNeed : std::uint32_t
    {
        k_EDOTAGCSessionNeed_Unknown = 0x0,
        k_EDOTAGCSessionNeed_UserNoSessionNeeded = 0x64,
        k_EDOTAGCSessionNeed_UserInOnlineGame = 0x65,
        k_EDOTAGCSessionNeed_UserInLocalGame = 0x66,
        k_EDOTAGCSessionNeed_UserInUIWasConnected = 0x67,
        k_EDOTAGCSessionNeed_UserInUINeverConnected = 0x68,
        k_EDOTAGCSessionNeed_UserTutorials = 0x69,
        k_EDOTAGCSessionNeed_UserInUIWasConnectedIdle = 0x6a,
        k_EDOTAGCSessionNeed_UserInUINeverConnectedIdle = 0x6b,
        k_EDOTAGCSessionNeed_GameServerOnline = 0xc8,
        k_EDOTAGCSessionNeed_GameServerLocal = 0xc9,
        k_EDOTAGCSessionNeed_GameServerIdle = 0xca,
        k_EDOTAGCSessionNeed_GameServerRelay = 0xcb,
        k_EDOTAGCSessionNeed_GameServerLocalUpload = 0xcc,
    };
};
