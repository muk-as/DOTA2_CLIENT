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
    enum class OrderQueueBehavior_t : std::uint32_t
    {
        DOTA_ORDER_QUEUE_DEFAULT = 0x0,
        DOTA_ORDER_QUEUE_NEVER = 0x1,
        DOTA_ORDER_QUEUE_ALWAYS = 0x2,
    };
};
