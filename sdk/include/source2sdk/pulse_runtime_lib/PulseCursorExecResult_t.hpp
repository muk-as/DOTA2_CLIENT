#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class PulseCursorExecResult_t : std::uint32_t
    {
        Succeeded = 0x0,
        Canceled = 0x1,
        Failed = 0x2,
        OngoingNotify = 0x3,
    };
};
