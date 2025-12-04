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
        enum class EMonsterHunterMaterialTradeConversion : std::uint32_t
        {
            k_eMonsterHunterMaterialTradeConversion_Invalid = 0x0,
            k_eMonsterHunterMaterialTradeConversion_SameRarity = 0x1,
            k_eMonsterHunterMaterialTradeConversion_HigherRarity = 0x2,
            k_eMonsterHunterMaterialTradeConversion_StickerScrap = 0x3,
        };
    };
};
