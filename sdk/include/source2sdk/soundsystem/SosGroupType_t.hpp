#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class SosGroupType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Dynamic"
        SOS_GROUPTYPE_DYNAMIC = 0x0,
        // MPropertyFriendlyName "Static"
        SOS_GROUPTYPE_STATIC = 0x1,
    };
};
