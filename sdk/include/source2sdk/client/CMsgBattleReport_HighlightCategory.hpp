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
    enum class CMsgBattleReport_HighlightCategory : std::uint32_t
    {
        // MPropertyFriendlyName "General"
        k_eHighlightGeneral = 0x0,
        // MPropertyFriendlyName "Hero"
        k_eHighlightHero = 0x1,
        // MPropertyFriendlyName "Role"
        k_eHighlightRole = 0x2,
    };
};
