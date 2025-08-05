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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class DecalVBType_t : std::uint32_t
        {
            // MPropertySuppressEnumerator
            eInvalid = 0xffffffff,
            eStatic = 0x0,
            eDynamic = 0x1,
            // MPropertySuppressEnumerator
            eCount = 0x2,
            // MPropertySuppressEnumerator
            eFirst = 0x0,
        };
    };
};
