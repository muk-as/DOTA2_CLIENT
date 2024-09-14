#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class EntityPlatformTypes_t : std::uint8_t
    {
        ENTITY_NOT_PLATFORM = 0,
        ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
        ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
    };
};
