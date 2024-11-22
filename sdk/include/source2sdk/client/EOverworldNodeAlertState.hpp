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
    enum class EOverworldNodeAlertState : std::uint32_t
    {
        k_eOverworldNodeAlertState_Unset = 0x0,
        k_eOverworldNodeAlertState_Show = 0x1,
        k_eOverworldNodeAlertState_Hide = 0x2,
    };
};
