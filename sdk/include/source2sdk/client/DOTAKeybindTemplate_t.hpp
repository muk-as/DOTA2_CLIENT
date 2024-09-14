#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class DOTAKeybindTemplate_t : std::uint32_t
    {
        DOTA_KEYBIND_TEMPLATE_ARROW = 0x0,
        DOTA_KEYBIND_TEMPLATE_WASD = 0x1,
        DOTA_KEYBIND_TEMPLATE_LEGACY = 0x2,
        DOTA_KEYBIND_TEMPLATE_MMO = 0x3,
        DOTA_KEYBIND_TEMPLATE_LOL = 0x4,
        DOTA_KEYBIND_TEMPLATE_HON = 0x5,
        DOTA_KEYBIND_TEMPLATE_SMITE = 0x6,
        DOTA_KEYBIND_TEMPLATE_COUNT = 0x7,
    };
};
