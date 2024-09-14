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
    enum class EClientUIEvent : std::uint32_t
    {
        EClientUIEvent_Invalid = 0x0,
        EClientUIEvent_DialogFinished = 0x1,
        EClientUIEvent_FireOutput = 0x2,
    };
};
