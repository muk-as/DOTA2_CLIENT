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
        // Size: 0x4
        enum class DOTA_NO_BATTLE_POINTS_REASONS : std::uint32_t
        {
            NO_BATTLE_POINTS_WRONG_LOBBY_TYPE = 0x1,
            NO_BATTLE_POINTS_PRACTICE_BOTS = 0x2,
            NO_BATTLE_POINTS_CHEATS_ENABLED = 0x3,
            NO_BATTLE_POINTS_LOW_PRIORITY = 0x4,
        };
    };
};
