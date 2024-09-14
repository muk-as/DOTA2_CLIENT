#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class FieldNetworkOption : std::uint32_t
    {
        // MPropertyFriendlyName "Auto"
        Auto = 0x0,
        // MPropertyFriendlyName "Enable Replication"
        ForceEnable = 0x1,
        // MPropertyFriendlyName "Disable Replication"
        ForceDisable = 0x2,
    };
};
