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
        // Size: 0x4
        enum class ESurvivorsBossAbility : std::uint32_t
        {
            INVALID = 0xffffffff,
            BURNING_GROUND = 0x0,
            RADIATE_RAYS = 0x1,
            DEMON_PORTALS = 0x2,
            MAGIC_MISSILE = 0x3,
        };
    };
};
