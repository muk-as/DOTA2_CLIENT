#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class ETournamentState : std::uint32_t
    {
        k_ETournamentState_Unknown = 0x0,
        k_ETournamentState_CanceledByAdmin = 0x1,
        k_ETournamentState_Completed = 0x2,
        k_ETournamentState_Merged = 0x3,
        k_ETournamentState_ServerFailure = 0x4,
        k_ETournamentState_TeamAbandoned = 0x5,
        k_ETournamentState_TeamTimeoutForfeit = 0x6,
        k_ETournamentState_TeamTimeoutRefund = 0x7,
        k_ETournamentState_ServerFailureGrantedVictory = 0x8,
        k_ETournamentState_TeamTimeoutGrantedVictory = 0x9,
        k_ETournamentState_InProgress = 0x64,
        k_ETournamentState_WaitingToMerge = 0x65,
    };
};
