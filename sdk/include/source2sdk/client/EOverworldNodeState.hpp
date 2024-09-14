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
    enum class EOverworldNodeState : std::uint32_t
    {
        k_eOverworldNodeState_Invalid = 0x0,
        k_eOverworldNodeState_Locked = 0x1,
        k_eOverworldNodeState_Unlocked = 0x2,
    };
};
