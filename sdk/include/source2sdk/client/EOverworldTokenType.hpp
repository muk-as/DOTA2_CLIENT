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
        // Size: 0x_
        enum class EOverworldTokenType : std::uint32_t
        {
            k_eOverworldTokenType_Invalid = 0x0,
            k_eOverworldTokenType_Generic = 0x1,
            k_eOverworldTokenType_Hidden = 0x2,
            k_eOverworldTokenType_Premium = 0x3,
            k_eOverworldTokenType_Scrap = 0x4,
        };
    };
};
