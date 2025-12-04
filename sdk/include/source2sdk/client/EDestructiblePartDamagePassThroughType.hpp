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
        enum class EDestructiblePartDamagePassThroughType : std::uint32_t
        {
            // MPropertyDescription "Damages part and the NPC equally."
            Normal = 0x0,
            // MPropertyDescription "Damages part but not the NPC until destroyed. (i.e., limited armour)"
            Absorb = 0x1,
            // MPropertyDescription "Damages the NPC but not the part (health is ignored): part can only be destroyed by gibbing or procedurally."
            InvinciblePassthrough = 0x2,
        };
    };
};
