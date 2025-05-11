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
        // Size: 0x4
        enum class ETournamentTemplate : std::uint32_t
        {
            k_ETournamentTemplate_None = 0x0,
            k_ETournamentTemplate_AutomatedWin3 = 0x1,
        };
    };
};
