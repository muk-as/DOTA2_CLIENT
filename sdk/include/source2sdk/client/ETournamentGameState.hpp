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
    enum class ETournamentGameState : std::uint32_t
    {
        k_ETournamentGameState_Unknown = 0x0,
        k_ETournamentGameState_Canceled = 0x1,
        k_ETournamentGameState_Scheduled = 0x2,
        k_ETournamentGameState_Active = 0x3,
        k_ETournamentGameState_RadVictory = 0x14,
        k_ETournamentGameState_DireVictory = 0x15,
        k_ETournamentGameState_RadVictoryByForfeit = 0x16,
        k_ETournamentGameState_DireVictoryByForfeit = 0x17,
        k_ETournamentGameState_ServerFailure = 0x28,
        k_ETournamentGameState_NotNeeded = 0x29,
    };
};
