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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x_
        enum class EDestructiblePartRadiusDamageApplyType : std::uint32_t
        {
            // MPropertyDescription "Damage is scaled proportionally based on distance from the epicenter."
            ScaleByExplosionRadius = 0x0,
            // MPropertyDescription "Damage is dumped to the closest alive part, and the remainder is scaled as in ScaleByExplosionRadius algorithm."
            PrioritizeClosestPart = 0x1,
        };
    };
};
