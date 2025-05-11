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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class EBasePredictionEvents : std::uint32_t
        {
            BPE_StringCommand = 0x80,
            BPE_Teleport = 0x82,
            BPE_Diagnostic = 0x4000,
        };
    };
};
