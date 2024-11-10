#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Legion_Commander_OverwhelmingOdds : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_attack_speed_creeps; // 0x1708        
        int32_t bonus_attack_speed; // 0x170c        
        float armor_per_creep; // 0x1710        
        float armor_per_hero; // 0x1714        
        int32_t m_nTotalBonus; // 0x1718        
        float m_flBonusArmor; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Legion_Commander_OverwhelmingOdds because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Legion_Commander_OverwhelmingOdds) == 0x1720);
};
