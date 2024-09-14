#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class EPrivateCoachingSessionState : std::uint32_t
    {
        k_ePrivateCoachingSessionState_Invalid = 0x0,
        k_ePrivateCoachingSessionState_SearchingForCoach = 0x1,
        k_ePrivateCoachingSessionState_CoachAssigned = 0x2,
        k_ePrivateCoachingSessionState_Finished = 0x3,
        k_ePrivateCoachingSessionState_Expired = 0x4,
        k_ePrivateCoachingSessionState_Abandoned = 0x5,
    };
};
