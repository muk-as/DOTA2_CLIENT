#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class IBody__PostureType : std::uint32_t
    {
        STAND = 0x0,
        CROUCH = 0x1,
        SIT = 0x2,
        CRAWL = 0x3,
        LIE = 0x4,
    };
};
