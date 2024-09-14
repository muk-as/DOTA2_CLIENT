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
    enum class EShowcaseHeroPlusFlag : std::uint32_t
    {
        k_eShowcaseHeroPlusFlag_None = 0x0,
        k_eShowcaseHeroPlusFlag_BadgePosTop = 0x1,
        k_eShowcaseHeroPlusFlag_BadgePosBottom = 0x2,
        k_eShowcaseHeroPlusFlag_BadgePosLeft = 0x4,
        k_eShowcaseHeroPlusFlag_BadgePosRight = 0x8,
        k_eShowcaseHeroPlusFlag_ShowRelics = 0x10,
    };
};
