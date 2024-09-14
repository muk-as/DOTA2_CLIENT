#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class EShowcaseType : std::uint32_t
    {
        k_eShowcaseType_Invalid = 0x0,
        k_eShowcaseType_Profile = 0x1,
        k_eShowcaseType_MiniProfile = 0x2,
        k_eShowcaseType_DefaultProfile = 0x3,
        k_eShowcaseType_DefaultMiniProfile = 0x4,
    };
};
