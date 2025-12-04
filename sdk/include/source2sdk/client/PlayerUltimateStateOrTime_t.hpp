#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class PlayerUltimateStateOrTime_t : std::uint32_t
        {
            PLAYER_ULTIMATE_STATE_READY = 0x0,
            PLAYER_ULTIMATE_STATE_NO_MANA = 0xffffffff,
            PLAYER_ULTIMATE_STATE_NOT_LEVELED = 0xfffffffe,
            PLAYER_ULTIMATE_STATE_HIDDEN = 0xfffffffd,
        };
    };
};
