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
    enum class CMsgBattleReport_Role : std::uint32_t
    {
        // MPropertySuppressEnumerator
        k_eUnknownRole = 0xffffffff,
        // MPropertyFriendlyName "Safe Lane"
        k_eSafelane = 0x0,
        // MPropertyFriendlyName "Mid Lane"
        k_eMidlane = 0x1,
        // MPropertyFriendlyName "Off Lane"
        k_eOfflane = 0x2,
        // MPropertyFriendlyName "Support"
        k_eSupport = 0x3,
        // MPropertyFriendlyName "Hard Support"
        k_eHardSupport = 0x4,
    };
};
