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
        // Size: 0x4
        enum class ECraftworksAuditAction : std::uint32_t
        {
            k_eInvalid = 0x0,
            k_eRecipeCrafted = 0x1,
            k_eMatchRewards = 0x2,
            k_eMatchRewardsTurbo = 0x3,
        };
    };
};
