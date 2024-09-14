#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class DetailCombo_t : std::uint32_t
    {
        // MPropertyFriendlyName "Off"
        DETAIL_COMBO_OFF = 0x0,
        // MPropertyFriendlyName "Add"
        DETAIL_COMBO_ADD = 0x1,
        // MPropertyFriendlyName "Add + Self Illum"
        DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
        // MPropertyFriendlyName "Mod2X"
        DETAIL_COMBO_MOD2X = 0x3,
    };
};
