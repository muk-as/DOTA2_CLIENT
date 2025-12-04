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
        enum class ETalentContentAssetType : std::uint32_t
        {
            k_eTalentContentAssetType_Photo = 0x1,
            k_eTalentContentAssetType_Autograph = 0x2,
            k_eTalentContentAssetType_Voicelines = 0x3,
        };
    };
};
