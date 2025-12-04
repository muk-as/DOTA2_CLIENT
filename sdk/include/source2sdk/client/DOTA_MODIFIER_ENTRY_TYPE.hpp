#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x_
        enum class DOTA_MODIFIER_ENTRY_TYPE : std::uint32_t
        {
            DOTA_MODIFIER_ENTRY_TYPE_ACTIVE = 0x1,
            DOTA_MODIFIER_ENTRY_TYPE_REMOVED = 0x2,
        };
    };
};
