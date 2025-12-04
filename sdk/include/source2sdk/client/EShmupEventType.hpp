#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class EShmupEventType : std::uint32_t
        {
            // MPropertySuppressEnumerator
            k_eShmupEventType_Invalid = 0xffffffff,
            k_eShmupEventType_SpawnEnemy = 0x0,
            k_eShmupEventType_UI = 0x1,
        };
    };
};
