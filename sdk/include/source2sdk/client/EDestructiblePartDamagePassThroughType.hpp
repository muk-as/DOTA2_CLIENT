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
        enum class EDestructiblePartDamagePassThroughType : std::uint32_t
        {
            // MPropertyDescription "Damage reduces the part's health pool and the owner entity equally."
            Normal = 0x0,
            // MPropertyDescription "Damage reduces the part's health pool but not the owner entity until destroyed. (i.e., limited armour)"
            Absorb = 0x1,
            // MPropertyDescription "Damage is completely ignored - i.e., this part ignores the health value and does not send damage to the owner entity."
            InvincibleAbsorb = 0x2,
            // MPropertyDescription "Damage reduces the owner entity but not the part (health is ignored): part can only be destroyed by gibbing or procedurally."
            InvinciblePassthrough = 0x3,
        };
    };
};
