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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class EPerformAttackFlags : std::uint32_t
        {
            k_PerformAttackFlags_None = 0x0,
            k_PerformAttackFlags_SkipCooldown = 0x1,
            k_PerformAttackFlags_DontBreakInvis = 0x2,
            k_PerformAttackFlags_UseProjectile = 0x4,
            k_PerformAttackFlags_SkipRangeCheck = 0x8,
            k_PerformAttackFlags_ForceDefaultProjectile = 0x10,
        };
    };
};
