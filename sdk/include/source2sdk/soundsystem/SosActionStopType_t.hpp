#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class SosActionStopType_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        SOS_STOPTYPE_NONE = 0x0,
        // MPropertyFriendlyName "Elapsed Time"
        SOS_STOPTYPE_TIME = 0x1,
        // MPropertyFriendlyName "Opvar Float"
        SOS_STOPTYPE_OPVAR = 0x2,
    };
};
