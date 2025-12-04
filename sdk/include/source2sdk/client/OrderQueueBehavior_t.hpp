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
        enum class OrderQueueBehavior_t : std::uint32_t
        {
            DOTA_ORDER_QUEUE_DEFAULT = 0x0,
            DOTA_ORDER_QUEUE_NEVER = 0x1,
            DOTA_ORDER_QUEUE_ALWAYS = 0x2,
        };
    };
};
