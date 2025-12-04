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
        // Size: 0x_
        enum class modifierremove : std::uint32_t
        {
            DOTA_BUFF_REMOVE_ALL = 0x0,
            DOTA_BUFF_REMOVE_ENEMY = 0x1,
            DOTA_BUFF_REMOVE_ALLY = 0x2,
        };
    };
};
