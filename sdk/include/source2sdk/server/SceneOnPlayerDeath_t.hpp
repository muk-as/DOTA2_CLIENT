#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class SceneOnPlayerDeath_t : std::uint32_t
    {
        SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
        SCENE_ONPLAYERDEATH_CANCEL = 0x1,
    };
};
