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
    enum class TimelineCompression_t : std::uint32_t
    {
        TIMELINE_COMPRESSION_SUM = 0x0,
        TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
        TIMELINE_COMPRESSION_AVERAGE = 0x2,
        TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
        TIMELINE_COMPRESSION_TOTAL = 0x4,
    };
};
