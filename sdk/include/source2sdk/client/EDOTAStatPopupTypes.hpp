#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class EDOTAStatPopupTypes : std::uint32_t
    {
        k_EDOTA_SPT_Textline = 0x0,
        k_EDOTA_SPT_Basic = 0x1,
        k_EDOTA_SPT_Poll = 0x2,
        k_EDOTA_SPT_Grid = 0x3,
        k_EDOTA_SPT_DualImage = 0x4,
        k_EDOTA_SPT_Movie = 0x5,
    };
};
