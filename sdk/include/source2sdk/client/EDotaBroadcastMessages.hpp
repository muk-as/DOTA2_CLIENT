#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class EDotaBroadcastMessages : std::uint32_t
    {
        DOTA_BM_LANLobbyRequest = 0x1,
        DOTA_BM_LANLobbyReply = 0x2,
    };
};
