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
    enum class JiggleBoneSimSpace : std::uint32_t
    {
        // MPropertyFriendlyName "Local Space"
        SimSpace_Local = 0x0,
        // MPropertyFriendlyName "Model Space"
        SimSpace_Model = 0x1,
        // MPropertyFriendlyName "World Space"
        SimSpace_World = 0x2,
    };
};
