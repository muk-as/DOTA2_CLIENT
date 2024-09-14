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
    enum class EReadyCheckStatus : std::uint32_t
    {
        k_EReadyCheckStatus_Unknown = 0x0,
        k_EReadyCheckStatus_NotReady = 0x1,
        k_EReadyCheckStatus_Ready = 0x2,
    };
};
