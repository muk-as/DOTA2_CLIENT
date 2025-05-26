#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class PulseVariableKeysSource_t : std::uint32_t
        {
            // MPropertyFriendlyName "Private"
            PRIVATE = 0x0,
            // MPropertyFriendlyName "Code"
            CPP = 0x1,
            // MPropertyFriendlyName "Parent Map"
            VMAP = 0x2,
            // MPropertyFriendlyName "Parent VMDL"
            VMDL = 0x3,
            // MPropertyFriendlyName "Parent XML"
            XML = 0x4,
            // MPropertySuppressEnumerator
            COUNT = 0x5,
        };
    };
};
