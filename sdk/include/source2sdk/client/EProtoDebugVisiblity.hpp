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
        enum class EProtoDebugVisiblity : std::uint32_t
        {
            k_EProtoDebugVisibility_Always = 0x0,
            k_EProtoDebugVisibility_Server = 0x46,
            k_EProtoDebugVisibility_ValveServer = 0x50,
            k_EProtoDebugVisibility_GC = 0x5a,
            k_EProtoDebugVisibility_Never = 0x64,
        };
    };
};
