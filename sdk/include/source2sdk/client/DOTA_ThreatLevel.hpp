#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_ThreatLevel : std::uint32_t
    {
        DOTA_THREATLEVEL_Ultra = 0x0,
        DOTA_THREATLEVEL_High = 0x1,
        DOTA_THREATLEVEL_Medium = 0x2,
        DOTA_THREATLEVEL_Low = 0x3,
        DOTA_THREATLEVEL_None = 0x4,
    };
};
