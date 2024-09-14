#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ObstructionRelationshipClass_t : std::uint32_t
    {
        DOTA_OBSTRUCTION_RELATIONSHIP_NONE = 0x0,
        DOTA_OBSTRUCTION_RELATIONSHIP_BUILDING = 0x1,
        DOTA_OBSTRUCTION_RELATIONSHIP_PLAYER_CONTROLLED = 0x2,
        DOTA_OBSTRUCTION_RELATIONSHIP_NPC = 0x3,
        DOTA_OBSTRUCTION_RELATIONSHIP_LAST = 0x4,
    };
};
