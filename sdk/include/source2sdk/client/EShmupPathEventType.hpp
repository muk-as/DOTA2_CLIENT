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
    enum class EShmupPathEventType : std::uint32_t
    {
        // MPropertySuppressEnumerator
        k_eShmupPathEventType_Invalid = 0xffffffff,
        k_eShmupPathEventType_Speed = 0x0,
        k_eShmupPathEventType_Shoot = 0x1,
        k_eShmupPathEventType_StorePlayerPosition = 0x2,
        k_eShmupPathEventType_DestroySelf = 0x3,
    };
};
