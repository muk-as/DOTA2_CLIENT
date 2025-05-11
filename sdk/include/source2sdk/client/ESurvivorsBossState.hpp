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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x4
        enum class ESurvivorsBossState : std::uint32_t
        {
            INVALID = 0xffffffff,
            IDLE = 0x0,
            CASTING_BURNING_GROUND = 0x1,
            START_CASTING_RADIATE_RAYS = 0x2,
            CASTING_RADIATE_RAYS = 0x3,
            END_CASTING_RADIATE_RAYS = 0x4,
            CASTING_DEMON_PORTALS = 0x5,
            START_DESTROYING_TOWER = 0x6,
            END_DESTROYING_TOWER = 0x7,
            CASTING_MAGIC_MISSILE = 0x8,
        };
    };
};
