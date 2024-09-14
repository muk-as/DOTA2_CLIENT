#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EShmupEventType : std::uint32_t
    {
        // MPropertySuppressEnumerator
        k_eShmupEventType_Invalid = 0xffffffff,
        k_eShmupEventType_SpawnEnemy = 0x0,
        k_eShmupEventType_UI = 0x1,
    };
};
