#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class PointTemplateOwnerSpawnGroupType_t : std::uint32_t
    {
        INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
        INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
        INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
    };
};
