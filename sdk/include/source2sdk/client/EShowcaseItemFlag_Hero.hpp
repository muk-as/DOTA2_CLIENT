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
    enum class EShowcaseItemFlag_Hero : std::uint32_t
    {
        k_eShowcaseItemFlag_Hero_None = 0x0,
        k_eShowcaseItemFlag_Hero_ShowPedestal = 0x1,
        k_eShowcaseItemFlag_Hero_UseCurrentLoadout = 0x2,
        k_eShowcaseItemFlag_Hero_ShowHeroCard = 0x4,
        k_eShowcaseItemFlag_Hero_HeroCardHideName = 0x8,
        k_eShowcaseItemFlag_Hero_HeroCardUseMovie = 0x10,
    };
};
