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
    enum class CMsgBattleReport_HighlightTier : std::uint32_t
    {
        // MPropertyFriendlyName "Tier Low"
        k_eHighlightTierLow = 0xffffffff,
        // MPropertySuppressEnumerator
        k_eHighlightTierNone = 0x0,
        // MPropertyFriendlyName "Tier 1"
        k_eHighlightTier1 = 0x1,
        // MPropertyFriendlyName "Tier 2"
        k_eHighlightTier2 = 0x2,
        // MPropertyFriendlyName "Tier 3"
        k_eHighlightTier3 = 0x3,
        // MPropertyFriendlyName "Custom"
        k_eHighlightTierCustom = 0x4,
    };
};
