#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class HierarchyType_t : std::uint32_t
    {
        HIERARCHY_NONE = 0x0,
        HIERARCHY_BONE_MERGE = 0x1,
        HIERARCHY_ATTACHMENT = 0x2,
        HIERARCHY_ABSORIGIN = 0x3,
        HIERARCHY_BONE = 0x4,
        HIERARCHY_TYPE_COUNT = 0x5,
    };
};
