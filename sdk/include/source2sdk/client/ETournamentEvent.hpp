#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 12
        // Alignment: 4
        // Size: 0x_
        enum class ETournamentEvent : std::uint32_t
        {
            k_ETournamentEvent_None = 0x0,
            k_ETournamentEvent_TournamentCreated = 0x1,
            k_ETournamentEvent_TournamentsMerged = 0x2,
            k_ETournamentEvent_GameOutcome = 0x3,
            k_ETournamentEvent_TeamGivenBye = 0x4,
            k_ETournamentEvent_TournamentCanceledByAdmin = 0x5,
            k_ETournamentEvent_TeamAbandoned = 0x6,
            k_ETournamentEvent_ScheduledGameStarted = 0x7,
            k_ETournamentEvent_Canceled = 0x8,
            k_ETournamentEvent_TeamParticipationTimedOut_EntryFeeRefund = 0x9,
            k_ETournamentEvent_TeamParticipationTimedOut_EntryFeeForfeit = 0xa,
            k_ETournamentEvent_TeamParticipationTimedOut_GrantedVictory = 0xb,
        };
    };
};
