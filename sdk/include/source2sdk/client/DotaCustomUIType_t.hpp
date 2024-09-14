#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class DotaCustomUIType_t : std::uint32_t
    {
        DOTA_CUSTOM_UI_TYPE_HUD = 0x0,
        DOTA_CUSTOM_UI_TYPE_HERO_SELECTION = 0x1,
        DOTA_CUSTOM_UI_TYPE_PREGAME_STRATEGY = 0x2,
        DOTA_CUSTOM_UI_TYPE_GAME_INFO = 0x3,
        DOTA_CUSTOM_UI_TYPE_GAME_SETUP = 0x4,
        DOTA_CUSTOM_UI_TYPE_FLYOUT_SCOREBOARD = 0x5,
        DOTA_CUSTOM_UI_TYPE_HUD_TOP_BAR = 0x6,
        DOTA_CUSTOM_UI_TYPE_END_SCREEN = 0x7,
        DOTA_CUSTOM_UI_TYPE_COUNT = 0x8,
        DOTA_CUSTOM_UI_TYPE_INVALID = 0xffffffff,
    };
};
