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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class EFantasyStatType : std::uint32_t
        {
            k_eFantasyStatType_Player = 0x0,
            k_eFantasyStatType_Team = 0x1,
            k_eFantasyStatType_Game = 0x2,
        };
    };
};
