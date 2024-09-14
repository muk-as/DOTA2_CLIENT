#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class PlayerUltimateStateOrTime_t : std::uint32_t
    {
        PLAYER_ULTIMATE_STATE_READY = 0x0,
        PLAYER_ULTIMATE_STATE_NO_MANA = 0xffffffff,
        PLAYER_ULTIMATE_STATE_NOT_LEVELED = 0xfffffffe,
        PLAYER_ULTIMATE_STATE_HIDDEN = 0xfffffffd,
    };
};
