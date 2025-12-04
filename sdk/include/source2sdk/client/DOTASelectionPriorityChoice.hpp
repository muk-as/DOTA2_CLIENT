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
        enum class DOTASelectionPriorityChoice : std::uint32_t
        {
            k_DOTASelectionPriorityChoice_Invalid = 0x0,
            k_DOTASelectionPriorityChoice_FirstPick = 0x1,
            k_DOTASelectionPriorityChoice_SecondPick = 0x2,
            k_DOTASelectionPriorityChoice_Radiant = 0x3,
            k_DOTASelectionPriorityChoice_Dire = 0x4,
        };
    };
};
