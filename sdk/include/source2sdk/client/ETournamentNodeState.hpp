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
    enum class ETournamentNodeState : std::uint32_t
    {
        k_ETournamentNodeState_Unknown = 0x0,
        k_ETournamentNodeState_Canceled = 0x1,
        k_ETournamentNodeState_TeamsNotYetAssigned = 0x2,
        k_ETournamentNodeState_InBetweenGames = 0x3,
        k_ETournamentNodeState_GameInProgress = 0x4,
        k_ETournamentNodeState_A_Won = 0x5,
        k_ETournamentNodeState_B_Won = 0x6,
        k_ETournamentNodeState_A_WonByForfeit = 0x7,
        k_ETournamentNodeState_B_WonByForfeit = 0x8,
        k_ETournamentNodeState_A_Bye = 0x9,
        k_ETournamentNodeState_A_Abandoned = 0xa,
        k_ETournamentNodeState_ServerFailure = 0xb,
        k_ETournamentNodeState_A_TimeoutForfeit = 0xc,
        k_ETournamentNodeState_A_TimeoutRefund = 0xd,
    };
};
