#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ValueRemapperMomentumType_t : std::uint32_t
    {
        MomentumType_None = 0x0,
        MomentumType_Friction = 0x1,
        MomentumType_SpringTowardSnapValue = 0x2,
        MomentumType_SpringAwayFromSnapValue = 0x3,
    };
};
