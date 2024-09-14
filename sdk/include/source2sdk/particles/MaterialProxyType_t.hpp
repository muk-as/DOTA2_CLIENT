#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class MaterialProxyType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Status Effect"
        MATERIAL_PROXY_STATUS_EFFECT = 0x0,
        // MPropertyFriendlyName "Tint Only"
        MATERIAL_PROXY_TINT = 0x1,
    };
};
