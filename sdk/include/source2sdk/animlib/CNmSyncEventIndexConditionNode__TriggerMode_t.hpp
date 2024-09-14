#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 2
    // Alignment: 1
    // Size: 0x1
    enum class CNmSyncEventIndexConditionNode__TriggerMode_t : std::uint8_t
    {
        ExactlyAtEventIndex = 0,
        GreaterThanEqualToEventIndex = 1,
    };
};
