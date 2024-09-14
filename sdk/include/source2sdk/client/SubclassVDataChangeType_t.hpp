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
    enum class SubclassVDataChangeType_t : std::uint32_t
    {
        SUBCLASS_VDATA_CREATED = 0x0,
        SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
        SUBCLASS_VDATA_RELOADED = 0x2,
    };
};
