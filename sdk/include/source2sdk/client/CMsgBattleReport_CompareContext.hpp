#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class CMsgBattleReport_CompareContext : std::uint32_t
    {
        // MPropertySuppressEnumerator
        k_eCompareContextInvalid = 0xffffffff,
        // MPropertyFriendlyName "Overall Value"
        k_eAbsoluteValue = 0x0,
        // MPropertyFriendlyName "Vs Rank Population"
        k_ePlayersOfSimilarRank = 0x1,
        // MPropertyFriendlyName "Vs All Players"
        k_eAllPlayers = 0x2,
        // MPropertyFriendlyName "Vs Personal History"
        k_ePlayersPersonalHistory = 0x3,
    };
};
