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
        // Size: 0x4
        enum class ScriptedHeldWeaponBehavior_t : std::uint32_t
        {
            eInvalid = 0xffffffff,
            eHolster = 0x0,
            eDeploy = 0x1,
            eDrop = 0x2,
        };
    };
};
