#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 14
    // Alignment: 4
    // Size: 0x4
    enum class DOTAMinimapEvent_t : std::uint32_t
    {
        DOTA_MINIMAP_EVENT_ANCIENT_UNDER_ATTACK = 0x2,
        DOTA_MINIMAP_EVENT_BASE_UNDER_ATTACK = 0x4,
        DOTA_MINIMAP_EVENT_BASE_GLYPHED = 0x8,
        DOTA_MINIMAP_EVENT_TEAMMATE_UNDER_ATTACK = 0x10,
        DOTA_MINIMAP_EVENT_TEAMMATE_TELEPORTING = 0x20,
        DOTA_MINIMAP_EVENT_TEAMMATE_DIED = 0x40,
        DOTA_MINIMAP_EVENT_TUTORIAL_TASK_ACTIVE = 0x80,
        DOTA_MINIMAP_EVENT_TUTORIAL_TASK_FINISHED = 0x100,
        DOTA_MINIMAP_EVENT_HINT_LOCATION = 0x200,
        DOTA_MINIMAP_EVENT_ENEMY_TELEPORTING = 0x400,
        DOTA_MINIMAP_EVENT_CANCEL_TELEPORTING = 0x800,
        DOTA_MINIMAP_EVENT_RADAR = 0x1000,
        DOTA_MINIMAP_EVENT_RADAR_TARGET = 0x2000,
        DOTA_MINIMAP_EVENT_MOVE_TO_TARGET = 0x4000,
    };
};
