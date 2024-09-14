#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    // 
    // metadata: MEnumFlagsWithOverlappingBits
    enum class DOTA_PURGE_FLAGS : std::uint32_t
    {
        DOTA_PURGE_FLAG_NONE = 0x0,
        DOTA_PURGE_FLAG_REMOVE_BUFFS = 0x2,
        DOTA_PURGE_FLAG_REMOVE_DEBUFFS = 0x4,
        DOTA_PURGE_FLAG_REMOVE_STUNS = 0x8,
        DOTA_PURGE_FLAG_REMOVE_EXCEPTIONS = 0x10,
        DOTA_PURGE_FLAG_REMOVE_THIS_FRAME_ONLY = 0x20,
        DOTA_PURGE_FLAG_REMOVE_UNPURGABLE = 0x40,
        DOTA_PURGE_FLAG_STRONG_DISPEL = 0x1c,
    };
};
