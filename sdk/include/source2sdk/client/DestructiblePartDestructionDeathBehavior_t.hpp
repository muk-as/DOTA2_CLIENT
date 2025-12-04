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
        enum class DestructiblePartDestructionDeathBehavior_t : std::uint32_t
        {
            // MPropertyDescription "Does not kill the entity when the part is destroyed"
            eDoNotKill = 0x0,
            // MPropertyDescription "Kills the entity, using the normal codepath to determine kill type, when the part is destroyed"
            eKill = 0x1,
            // MPropertyDescription "Kills and gibs the entity when the part is destroyed"
            eGib = 0x2,
            // MPropertyDescription "Kills and instantly removes the entity when the part is destroyed"
            eRemove = 0x3,
        };
    };
};
