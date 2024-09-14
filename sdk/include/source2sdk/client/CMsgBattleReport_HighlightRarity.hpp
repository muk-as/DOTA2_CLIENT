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
    enum class CMsgBattleReport_HighlightRarity : std::uint32_t
    {
        // MPropertyFriendlyName "Common"
        k_eHighlightCommon = 0x0,
        // MPropertyFriendlyName "Uncommon"
        k_eHighlightUncommon = 0x1,
        // MPropertyFriendlyName "Rare"
        k_eHighlightRare = 0x2,
    };
};
