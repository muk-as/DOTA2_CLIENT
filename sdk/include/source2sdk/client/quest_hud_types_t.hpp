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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class quest_hud_types_t : std::uint32_t
        {
            QUEST_HUD_TYPE_DEFAULT = 0x0,
            QUEST_HUD_TYPE_GOLD = 0x1,
            QUEST_HUD_TYPE_ATTACK = 0x2,
            QUEST_HUD_TYPE_DEFEND = 0x3,
            QUEST_NUM_HUD_TYPES = 0x4,
        };
    };
};
