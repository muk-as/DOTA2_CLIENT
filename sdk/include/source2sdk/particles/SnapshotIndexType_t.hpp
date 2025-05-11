#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class SnapshotIndexType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Increment Index"
            SNAPSHOT_INDEX_INCREMENT = 0x0,
            // MPropertyFriendlyName "Direct Set of Index"
            SNAPSHOT_INDEX_DIRECT = 0x1,
        };
    };
};
