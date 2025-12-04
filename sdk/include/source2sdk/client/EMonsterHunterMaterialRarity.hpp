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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class EMonsterHunterMaterialRarity : std::uint32_t
        {
            k_eMonsterHunterMaterialRarity_Invalid = 0x0,
            k_eMonsterHunterMaterialRarity_Common = 0x1,
            k_eMonsterHunterMaterialRarity_Uncommon = 0x2,
            k_eMonsterHunterMaterialRarity_Rare = 0x3,
            k_eMonsterHunterMaterialRarity_SuperRare = 0x4,
        };
    };
};
