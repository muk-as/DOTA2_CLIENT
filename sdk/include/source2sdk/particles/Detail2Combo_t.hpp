#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class Detail2Combo_t : std::uint32_t
    {
        // MPropertyFriendlyName "Uninitialized"
        DETAIL_2_COMBO_UNINITIALIZED = 0xffffffff,
        // MPropertyFriendlyName "Off"
        DETAIL_2_COMBO_OFF = 0x0,
        // MPropertyFriendlyName "Add"
        DETAIL_2_COMBO_ADD = 0x1,
        // MPropertyFriendlyName "Add + Self Illum"
        DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
        // MPropertyFriendlyName "Mod2X"
        DETAIL_2_COMBO_MOD2X = 0x3,
        // MPropertyFriendlyName "Multiply"
        DETAIL_2_COMBO_MUL = 0x4,
        // MPropertyFriendlyName "Crossfade"
        DETAIL_2_COMBO_CROSSFADE = 0x5,
    };
};
