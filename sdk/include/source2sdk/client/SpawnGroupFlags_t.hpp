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
    enum class SpawnGroupFlags_t : std::uint32_t
    {
        SPAWN_GROUP_LOAD_ENTITIES_FROM_SAVE = 0x1,
        SPAWN_GROUP_DONT_SPAWN_ENTITIES = 0x2,
        SPAWN_GROUP_SYNCHRONOUS_SPAWN = 0x4,
        SPAWN_GROUP_IS_INITIAL_SPAWN_GROUP = 0x8,
        SPAWN_GROUP_CREATE_CLIENT_ONLY_ENTITIES = 0x10,
        SPAWN_GROUP_BLOCK_UNTIL_LOADED = 0x40,
        SPAWN_GROUP_LOAD_STREAMING_DATA = 0x80,
        SPAWN_GROUP_CREATE_NEW_SCENE_WORLD = 0x100,
    };
};
