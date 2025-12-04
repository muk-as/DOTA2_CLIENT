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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x_
        enum class DOTACustomHeroPickRulesPhase_t : std::uint32_t
        {
            PHASE_Ban = 0x0,
            PHASE_Pick = 0x1,
        };
    };
};
