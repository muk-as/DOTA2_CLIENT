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
        // Size: 0x4
        enum class DamageCategory_t : std::uint32_t
        {
            DOTA_DAMAGE_CATEGORY_SPELL = 0x0,
            DOTA_DAMAGE_CATEGORY_ATTACK = 0x1,
            DOTA_DAMAGE_CATEGORY_BARRIER = 0x2,
        };
    };
};
