#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EntityIOTargetType_t : std::uint32_t
    {
        ENTITY_IO_TARGET_INVALID = 0xffffffff,
        ENTITY_IO_TARGET_ENTITYNAME = 0x2,
        ENTITY_IO_TARGET_EHANDLE = 0x6,
        ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7,
    };
};
