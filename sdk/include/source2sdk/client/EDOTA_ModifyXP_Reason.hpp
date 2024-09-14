#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class EDOTA_ModifyXP_Reason : std::uint32_t
    {
        DOTA_ModifyXP_Unspecified = 0x0,
        DOTA_ModifyXP_HeroKill = 0x1,
        DOTA_ModifyXP_CreepKill = 0x2,
        DOTA_ModifyXP_RoshanKill = 0x3,
        DOTA_ModifyXP_TomeOfKnowledge = 0x4,
        DOTA_ModifyXP_Outpost = 0x5,
        DOTA_ModifyXP_CatchUp = 0x6,
        DOTA_ModifyXP_HeroAbility = 0x7,
        DOTA_ModifyXP_MAX = 0x8,
    };
};
