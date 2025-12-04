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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class SPELL_DISPELLABLE_TYPES : std::uint32_t
        {
            SPELL_DISPELLABLE_NONE = 0x0,
            SPELL_DISPELLABLE_YES_STRONG = 0x1,
            SPELL_DISPELLABLE_YES = 0x2,
            SPELL_DISPELLABLE_NO = 0x3,
        };
    };
};
