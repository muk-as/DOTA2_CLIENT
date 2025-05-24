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
        // Enumerator count: 7
        // Alignment: 2
        // Size: 0x2
        enum class EntityEffects_t : std::uint16_t
        {
            DEPRICATED_EF_NOINTERP = 0x8,
            EF_NOSHADOW = 0x10,
            EF_NODRAW = 0x20,
            EF_NORECEIVESHADOW = 0x40,
            EF_PARENT_ANIMATES = 0x200,
            EF_NODRAW_BUT_TRANSMIT = 0x400,
            // MEnumeratorIsNotAFlag
            EF_MAX_BITS = 0xa,
        };
    };
};
