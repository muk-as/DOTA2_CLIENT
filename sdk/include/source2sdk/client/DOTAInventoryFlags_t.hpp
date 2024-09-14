#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class DOTAInventoryFlags_t : std::uint32_t
    {
        DOTA_INVENTORY_ALLOW_NONE = 0x0,
        DOTA_INVENTORY_ALLOW_MAIN = 0x1,
        DOTA_INVENTORY_ALLOW_STASH = 0x2,
        DOTA_INVENTORY_ALLOW_DROP_ON_GROUND = 0x4,
        DOTA_INVENTORY_ALLOW_DROP_AT_FOUNTAIN = 0x8,
        DOTA_INVENTORY_LIMIT_DROP_ON_GROUND = 0x10,
        DOTA_INVENTORY_ALL_ACCESS = 0x3,
    };
};
