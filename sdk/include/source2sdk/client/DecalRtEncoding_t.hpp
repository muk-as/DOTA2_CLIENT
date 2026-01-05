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
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x_
        enum class DecalRtEncoding_t : std::uint8_t
        {
            kDecalInvalid = 0xff,
            kDecalBlood = 0x0,
            kDecalCloak = 0x1,
            kDecalCloakDamage = 0x2,
            // MPropertySuppressEnumerator
            kDecalMax = 0x3,
            // MPropertySuppressEnumerator
            kDecalDefault = 0x0,
        };
    };
};
