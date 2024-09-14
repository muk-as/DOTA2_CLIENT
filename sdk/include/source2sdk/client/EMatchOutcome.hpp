#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 19
    // Alignment: 4
    // Size: 0x4
    enum class EMatchOutcome : std::uint32_t
    {
        k_EMatchOutcome_Unknown = 0x0,
        k_EMatchOutcome_RadVictory = 0x2,
        k_EMatchOutcome_DireVictory = 0x3,
        k_EMatchOutcome_NeutralVictory = 0x4,
        k_EMatchOutcome_NoTeamWinner = 0x5,
        k_EMatchOutcome_Custom1Victory = 0x6,
        k_EMatchOutcome_Custom2Victory = 0x7,
        k_EMatchOutcome_Custom3Victory = 0x8,
        k_EMatchOutcome_Custom4Victory = 0x9,
        k_EMatchOutcome_Custom5Victory = 0xa,
        k_EMatchOutcome_Custom6Victory = 0xb,
        k_EMatchOutcome_Custom7Victory = 0xc,
        k_EMatchOutcome_Custom8Victory = 0xd,
        k_EMatchOutcome_NotScored_PoorNetworkConditions = 0x40,
        k_EMatchOutcome_NotScored_Leaver = 0x41,
        k_EMatchOutcome_NotScored_ServerCrash = 0x42,
        k_EMatchOutcome_NotScored_NeverStarted = 0x43,
        k_EMatchOutcome_NotScored_Canceled = 0x44,
        k_EMatchOutcome_NotScored_Suspicious = 0x45,
    };
};
