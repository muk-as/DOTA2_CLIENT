#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ELobbyMemberCoachRequestState : std::uint32_t
    {
        k_eLobbyMemberCoachRequestState_None = 0x0,
        k_eLobbyMemberCoachRequestState_Accepted = 0x1,
        k_eLobbyMemberCoachRequestState_Rejected = 0x2,
    };
};
