#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EntityDormancyType_t : std::uint32_t
    {
        ENTITY_NOT_DORMANT = 0x0,
        ENTITY_DORMANT = 0x1,
        ENTITY_SUSPENDED = 0x2,
    };
};
