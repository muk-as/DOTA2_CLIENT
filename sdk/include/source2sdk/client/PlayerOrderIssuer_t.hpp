#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class PlayerOrderIssuer_t : std::uint32_t
    {
        DOTA_ORDER_ISSUER_SELECTED_UNITS = 0x0,
        DOTA_ORDER_ISSUER_CURRENT_UNIT_ONLY = 0x1,
        DOTA_ORDER_ISSUER_HERO_ONLY = 0x2,
        DOTA_ORDER_ISSUER_PASSED_UNIT_ONLY = 0x3,
    };
};
