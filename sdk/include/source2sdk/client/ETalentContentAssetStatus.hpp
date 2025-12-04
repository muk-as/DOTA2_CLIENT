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
        enum class ETalentContentAssetStatus : std::uint32_t
        {
            k_eTalentContentAssetStatus_None = 0x0,
            k_eTalentContentAssetStatus_Approved = 0x1,
            k_eTalentContentAssetStatus_Rejected = 0x2,
        };
    };
};
