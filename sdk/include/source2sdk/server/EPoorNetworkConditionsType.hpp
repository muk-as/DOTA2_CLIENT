#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EPoorNetworkConditionsType : std::uint32_t
    {
        k_EPoorNetworkConditions_None = 0x0,
        k_EPoorNetworkConditions_Unknown = 0x1,
        k_EPoorNetworkConditions_MassDisconnect = 0x2,
        k_EPoorNetworkConditions_ExcessBadQosIntervals = 0x3,
    };
};
