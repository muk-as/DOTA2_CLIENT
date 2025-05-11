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
        // Enumerator count: 8
        // Alignment: 1
        // Size: 0x1
        enum class EArtyGameObjectType : std::uint8_t
        {
            k_eTypeObject = 0x0,
            k_eTypeShot = 0x1,
            k_eTypeTrail = 0x2,
            k_eTypeCannon = 0x3,
            k_eTypePlayer = 0x4,
            k_eTypeEnemy = 0x5,
            k_eTypeFX = 0x6,
            k_eTypeUI = 0x7,
        };
    };
};
