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
        enum class DecalFlags_t : std::uint32_t
        {
            // MEnumeratorIsNotAFlag
            eNone = 0x0,
            eCannotClear = 0x1,
            // MEnumeratorIsNotAFlag
            eAll = 0xffffffff,
            // MEnumeratorIsNotAFlag
            eAllButCannotClear = 0xfffffffe,
        };
    };
};
