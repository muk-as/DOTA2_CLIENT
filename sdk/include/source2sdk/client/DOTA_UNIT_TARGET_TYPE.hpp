#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    // 
    // metadata: MEnumFlagsWithOverlappingBits
    enum class DOTA_UNIT_TARGET_TYPE : std::uint32_t
    {
        DOTA_UNIT_TARGET_NONE = 0x0,
        DOTA_UNIT_TARGET_HERO = 0x1,
        DOTA_UNIT_TARGET_CREEP = 0x2,
        DOTA_UNIT_TARGET_BUILDING = 0x4,
        DOTA_UNIT_TARGET_COURIER = 0x10,
        DOTA_UNIT_TARGET_OTHER = 0x20,
        DOTA_UNIT_TARGET_TREE = 0x40,
        DOTA_UNIT_TARGET_CUSTOM = 0x80,
        DOTA_UNIT_TARGET_SELF = 0x100,
        DOTA_UNIT_TARGET_BASIC = 0x12,
        DOTA_UNIT_TARGET_ALL = 0x37,
        DOTA_UNIT_TARGET_HEROES_AND_CREEPS = 0x13,
    };
};
