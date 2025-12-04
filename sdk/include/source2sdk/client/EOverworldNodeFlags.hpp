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
        // Alignment: 4
        // Size: 0x_
        enum class EOverworldNodeFlags : std::uint32_t
        {
            Premium = 0x1,
            MainQuest = 0x2,
            SideQuest = 0x4,
            DelayStyles = 0x8,
            Shortcut = 0x10,
            InvisibleUntilNearby = 0x20,
            Secret = 0x40,
            FinalNode = 0x80,
        };
    };
};
