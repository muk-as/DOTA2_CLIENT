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
    enum class HitboxLerpType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Lerp from Start/End Time"
        HITBOX_LERP_LIFETIME = 0x0,
        // MPropertyFriendlyName "Constant"
        HITBOX_LERP_CONSTANT = 0x1,
    };
};
