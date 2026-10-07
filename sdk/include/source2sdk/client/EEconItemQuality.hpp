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
        // Enumerator count: 27
        // Alignment: 4
        // Size: 0x_
        enum class EEconItemQuality : std::uint32_t
        {
            AE_UNDEFINED = 0xffffffff,
            AE_BASE = 0x0,
            AE_GENUINE = 0x1,
            AE_VINTAGE = 0x2,
            AE_UNUSUAL = 0x3,
            AE_UNIQUE = 0x4,
            AE_COMMUNITY = 0x5,
            AE_DEVELOPER = 0x6,
            AE_SELFMADE = 0x7,
            AE_CUSTOMIZED = 0x8,
            AE_STRANGE = 0x9,
            AE_COMPLETED = 0xa,
            AE_HAUNTED = 0xb,
            AE_TOURNAMENT = 0xc,
            AE_FAVORED = 0xd,
            AE_ASCENDANT = 0xe,
            AE_AUTOGRAPHED = 0xf,
            AE_LEGACY = 0x10,
            AE_EXALTED = 0x11,
            AE_FROZEN = 0x12,
            AE_CORRUPTED = 0x13,
            AE_LUCKY = 0x14,
            AE_INFUSED = 0x15,
            AE_GLITTER = 0x16,
            AE_HOLO = 0x17,
            AE_GOLD = 0x18,
            AE_MAX_TYPES = 0x19,
        };
    };
};
