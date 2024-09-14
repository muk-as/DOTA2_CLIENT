#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 34
    // Alignment: 4
    // Size: 0x4
    enum class DotaDefaultUIElement_t : std::uint32_t
    {
        DOTA_DEFAULT_UI_INVALID = 0xffffffff,
        DOTA_DEFAULT_UI_TOP_TIMEOFDAY = 0x0,
        DOTA_DEFAULT_UI_TOP_HEROES = 0x1,
        DOTA_DEFAULT_UI_FLYOUT_SCOREBOARD = 0x2,
        DOTA_DEFAULT_UI_ACTION_PANEL = 0x3,
        DOTA_DEFAULT_UI_ACTION_MINIMAP = 0x4,
        DOTA_DEFAULT_UI_INVENTORY_PANEL = 0x5,
        DOTA_DEFAULT_UI_INVENTORY_SHOP = 0x6,
        DOTA_DEFAULT_UI_INVENTORY_ITEMS = 0x7,
        DOTA_DEFAULT_UI_INVENTORY_QUICKBUY = 0x8,
        DOTA_DEFAULT_UI_INVENTORY_COURIER = 0x9,
        DOTA_DEFAULT_UI_INVENTORY_PROTECT = 0xa,
        DOTA_DEFAULT_UI_INVENTORY_GOLD = 0xb,
        DOTA_DEFAULT_UI_SHOP_SUGGESTEDITEMS = 0xc,
        DOTA_DEFAULT_UI_SHOP_COMMONITEMS = 0xd,
        DOTA_DEFAULT_UI_HERO_SELECTION_TEAMS = 0xe,
        DOTA_DEFAULT_UI_HERO_SELECTION_GAME_NAME = 0xf,
        DOTA_DEFAULT_UI_HERO_SELECTION_CLOCK = 0x10,
        DOTA_DEFAULT_UI_HERO_SELECTION_HEADER = 0x11,
        DOTA_DEFAULT_UI_TOP_MENU_BUTTONS = 0x12,
        DOTA_DEFAULT_UI_TOP_BAR_BACKGROUND = 0x13,
        DOTA_DEFAULT_UI_TOP_BAR_RADIANT_TEAM = 0x14,
        DOTA_DEFAULT_UI_TOP_BAR_DIRE_TEAM = 0x15,
        DOTA_DEFAULT_UI_TOP_BAR_SCORE = 0x16,
        DOTA_DEFAULT_UI_ENDGAME = 0x17,
        DOTA_DEFAULT_UI_ENDGAME_CHAT = 0x18,
        DOTA_DEFAULT_UI_QUICK_STATS = 0x19,
        DOTA_DEFAULT_UI_PREGAME_STRATEGYUI = 0x1a,
        DOTA_DEFAULT_UI_KILLCAM = 0x1b,
        DOTA_DEFAULT_UI_FIGHT_RECAP = 0x1c,
        DOTA_DEFAULT_UI_TOP_BAR = 0x1d,
        DOTA_DEFAULT_UI_CUSTOMUI_BEHIND_HUD_ELEMENTS = 0x1e,
        DOTA_DEFAULT_UI_AGHANIMS_STATUS = 0x1f,
        DOTA_DEFAULT_UI_ELEMENT_COUNT = 0x20,
    };
};
