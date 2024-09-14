#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class AnimNodeNetworkMode : std::uint32_t
    {
        // MPropertyFriendlyName "Server Authoritative"
        ServerAuthoritative = 0x0,
        // MPropertyFriendlyName "Client Simulate"
        ClientSimulate = 0x1,
    };
};
