#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 20
    // Alignment: 4
    // Size: 0x4
    enum class EPlayerVoiceListenState : std::uint32_t
    {
        kPVLS_None = 0x0,
        kPVLS_DeniedChatBanned = 0x1,
        kPVLS_DeniedPartner = 0x2,
        kPVLS_DeniedHLTVTalkerNotSpectator = 0x3,
        kPVLS_DeniedHLTVNoTalkerPlayerID = 0x4,
        kPVLS_DeniedHLTVTalkerNotBroadcaster = 0x5,
        kPVLS_DeniedTeamSpectator = 0x6,
        kPVLS_DeniedStudent = 0x8,
        kPVLS_DeniedPrivateCoach = 0x9,
        kPVLS_Denied = 0x40,
        kPVLS_AllowHLTVTalkerIsBroadcaster = 0x41,
        kPVLS_AllowCoBroadcaster = 0x42,
        kPVLS_AllowAllChat = 0x43,
        kPVLS_AllowStudentToCoach = 0x44,
        kPVLS_AllowFellowStudent = 0x45,
        kPVLS_AllowTalkerIsCoach = 0x46,
        kPVLS_AllowCoachHearTeam = 0x47,
        kPVLS_AllowSameTeam = 0x48,
        kPVLS_AllowShowcase = 0x49,
        kPVLS_AllowPrivateCoach = 0x4a,
    };
};
