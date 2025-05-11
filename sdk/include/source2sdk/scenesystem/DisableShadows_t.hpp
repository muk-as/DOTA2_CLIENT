#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace scenesystem
    {
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class DisableShadows_t : std::uint8_t
        {
            kDisableShadows_None = 0x0,
            kDisableShadows_All = 0x1,
            kDisableShadows_Baked = 0x2,
            kDisableShadows_Realtime = 0x3,
        };
    };
};
