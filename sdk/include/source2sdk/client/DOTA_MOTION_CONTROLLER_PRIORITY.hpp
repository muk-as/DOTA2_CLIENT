#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_MOTION_CONTROLLER_PRIORITY : std::uint32_t
    {
        DOTA_MOTION_CONTROLLER_PRIORITY_LOWEST = 0x0,
        DOTA_MOTION_CONTROLLER_PRIORITY_LOW = 0x1,
        DOTA_MOTION_CONTROLLER_PRIORITY_MEDIUM = 0x2,
        DOTA_MOTION_CONTROLLER_PRIORITY_HIGH = 0x3,
        DOTA_MOTION_CONTROLLER_PRIORITY_HIGHEST = 0x4,
        DOTA_MOTION_CONTROLLER_PRIORITY_ULTRA = 0x5,
    };
};
