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
    enum class EPlayerChallengeHistoryType : std::uint32_t
    {
        k_EPlayerChallengeHistoryType_Invalid = 0x0,
        k_EPlayerChallengeHistoryType_KillEater = 0x1,
        k_EPlayerChallengeHistoryType_DotaPlusRelic = 0x2,
        k_EPlayerChallengeHistoryType_DotaPlusHeroPlayerChallenge = 0x3,
        k_EPlayerChallengeHistoryType_InGameEventChallenge = 0x4,
        k_EPlayerChallengeHistoryType_GuildContract = 0x5,
    };
};
