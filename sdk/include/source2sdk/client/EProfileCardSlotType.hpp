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
    enum class EProfileCardSlotType : std::uint32_t
    {
        k_EProfileCardSlotType_Empty = 0x0,
        k_EProfileCardSlotType_Stat = 0x1,
        k_EProfileCardSlotType_Trophy = 0x2,
        k_EProfileCardSlotType_Item = 0x3,
        k_EProfileCardSlotType_Hero = 0x4,
        k_EProfileCardSlotType_Emoticon = 0x5,
        k_EProfileCardSlotType_Team = 0x6,
    };
};
